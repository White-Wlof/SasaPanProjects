using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {
	
    }
	
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            //this.transform.position += new Vector3(-0.1f, 0, 0);
            this.GetComponent<Rigidbody>().AddForce(new Vector3(-10, 0, 0));
        }
        else if (Input.GetKey(KeyCode.RightArrow))
        {
            //this.transform.position += new Vector3(0.1f, 0, 0);
            this.GetComponent<Rigidbody>().AddForce(new Vector3(10, 0, 0));
        }
    }
}
