using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using DG.Tweening;

public class MenuView : MonoBehaviour
{
    const int GrowButton = 0;
    const int PlayButton = 1;
    const int CreateButton = 2;
    [SerializeField] GameObject selectPanel;
    [SerializeField] GameObject[] childPanel;
    [SerializeField] GameObject comment;
    [SerializeField] Button grow;
    [SerializeField] Button play;
    [SerializeField] Button create;
    [SerializeField] Button back;
    SoundManager sound;

    void Start()
    {
        sound = SoundManager.Instance;
        grow.onClick.AddListener(() =>
            {
                selectMenu(GrowButton);
                sound.Click();
            });
        play.onClick.AddListener(() =>
            {
                selectMenu(PlayButton);
                sound.Click();
            });
        create.onClick.AddListener(() =>
            {
                selectMenu(CreateButton);
                sound.Click();
            });
        back.onClick.AddListener(() =>
            {
                hideMenuPanel();
                sound.Click();
            });
    }

    void selectMenu(int menu)
    {
        
        hideMenuPanel();
        StartCoroutine(showMenuPanel(menu));
    }

    void hideMenuPanel()
    {
        selectPanel.transform.DOLocalMoveX(-818, 0.2f);
        comment.SetActive(true);
    }

    IEnumerator showMenuPanel(int menu)
    {
        yield return new WaitForSeconds(0.2f);
        switch (menu)
        {
            case GrowButton:
                childPanel[menu].SetActive(true);
                break;
            case PlayButton:
                childPanel[menu].SetActive(true);
                break;
            case CreateButton:
                childPanel[menu].SetActive(true);
                break;
        }
        for (int i = 0; i < childPanel.Length; i++)
        {
            if (menu != i)
            {
                childPanel[i].SetActive(false);
            }
        }
        comment.SetActive(false);
        selectPanel.transform.DOLocalMoveX(0, 0.2F);
    }
}
