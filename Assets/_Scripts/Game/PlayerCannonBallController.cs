using UnityEngine;
using System.Collections;


namespace Cannon
{
    public class PlayerCannonBallController : MonoBehaviour
    {

        [SerializeField] GameObject detonatorSmall;
        [SerializeField] GameObject detonatorBig;

        void Start()
        {
            Instantiate(detonatorSmall, transform.position, Quaternion.identity);
        }

        void OnTriggerEnter(Collider col)
        {
            switch (col.transform.tag)
            {
                case "Player":
                    break;
                case "Rival":
                case "River":
                case "Field":
                    Instantiate(detonatorBig, transform.position, Quaternion.identity);
                    Destroy(this.gameObject);
                    break;
            }
        }
    }
}
