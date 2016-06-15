using UnityEngine;
using System.Collections;

namespace Game
{

    public class GameUIButton : CharacterOperationMaster
    {

        [SerializeField] Rigidbody playerRb;
        [SerializeField] Transform playerCenter;
        PlayerStateManager state;

        // Use this for initialization
        void Start()
        {
            state = PlayerStateManager.Instance;
        }

        public void pushButton(string buttonName)
        {
            switch (buttonName)
            {
                case "Boost":
                    if (!state.cannonMode)
                    {
                        if (!state.boostFrag && state.boostLevel > 0)
                        {
                            playerBoost(playerRb, state.boostLevel);
                            state.boostFrag = true;
                        } 
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
    }
}
