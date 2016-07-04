using UnityEngine;
using System.Collections;

namespace Game
{

    public class PlayerController : CharactorOperationMaster
    {


        [SerializeField] Transform center;
        [SerializeField] GameObject cannon;
        [SerializeField] GameState gameState;
        [SerializeField] AudioSource cannonAudio;
        PlayerStateManager state;

        private Rigidbody playerRb;
        private GameObject cannonBall;
        // Use this for initialization
        void Start()
        {
            state = PlayerStateManager.Instance;
            playerRb = this.GetComponent<Rigidbody>();
            cannonBall = Prefabs.GameObj.PlayerCannonBall;
        }
	
        // Update is called once per frame
        void Update()
        { 
            if (state.ownHp <= 0 && playerRb.velocity.z > 3)
            {
                playerRb.velocity -= new Vector3(0, 0, 1);
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
                    playerBoost(playerRb, state.boostLevel);
                    state.boostFrag = true;
                } 
            }
            if (Input.GetKeyDown(KeyCode.Z))
            {
                shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                cannonAudio.PlayOneShot(cannonAudio.clip);

                //state.initialVelocityCannon = 0;
            }
            if (gameState.getGameFinish())
            {
                endGame(playerRb);
            }

            #if UNITY_IOS
            if (Input.touchCount > 0)
            {
                if (Input.touches[0].phase == TouchPhase.Ended && state.cannonMode && state.initialVelocityCannon > 100)
                {
                    shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                    cannonAudio.PlayOneShot(cannonAudio.clip);
                    //state.initialVelocityCannon = 0;
                }
            }
            #endif
        }
    }
}
