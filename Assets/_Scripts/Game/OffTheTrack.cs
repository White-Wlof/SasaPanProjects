using UnityEngine;
using System.Collections;

public class OffTheTrack : MonoBehaviour
{
    Transform goal;
    // Use this for initialization
    void Start()
    {
        goal = GameObject.FindGameObjectWithTag("GoalLine").transform;
        transform.LookAt(goal.position);
    }
	
    // Update is called once per frame
    void Update()
    {
        transform.position += transform.forward * 0.05f;
    }
}
