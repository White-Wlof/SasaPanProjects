using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Hashtable = ExitGames.Client.Photon.Hashtable;
using UnityEngine.SceneManagement;
using System.Linq;
using System.Collections.Generic;

public class RandomRoomMatching : Photon.MonoBehaviour
{
    bool isWaiting;
    [SerializeField] int online;
    List<string> roomList = new List<string>();

    void Start()
    {
        //SceneTransition.LoadAddtive("Loading");
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

        PhotonNetwork.CreateRoom(roomNameMake(), roomOptions, new TypedLobby());
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

    void OnReceivedRoomListUpdate()
    {
        // 既存のRoomを取得.
        RoomInfo[] roomInfo = PhotonNetwork.GetRoomList();
        if (roomInfo == null || roomInfo.Length == 0)
            return;

        for (int i = 0; i < roomInfo.Length; i++)
        {
            roomList.Add(roomInfo[i].name);
        }
    }

    string roomNameMake()
    {
        var name = "";
        for (int i = 0; i < 8; i++)
        {
            name += Random.Range(0, 9).ToString();
        }
        foreach (string n in roomList)
        {
            if (n == name)
            {
                name = roomNameMake();
            }
        }
        return name;
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
                SceneTransition.waitLoading(this, "Game_OnlineMode");

            }
        }
        else
        {  
            Debug.Log("そんなもんねーよ"); 
             
        }  
       
    }

}
