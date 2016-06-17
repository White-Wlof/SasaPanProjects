using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Hashtable = ExitGames.Client.Photon.Hashtable;
using UnityEngine.SceneManagement;
using System.Linq;

public class PUNController : Photon.MonoBehaviour
{
    bool isWaiting;
    [SerializeField] int online;

    void Start()
    {
        isWaiting = true;
        PhotonNetwork.ConnectUsingSettings("v1.0");
        PhotonNetwork.sendRate = 30;
    }

    void OnJoinedLobby()
    {
        //ランダムにルームに入る
        PhotonNetwork.JoinRandomRoom();
        PlayerPrefs.SetString("PLAYER_TYPE", "Child");

    }

    //ランダムにルームに入れなかった
    void OnPhotonRandomJoinFailed()
    {
        RoomOptions roomOptions = new RoomOptions();

        roomOptions.isVisible = true;

        roomOptions.isOpen = true;

        roomOptions.maxPlayers = 2;

        PhotonNetwork.CreateRoom("Room1", roomOptions, new TypedLobby());
        PlayerPrefs.SetString("PLAYER_TYPE", "Parent");
        Debug.Log("作った稲荷");
    }

    void OnJoinedRoom()
    {
        Debug.Log("ここに入った稲荷>" + PhotonNetwork.room.name);
        loadGameScene();
    }

    void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
    {  
        // 入室ログ表示  
        Debug.Log("Joined otherPlayer " + newPlayer.ID);  
        loadGameScene();

    }

    void loadGameScene()
    {
        var room = PhotonNetwork.room.name;
        if (room != null)
        {  
            // 取得した情報から人数を取得  
            if (PhotonNetwork.room.playerCount == online && isWaiting)
            {
                isWaiting = false;
                SceneManager.LoadScene("Game_OnlineMode", LoadSceneMode.Additive);
            }
        }
        else
        {  
            Debug.Log("そんなもんねーよ"); 
             
        }  
       
    }

}
