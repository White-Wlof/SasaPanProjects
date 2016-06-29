using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonTransition : MonoBehaviour
{

    public void sceneTransition(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void sceneTransitionAdditive(string sceneName)
    {
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);

    }

    public void sceneTransitionLoading(string sceneName)
    {
        var loadingAnim = LoadingManager.Instance;
        loadingAnim.Play();
        Resources.UnloadUnusedAssets();
        StartCoroutine(LoadNext(sceneName));
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
        yield return async;

    }
}
