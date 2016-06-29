using UnityEngine;
using System.Collections;

public class LeafSpawner : MonoBehaviour
{
    //[SerializeField] GameObject player;
    GameObject leaf;
    [SerializeField] Vector3[] points;

    void Start()
    {
        leaf = Prefabs.GameObj.SasaLeaf;
        for (int i = 0; i < points.Length; i++)
        {
            Instantiate(leaf, points[i], Quaternion.identity);
        }
    }

    //    void Update()
    //    {
    //        if (Input.GetKeyDown(KeyCode.S))
    //        {
    //            Debug.Log("points : " + player.transform.position);
    //        }
    //
    //    }
}
