using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CreateView : MonoBehaviour
{
    UserDataManager data;
    SoundManager sound;
    [SerializeField] Text operability;
    [SerializeField] Text weight;
    [SerializeField] Text useSasa;
    [SerializeField] Text[] addSasa;
    [SerializeField] Button[] leftArrow;
    [SerializeField] Button[] rightArrow;
    [SerializeField] Button save;
    int maxGoldSasa;

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
                if ((int.Parse(addSasa[1].text) + 1 <= maxGoldSasa) && int.Parse(addSasa[1].text) + int.Parse(addSasa[0].text) != maxGoldSasa)
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
                if (Mathf.Abs(int.Parse(addSasa[1].text) - 1) <= maxGoldSasa && (int.Parse(addSasa[1].text) - int.Parse(addSasa[0].text) >= -maxGoldSasa) && int.Parse(addSasa[1].text) - int.Parse(addSasa[0].text) != -maxGoldSasa)
                {
                    addSasa[1].text = "" + (int.Parse(addSasa[1].text) - 1);
                }
                useSasa.text = "-" + useSasaNum();
                sound.Click();
            });

        save.onClick.AddListener(() =>
            {
                data.Operability += int.Parse(addSasa[0].text);
                data.Weight += int.Parse(addSasa[1].text);
                data.GoldSasa -= (int.Parse(addSasa[0].text) + Mathf.Abs(int.Parse(addSasa[1].text)));
                data.Save();
                initialize();
                sound.Click();
            });
    }

    bool checkSasaNum()
    {
        if ((int.Parse(addSasa[0].text) + Mathf.Abs(int.Parse(addSasa[1].text))) == maxGoldSasa)
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
        return int.Parse(addSasa[0].text) + Mathf.Abs(int.Parse(addSasa[1].text));
    }

    void initialize()
    {
        addSasa[0].text = "0";
        addSasa[1].text = "0";
        maxGoldSasa = data.GoldSasa;
        operability.text = "操作性+" + data.Operability;
        if (data.Weight >= 0)
        {
            weight.text = "重量+" + data.Weight;
        }
        else
        {
            weight.text = "重量" + data.Weight;
        }
        useSasa.text = "-" + 0;
    }
}

