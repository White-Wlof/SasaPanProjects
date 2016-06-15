using UnityEngine;
using System.Collections;

namespace Game
{
    [RequireComponent(typeof(PhotonView))]

    public class NetworkPlayer : Photon.MonoBehaviour
    {
        private Vector3 correctPlayerPos = Vector3.zero;
        private Quaternion correctPlayerRot = Quaternion.identity;

        void Update()
        {
            //自分のキャラクター以外の時はLerpを使って滑らかに位置と角度を変更
            if (!photonView.isMine)
            {
                transform.position = Vector3.Lerp(transform.position, this.correctPlayerPos, Time.deltaTime * 5);
                transform.rotation = Quaternion.Lerp(transform.rotation, this.correctPlayerRot, Time.deltaTime * 5);
            }
        }

        void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {

            //データを送る
            if (stream.isWriting)
            {

                //現在地と角度を送信
                stream.SendNext(transform.position);
                stream.SendNext(transform.rotation);
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
