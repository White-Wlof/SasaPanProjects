using UnityEngine;
using System.Collections;

namespace Game
{
    public class PlayerCollider : MonoBehaviour
    {
        PlayerStateManager state;
        PlayerHpView hp;
        const string CannonBall = "CannonBall";
        const string Field = "Field";
        const string Rival = "Rival";
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
                    state.ownHp -= ballDamage;

                    break;
                case Field:
                    state.ownHp -= fieldDamage;
                    break;
            }
            hp.updateOwnHp();
        }

        void OnCollisionStay(Collision collision)
        {
            switch (collision.transform.tag)
            {
                case Field:
                    state.ownHp -= fieldDamage;
                    break;
                case Rival:
                    state.ownHp -= state.rivalAtk;
                    break;
            }
            hp.updateOwnHp();
        }

        void OnTriggerEnter(Collider collider)
        {
            if (collider.transform.tag == SasaLeaf)
            {
                state.leafCount += 1;
                Destroy(collider.gameObject);
            }
        }
    }
}
