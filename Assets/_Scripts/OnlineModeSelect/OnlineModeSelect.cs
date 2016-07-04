using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class OnlineModeSelect : Photon.MonoBehaviour
{

    [SerializeField] GameObject Panel_0;
    [SerializeField] GameObject Panel_1;
    [SerializeField] Button withFriend;
    [SerializeField] Button back;
    SoundManager sound;


    void Start()
    {
        sound = SoundManager.Instance;
        Panel_0.SetActive(true);
        Panel_1.SetActive(false);
        if (PhotonNetwork.connected)
        {
            PhotonNetwork.LeaveRoom();
            PhotonNetwork.LeaveLobby();
            PhotonNetwork.Disconnect();
        }
        withFriend.onClick.AddListener(() =>
            {
                Panel_0.SetActive(false);
                Panel_1.SetActive(true);
                sound.Click();
            });
        back.onClick.AddListener(() =>
            {
                Panel_0.SetActive(true);
                Panel_1.SetActive(false);
                sound.Click();
            });
    }

    void OnDisconnectedFromServer()
    {
        Debug.Log("discone");
    }

    void Update()
    {
        
    }

}
