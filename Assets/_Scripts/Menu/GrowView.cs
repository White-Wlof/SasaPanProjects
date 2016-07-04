using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GrowView : MonoBehaviour
{
    UserDataManager data;
    SoundManager sound;
    [SerializeField] Text userName;
    [SerializeField] Text newUserName;
    [SerializeField] Text plusHp;
    [SerializeField] Text plusAtk;
    [SerializeField] Text useSasa;
    [SerializeField] Text[] addSasa;
    [SerializeField] Button[] leftArrow;
    [SerializeField] Button[] rightArrow;
    [SerializeField] Button save;
    int maxNormalSasa;

    void Start()
    {

        sound = SoundManager.Instance;
        data = UserDataManager.Instance;

        initialize();
        rightArrow[0].onClick.AddListener(() =>
            {
                if (checkSasaNum())
                {
                    addSasa[0].text = "" + (int.Parse(addSasa[0].text) + 1);
                }
                useSasa.text = "-" + useSasaNum();
                sound.Click();
            });
        rightArrow[1].onClick.AddListener(() =>
            {
                if (checkSasaNum())
                {
                    addSasa[1].text = "" + (int.Parse(addSasa[1].text) + 1);
                }
                useSasa.text = "-" + useSasaNum();
                sound.Click();
            });
        leftArrow[0].onClick.AddListener(() =>
            {
                if (addSasa[0].text != "0")
                {
                    addSasa[0].text = "" + (int.Parse(addSasa[0].text) - 1);
                }
                useSasa.text = "-" + useSasaNum();
                sound.Click();

            });
        leftArrow[1].onClick.AddListener(() =>
            {
                if (addSasa[1].text != "0")
                {
                    addSasa[1].text = "" + (int.Parse(addSasa[1].text) - 1);
                }
                useSasa.text = "-" + useSasaNum();
                sound.Click();
            });

        save.onClick.AddListener(() =>
            {
                if (newUserName.text != "")
                {
                    data.UserName = newUserName.text;
                }
                data.PlusHP += int.Parse(addSasa[0].text);
                data.PlusATK += int.Parse(addSasa[1].text);
                data.NormalSasa -= (int.Parse(addSasa[0].text) + int.Parse(addSasa[1].text));
                data.Save();
                initialize();
                sound.Click();
            });
    }

    bool checkSasaNum()
    {
        if (int.Parse(addSasa[0].text) + int.Parse(addSasa[1].text) == maxNormalSasa)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    int useSasaNum()
    {
        return int.Parse(addSasa[0].text) + int.Parse(addSasa[1].text);
    }

    void initialize()
    {
        userName.text = data.UserName;
        addSasa[0].text = "0";
        addSasa[1].text = "0";
        maxNormalSasa = data.NormalSasa;
        plusHp.text = "HP+ " + data.PlusHP;
        plusAtk.text = "ATK+" + data.PlusATK;
        useSasa.text = "-" + 0;
    }
}
