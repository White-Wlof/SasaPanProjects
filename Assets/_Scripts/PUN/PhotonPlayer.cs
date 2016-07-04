using UnityEngine;
using System.Collections;

namespace Game
{
    [RequireComponent(typeof(PhotonView))]

    public class PhotonPlayer : Photon.MonoBehaviour
    {
        private Vector3 correctPlayerPos = Vector3.zero;
        private Quaternion correctPlayerRot = Quaternion.identity;
        GameStateOnline online;

        void Awake()
        {
            if (!photonView.isMine)
            {
                this.tag = "Rival";
                Destroy(this.gameObject.GetComponent<PlayerCameraControllerOnline>());
                //Destroy(this.gameObject.GetComponent<PlayerCollider>());
                Destroy(this.gameObject.GetComponent<CannonPullSystem>());
                Destroy(this.gameObject.GetComponent<BoatDirectionSystem>());
                Destroy(this.gameObject.GetComponentInChildren<OrbitPredictioner>());
                //this.gameObject.AddComponent<RivalCollider>();
            }


        }



        void Start()
        {
            var state = GameObject.FindWithTag("GameState");
            online = state.GetComponent<GameStateOnline>();
            online.addPlayerList(this.gameObject);
        }

        void Update()
        {
            //自分のキャラクター以外の時はLerpを使って滑らかに位置と角度を変更
            if (!photonView.isMine && online.getOnStarting())
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
