using UnityEngine;
using System.Collections;

public class EnemyBehavior : MonoBehaviour {

	private GameObject player;
	public GameObject spawnPoint;
	private bool turning = false;
	private bool turnWasStarted = false;
	private bool shooting;
	private int hitCount = 0;
	private int frameCount = 0;
	private int FrameDelta;

	// Use this for initialization
	void Start () {

		player = GameObject.Find ("playerTarget");
		transform.LookAt (player.transform);
		spawnPoint.transform.LookAt(player.transform);
		shooting = true;
		FrameDelta = UnityEngine.Random.Range (90, 280);
	}

	void Update () {

		frameCount++;

		if (gameObject != null && player != null) {
			
			transform.Translate (Vector3.forward * 3f * Time.deltaTime);

			float distance = Vector3.Distance (player.transform.position, transform.position);

			//if distance to player is less than 20 start turn procedure
			if (distance < 25 && !turnWasStarted) {
				turnWasStarted = true;
				StopAllCoroutines ();
				StartCoroutine ("Turn");
			}

			if (turning) {
				transform.eulerAngles += new Vector3 (0, 1f, 0);
				transform.eulerAngles = new Vector3 (0f, transform.eulerAngles.y, transform.eulerAngles.z);
			}

			if (shooting && frameCount % FrameDelta == 0) {

				Shoot ();
			}
		}
	}

	IEnumerator Turn(){
		turning = true;
		shooting = false;
		yield return new WaitForSeconds(UnityEngine.Random.Range(1f,4f));
		turning = false;
		yield return new WaitForSeconds(UnityEngine.Random.Range(5f,17f));
		transform.LookAt(player.transform);
		spawnPoint.transform.LookAt(player.transform);
		shooting = true;
		StopAllCoroutines ();
		turnWasStarted = false;
	}

	void Shoot(){
		
			GameObject enemyBullet = Instantiate (Resources.Load ("enemyBullet"), spawnPoint.transform.position, spawnPoint.transform.rotation) as GameObject;
			enemyBullet.GetComponent<AudioSource> ().Play ();
			Destroy (enemyBullet, 5);
	}


	//for this to work both need colliders, one must have rigid body (spaceship) the other must have is trigger checked.
	void OnTriggerEnter (Collider col)
	{
		if (!col.name.Contains ("enemy")) {

			hitCount++;

			if (hitCount > 4) {
				GameObject explosion = Instantiate (Resources.Load ("FlareMobile", typeof(GameObject))) as GameObject;
				explosion.transform.position = transform.position;
				Destroy (col.gameObject);
				Destroy (explosion, 3);
				explosion.GetComponent<AudioSource> ().Play ();

				CreateNewEnemy ();
			}
		}
	}

	void CreateNewEnemy(){

		GameObject newEnemy = Instantiate(Resources.Load("enemy", typeof(GameObject))) as GameObject;
		float x = UnityEngine.Random.Range (-70f, 70f);
		float y = UnityEngine.Random.Range (0, 25f);
		float z = UnityEngine.Random.Range (-80f, 80f);

		newEnemy.transform.position = new Vector3(x,y,z);
		transform.eulerAngles = new Vector3 (0f, transform.eulerAngles.y, transform.eulerAngles.z);
		Destroy (gameObject);
	}

}