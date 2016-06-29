using UnityEngine;
using System.Collections;

namespace Game
{

    public class PlayerCameraControllerOnline : MonoBehaviour
    {
    
        [SerializeField] Camera mainCamera;
        public Transform rival;
        GameStateOnline state;
        Camera backCamera;
        bool isRival;

        void Start()
        {
            if (PhotonNetwork.connected)
            {
                var gamestate = GameObject.FindGameObjectWithTag("GameState");
                state = gamestate.GetComponent<GameStateOnline>();
            }
            mainCamera = Camera.main;
            backCamera = GameObject.FindGameObjectWithTag("BackCamera").GetComponent<Camera>();
            isRival = false;
            Invoke("setTag", 1f);
        }
        // Update is called once per frame
        void Update()
        {
            Vector3 cameraPos = new Vector3(transform.position.x, transform.position.y + 3.5f, transform.position.z - 6.0f);
            Vector3 backCameraPos = new Vector3(transform.position.x, transform.position.y + 3.5f, transform.position.z + 6.0f);
            mainCamera.transform.localPosition = cameraPos;
            backCamera.transform.localPosition = backCameraPos;


            if (Input.GetKey(KeyCode.UpArrow))
            {
                mainCamera.fieldOfView -= 1;
            }
            else if (Input.GetKey(KeyCode.DownArrow))
            {
                mainCamera.fieldOfView += 1;
            }
            if (!state.getGameFinish())
            {
                if (isRival && rival.transform.position.z < transform.position.z)
                {
                    backCamera.enabled = true;
                }
                else
                {
                    backCamera.enabled = false;
                }
            }
        }

        void setTag()
        {
            if (GameObject.FindGameObjectWithTag("Rival"))
            {
                rival = GameObject.FindGameObjectWithTag("Rival").transform;
                isRival = true;
            }

        }
    }

}
