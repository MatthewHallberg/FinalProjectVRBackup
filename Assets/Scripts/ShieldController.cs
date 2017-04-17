using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldController : MonoBehaviour {

	void OnTriggerEnter (Collider col)
	{
		if (col.name.Contains ("enemyBullet")) {

			Destroy (col.gameObject);
			GetComponent<AudioSource> ().Play ();
			GameObject sparks = Instantiate (Resources.Load ("Sparks", typeof(GameObject))) as GameObject;
			sparks.transform.position = col.transform.position;
			Destroy (sparks,.5f);
		}
	}
}
