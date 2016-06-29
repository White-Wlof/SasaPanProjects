using UnityEngine;
using System.Collections;

public class ResultView : MonoBehaviour
{

    UserDataManager data;

    void Start()
    {
        data = UserDataManager.Instance;
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();

        data.HostRoomId = "00000000";
        data.Save();
    }
}
