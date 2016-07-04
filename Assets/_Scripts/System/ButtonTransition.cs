using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonTransition : MonoBehaviour
{
    SoundManager sound;

    void Start()
    {
        sound = SoundManager.Instance;
    }

    public void sceneTransition(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
        sound.Click();
    }

    public void sceneTransitionAdditive(string sceneName)
    {
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
        sound.Click();

    }

    public void sceneTransitionLoading(string sceneName)
    {
        var loadingAnim = LoadingManager.Instance;
        loadingAnim.Play();
        Resources.UnloadUnusedAssets();
        StartCoroutine(LoadNext(sceneName));
        sound.Click();

    }

    IEnumerator LoadNext(string sceneName)
    {   
        var timer = 0f;
        // 非同期でロード開始
        var async = SceneManager.LoadSceneAsync(sceneName);
        // 非同期読み込み中の処理
        async.allowSceneActivation = false;
        while (async.progress < 0.9f || timer < 3)
        {
            timer += Time.deltaTime;
            Debug.Log(async.progress);
            yield return new WaitForEndOfFrame();
        }
        async.allowSceneActivation = true;
        var loadingAnim = LoadingManager.Instance;
        loadingAnim.Stop();
        sound.StopMenuBGM();
        yield return async;

    }
}
