struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 87 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//22. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//23. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//24. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//25. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//26. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//27. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//28. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//29. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//30. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//31. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//32. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//33. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//34. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//35. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//36. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//37. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//38. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//39. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//40. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//41. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//42. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//43. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//44. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//45. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//46. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//47. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//48. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//49. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//57. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//58. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//59. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//60. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//61. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//64. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//65. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//66. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//67. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//68. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//69. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//70. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//71. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//72. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//73. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//74. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//75. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//76. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//77. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//78. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//79. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//80. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//81. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//82. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//83. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//84. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//85. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
