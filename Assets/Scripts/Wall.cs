using UnityEngine;

public class Wall : MonoBehaviour
{
    public float Speed = 2;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.left * Time.deltaTime * Speed);

        // 벽 오브젝트의 위치가 -10보다 작아질 경우
        if(transform.position.x < -10)
        {
            // 이 스크립트가 적용된 오브젝트를 파괴한다.
            Destroy(gameObject);
        }
    }
}
