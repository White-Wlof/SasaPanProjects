using UnityEngine;
using System.Collections;

namespace Game
{
    [RequireComponent(typeof(PhotonView))]

    public class PhotonPlayer : Photon.MonoBehaviour
    {
        private Vector3 correctPlayerPos = Vector3.zero;
        private Quaternion correctPlayerRot = Quaternion.identity;
        private int viewID;

        void Start()
        {
            viewID = photonView.viewID;
            switch (viewID)
            {
                case 1001:
                case 2001:
                    viewID = 1;
                    break;
                case 1002:
                case 2002:
                    viewID = 2;
                    break;
            }
            if (!photonView.isMine && viewID == 1)
            {
                this.transform.tag = "Rival";
                Destroy(this.gameObject.GetComponent<PlayerCameraController>());
                Destroy(this.gameObject.GetComponent<CannonPullSystem>());
                Destroy(this.gameObject.GetComponent<BoatDirectionSystem>());

            }
            if (viewID == 2)
            {
                //this.correctPlayerPos = new Vector3(0, 0, 0.6f);
            }
        }

        void Update()
        {
            //自分のキャラクター以外の時はLerpを使って滑らかに位置と角度を変更
            if (!photonView.isMine)
            {
                transform.position = Vector3.Lerp(transform.position, this.correctPlayerPos, Time.deltaTime);
                transform.rotation = Quaternion.Lerp(transform.rotation, this.correctPlayerRot, Time.deltaTime);
            }
        }

        void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {

            //データを送る
            if (stream.isWriting)
            {
                if (viewID == 2)
                {
                    Debug.Log("pandaCenter" + this.transform.position);
                }
                //現在地と角度を送信
                stream.SendNext(this.transform.position);
                stream.SendNext(this.transform.rotation);
            }
        //データを受け取る
        else
            {
                //現在地と角度を受信
                this.correctPlayerPos = (Vector3)stream.ReceiveNext();
                this.correctPlayerRot = (Quaternion)stream.ReceiveNext();
            }

        }
    }
}
