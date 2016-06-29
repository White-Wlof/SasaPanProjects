using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerHpView : MonoBehaviour
{
    [SerializeField] Slider ownHpSlider;
    [SerializeField] Slider rivalHpSlider;
    PlayerStateManager state;

    void Start()
    {
        state = PlayerStateManager.Instance;
        ownHpSlider.maxValue = state.ownHp;
        rivalHpSlider.maxValue = state.rivalHp;
        ownHpSlider.value = state.ownHp;
        rivalHpSlider.value = state.rivalHp;
    }

    public void updateOwnHp()
    {
        ownHpSlider.value = state.ownHp;
    }

    public void updateRivalHp()
    {
        rivalHpSlider.value = state.rivalHp;
    }
}
