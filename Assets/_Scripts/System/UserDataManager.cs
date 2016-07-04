using UnityEngine;
using System.Collections;

public class UserDataManager : SingletonMonoBehaviour<UserDataManager>
{
    public string UserName{ get; set; }

    public int Level{ get; set; }

    public int Experience{ get; set; }

    public int MaxExp{ get; set; }

    public int HP{ get; set; }

    public int PlusHP{ get; set; }

    public int ATK{ get; set; }

    public int PlusATK{ get; set; }

    public int Operability{ get; set; }

    public int Weight{ get; set; }

    public int NormalSasa{ get; set; }

    public int GoldSasa{ get; set; }

    public string HostRoomId{ get; set; }

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        Load();
        Save();
        showData();
    }

    public void Save()
    {
        PlayerPrefs.SetString("UserName", UserName);
        PlayerPrefs.SetInt("Level", Level);
        PlayerPrefs.SetInt("Experience", Experience);
        PlayerPrefs.SetInt("MaxExp", MaxExp);
        PlayerPrefs.SetInt("HP", HP);
        PlayerPrefs.SetInt("ATK", ATK);
        PlayerPrefs.SetInt("PlusHP", PlusHP);
        PlayerPrefs.SetInt("PlusATK", PlusATK);
        PlayerPrefs.SetInt("Operability", Operability);
        PlayerPrefs.SetInt("Weight", Weight);
        PlayerPrefs.SetInt("NormalSasa", NormalSasa);
        PlayerPrefs.SetInt("GoldSasa", GoldSasa);
        PlayerPrefs.SetString("HostRoomId", HostRoomId);

    }

    public void Load()
    {
        UserName = PlayerPrefs.GetString("UserName", "ささみ");
        Level = PlayerPrefs.GetInt("Level", 1);
        Experience = PlayerPrefs.GetInt("Experience", 0);
        MaxExp = PlayerPrefs.GetInt("MaxExp", 10);
        HP = PlayerPrefs.GetInt("HP", 1000);
        ATK = PlayerPrefs.GetInt("ATK", 1);
        PlusHP = PlayerPrefs.GetInt("PlusHP", 0);
        PlusATK = PlayerPrefs.GetInt("PlusATK", 0);
        Operability = PlayerPrefs.GetInt("Operability", 0);
        Weight = PlayerPrefs.GetInt("Weight", 0);
        NormalSasa = PlayerPrefs.GetInt("NormalSasa", 0);
        GoldSasa = PlayerPrefs.GetInt("GoldSasa", 0);
        HostRoomId = PlayerPrefs.GetString("HostRoomId", "00000000");
        Debug.Log(UserName);
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus)
        {
            Save();
            PhotonNetwork.LeaveRoom();
            PhotonNetwork.LeaveLobby();
        }
        else
        {
            Load();
        }
    }

    void OnApplicationQuit()
    {
        Save();
    }

    void showData()
    {
        Debug.Log("Name : " + UserName);
        Debug.Log("Level : " + Level);
        Debug.Log("Experience : " + Experience);
        Debug.Log("MaxExp : " + MaxExp);
        Debug.Log("HP : " + HP);
        Debug.Log("ATK : " + ATK);
        Debug.Log("NormalSasa : " + NormalSasa);
        Debug.Log("GoldSasa : " + GoldSasa);
        Debug.Log("HostRoomId : " + HostRoomId);
    }
}
    