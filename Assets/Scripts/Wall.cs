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

        // �� ������Ʈ�� ��ġ�� -10���� �۾��� ���
        if(transform.position.x < -10)
        {
            // �� ��ũ��Ʈ�� ����� ������Ʈ�� �ı��Ѵ�.
            Destroy(gameObject);
        }
    }
}
