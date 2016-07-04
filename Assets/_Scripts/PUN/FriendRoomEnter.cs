using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class FriendRoomEnter : Photon.MonoBehaviour
{

    [SerializeField] InputField inputField;
    [SerializeField] Text roomName;
    [SerializeField] Button join;
    [SerializeField] Button paste;
    [SerializeField] GameObject panel;
    SoundManager sound;

    void Start()
    {
        sound = SoundManager.Instance;
        PhotonNetwork.ConnectUsingSettings("v1.0");
        PhotonNetwork.sendRate = 30;
        join.onClick.AddListener(() =>
            {
                joinFriendRoom();
                sound.Click();
            });
        paste.onClick.AddListener(() =>
            {
                inputField.text = UniClipboard.GetText();
                sound.Click();
            });
    }

    
        

    void joinFriendRoom()
    {
        PhotonNetwork.JoinRoom(roomName.text);
        PlayerPrefs.SetString("PLAYER_TYPE", "Child");
    }

    void OnJoinedRoom()
    {
        Debug.Log("ここに入った稲荷>" + PhotonNetwork.room.name);
        loadGameScene();
    }

    void loadGameScene()
    {
        panel.SetActive(false);
        SceneTransition.waitLoading(this, "Game_OnlineMode");

    }

}
