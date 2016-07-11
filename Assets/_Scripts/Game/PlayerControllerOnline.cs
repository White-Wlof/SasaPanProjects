using UnityEngine;
using System.Collections;

namespace Game
{

    public class PlayerControllerOnline : CharactorOperationMaster
    {

        [SerializeField] Transform center;
        [SerializeField] GameObject cannon;
        [SerializeField] AudioSource cannonAudio;
        [SerializeField] BoxCollider col;
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
            state = PlayerStateManager.Instance;
            photonMethod.RPC("setRivalHp", PhotonTargets.Others, state.ownHp);
        }

        void Start()
        {
            var data = UserDataManager.Instance;
            playerRb = this.GetComponent<Rigidbody>();
            if (this.transform.tag == "Player")
            {
                playerRb.mass += data.Weight * 0.01f;

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
            if (state.ownHp <= 0)
            {
                if (playerRb.useGravity == false)
                {
                    playerRb.useGravity = true;
                    col.enabled = true;
                    state.deadPlayers++;
                }
                if (playerRb.velocity.z > 3)
                {
                    playerRb.velocity -= new Vector3(0, 0, 1);
                }
            }
            playerRb.AddForce(Vector3.forward * 2);
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                playerRotation(this.gameObject, LEFT, state.operability);
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                playerRotation(this.gameObject, RIGHT, state.operability);
            }
            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (!state.boostFrag && state.boostLevel > 0)
                {
                    playerBoost(this.gameObject, playerRb, state.boostLevel);
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
            #if UNITY_IOS || UNITY_ANDROID
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
            else if (playerType == shotPlayer && photonMethod.isMine && state.initialVelocityCannon > 100)
            {
                shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                cannonAudio.PlayOneShot(cannonAudio.clip);

                shotPlayer = "";
            }
            else if (playerType != shotPlayer && !photonMethod.isMine)
            {
                shotCannon(center, playerRb, cannon.transform.position, cannonBall, O_Speed);
                cannonAudio.PlayOneShot(cannonAudio.clip);

                shotPlayer = "";
            }
        }

        void LateUpdate()
        {
            if (PhotonNetwork.connected && !gameState.getGameFinish())
            {
                Debug.Log("こいや" + state.ownHp);
                photonMethod.RPC("setRivalHp", PhotonTargets.Others, state.ownHp);
            }
        }
    }
}
