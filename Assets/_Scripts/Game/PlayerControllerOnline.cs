using UnityEngine;
using System.Collections;

namespace Game
{

    public class PlayerControllerOnline : CharacterOperationMaster
    {

        [SerializeField] Transform center;
        [SerializeField] GameObject cannon;
        GameStateOnline gameState;
        PlayerStateManager state;
        PhotonView photonMethod;

        private Rigidbody playerRb;
        private GameObject cannonBall;
        string playerType;
        public string shotPlayer;

        public float O_Speed;

        void Awake()
        {
            photonMethod = GetComponent<PhotonView>();
            if (!photonMethod.isMine)
            {
                this.tag = "Rival";
            }
        }

        void Start()
        {
            state = PlayerStateManager.Instance;
            var data = UserDataManager.Instance;
            playerRb = this.GetComponent<Rigidbody>();
            if (this.transform.tag == "Player")
            {
                cannonBall = Prefabs.GameObj.PlayerCannonBall;
                photonMethod.RPC("setRivalState", PhotonTargets.Others, state.ownHp, state.ownAtk, data.UserName);
            }
            else if (this.transform.tag == "Rival")
            {
                cannonBall = Prefabs.GameObj.RivalCannonBall;

            }
            gameState = GameObject.FindGameObjectWithTag("GameState").GetComponent<GameStateOnline>();

            playerType = PlayerPrefs.GetString("PLAYER_TYPE", null);

        }

        void Update()
        { 
            playerRb.AddForce(Vector3.forward * 2);
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                playerRotation(this.gameObject, LEFT);
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                playerRotation(this.gameObject, RIGHT);
            }
            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (!state.boostFrag && state.boostLevel > 0)
                {
                    playerBoost(playerRb, state.boostLevel);
                    state.boostFrag = true;
                } 
            }
            if (Input.GetKeyDown(KeyCode.Z))
            {
                //shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                photonMethod.RPC("shotCannon", PhotonTargets.All, playerType, state.initialVelocityCannon);
                //state.initialVelocityCannon = 0;
            }
            if (gameState.getGameFinish())
            {
                endGame(playerRb);
            }
            #if UNITY_IOS
            if (Input.touchCount > 0)
            {
                if (Input.touches[0].phase == TouchPhase.Ended && state.cannonMode)
                {
                    //shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                    photonMethod.RPC("shotCannon", PhotonTargets.All, playerType, state.initialVelocityCannon);

                    //state.initialVelocityCannon = 0;
                }
            }
            #endif

            if (shotPlayer == "")
            {
            }
            else if (playerType == shotPlayer && photonMethod.isMine)
            {
                shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                shotPlayer = "";
            }
            else if (playerType != shotPlayer && !photonMethod.isMine)
            {
                shotCannon(center, playerRb, cannon.transform.position, cannonBall, O_Speed);
                shotPlayer = "";
            }
        }

        void LateUpdate()
        {
            if (PhotonNetwork.connected && !gameState.getGameFinish())
            {
                photonMethod.RPC("setRivalHp", PhotonTargets.Others, state.ownHp);
            }
        }
    }
}
