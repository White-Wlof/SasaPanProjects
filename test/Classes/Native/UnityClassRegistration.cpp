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

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

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
	//Total: 92 classes
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

	//6. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//24. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//25. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//26. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//29. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//32. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//33. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//36. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//37. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//38. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//39. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//40. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//41. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//42. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//43. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//44. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//45. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//46. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//47. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//48. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//49. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//50. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//53. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//54. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//55. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//56. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//57. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//58. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//59. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//60. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//61. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//62. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//63. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//64. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//65. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//66. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//67. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//68. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//69. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//70. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//71. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//72. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//73. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//74. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//75. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//76. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//77. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//78. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//79. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//80. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//81. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//82. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//83. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//84. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//85. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//86. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//87. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//88. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//89. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//90. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//91. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
