using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UserInfo : MonoBehaviour
{

    [SerializeField] Text level;
    [SerializeField] Text userName;
    [SerializeField] Text goldSasa;
    [SerializeField] Text normalSasa;
    [SerializeField] Image experience;
    UserDataManager data;

    void Start()
    {
        data = UserDataManager.Instance;
        data.Load();
    }

    void Update()
    {
        level.text = "Lv." + data.Level;
        userName.text = data.UserName;
        goldSasa.text = "" + data.GoldSasa;
        normalSasa.text = "" + data.NormalSasa;
        experience.fillAmount = 1 / data.MaxExp * data.Experience;
    }
}
