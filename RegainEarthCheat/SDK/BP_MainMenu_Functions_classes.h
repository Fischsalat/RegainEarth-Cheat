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

// BlueprintGeneratedClass BP_MainMenu_Functions.BP_MainMenu_Functions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_MainMenu_Functions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenu_Functions.BP_MainMenu_Functions_C");
		return ptr;
	}



	void STATIC_GetManuallyResolutionEnabled(class UObject* __WorldContext, bool* bEnableSetResolutionManually);
	void STATIC_SetupParameters(class UObject* __WorldContext);
	void STATIC_DestroyCaptureCharacter(class UObject* __WorldContext);
	bool STATIC_IsCaptureCharacterExisting(class UObject* __WorldContext);
	void STATIC_Get_WB_PauseMenu(class UObject* __WorldContext, class UWB_PauseMenu_C** WB_PauseMenu);
	void STATIC_UnbindOnCancelRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_UnbindOnConfirmRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_RemoveRequest(class UObject* __WorldContext);
	void STATIC_BindOnCancelRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_BindOnConfirmRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	bool STATIC_CreateRequest(bool bShowOnlyOkButton, bool bUseCancelCountdown, const struct FText& HeadText, const struct FText& MessageText, class UObject* __WorldContext);
	void STATIC_HasAnyKeybindingButtonFocus(class UObject* __WorldContext, bool* HasFocus);
	void STATIC_HasAnyProgressButtonFocus(class UObject* __WorldContext, bool* HasFocus);
	void STATIC_HasAnyButtonFocus(class UObject* __WorldContext, bool* HasFocus);
	void STATIC_Get_WB_MainMenu(class UObject* __WorldContext, class UWB_ProMainMenu_C** WB_ProMainMenu);
	void STATIC_Get_HUD_MainMenu(class UObject* __WorldContext, class ABP_HUD_MainMenu_C** AsHUD_Main_Menu);
	void STATIC_Get_PC_MainMenu(class UObject* __WorldContext, class ABP_PlayerController_MainMenu_C** AsPC_Main_Menu);
	void STATIC_Get_GM_MainMenu(class UObject* __WorldContext, class ABP_GM_MainMenu_C** AsGM_Main_Menu);
	void STATIC_HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext);
	void STATIC_UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext);
	void STATIC_GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect);
	void STATIC_SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key);
	void STATIC_FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, TEnumAsByte<EInputType_EInputType>* InputType);
	void STATIC_GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys);
	void STATIC_GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys);
	void STATIC_GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys);
	void STATIC_GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys);
	void STATIC_GetShowMouse(class UObject* __WorldContext, bool* bShowMouse);
	void STATIC_SetShowMouse(bool bShowMouse, class UObject* __WorldContext);
	void STATIC_UnbindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_BindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_SetInputType(TEnumAsByte<EInputType_EInputType> InputType, class UObject* __WorldContext);
	void STATIC_GetInputType(class UObject* __WorldContext, TEnumAsByte<EInputType_EInputType>* InputType);
	void STATIC_Get_PMM_Instance(class UObject* __WorldContext, class UBP_PMM_Instance_C** AsPMM_Instance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
