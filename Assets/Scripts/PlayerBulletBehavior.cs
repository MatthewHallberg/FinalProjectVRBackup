using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBulletBehavior : MonoBehaviour {

	private GameObject Site;
	private Rigidbody rb;

	// Use this for initialization
	void Start () {
		Site = GameObject.Find ("Site");
		rb = GetComponent<Rigidbody> ();
		if (gameObject != null && Site != null) {
			transform.LookAt (Site.transform);
			rb.velocity = transform.forward * 80f;
		}
	}
}
