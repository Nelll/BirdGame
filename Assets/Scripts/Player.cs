using UnityEngine;
using UnityEngine.SceneManagement;

public class Player : MonoBehaviour
{
    public float Gravity = 10f;
    public float Accel = 10f;
    float v = 0;

    public AudioClip UpSound;
    public AudioClip DownSound;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // ��ư�� ������ ��
        if(Input.GetButtonDown("Jump"))
        {
            // PlayOneShot() �ѹ��� �Ҹ��� ���´�.
            GetComponent<AudioSource>().PlayOneShot(UpSound);
        }

        // "Jump"�� ����Ƽ���� ������ Ű �̸�
        // Space Bar�� �����Ǿ��ְ� �������� ������ �� �ִ�.
        // GetButton : ��ư�� �������� ���� ��
        if(Input.GetButton("Jump"))
        {
            v -= Accel * Time.deltaTime;
        }
        else
        {
            // �߷°��ӵ� * �ð���ȭ�� = �ӵ���ȭ��
            v += Gravity * Time.deltaTime;
        }
    }

    private void FixedUpdate()
    {
        transform.Translate(Vector2.down * Time.deltaTime * v);
    }

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.CompareTag("Wall"))
        {
            int score = (int)GameManager.Instance.Score;

            PlayerPrefs.SetInt("Score", score);

            SceneManager.LoadScene("GameOver");
        }
    }
}
