﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    [SerializeField] Image boostGage;
    PlayerStateManager state;
    private float boostTimer;
    private int meterCount;

    void Start()
    {
        boostTimer = 0;
        meterCount = 0;
        state = PlayerStateManager.Instance;
    }

    // Update is called once per frame
    void Update()
    {
        if (!state.boostFrag)
        {
            increasingMeter();
        }
        else if (state.boostFrag)
        {
            resetMeter();
        }
    }

    //メーターが増える
    private void increasingMeter()
    {
        boostTimer += Time.deltaTime;
        if (boostTimer >= state.revivalBoost)
        {
            if (boostGage.fillAmount != 0)
            {
                boostGage.fillAmount -= 0.01f;
                meterCount++;
                state.boostLevel = meterCount / 10;
            }
            boostTimer = 0;
        }
    }

    //使ったboostLevel分メーターを減らす
    private void resetMeter()
    {
        var meterDiff = (float)(meterCount % 10) / 100;
        boostGage.fillAmount += 0.01f;
        if (boostGage.fillAmount >= 1 - meterDiff)
        {
            meterCount = meterCount % 10;
            state.boostFrag = false;
        }
    }
}
