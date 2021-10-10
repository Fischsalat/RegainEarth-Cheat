#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Savegame_Functions.BP_Savegame_Functions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_Savegame_Functions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Savegame_Functions.BP_Savegame_Functions_C");
		return ptr;
	}



	void STATIC_LoadAndApplyControlSettings(bool SetDefaultValues, class UObject* __WorldContext);
	bool STATIC_Load_Invert_Y(class UObject* __WorldContext, bool* Invert_Y);
	bool STATIC_Save_Invert_Y(bool InvertY, class UObject* __WorldContext);
	bool STATIC_Load_Invert_X(class UObject* __WorldContext, bool* Invert_X);
	bool STATIC_Save_Invert_X(bool InvertX, class UObject* __WorldContext);
	bool STATIC_Load_Sensitivity04(class UObject* __WorldContext, float* Sensitivity);
	bool STATIC_Save_Sensitivity04(float Sensitivity, class UObject* __WorldContext);
	bool STATIC_Load_Sensitivity03(class UObject* __WorldContext, float* Sensitivity);
	bool STATIC_Save_Sensitivity03(float Sensitivity, class UObject* __WorldContext);
	bool STATIC_Load_Sensitivity02(class UObject* __WorldContext, float* Sensitivity);
	bool STATIC_Save_Sensitivity02(float Sensitivity, class UObject* __WorldContext);
	bool STATIC_Load_Sensitivity01(class UObject* __WorldContext, float* Sensitivity);
	bool STATIC_Save_Sensitivity01(float Sensitivity, class UObject* __WorldContext);
	bool STATIC_DoesControlSettingsSaveExist(class UObject* __WorldContext);
	bool STATIC_DeleteControlSettingsSave(class UObject* __WorldContext);
	void STATIC_ActivateSoundMixes(class UObject* __WorldContext);
	float STATIC_FindVolume(float Volume, class UObject* __WorldContext);
	void STATIC_SetMusicOn(bool bMusicOn, class UObject* __WorldContext);
	void STATIC_SetOutputProfile(int OutputProfile, class UObject* __WorldContext);
	void STATIC_SetVolume_SoundEffects(float Volume, class UObject* __WorldContext);
	void STATIC_SetVolume_Dialogue(float Volume, class UObject* __WorldContext);
	void STATIC_SetVolume_Music(float Volume, class UObject* __WorldContext);
	void STATIC_SetVolume_Master(float Volume, class UObject* __WorldContext);
	void STATIC_LoadAndApplyAudioSettings(bool SetDefaultValues, class UObject* __WorldContext);
	bool STATIC_DoesAudioSettingsSaveExist(class UObject* __WorldContext);
	bool STATIC_DeleteAudioSettingsSave(class UObject* __WorldContext);
	bool STATIC_Load_Subtitles(class UObject* __WorldContext, bool* bSubtitles);
	bool STATIC_Save_Subtitles(bool bSubtitles, class UObject* __WorldContext);
	bool STATIC_Load_MusicOn(class UObject* __WorldContext, bool* bMusic);
	bool STATIC_Save_MusicOn(bool bMusic, class UObject* __WorldContext);
	bool STATIC_Load_OutputProfile(class UObject* __WorldContext, int* OutputProfile);
	bool STATIC_Save_OutputProfile(int OutputProfile, class UObject* __WorldContext);
	bool STATIC_Load_SoundEffectsVolume(class UObject* __WorldContext, float* SoundEffectsVolume);
	bool STATIC_Save_SoundEffectsVolume(float SoundEffectsVolume, class UObject* __WorldContext);
	bool STATIC_Load_DialogueVolume(class UObject* __WorldContext, float* DialogueVolume);
	bool STATIC_Save_DialogueVolume(float DialogueVolume, class UObject* __WorldContext);
	bool STATIC_Load_MusicVolume(class UObject* __WorldContext, float* MusicVolume);
	bool STATIC_Save_MusicVolume(float MusicVolume, class UObject* __WorldContext);
	bool STATIC_Load_MasterVolume(class UObject* __WorldContext, float* MasterVolume);
	bool STATIC_Save_MasterVolume(float MasterVolume, class UObject* __WorldContext);
	bool STATIC_LoadPostProcessQuality(class UObject* __WorldContext, int* PostProcessQuality);
	bool STATIC_SavePostProcessQuality(int PostProcessQuality, class UObject* __WorldContext);
	bool STATIC_LoadViewDistance(class UObject* __WorldContext, int* ViewDistanceQuality);
	bool STATIC_SaveViewDistance(int ViewDistanceQuality, class UObject* __WorldContext);
	bool STATIC_LoadFoliageQuality(class UObject* __WorldContext, int* FoliageQuality);
	bool STATIC_SaveFoliageQuality(int FoliageQuality, class UObject* __WorldContext);
	bool STATIC_LoadAAQuality(class UObject* __WorldContext, int* AAQuality);
	bool STATIC_SaveAAQuality(int AAQuality, class UObject* __WorldContext);
	bool STATIC_LoadVisualEffectsQuality(class UObject* __WorldContext, int* VisualEffectsQuality);
	bool STATIC_SaveVisualEffectsQuality(int VisualEffectsQuality, class UObject* __WorldContext);
	bool STATIC_LoadShadowQuality(class UObject* __WorldContext, int* ShadowQuality);
	bool STATIC_SaveShadowQuality(int ShadowQuality, class UObject* __WorldContext);
	bool STATIC_LoadTextureQuality(class UObject* __WorldContext, int* TextureQuality);
	bool STATIC_SaveTextureQuality(int TextureQuality, class UObject* __WorldContext);
	bool STATIC_LoadVsync(class UObject* __WorldContext, bool* VerticalSync);
	bool STATIC_SaveVsync(bool VerticalSync, class UObject* __WorldContext);
	bool STATIC_LoadFrameRateLimit(class UObject* __WorldContext, float* FrameRateLimit);
	bool STATIC_SaveFrameRateLimit(float FrameRateLimit, class UObject* __WorldContext);
	bool STATIC_LoadDynamicResolution(class UObject* __WorldContext, bool* DynamicResolution);
	bool STATIC_SaveDynamicResolution(bool DynamicResolution, class UObject* __WorldContext);
	bool STATIC_LoadResolutionScale(class UObject* __WorldContext, float* ResolutionScale);
	bool STATIC_SaveResolutionScale(float ResolutionScale, class UObject* __WorldContext);
	void STATIC_LoadAndApplyGraphicSettings(bool SetDefaultValues, bool bUseBenchmarkTest, class UObject* __WorldContext);
	bool STATIC_LoadWindowMode(class UObject* __WorldContext, TEnumAsByte<Engine_EWindowMode>* WindowMode);
	bool STATIC_SaveWindowMode(TEnumAsByte<Engine_EWindowMode> WindowMode, class UObject* __WorldContext);
	bool STATIC_DeleteVideoSettingsSave(class UObject* __WorldContext);
	bool STATIC_LoadScreenResolution(class UObject* __WorldContext, struct FIntPoint* ScreenResolution);
	bool STATIC_DoesVideoSettingsSaveExist(class UObject* __WorldContext);
	bool STATIC_SaveScreenResolution(const struct FIntPoint& ScreenResolution, class UObject* __WorldContext);
	bool STATIC_LoadAxisMappingScales_Gamepad(class UObject* __WorldContext, TArray<float>* AxisMappingScales_Gamepad);
	bool STATIC_LoadAxisMappingScales_KeyboardMouse(class UObject* __WorldContext, TArray<float>* AxisMappingScales_KeyboardMouse);
	bool STATIC_SaveAxisMappingScales_Gamepad(TArray<float>* Scales, class UObject* __WorldContext);
	bool STATIC_SaveAxisMappingScales_KeyboardMouse(TArray<float>* ScaleValues, class UObject* __WorldContext);
	bool STATIC_LoadAxisMappings_Gamepad(class UObject* __WorldContext, TMap<struct FName, struct FKey>* AxisMappings_Gamepad);
	bool STATIC_LoadAxisMappings_KeyboardMouse(class UObject* __WorldContext, TMap<struct FName, struct FKey>* AxisMappings_KeyboardMouse);
	bool STATIC_LoadActionMappings_Gamepad(class UObject* __WorldContext, TMap<struct FName, struct FKey>* ActionMappings_Gamepad);
	bool STATIC_SaveAxisMappings_Gamepad(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext);
	bool STATIC_SaveAxisMappings_KeyboardMouse(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext);
	bool STATIC_SaveActionMappings_Gamepad(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext);
	bool STATIC_LoadActionMappings_KeyboardMouse(class UObject* __WorldContext, TMap<struct FName, struct FKey>* ActionMappings_KeyboardMouse);
	bool STATIC_SaveActionMappings_KeyboardMouse(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext);
	bool STATIC_DoesInputDefaultsExist(class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
