using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class UpdateScore : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI score;
    // Start is called before the first frame update
    void Start()
    {
        score.text = PlayerData.score.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
