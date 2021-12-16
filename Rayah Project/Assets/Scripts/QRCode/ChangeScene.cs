using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public string scenename;
    void Start()
    {
        StartCoroutine(TriggerScene());
    }

    IEnumerator TriggerScene()
    {
        yield return new WaitForSeconds(3);
        SceneManager.LoadScene("scenename");
    }
}
