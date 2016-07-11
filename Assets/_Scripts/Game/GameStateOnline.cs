using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using DG.Tweening;

namespace Game
{
    public class GameStateOnline : Photon.MonoBehaviour
    {
        bool GameStart;
        bool GameFinish;
        bool OnStarting;
        int textOrder;
        List<GameObject> players;
        [SerializeField] Text stateText;
        [SerializeField] Transform goalLine;
        [SerializeField] GameObject awardPanel;
        [SerializeField] Text awardText;
        [SerializeField] Text playerName;
        [SerializeField] Text rivalName;
        [SerializeField] Text getSasaNum;
        [SerializeField] AudioSource[] audioSource;


        void Awake()
        {
            players = new List<GameObject>();
            GameStart = false;
            GameFinish = false;
            OnStarting = false;
            textOrder = 0;
            PhotonNetwork.Instantiate("PlayerMaster", Vector3.zero, Quaternion.identity, 0);
        }

        void Start()
        {
            var data = UserDataManager.Instance;
            playerName.text = data.UserName;

            GameStart = true;

            Pauser.Pause();

            //Ready
            Invoke("showSignText", 1.1f);
            Invoke("middleSignText", 1.4f);
            Invoke("hideSignText", 1.9f);
            //GO!!
            Invoke("showSignText", 2.3f);
            Invoke("middleSignText", 2.6f);
            Invoke("hideSignText", 3.1f);
            Invoke("changeGameState", 3.4f);
        }

        void Update()
        {
            if (players.Count == 2 && !OnStarting)
            {
                changeInitializePosition();
            }
            if (GameStart && !GameFinish)
            {
                foreach (GameObject t in players)
                {
                    if (t.transform.position.z > goalLine.position.z && !GameFinish)
                    {
                        showSignText();
                        changeGameState();
                        victoryOrDefeat();
                    }
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
                    var state = PlayerStateManager.Instance;
                    rivalName.text = state.rivalName;
                    stateText.text = "READY";
                    textOrder++;
                    break;
                case 1:
                    stateText.text = "GO";
                    audioSource[0].PlayOneShot(audioSource[0].clip);
                    textOrder++;
                    OnStarting = true;
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
                    Pauser.Resume();
                    break;
                case 3:
                    GameFinish = true;
                    break;
            }
        }

        void victoryOrDefeat()
        {
            if (players[0].transform.position.z > players[1].transform.position.z)
            {
                awardText.text = "You Win";
                PlayerPrefs.SetString("Result", "勝利");
                audioSource[2].PlayOneShot(audioSource[2].clip);
                PlayerPrefs.SetInt("GetSasa", int.Parse(getSasaNum.text));
                Debug.Log("YouWin");
                PlayerPrefs.SetInt("Experience", (int)(players[0].transform.position.z / 10 * 1.5f));
            }
            else if (players[0].transform.position.z == players[1].transform.position.z)
            {
                awardText.text = "Draw";
                PlayerPrefs.SetString("Result", "引き分け");
                Debug.Log("Draw");
                PlayerPrefs.SetInt("Experience", (int)(players[0].transform.position.z / 15 * 1.5f));

            }
            else
            {
                audioSource[3].PlayOneShot(audioSource[3].clip);
                awardText.text = "You Lose";
                PlayerPrefs.SetString("Result", "敗北");
                PlayerPrefs.SetInt("GetSasa", int.Parse(getSasaNum.text));
                PlayerPrefs.SetInt("Experience", (int)(players[0].transform.position.z / 20 * 1.5f));

                Debug.Log("YouLose");
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
            SceneTransition.waitLoading(this, "Result");
            //SceneTransition.UnLoad("Game_OnlineMode");
        }

        public bool getGameStart()
        {
            return GameStart;
        }

        public bool getGameFinish()
        {
            return GameFinish;
        }

        public bool getOnStarting()
        {
            return OnStarting;
        }

        public void changeInitializePosition()
        {
            var playerType = PlayerPrefs.GetString("PLAYER_TYPE", "null");
            switch (playerType)
            {
                case "Parent":
                    foreach (GameObject p in players)
                    {
                        if (p.transform.tag == "Player")
                        {
                            p.transform.position = new Vector3(-2.09f, -0.36f, 4.98f);
                        }
                        else
                        {
                            p.transform.position = new Vector3(0.83f, -0.36f, 4.98f);
                        }
                    }
                    break;
                case "Child":
                    foreach (GameObject p in players)
                    {
                        
                        if (p.transform.tag == "Player")
                        {
                            p.transform.position = new Vector3(0.83f, -0.36f, 4.98f);
                        }
                        else
                        {
                            p.transform.position = new Vector3(-2.09f, -0.36f, 4.98f);

                        }
                    }
                    break;
            }
        }

        public void addPlayerList(GameObject player)
        {
            players.Add(player);
        }
    }
}
