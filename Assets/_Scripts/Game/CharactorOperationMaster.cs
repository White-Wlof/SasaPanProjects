using UnityEngine;
using System.Collections;

namespace Game
{
    public class CharactorOperationMaster : MonoBehaviour
    {
        protected readonly string LEFT = "Left";
        protected readonly string RIGHT = "Right";
        protected AudioSource[] audioSource;

        protected void playerRotation(GameObject ownObj, string direction, int operability)
        {
            if (direction == LEFT)
            {
                ownObj.transform.Rotate(new Vector3(0, 1, 0), -0.1f - operability * 0.01f * Time.deltaTime);
            }
            else if (direction == RIGHT)
            {
                ownObj.transform.Rotate(new Vector3(0, 1, 0), 0.1f + operability * 0.01f * Time.deltaTime);
            }
        }

        protected void playerBoost(GameObject player, Rigidbody ownRb, int boostLevel)
        {
            ownRb.velocity += new Vector3(-1 * ownRb.velocity.x, 0, 0);
            ownRb.AddForce(player.transform.forward * 150 * boostLevel);
            ownRb.AddForce(new Vector3(0, 10, 0));
        }

        protected void shotCannon(Transform center, Rigidbody playerRb, Vector3 portsPos, GameObject ball, float speed)
        {
            var cannonBall = Instantiate(ball, portsPos, center.transform.rotation) as GameObject;
            cannonBall.GetComponent<Rigidbody>().velocity = playerRb.velocity;
            cannonBall.GetComponent<Rigidbody>().AddForce((center.transform.forward * 5 + center.transform.up * 1) * speed);
        }

        protected void shotCannon(Transform center, Rigidbody playerRb, Vector3 portsPos, GameObject ball)
        {
            var cannonBall = Instantiate(ball, portsPos, center.transform.rotation) as GameObject;
            cannonBall.GetComponent<Rigidbody>().velocity = playerRb.velocity;
            cannonBall.GetComponent<Rigidbody>().AddForce((center.transform.forward * 5 + center.transform.up * 1) * 200.0f);
        }

        protected void endGame(Rigidbody playerRb)
        {
            if (playerRb.velocity.z > 1)
            {
                playerRb.velocity -= playerRb.velocity;
            }
        }
    }
}
