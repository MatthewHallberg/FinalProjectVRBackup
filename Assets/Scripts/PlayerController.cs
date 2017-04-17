using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {

	public GameObject blood;
	private Image bloodImage;
	private bool shouldLerp = false;
	public gunController gc;

	// Use this for initialization
	void Start () {
		gc = GetComponent<gunController> ();
		bloodImage = blood.GetComponent<Image> ();
		Color tempcolor = bloodImage.color;
		tempcolor.a = 0;
		bloodImage.color = tempcolor;
	}
	
	// Update is called once per frame
	void Update () {

		if (shouldLerp) {
			Color tempcolor = bloodImage.color;
			tempcolor.a = Mathf.Lerp (tempcolor.a, 0, Time.deltaTime);
			bloodImage.color = tempcolor;
			if (tempcolor.a == 0) {
				shouldLerp = false;
			}
		}
	}


	void OnTriggerEnter (Collider col)
	{
		if (!gc.shieldIsUp && col.gameObject.name.Contains ("enemyBullet")) {
			Destroy (col.gameObject);
			GetComponent<AudioSource> ().Play ();
			bloodImage.color = Color.white;
			shouldLerp = true;
		}
	}
}
