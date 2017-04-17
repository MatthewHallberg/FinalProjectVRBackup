using UnityEngine;
using System.Collections;

public class EnemyBehavior : MonoBehaviour {

	private GameObject player;
	private bool turning = false;
	private bool turnWasStarted = false;
	private int hitCount = 0;

	// Use this for initialization
	void Start () {

		player = GameObject.Find ("ARCamera");
		transform.LookAt (player.transform);
		StartCoroutine ("InitialShots");
	}

	void Update () {

		if (gameObject != null) {
			
			transform.Translate (Vector3.forward * 3f * Time.deltaTime);

			float distance = Vector3.Distance (player.transform.position, transform.position);

			//if distance to player is less than 20 start turn procedure
			if (distance < 12 && !turnWasStarted) {
				turnWasStarted = true;
				StartCoroutine ("Turn");
			}

			if (turning) {
				transform.eulerAngles += new Vector3 (0, 1f, 0);
				transform.eulerAngles = new Vector3 (0f, transform.eulerAngles.y, transform.eulerAngles.z);
			}
		}

	}

	IEnumerator Turn(){
		StopCoroutine ("Shoot");
		StopCoroutine ("InitialShots");
		turning = true;
		yield return new WaitForSeconds(UnityEngine.Random.Range(1f,4f));
		turning = false;
		turnWasStarted = false;
		yield return new WaitForSeconds(UnityEngine.Random.Range(8f,13f));
		transform.LookAt(player.transform);
		StartCoroutine ("Shoot");
	}

	IEnumerator Shoot(){

		while (true) {
			GameObject enemyBullet = Instantiate (Resources.Load ("enemyBullet"), transform.position, transform.rotation) as GameObject;
			enemyBullet.GetComponent<AudioSource> ().Play ();
			Destroy (enemyBullet, 5);
			yield return new WaitForSeconds (UnityEngine.Random.Range(1f,3f));
		}
	}

	IEnumerator InitialShots(){

		while (true) {
			yield return new WaitForSeconds (UnityEngine.Random.Range(2f,5f));
			GameObject enemyBullet = Instantiate (Resources.Load ("enemyBullet"), transform.position, transform.rotation) as GameObject;
			enemyBullet.GetComponent<AudioSource> ().Play ();
			Destroy (enemyBullet, 5);
		}
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

				Destroy (gameObject);
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
	}

}