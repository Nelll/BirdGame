using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public GameObject WallPrefab;
    public float SpawnTerm = 4;

    float spawnTimer;

    private float score;

    public float Score
    {
        get
        {
            return score;
        }
    }

    private void Awake()
    {
        Instance = this;
    }

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        spawnTimer = 0;
        score = 0;
    }

    // Update is called once per frame
    void Update()
    {
        spawnTimer += Time.deltaTime;
        score += Time.deltaTime;

        if(spawnTimer > 0)
        {
            // 스폰이 되면 다시 spawnTimer를 초기화
            spawnTimer -= SpawnTerm;

            // 지정된 프리팹 생성
            GameObject obj = Instantiate(WallPrefab);
            // 생성되는 프리팹의 위치
            // 카메라 범위 밖 가로 길이 세팅
            // 벽의 세로 위치 랜덤 범위 지정
            obj.transform.position = new Vector2(10, Random.Range(-2f, 2f));
        }
    }
}
