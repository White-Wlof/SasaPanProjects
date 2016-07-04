using UnityEngine;
using System.Collections;

namespace Game
{

    public class BoatDirectionSystem : CharactorOperationMaster
    {

        PlayerStateManager state;
        Vector3 touchPos;
        Vector3 detachPos;
        Vector3 deltaPos;
        Vector3 rudderPos;
        GameObject rudder;
        int autoRotateState;
        bool isAutoRotate;

        void Start()
        {
            state = PlayerStateManager.Instance;
            touchPos = Vector3.zero;
            detachPos = Vector3.zero;
            rudder = GameObject.FindGameObjectWithTag("Rudder");
            rudderPos = new Vector3(Camera.main.rect.center.x, 0, 10f);
            autoRotateState = 0;
            isAutoRotate = false;
            Debug.Log(rudderPos);
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
                            deltaPos = t.position;
                            touchPos = Camera.main.ScreenToViewportPoint(t.position);
                            touchPos.x = touchPos.x - rudderPos.x;
                            touchPos.z = 10f;
                            autoRotateState = 0;
                            isAutoRotate = false;
                            break;
                        case TouchPhase.Moved:
                            detachPos = Camera.main.ScreenToViewportPoint(t.position);
                            detachPos.x = detachPos.x - rudderPos.x;
                            detachPos.z = 10f;
                            var angle = AngleOf2Vector(touchPos, detachPos);
                            rudderRotate(angle);
                            var diff = t.position.x - deltaPos.x;
                            autoRudderState(diff);
                            deltaPos = t.position;
                            break;
                        case TouchPhase.Ended:
                        case TouchPhase.Canceled:
                            touchPos = Vector3.zero;
                            detachPos = Vector3.zero;
                            break;
                    }
                }
            }
            autoRudderRotateStart();

        }

        void rudderRotate(float angle)
        {
            if (touchPos.x < detachPos.x)
            {
                rudder.transform.eulerAngles = new Vector3(0, 0, -angle);
                playerRotation(this.gameObject, RIGHT, state.operability);
            }
            else if (touchPos.x > detachPos.x)
            {
                rudder.transform.eulerAngles = new Vector3(0, 0, angle);
                playerRotation(this.gameObject, LEFT, state.operability);
            }
        }

        void autoRudderState(float diff)
        {
            Debug.Log("abs : " + Mathf.Abs(diff));
            if (Mathf.Abs(diff) > 50 && !isAutoRotate)
            {
                if (diff < 0)
                {
                    autoRotateState = 1;
                }
                else if (diff > 0)
                {
                    autoRotateState = 2;
                }
            }
        }

        void autoRudderRotateStart()
        {
            switch (autoRotateState)
            {
                case 1:
                case 2:
                    StartCoroutine(autoRudderRotate(autoRotateState));
                    autoRotateState = 0;

                    break;
            }
        }

        IEnumerator autoRudderRotate(int status)
        {
            var timer = 0f;
            var deltaAngle = 8f;
            isAutoRotate = true;
            while (timer < 3 && isAutoRotate)
            {
                Debug.Log("logog" + timer);
                Debug.Log("euler" + rudder.transform.eulerAngles);
                timer += Time.deltaTime;
                if (status == 1)
                {
                    rudder.transform.eulerAngles += new Vector3(0, 0, deltaAngle);
                    playerRotation(this.gameObject, LEFT, state.operability);
                }
                else if (status == 2)
                {
                    rudder.transform.eulerAngles += new Vector3(0, 0, -deltaAngle);
                    playerRotation(this.gameObject, RIGHT, state.operability);
                }
                yield return new WaitForEndOfFrame();
            }
            autoRotateState = 0;
        }

        //ベクトルの長さを計算する
        float get_vector_length(Vector3 v)
        {
            return Mathf.Pow((v.x * v.x) + (v.y * v.y), 0.5f);
        }

        //ベクトル内積
        float dot_product(Vector3 vl, Vector3 vr)
        {
            return vl.x * vr.x + vl.y * vr.y;
        }

        //２つのベクトルABのなす角度θを求める
        float AngleOf2Vector(Vector3 A, Vector3 B)
        {
            //ベクトルAとBの長さを計算する
            float length_A = get_vector_length(A);
            float length_B = get_vector_length(B);

            //内積とベクトル長さを使ってcosθを求める
            float cos_sita = dot_product(A, B) / (length_A * length_B);

            //cosθからθを求める
            float sita = Mathf.Acos(cos_sita); 

            //ラジアンでなく0～180の角度でほしい場合はコメント外す
            sita = sita * 180.0f / Mathf.PI;

            return sita;
        }

    }
}
