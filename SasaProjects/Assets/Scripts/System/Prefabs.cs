using UnityEngine;
using System.Collections;

public static class Prefabs
{

    public static class GameObj
    {
        public static GameObject CannonBall { get { return Resources.Load("Prefabs/GameObj/CannonBall") as GameObject; } }
    }
}
