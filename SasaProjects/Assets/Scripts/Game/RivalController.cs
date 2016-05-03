using UnityEngine;
using System.Collections;


namespace PLAYER
{
    public class RivalController : CharacterOperationMaster
    {
        [SerializeField] Transform center;
        [SerializeField] GameObject cannon;
        PlayerStateManager state;
        private Rigidbody rivalRb;
        private GameObject cannonBall;
        private float timer;
        // Use this for initialization
        void Start()
        {
            state = PlayerStateManager.Instance;
            rivalRb = this.GetComponent<Rigidbody>();
            cannonBall = Prefabs.GameObj.CannonBall;
            timer = 0;
        }
	
        // Update is called once per frame
        void Update()
        {
            timer += Time.deltaTime;
            //Debug.Log(rivalRb.velocity.z);
            if (rivalRb.velocity.z < 2)
            {
                playerBoost(rivalRb, state.boostLevel + Random.Range(0, 5));
            }
            if (timer > 10)
            {
                shotCannon(center, rivalRb, cannon.transform.position, cannonBall);
                timer = Random.Range(0.0f, 4.0f);
            }
        }
    }
}
