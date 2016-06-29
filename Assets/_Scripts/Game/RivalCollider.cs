using UnityEngine;
using System.Collections;

namespace Game
{
    public class RivalCollider : MonoBehaviour
    {
        PlayerStateManager state;
        PlayerHpView hp;
        const string CannonBall = "CannonBall";
        const string Field = "Field";
        const string Player = "Player";
        const string SasaLeaf = "SasaLeaf";

        [SerializeField] int ballDamage = 20;
        [SerializeField] int fieldDamage = 2;

        void Start()
        {
            state = PlayerStateManager.Instance;
            hp = GameObject.FindGameObjectWithTag("Canvas").GetComponent<PlayerHpView>();
        }

        void OnCollisionEnter(Collision collision)
        {
            switch (collision.transform.tag)
            {
                case CannonBall:
                    state.rivalHp -= ballDamage;

                    break;
                case Field:
                    state.rivalHp -= fieldDamage;
                    break;
            }
            hp.updateRivalHp();
        }

        void OnCollisionStay(Collision collision)
        {
            switch (collision.transform.tag)
            {
                case Field:
                    state.rivalHp -= fieldDamage;
                    break;
                case Player:
                    state.rivalHp -= state.ownAtk;
                    break;
            }
            hp.updateRivalHp();
        }

        void OnTriggerEnter(Collider collider)
        {
            if (collider.transform.tag == SasaLeaf)
            {
                Destroy(collider.gameObject);
            }
        }
    }
}

