using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class FriendRoomCreate : Photon.MonoBehaviour
{
    [SerializeField] Text roomId;
    [SerializeField] Button copy;
    [SerializeField] GameObject panel;
    List<string> roomList = new List<string>();
    UserDataManager data;
    SoundManager sound;

    void Start()
    {
        sound = SoundManager.Instance;
        data = UserDataManager.Instance;
        initiarizeRoom();
        copy.onClick.AddListener(() =>
            {
                UniClipboard.SetText(roomId.text);
                sound.Click();
            });
    }

    void initiarizeRoom()
    {
        PhotonNetwork.ConnectUsingSettings("v1.0");
        PhotonNetwork.sendRate = 30;
    }

    void OnJoinedLobby()
    {   
        var roomName = roomNameMake();
        createRoom(roomName);
    }

    void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
    {  
        // 入室ログ表示  
        Debug.Log("Joined otherPlayer " + newPlayer.ID);  
        loadGameScene();

    }

    void OnJoinedRoom()
    {
        Debug.Log("ここに入った稲荷>" + PhotonNetwork.room.name);
    }

    void loadGameScene()
    {
        panel.SetActive(false);
        SceneTransition.waitLoading(this, "Game_OnlineMode");
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

    void createRoom(string roomIdText)
    {
        //新規ルーム作成
        RoomOptions roomOptions = new RoomOptions();

        roomOptions.isVisible = true;

        roomOptions.isOpen = true;

        roomOptions.maxPlayers = 2;


        if (data.HostRoomId == "00000000")
        {

            PhotonNetwork.CreateRoom(roomIdText, roomOptions, new TypedLobby());
            data.HostRoomId = roomIdText;
        }
        else
        {
            PhotonNetwork.CreateRoom(data.HostRoomId, roomOptions, new TypedLobby());
        }
        PlayerPrefs.SetString("PLAYER_TYPE", "Parent");

        roomId.text = data.HostRoomId;
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus)
        {
            PhotonNetwork.Disconnect();
        }
        else
        {
            initiarizeRoom();
        }
    }
}
