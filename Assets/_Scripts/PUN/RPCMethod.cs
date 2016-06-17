using UnityEngine;
using System.Collections;

namespace Game
{
    public class RPCMethod : Photon.MonoBehaviour
    {
        PlayerControllerOnline player;

        void Start()
        {
            player = GetComponent<PlayerControllerOnline>();
        }

        [PunRPC]
        public void shotCannon(string playerType, float speed)
        {
            player.shotPlayer = playerType;
            player.O_Speed = speed;

            Debug.Log("でたんご");
        }
    }
}
