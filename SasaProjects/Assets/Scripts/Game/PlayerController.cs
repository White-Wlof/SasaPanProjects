using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour
{

    [SerializeField] Vector3 center;
    [SerializeField] Camera mainCamera;
    private Rigidbody playerRb;
    public bool boost_flag;

    // Use this for initialization
    void Start()
    { 
        playerRb = this.GetComponent<Rigidbody>();
        boost_flag = false;
        this.GetComponent<Rigidbody>().centerOfMass = center;
    }
	
    // Update is called once per frame
    void Update()
    {   
        mainCamera.transform.localPosition = new Vector3(this.transform.position.x, this.transform.position.y + 4.5f, this.transform.position.z - 4);
        playerRotation();
        playerBoost();
    }

    private void playerRotation()
    {
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            this.transform.Rotate(new Vector3(0, 1, 0), -1);
        }
        else if (Input.GetKey(KeyCode.RightArrow))
        {
            this.transform.Rotate(new Vector3(0, 1, 0), 1);
        }
    }

    private void playerBoost()
    {
        if (Input.GetKeyDown(KeyCode.Space) && !boost_flag)
        {
            playerRb.velocity = new Vector3(0, 0, playerRb.velocity.z);
            playerRb.AddForce(transform.forward * 100);
            playerRb.AddForce(new Vector3(0, 10, 0));
            StartCoroutine(Decelerationer());
            boost_flag = true;
        }
    }

    private IEnumerator Decelerationer()
    {
        var num = 0;
        while (num < 5)
        {
            yield return new WaitForSeconds(0.5f);
            playerRb.AddForce(transform.forward * -20);
            num++;
        }
        boost_flag = false;
    }
        
}
