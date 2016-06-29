using UnityEngine;
using System.Collections;

public static class Prefabs
{

    public static class GameObj
    {
        public static GameObject PlayerCannonBall { get { return Resources.Load("Prefabs/GameObj/PlayerCannonBall") as GameObject; } }

        public static GameObject RivalCannonBall { get { return Resources.Load("Prefabs/GameObj/RivalCannonBall") as GameObject; } }

        public static GameObject SasaLeaf { get { return Resources.Load("Prefabs/GameObj/SasaLeaf") as GameObject; } }


    }
}
