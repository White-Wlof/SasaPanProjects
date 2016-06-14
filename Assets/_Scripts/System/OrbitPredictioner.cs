using UnityEngine;
using System.Collections;


namespace Game
{
    public class OrbitPredictioner : MonoBehaviour
    {
        private int lengthOfLineRenderer;
        [SerializeField] LineRenderer lineRenderer;
        [SerializeField] Rigidbody playerRb;
        [SerializeField] Transform center;
        PlayerStateManager state;
        private Vector2 pos;
        private float gravity;

        void Start()
        {
            gravity = Mathf.Abs(Physics.gravity.y);
            state = PlayerStateManager.Instance;
        }

        void Update()
        {
            Debug.Log(state.initialVelocityCannon);
            DrawLine((state.initialVelocityCannon + playerRb.velocity.z) / 7.5f, 10);
        }

        private void DrawLine(float primarySpeed, int x)
        {
            lengthOfLineRenderer = x * 10;
            lineRenderer.SetVertexCount(lengthOfLineRenderer);
            Vector3[] points = new Vector3[lengthOfLineRenderer];
            float t = 0;
            int num = 0;
            while (num < points.Length)
            {
                
                pos.x = primarySpeed * (5 * Mathf.Sqrt(26) / 26) * t;
                pos.y = (primarySpeed * (Mathf.Sqrt(26) / 26) * t) - (0.5f * gravity * t * t);
                points[num] = transform.position + transform.forward * pos.x + transform.up * pos.y;
                t += 0.1f;
                num++;
            }
            lineRenderer.SetPositions(points);
        }
    }
}
