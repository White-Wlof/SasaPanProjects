using UnityEngine;
using System.Collections;

public class SoundManager : SingletonMonoBehaviour<SoundManager>
{

    [SerializeField] AudioSource[] audioSource;

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    public void Click()
    {
        audioSource[1].PlayOneShot(audioSource[1].clip);
    }

    public void playMenuBGM()
    {
        audioSource[0].PlayOneShot(audioSource[0].clip);

    }

    public void StopMenuBGM()
    {
        audioSource[0].Stop();

    }

}
