struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

}

void RegisterAllClasses()
{
	//Total: 44 classes
	//0. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//4. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//5. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//10. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//11. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//12. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//15. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//16. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//20. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//21. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//22. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//23. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//24. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//25. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//26. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//27. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//28. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//29. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//30. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//31. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//32. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//33. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//34. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//35. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//36. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//37. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//38. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//39. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//40. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//41. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//42. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//43. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
