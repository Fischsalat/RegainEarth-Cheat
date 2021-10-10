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
// Parameters
//---------------------------------------------------------------------------

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetManuallyResolutionEnabled
struct UBP_MainMenu_Functions_C_GetManuallyResolutionEnabled_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableSetResolutionManually;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetupParameters
struct UBP_MainMenu_Functions_C_SetupParameters_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.DestroyCaptureCharacter
struct UBP_MainMenu_Functions_C_DestroyCaptureCharacter_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.IsCaptureCharacterExisting
struct UBP_MainMenu_Functions_C_IsCaptureCharacterExisting_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_PauseMenu
struct UBP_MainMenu_Functions_C_Get_WB_PauseMenu_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PauseMenu_C*                             WB_PauseMenu;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnCancelRequest
struct UBP_MainMenu_Functions_C_UnbindOnCancelRequest_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnConfirmRequest
struct UBP_MainMenu_Functions_C_UnbindOnConfirmRequest_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.RemoveRequest
struct UBP_MainMenu_Functions_C_RemoveRequest_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnCancelRequest
struct UBP_MainMenu_Functions_C_BindOnCancelRequest_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnConfirmRequest
struct UBP_MainMenu_Functions_C_BindOnConfirmRequest_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.CreateRequest
struct UBP_MainMenu_Functions_C_CreateRequest_Params
{
	bool                                               bShowOnlyOkButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseCancelCountdown;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       HeadText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MessageText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyKeybindingButtonFocus
struct UBP_MainMenu_Functions_C_HasAnyKeybindingButtonFocus_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyProgressButtonFocus
struct UBP_MainMenu_Functions_C_HasAnyProgressButtonFocus_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyButtonFocus
struct UBP_MainMenu_Functions_C_HasAnyButtonFocus_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_MainMenu
struct UBP_MainMenu_Functions_C_Get_WB_MainMenu_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ProMainMenu_C*                           WB_ProMainMenu;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_HUD_MainMenu
struct UBP_MainMenu_Functions_C_Get_HUD_MainMenu_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HUD_MainMenu_C*                          AsHUD_Main_Menu;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PC_MainMenu
struct UBP_MainMenu_Functions_C_Get_PC_MainMenu_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_MainMenu_C*             AsPC_Main_Menu;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_GM_MainMenu
struct UBP_MainMenu_Functions_C_Get_GM_MainMenu_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GM_MainMenu_C*                           AsGM_Main_Menu;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HandleResponsiveHovering
struct UBP_MainMenu_Functions_C_HandleResponsiveHovering_Params
{
	bool                                               bResponsiveHovering;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWB_NativeButton_C*                          ButtonToFocus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           OwningPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnhoverAllNativeButtons
struct UBP_MainMenu_Functions_C_UnhoverAllNativeButtons_Params
{
	class UWB_NativeButton_C*                          Exception;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetPC_InputDetect
struct UBP_MainMenu_Functions_C_GetPC_InputDetect_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PC_InputDetect_C*                        AsPC_Input_Detect;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetRightInputType
struct UBP_MainMenu_Functions_C_SetRightInputType_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        LastPressed_Key;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.FindInputType
struct UBP_MainMenu_Functions_C_FindInputType_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        LastPressed_Key;                                           // (Parm, OutParm, HasGetValueTypeHash)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetVRControllerKeys
struct UBP_MainMenu_Functions_C_GetVRControllerKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                Oculus_VR_Keys;                                            // (Parm, OutParm)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetMouseKeys
struct UBP_MainMenu_Functions_C_GetMouseKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                MouseKeys;                                                 // (Parm, OutParm)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetKeyboardKeys
struct UBP_MainMenu_Functions_C_GetKeyboardKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                KeyboardKeys;                                              // (Parm, OutParm)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetGamepadKeys
struct UBP_MainMenu_Functions_C_GetGamepadKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                GamepadKeys;                                               // (Parm, OutParm)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetShowMouse
struct UBP_MainMenu_Functions_C_GetShowMouse_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowMouse;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetShowMouse
struct UBP_MainMenu_Functions_C_SetShowMouse_Params
{
	bool                                               bShowMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnInputTypeSwitched
struct UBP_MainMenu_Functions_C_UnbindOnInputTypeSwitched_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnInputTypeSwitched
struct UBP_MainMenu_Functions_C_BindOnInputTypeSwitched_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetInputType
struct UBP_MainMenu_Functions_C_SetInputType_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetInputType
struct UBP_MainMenu_Functions_C_GetInputType_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PMM_Instance
struct UBP_MainMenu_Functions_C_Get_PMM_Instance_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PMM_Instance_C*                          AsPMM_Instance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
