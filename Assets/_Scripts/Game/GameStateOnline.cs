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
        int textOrder;
        List<Transform> players = new List<Transform>();
        [SerializeField] Text stateText;
        [SerializeField] Transform goalLine;

        void Awake()
        {
            GameStart = false;
            GameFinish = false;
            textOrder = 0;
            PhotonNetwork.Instantiate("PlayerMaster", Vector3.zero, Quaternion.identity, 0);
        }

        void Start()
        {
            players.Add(GameObject.FindGameObjectWithTag("Player").transform);
            //players.Add(GameObject.FindGameObjectWithTag("Rival").transform);
            changeInitializePosition();
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
            foreach (Transform t in players)
            {
                if (t.position.z > goalLine.position.z && !GameFinish)
                {
                    showSignText();
                    changeGameState();
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
                    textOrder++;
                    break;
                case 2:
                    stateText.text = "FINISH";
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

        public bool getGameStart()
        {
            return GameStart;
        }

        public bool getGameFinish()
        {
            return GameFinish;
        }

        void changeInitializePosition()
        {
            var playerType = PlayerPrefs.GetString("PLAYER_TYPE", "null");
            switch (playerType)
            {
                case "Parent":
                    players[0].transform.position = new Vector3(-2.09f, -0.36f, 4.98f);
                    break;
                case "Child":
                    players[0].transform.position = new Vector3(0.83f, -0.36f, 4.98f);
                    break;
            }
        }
    }
}
