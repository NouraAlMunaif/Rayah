using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CoinUpdater : MonoBehaviour
{
    [SerializeField] Text coinText;
    // Start is called before the first frame update
    void Start()
    {
        coinText.text = PlayerData.score.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
