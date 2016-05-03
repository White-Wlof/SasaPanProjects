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
                shotCannon(center, playerRb, cannon.transform.position, cannonBall);
            }
        }
    }
}
