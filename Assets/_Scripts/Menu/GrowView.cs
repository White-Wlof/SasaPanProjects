using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GrowView : MonoBehaviour
{
    UserDataManager data;
    [SerializeField] Text userName;
    [SerializeField] Text newUserName;
    [SerializeField] Button save;

    void Start()
    {
        data = UserDataManager.Instance;
        initialize();
        save.onClick.AddListener(() =>
            {
                data.UserName = newUserName.text;
                data.Save();
                initialize();
            });
    }

    void Update()
    {
        
    }

    void initialize()
    {
        userName.text = data.UserName;
    }
}
