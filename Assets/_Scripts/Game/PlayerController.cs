using UnityEngine;
using System.Collections;

namespace PLAYER
{

    public class PlayerController : CharacterOperationMaster
    {


        [SerializeField] Transform center;
        [SerializeField] GameObject cannon;
        PlayerStateManager state;

        private Rigidbody playerRb;
        private GameObject cannonBall;
        // Use this for initialization
        void Start()
        {
            state = PlayerStateManager.Instance;
            playerRb = this.GetComponent<Rigidbody>();
            cannonBall = Prefabs.GameObj.CannonBall;
        }
	
        // Update is called once per frame
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
                shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                //state.initialVelocityCannon = 0;
            }

            #if UNITY_IOS
            if (Input.touchCount > 0)
            {
                if (Input.touches[0].phase == TouchPhase.Ended && state.cannonMode)
                {
                    shotCannon(center, playerRb, cannon.transform.position, cannonBall, state.initialVelocityCannon);
                    //state.initialVelocityCannon = 0;
                }
            }
            #endif
        }
    }
}
