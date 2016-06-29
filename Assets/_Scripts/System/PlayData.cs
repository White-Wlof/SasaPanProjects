using UnityEngine;
using System.Collections;

public class PlayData : SingletonMonoBehaviour<PlayData>
{
    public int CPUCount{ get; set; }

    public int VSCount{ get; set; }

    public int Win{ get; set; }

    public int Lose{ get; set; }

    public float PlayTime{ get; set; }

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        Load();
        Save();
        showData();
    }

    void Update()
    {
        PlayTime += Time.deltaTime;
    }

    public void Save()
    {
        PlayerPrefs.SetInt("CPUCount", CPUCount);
        PlayerPrefs.SetInt("VSCount", VSCount);
        PlayerPrefs.SetInt("Win", Win);
        PlayerPrefs.SetInt("Lose", Lose);
        PlayerPrefs.SetFloat("PlayTime", PlayTime);
    }

    public void Load()
    {
        CPUCount = PlayerPrefs.GetInt("CPUCount", 0);
        VSCount = PlayerPrefs.GetInt("VSCount", 0);
        Win = PlayerPrefs.GetInt("Win", 0);
        Lose = PlayerPrefs.GetInt("Lose", 0);
        PlayTime = PlayerPrefs.GetFloat("PlayTime", 0);
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus)
        {
            Save();
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
        Debug.Log("CPUCount" + CPUCount);
    }
}
