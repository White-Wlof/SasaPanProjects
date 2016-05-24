using UnityEngine;
using System.Collections;


namespace PLAYER
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
            DrawLine((state.initialVelocityCannon + playerRb.velocity.z) / 7.5f, 10);
        }

        private void DrawLine(float primarySpeed, int x)
        {
            lengthOfLineRenderer = x;
            lineRenderer.SetVertexCount(lengthOfLineRenderer);
            Vector3[] points = new Vector3[lengthOfLineRenderer];
            int t = 0;
            while (t < lengthOfLineRenderer)
            {
                pos.x = this.transform.position.z + primarySpeed * (5 * Mathf.Sqrt(26) / 26) * t;
                pos.y = this.transform.position.y + (primarySpeed * (Mathf.Sqrt(26) / 26) * t) - (0.5f * gravity * t * t);
                points[t] = new Vector3(this.transform.position.x, pos.y, pos.x);
                t++;
            }
            lineRenderer.SetPositions(points);
        }
    }
}
