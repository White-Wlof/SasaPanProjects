using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace Game
{
    public class PlayerCollider : MonoBehaviour
    {
        [SerializeField] GameObject offPanda;
        [SerializeField] GameObject wallow;
        [SerializeField] BoxCollider ownCollider;
        [SerializeField] Rigidbody playerRb;
        [SerializeField] GameObject[] children;
        Image panel;
        PlayerStateManager state;
        PlayerHpView hp;
        Vector3 onRiver;
        const string CannonBall = "CannonBall";
        const string Field = "Field";
        const string Player = "Player";
        const string Rival = "Rival";
        const string River = "River";
        const string SasaLeaf = "SasaLeaf";
        bool isField;
        bool isRide;
        float isFieldTimer;
        [SerializeField] AudioSource itemAudio;

        [SerializeField] int ballDamage = 20;
        [SerializeField] int fieldDamage = 2;

        void Start()
        {
            isField = false;
            isRide = true;
            state = PlayerStateManager.Instance;
            panel = GameObject.FindGameObjectWithTag("Panel").GetComponent<Image>();
            hp = GameObject.FindGameObjectWithTag("Canvas").GetComponent<PlayerHpView>();
        }

        void OnCollisionEnter(Collision collision)
        {
            if (this.transform.tag == "Player")
            {
                switch (collision.transform.tag)
                {
                    case CannonBall:
                        state.ownHp -= ballDamage;

                        break;
                    case Field:
                        isField = true;
                        isFieldTimer = 0;
                        state.ownHp -= fieldDamage;
                        break;
                }
            }
            else
            {
                switch (collision.transform.tag)
                {
                    case CannonBall:
                        state.rivalHp -= ballDamage;

                        break;
                    case Field:
                        isField = true;
                        isFieldTimer = 0;
                        state.rivalHp -= fieldDamage;
                        break;
                }
            }
            hp.updateOwnHp();
            hp.updateRivalHp();
            wallowPlayer();
        }

        void OnCollisionStay(Collision collision)
        {
            if (this.transform.tag == "Player")
            {
                switch (collision.transform.tag)
                {
                    case River:
                        onRiver = transform.position;
                        break;
                    case Field:
                        if (isRide)
                        {
                            state.ownHp -= fieldDamage;
                            offTheTrack();
                        }
                        break;
                    case Rival:
                        state.ownHp -= state.rivalAtk;
                        break;
                }
               
            }
            else
            {
                switch (collision.transform.tag)
                {
                    case Field:
                        if (isRide)
                        {
                            state.rivalHp -= fieldDamage;
                            offTheTrack();
                        }
                        break;
                    case Player:
                        state.rivalHp -= state.ownAtk;
                        break;
                }
            }
            hp.updateOwnHp();
            hp.updateRivalHp();
            wallowPlayer();
        }

        void OnCollisionExit(Collision collision)
        {
            switch (collision.transform.tag)
            {
                case Field:
                    isField = false;
                    break;
            }
        }


        void OnTriggerEnter(Collider collider)
        {
            if (collider.transform.tag == SasaLeaf && this.transform.tag == Player)
            {
                state.leafCount += 1;
                itemAudio.PlayOneShot(itemAudio.clip);
                Destroy(collider.gameObject);
            }
            else if (collider.transform.tag == SasaLeaf)
            {
                Destroy(collider.gameObject);
            }
        }



        void offTheTrack()
        {
            isFieldTimer += Time.deltaTime;
            if (isFieldTimer > 2.0f && isField)
            {
               
                playerActive(false);
                offPanda.transform.LookAt(onRiver);
                StartCoroutine(backToTrack());
                isField = false;
                //transform.position = onRiver;
            }
        }

        void playerActive(bool isTrack)
        {
            if (isTrack)
            {
                playerRb.useGravity = true;
                ownCollider.enabled = true;
                offPanda.SetActive(false);
                offPanda.transform.localPosition = new Vector3(0, 0, 0.66f);
                foreach (GameObject g in children)
                {
                    g.SetActive(true);
                }
            }
            else
            {
                playerRb.useGravity = false;
                playerRb.velocity = Vector3.zero;
                ownCollider.enabled = false;
                offPanda.SetActive(true);
                foreach (GameObject g in children)
                {
                    g.SetActive(false);
                }
            }
        }

        void wallowPlayer()
        {
            if (this.transform.tag == Player)
            {
                if (state.ownHp <= 0 && isFieldTimer == 0 && isRide)
                {
                    playerActive(false);
                    wallow.SetActive(true);
                    offPanda.SetActive(false);
                    isRide = false;
                }
            }
            else
            {
                if (state.rivalHp <= 0)
                {
                    playerActive(false);
                    wallow.SetActive(true);
                    offPanda.SetActive(false);
                    isRide = false;
                    Debug.Log("死んだ〜");
                }
            }
        }

        IEnumerator backToTrack()
        {
            yield return new WaitForSeconds(3);
            StartCoroutine(blackOutPanel());
        }

        IEnumerator blackOutPanel()
        {
            while (panel.color.a < 1.0f)
            {
                panel.color += new Color(0, 0, 0, 0.05f);
                yield return new WaitForSeconds(0.1f);
            }
            playerActive(true);
            transform.position = onRiver;
            isFieldTimer = 0;
            if (state.ownHp <= 0 && isRide)
            {
                playerActive(false);
                playerRb.useGravity = true;
                ownCollider.enabled = true;
                wallow.SetActive(true);
                offPanda.SetActive(false);
                isRide = false;
            }
            panel.color = new Color(0, 0, 0, 0);
        }
    }
}
