using UnityEngine;
using System.Collections;

namespace PLAYER
{

    public class BoatDirectionSystem : CharacterOperationMaster
    {

        PlayerStateManager state;
        private Vector3 touchPos;
        private Vector3 detachPos;

        void Start()
        {
            state = PlayerStateManager.Instance;
            touchPos = Vector3.zero;
            detachPos = Vector3.zero;
            //rect = new Vector2(Screen.width, Screen.height);
        }
        // Update is called once per frame
        void Update()
        {
            if (!state.cannonMode)
            {
                foreach (Touch t in Input.touches)
                {
                    var id = t.fingerId;
                    switch (t.phase)
                    {
                        case TouchPhase.Began:
                            touchPos = t.position;
                            touchPos.z = 10f;
                            //Debug.LogFormat ("{0}:いまタッチした", id);
                            break;
                        case TouchPhase.Moved:
                        case TouchPhase.Stationary:
                            detachPos = t.position;
                            detachPos.z = 10f;
                            if (touchPos.x < detachPos.x)
                            {
                                playerRotation(this.gameObject, RIGHT);
                            }
                            else if (detachPos.x < touchPos.x)
                            {
                                playerRotation(this.gameObject, LEFT);
                            }
                            //Debug.LogFormat ("{0}:タッチしている", id);
                            break;
                        case TouchPhase.Ended:
                        case TouchPhase.Canceled:
                            touchPos = Vector3.zero;
                            detachPos = Vector3.zero;
                            //Debug.LogFormat ("{0}:いま離された", id);
                            break;
                    }
                }
            }
        }
    }
}
