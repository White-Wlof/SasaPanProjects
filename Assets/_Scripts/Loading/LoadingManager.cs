using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LoadingManager : SingletonMonoBehaviour<LoadingManager>
{

    [SerializeField] Animator loadingAnim;
    [SerializeField] Image[] loadingImages;

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        StartCoroutine(LoadingAnim());
    }

    public void Play()
    {
        foreach (Image i in loadingImages)
        {
            i.enabled = true;
        }
    }

    public void Stop()
    {
        foreach (Image i in loadingImages)
        {
            i.enabled = false;
        }
    }

    IEnumerator LoadingAnim()
    {

        while (true)
        {
            yield return new WaitForSeconds(2);
            if (loadingImages[0].enabled)
            {
                loadingAnim.SetTrigger("OneShot");
            }
        }
        
    }
}
