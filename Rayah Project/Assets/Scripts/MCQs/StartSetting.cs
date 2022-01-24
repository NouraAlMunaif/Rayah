using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartSetting : MonoBehaviour
{
    public bool startSettingOpen;
    public GameObject[] _falseObjects;
    public GameObject[] trueObjects;

    void Start()
    {
        if (startSettingOpen)
        {
            foreach (GameObject f in _falseObjects)
            {
                f.SetActive(false);
            }

            foreach (GameObject t in trueObjects)
            {
                t.SetActive(true);
            }
        }
    }
}
