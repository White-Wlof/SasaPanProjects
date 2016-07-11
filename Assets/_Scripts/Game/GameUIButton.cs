using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace Game
{

    public class GameUIButton : CharactorOperationMaster
    {

        [SerializeField] Rigidbody playerRb;
        [SerializeField] Transform playerCenter;
        [SerializeField] Image lineEffect;
        [SerializeField] AudioSource boostAudio;
        GameObject player;
        PlayerStateManager state;

        // Use this for initialization
        void Start()
        {
            state = PlayerStateManager.Instance;
            player = GameObject.FindGameObjectWithTag("Player");
            playerRb = player.GetComponent<Rigidbody>();
        }

        public void pushButton(string buttonName)
        {
            switch (buttonName)
            {
                case "Boost":
                    if (!state.boostFrag && state.boostLevel > 0)
                    {
                        playerBoost(player, playerRb, state.boostLevel);
                        boostAudio.PlayOneShot(boostAudio.clip);
                        lineEffect.enabled = true;
                        StartCoroutine(endEffect(0.5F * state.boostLevel));
                        state.boostFrag = true;
                        state.cannonMode = false;
                    } 
                    break;
                case "Cannon":
                    if (!state.cannonMode)
                    {
                        state.cannonMode = true;
                    }
                    else
                    {
                        state.cannonMode = false;
                        playerCenter.eulerAngles = Vector3.zero;
                    }
                    break;
            }
        }

        IEnumerator endEffect(float time)
        {
            yield return new WaitForSeconds(time);
            lineEffect.enabled = false;
        }
    }
}
