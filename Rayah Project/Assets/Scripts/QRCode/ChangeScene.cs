using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public static ChangeScene instance;
    public string scenename;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        StartCoroutine(TriggerScene());
    }

    IEnumerator TriggerScene()
    {
        yield return new WaitForSeconds(3);
        SceneManager.LoadScene(scenename);
    }
}
