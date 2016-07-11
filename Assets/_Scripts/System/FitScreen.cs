using UnityEngine;
using System.Collections;

public class FitScreen : MonoBehaviour
{
    void Start()
    {
        if (SystemInfo.deviceModel.Contains("iPad") && this.name == "Frame")
        {
            transform.localScale = new Vector3(0.6f, 0.6f, 1);
        }
        else if (SystemInfo.deviceModel.Contains("iPad"))
        {
            transform.localPosition += new Vector3(0, 193, 0);
        }
    }
}
