using UnityEngine;
using System.Collections;

public sealed class PlayerStateManager : MonoBehaviour
{
    private static PlayerStateManager _singleInstance;

    public float ownHp { get; set; }

    public float ownAtk{ get; set; }

    public string rivalName{ get; set; }

    public float rivalHp { get; set; }

    public float rivalAtk{ get; set; }

    public bool cannonMode{ get; set; }

    public bool boostFrag{ get; set; }

    public int boostLevel { get; set; }

    public float revivalBoost { get; set; }

    public bool cannonFrag{ get; set; }

    public float initialVelocityCannon { get; set; }

    public int operability { get; set; }

    public int maxSuccessionCannon { get; set; }

    public int revivalCannon { get; set; }

    public int leafCount{ get; set; }


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
        var data = UserDataManager.Instance;
        ownHp = data.HP + data.PlusHP * 10;
        ownAtk = data.ATK + data.PlusATK / 10F;
        rivalName = "";
        rivalHp = 1000;
        rivalAtk = 10;
        cannonMode = false;
        boostFrag = false;
        boostLevel = 0;
        operability = data.Operability;
        revivalBoost = 0.5f;
        cannonFrag = false;
        initialVelocityCannon = 0;
        maxSuccessionCannon = 5;
        revivalCannon = 1;
        leafCount = 0;
    }
        
}
