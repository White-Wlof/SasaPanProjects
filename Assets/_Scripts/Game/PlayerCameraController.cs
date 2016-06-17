using UnityEngine;
using System.Collections;

namespace Game
{

    public class PlayerCameraController : MonoBehaviour
    {
    
        [SerializeField] Camera mainCamera;

        void Start()
        {
            mainCamera = Camera.main;
        }
        // Update is called once per frame
        void Update()
        {
            Vector3 cameraPos = new Vector3(transform.position.x, transform.position.y + 3.5f, transform.position.z - 6.0f);
            mainCamera.transform.localPosition = cameraPos;

            if (Input.GetKey(KeyCode.UpArrow))
            {
                mainCamera.fieldOfView -= 1;
            }
            else if (Input.GetKey(KeyCode.DownArrow))
            {
                mainCamera.fieldOfView += 1;
            }
        }
    }
}
