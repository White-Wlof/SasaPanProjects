using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using DG.Tweening;

namespace Game
{
    public class GameState : Photon.MonoBehaviour
    {
        bool GameStart;
        bool GameFinish;
        int textOrder;
        List<Transform> players = new List<Transform>();
        [SerializeField] Text stateText;
        [SerializeField] Transform goalLine;
        [SerializeField] GameObject awardPanel;
        [SerializeField] Text awardText;
        [SerializeField] Text playerName;
        [SerializeField] Text rivalName;
        [SerializeField] Text getSasaNum;
        [SerializeField] AudioSource[] audioSource;
        PlayerStateManager state;

        void Awake()
        {
            GameStart = false;
            GameFinish = false;
            textOrder = 0;
        }

        void Start()
        {
            var data = UserDataManager.Instance;
            state = PlayerStateManager.Instance;
            playerName.text = data.UserName;
            rivalName.text = "ささギャング";
            players.Add(GameObject.FindGameObjectWithTag("Player").transform);
            players.Add(GameObject.FindGameObjectWithTag("Rival").transform);
            if (PhotonNetwork.connected)
            {
                changeInitializePosition();
            }

            //Ready
            Invoke("showSignText", 0.1f);
            Invoke("middleSignText", 0.4f);
            Invoke("hideSignText", 0.9f);
            //GO!!
            Invoke("showSignText", 1.3f);
            Invoke("middleSignText", 1.6f);
            Invoke("hideSignText", 2.1f);
            Invoke("changeGameState", 2.4f);
        }

        void Update()
        {
            if (state.deadPlayers == 2)
            {
                StartCoroutine(playersDead());
                state.deadPlayers = 0;
            }
            foreach (Transform t in players)
            {
                if (t.position.z > goalLine.position.z && !GameFinish)
                {
                    showSignText();
                    changeGameState();
                    victoryOrDefeat();
                }
                    
            }
        }

        void showSignText()
        {
            changeText();
            stateText.transform.localPosition = new Vector3(360, 0, 0);
            stateText.transform.DOLocalMoveX(10, 0.3f).SetEase(Ease.Linear);
            
        }

        void middleSignText()
        {
            stateText.transform.DOLocalMoveX(-10, 0.5f).SetEase(Ease.Linear);
        }

        void hideSignText()
        {
            stateText.transform.DOLocalMoveX(-360, 0.3f).SetEase(Ease.Linear);
        }

        void changeText()
        {
            switch (textOrder)
            {
                case 0:
                    Pauser.Pause();
                    stateText.text = "READY";
                    textOrder++;
                    break;
                case 1:
                    stateText.text = "GO";
                    audioSource[0].PlayOneShot(audioSource[0].clip);
                    textOrder++;
                    break;
                case 2:
                    stateText.text = "FINISH";
                    audioSource[1].PlayOneShot(audioSource[1].clip);
                    textOrder++;
                    break;
            }
        }

        void changeGameState()
        {
            switch (textOrder)
            {
                case 2:
                    GameStart = true;
                    Pauser.Resume();
                    break;
                case 3:
                    GameFinish = true;
                    break;
            }
        }

        void changeInitializePosition()
        {
            var playerType = PlayerPrefs.GetString("PLAYER_TYPE", "null");
            switch (playerType)
            {
                case "Parent":
                    break;
                case "Child":
                    var pos = players[0].transform.position;
                    players[0].transform.position = players[1].transform.position;
                    players[1].transform.position = pos;
                    break;
            }
        }

        void victoryOrDefeat()
        {
            var data = UserDataManager.Instance;
            if (players[0].transform.position.z > players[1].transform.position.z)
            {
                awardText.text = "You Win";
                audioSource[2].PlayOneShot(audioSource[2].clip);
                PlayerPrefs.SetString("Result", "勝利");
                PlayerPrefs.SetInt("GetSasa", int.Parse(getSasaNum.text));
                Debug.Log("YouWin");
                PlayerPrefs.SetInt("Experience", (int)players[0].transform.position.z / 10);

            }
            else if (players[0].transform.position.z == players[1].transform.position.z)
            {
                awardText.text = "Draw";
                PlayerPrefs.SetString("Result", "引き分け");
                Debug.Log("Draw");
                PlayerPrefs.SetInt("Experience", (int)players[0].transform.position.z / 15);

            }
            else
            {
                audioSource[3].PlayOneShot(audioSource[3].clip);
                awardText.text = "You Lose";
                PlayerPrefs.SetString("Result", "敗北");
                PlayerPrefs.SetInt("GetSasa", int.Parse(getSasaNum.text));
                Debug.Log("YouLose");
                PlayerPrefs.SetInt("Experience", (int)players[0].transform.position.z / 20);

            }

            if (GameFinish)
            {
                
                StartCoroutine(showAwardPanel());
            }
        }

        IEnumerator showAwardPanel()
        {
            yield return new WaitForSeconds(1.5f);
            hideSignText();
            awardPanel.SetActive(true);
            StartCoroutine(sceneToResult());
        }

        IEnumerator sceneToResult()
        {
            yield return new WaitForSeconds(1.5f);
            SceneTransition.Load("Result");
        }

        IEnumerator playersDead()
        {
            yield return new WaitForSeconds(2);
            showSignText();
            changeGameState();
            victoryOrDefeat();
        }

        public bool getGameStart()
        {
            return GameStart;
        }

        public bool getGameFinish()
        {
            return GameFinish;
        }
    }
}
