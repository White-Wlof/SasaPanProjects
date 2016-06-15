using UnityEngine;
using System.Collections;

namespace Game
{
    public class PlayerCollider : MonoBehaviour
    {
        PlayerStateManager state;
        const string CannonBall = "CannonBall";
        const string Field = "Field";

        [SerializeField] int ballDamage = 10;
        [SerializeField] int fieldDamage = 2;

        void Start()
        {
            state = PlayerStateManager.Instance;
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
        }

        void OnCollisionStay(Collision collision)
        {
            switch (collision.transform.tag)
            {
                case Field:
                    state.ownHp -= fieldDamage;
                    break;
            }
        }
    }
}
