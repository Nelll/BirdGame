using TMPro;
using UnityEngine;

public class DisplayScore : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float score = GameManager.Instance.Score;

        // score 오브젝트의 text에 접근
        // float로 되어있는 score를 int 형변환후 다시 string 형변환
        GetComponent<TextMeshProUGUI>().text = ((int)score).ToString();
    }
}
