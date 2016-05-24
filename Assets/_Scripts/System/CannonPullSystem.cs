using UnityEngine;
using System.Collections;

public class CannonPullSystem : MonoBehaviour
{
    [SerializeField] Transform center;
    PlayerStateManager state;
    private Vector3 touchPos;
    private Vector3 detachPos;
    private float degree;
    private float length;
    //private Vector2 rect;

    void Start()
    {
        state = PlayerStateManager.Instance;
        touchPos = Vector3.zero;
        detachPos = Vector3.zero;
        //rect = new Vector2(Screen.width, Screen.height);
    }

    void Update()
    {
        if (state.cannonMode)
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
                        degree = pulldegree(touchPos, detachPos);
                        if (degree < 0)
                        {
                            degree = Mathf.Abs(degree) - 90;
                        }
                        else
                        {
                            degree = 360 - (degree + 90);
                        }
                        Debug.Log("touchPos x:" + touchPos.x + " y:" + touchPos.y);
                        Debug.Log("detachPos x:" + detachPos.x + " y:" + detachPos.y);
                        Debug.Log("degree:" + degree);
                        center.transform.eulerAngles = new Vector3(0, degree, 0);
			//Debug.LogFormat ("{0}:タッチしている", id);
                        break;
                    case TouchPhase.Ended:
                    case TouchPhase.Canceled:
                        state.initialVelocityCannon = pullLength() * 100;
                        touchPos = Vector3.zero;
                        detachPos = Vector3.zero;

			//Debug.LogFormat ("{0}:いま離された", id);
                        break;
                }
            }
        }

    }

    public float pulldegree(Vector3 p1, Vector3 p2)
    {
        float dx = p2.x - p1.x;
        float dy = p2.y - p1.y;
        float rad = Mathf.Atan2(dy, dx);
        return rad * Mathf.Rad2Deg;
    }

    public float pullLength()
    {
        return Vector3.Distance(touchPos, detachPos) / 100;
    }
	
}
