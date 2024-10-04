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
        // 버튼을 눌렀을 때
        if(Input.GetButtonDown("Jump"))
        {
            // PlayOneShot() 한번만 소리가 나온다.
            GetComponent<AudioSource>().PlayOneShot(UpSound);
        }

        // "Jump"는 유니티에서 지정된 키 이름
        // Space Bar로 설정되어있고 설정에서 변경할 수 있다.
        // GetButton : 버튼이 눌러지고 있을 때
        if(Input.GetButton("Jump"))
        {
            v -= Accel * Time.deltaTime;
        }
        else
        {
            // 중력가속도 * 시간변화량 = 속도변화량
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
