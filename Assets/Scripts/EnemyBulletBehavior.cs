using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBulletBehavior : MonoBehaviour {

	private GameObject player;
	private Rigidbody rb;

	// Use this for initialization
	void Start () {
		player = GameObject.Find ("ARCamera");
		rb = GetComponent<Rigidbody> ();
		rb.velocity = transform.forward * 40f;
	}
	
	// Update is called once per frame
	void Update () {
		if (gameObject != null && player != null) {
			transform.LookAt (player.transform);
		}
	}
}
