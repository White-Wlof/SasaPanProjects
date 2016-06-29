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
        public void setRivalState(int hp, int atk, string name)
        {
            var state = PlayerStateManager.Instance;
            state.rivalHp = hp;
            state.rivalAtk = atk;
            state.rivalName = name;
        }

        [PunRPC]
        public void setRivalHp(int hp)
        {
            var state = PlayerStateManager.Instance;
            state.rivalHp = hp;
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
