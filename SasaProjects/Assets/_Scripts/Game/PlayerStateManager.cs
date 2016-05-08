using UnityEngine;
using System.Collections;

public sealed class PlayerStateManager : MonoBehaviour
{
    private static PlayerStateManager _singleInstance;

    public int hp { get; set; }

    public int atk{ get; set; }

    public bool cannonMode{ get; set; }

    public bool boostFrag{ get; set; }

    public int boostLevel { get; set; }

    public float revivalBoost { get; set; }

    public bool cannonFrag{ get; set; }

    public float initialVelocityCannon { get; set; }

    public int maxSuccessionCannon { get; set; }

    public int revivalCannon { get; set; }


    public static PlayerStateManager Instance
    {
        get
        {

            if (_singleInstance == null)
            {

                GameObject status = new GameObject("PlayerStatus");
                _singleInstance = status.AddComponent<PlayerStateManager>();
            }
            return _singleInstance;
        }
    }

    // Use this for initialization
    void Awake()
    {
        
        hp = 300;
        atk = 50;
        cannonMode = false;
        boostFrag = false;
        boostLevel = 0;
        revivalBoost = 0.5f;
        cannonFrag = false;
        initialVelocityCannon = 200;
        maxSuccessionCannon = 5;
        revivalCannon = 1;
    }
}
