using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectOrderGameManager : MonoBehaviour
{
    [SerializeField] OrderSelectButtons[] myButtons;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {


    }


    public bool CheckButtonOrder()
    {
        for(int i=0; i<myButtons.Length; i++)
        {
            if(i+1 != myButtons[i].selectedObjectID)
            {
                return false;
            }
        }
        return true;
    }
}
