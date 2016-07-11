using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ResultView : MonoBehaviour
{

    UserDataManager data;
    SoundManager sound;
    [SerializeField] Button goMenu;
    [SerializeField] Text result;
    [SerializeField] Text normalSasa;
    [SerializeField] Text goldSasa;
    [SerializeField] Text winBonus;
    [SerializeField] Text experience;

    void Start()
    {
        data = UserDataManager.Instance;
        sound = SoundManager.Instance;
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
        PhotonNetwork.Disconnect();

        goMenu.onClick.AddListener(() =>
            {
                sound.playMenuBGM();
            });

        result.text = PlayerPrefs.GetString("Result", "");
        normalSasa.text = "" + PlayerPrefs.GetInt("GetSasa", 0);
        var exp = PlayerPrefs.GetInt("Experience", 0);
        data.Experience += exp;
        while (data.MaxExp <= data.Experience)
        {
            data.Level++;
            var diffExp = data.Experience - data.MaxExp;
            data.MaxExp = newMaxExp(data.Level);
            data.Experience = diffExp;
        }
        experience.text = "" + exp;

        switch (result.text)
        {
            case "勝利":
                goldSasa.text = "" + 1;
                result.color = new Color(1, 0, 0, 1);
                winBonus.enabled = true;
                break;
            default :
                goldSasa.text = "" + 0;
                result.color = new Color(0, 0, 1, 1);
                winBonus.enabled = false;

                break;
        }

        data.NormalSasa += int.Parse(normalSasa.text);
        data.GoldSasa += int.Parse(goldSasa.text);


        data.HostRoomId = "00000000";
        data.Save();
    }

    int newMaxExp(int level)
    {
        return 10 * level * level + 33 * (level - 1);
    }
}
