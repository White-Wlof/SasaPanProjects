using UnityEngine;
using System.Collections;


namespace Game
{
    public class RivalController : CharactorOperationMaster
    {
        [SerializeField] Transform center;
        [SerializeField] GameObject cannon;
        [SerializeField] GameObject player;
        [SerializeField] BoxCollider col;
        PlayerStateManager state;
        private Rigidbody rivalRb;
        private GameObject cannonBall;
        private float timer;
        // Use this for initialization
        void Start()
        {
            
            state = PlayerStateManager.Instance;
            rivalRb = this.GetComponent<Rigidbody>();
            cannonBall = Prefabs.GameObj.RivalCannonBall;
            timer = 0;
        }
	
        // Update is called once per frame
        void Update()
        {
            if (state.ownHp <= 0)
            {
                if (rivalRb.useGravity == false)
                {
                    rivalRb.useGravity = true;
                    col.enabled = true;
                    state.deadPlayers++;
                }
                if (rivalRb.velocity.z > 3)
                {
                    rivalRb.velocity -= new Vector3(0, 0, 1);
                }
            }
            else if (state.rivalHp > 0)
            {
                rivalRb.AddForce(Vector3.forward * 2);
                timer += Time.deltaTime;
                //Debug.Log(rivalRb.velocity.z);
                if (this.transform.position.z + 5 < player.transform.position.z)
                {
                    this.transform.LookAt(player.transform.position);
//                if (rivalRb.velocity.z < 0 && rivalRb.velocity.y < 0)
//                {
//                    playerBoost(rivalRb, state.boostLevel + 5);
//                }
                }
                else
                {
                    this.transform.eulerAngles = Vector3.zero;
                }
                if (timer > 3 && Mathf.Abs(rivalRb.velocity.z) < 1 && rivalRb.velocity.y < 0)
                {
                    playerBoost(this.gameObject, rivalRb, state.boostLevel + Random.Range(0, 5));
                    timer = 0;
                }
                if (timer > 5)
                {
                    center.transform.LookAt(player.transform.position);
                    shotCannon(center, rivalRb, cannon.transform.position, cannonBall);
                    playerBoost(this.gameObject, rivalRb, 1);
                    timer = Random.Range(0.0f, 3.0f);
                }
            }
        }
    }
}
