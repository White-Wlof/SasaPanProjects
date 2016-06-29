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
	//Total: 94 classes
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

	//6. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//7. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//8. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//11. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//12. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//13. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//25. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//26. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//27. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//30. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//31. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//32. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//33. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//34. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//35. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//36. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//37. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//38. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//39. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//40. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//41. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//42. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//43. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//44. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//45. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//46. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//47. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//48. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//49. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//50. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//51. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//52. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//53. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//54. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//55. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//56. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//57. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//58. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//59. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//60. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//61. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//62. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//63. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//64. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//65. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//66. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//67. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//68. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//69. WorldParticleCollider
	void RegisterClass_WorldParticleCollider();
	RegisterClass_WorldParticleCollider();

	//70. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//71. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//72. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//73. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//74. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//75. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//76. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//77. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//78. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//79. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//80. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//81. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//82. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//83. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//84. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//85. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//86. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//87. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//88. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//89. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//90. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//91. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//92. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//93. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
