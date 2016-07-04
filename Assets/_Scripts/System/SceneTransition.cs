using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{

    public static void Load(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public static void LoadAddtive(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public static void waitLoading(MonoBehaviour m, string sceneName)
    {

        var loadingAnim = LoadingManager.Instance;
        loadingAnim.Play();
        m.StartCoroutine(LoadNext(sceneName));
    }

    public static void UnLoad(string sceneName)
    {
        SceneManager.UnloadScene(sceneName);
    }

    public static IEnumerator LoadNext(string sceneName)
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
        var sound = SoundManager.Instance;
        sound.StopMenuBGM();
        yield return async;

    }
}
