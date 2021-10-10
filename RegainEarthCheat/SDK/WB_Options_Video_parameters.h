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

// Function WB_Options_Video.WB_Options_Video_C.OnScalabilitySettingsDiffer
struct UWB_Options_Video_C_OnScalabilitySettingsDiffer_Params
{
	bool                                               bDiffer;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.RunAndApplyHardwareBenchmark
struct UWB_Options_Video_C_RunAndApplyHardwareBenchmark_Params
{
	int                                                WorkScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.IsCustom
struct UWB_Options_Video_C_IsCustom_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCustom;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.GetScalabilityButtons
struct UWB_Options_Video_C_GetScalabilityButtons_Params
{
	TArray<class UWB_StateButton_C*>                   Array;                                                     // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_Options_Video.WB_Options_Video_C.SetPostProcessQuality
struct UWB_Options_Video_C_SetPostProcessQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetPostProcessQuality
struct UWB_Options_Video_C_GetPostProcessQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetViewDistanceQuality
struct UWB_Options_Video_C_SetViewDistanceQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetViewDistanceQuality
struct UWB_Options_Video_C_GetViewDistanceQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetFoliageQuality
struct UWB_Options_Video_C_SetFoliageQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetFoliageQuality
struct UWB_Options_Video_C_GetFoliageQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetAAQuality
struct UWB_Options_Video_C_SetAAQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetAAQuality
struct UWB_Options_Video_C_GetAAQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetVisualEffectsQuality
struct UWB_Options_Video_C_SetVisualEffectsQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetVisualEffectsQuality
struct UWB_Options_Video_C_GetVisualEffectsQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetShadowQuality
struct UWB_Options_Video_C_SetShadowQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetShadowQuality
struct UWB_Options_Video_C_GetShadowQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetTextureQuality
struct UWB_Options_Video_C_SetTextureQuality_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetTextureQuality
struct UWB_Options_Video_C_GetTextureQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetVsync
struct UWB_Options_Video_C_GetVsync_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.SetVSync
struct UWB_Options_Video_C_SetVSync_Params
{
	bool                                               bEnable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.GetFrameRateLimit
struct UWB_Options_Video_C_GetFrameRateLimit_Params
{
	float                                              Limit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetFrameRateLimit
struct UWB_Options_Video_C_SetFrameRateLimit_Params
{
	float                                              NewLimit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetResolutionScaleNormalized
struct UWB_Options_Video_C_SetResolutionScaleNormalized_Params
{
	float                                              NewScaleNormalized;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetResolutionScale
struct UWB_Options_Video_C_SetResolutionScale_Params
{
	float                                              NewScaleValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetResolutionScale
struct UWB_Options_Video_C_GetResolutionScale_Params
{
	float                                              CurrentScaleNormalized;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentScaleValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SaveSettings
struct UWB_Options_Video_C_SaveSettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.ApplyAllSettings
struct UWB_Options_Video_C_ApplyAllSettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.ApplySettings
struct UWB_Options_Video_C_ApplySettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.ApplyNonResolutionSettings
struct UWB_Options_Video_C_ApplyNonResolutionSettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.IsScreenResolutionDirty
struct UWB_Options_Video_C_IsScreenResolutionDirty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.IsFulllscreenModeDirty
struct UWB_Options_Video_C_IsFulllscreenModeDirty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.SetWindowMode
struct UWB_Options_Video_C_SetWindowMode_Params
{
	TEnumAsByte<Engine_EWindowMode>                    InFullscreenMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetWindowMode
struct UWB_Options_Video_C_GetWindowMode_Params
{
	TEnumAsByte<Engine_EWindowMode>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.FindButtonResolutionState
struct UWB_Options_Video_C_FindButtonResolutionState_Params
{
	struct FIntPoint                                   Resolution;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FoundIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.TranslateResolutionFromButton
struct UWB_Options_Video_C_TranslateResolutionFromButton_Params
{
	struct FName                                       InName;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   IntPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetScreenResolutionName
struct UWB_Options_Video_C_GetScreenResolutionName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.HasState
struct UWB_Options_Video_C_HasState_Params
{
	class UWB_StateButton_C*                           Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasState;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.ApplyResolutionSettings
struct UWB_Options_Video_C_ApplyResolutionSettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.SetDynamicResolutionEnabled
struct UWB_Options_Video_C_SetDynamicResolutionEnabled_Params
{
	bool                                               bEnable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionEnabled
struct UWB_Options_Video_C_IsDynamicResolutionEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionDirty
struct UWB_Options_Video_C_IsDynamicResolutionDirty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.GetLastConfirmedScreenResolution
struct UWB_Options_Video_C_GetLastConfirmedScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetScreenResolution
struct UWB_Options_Video_C_SetScreenResolution_Params
{
	struct FIntPoint                                   Resolution;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetDesktopResolution
struct UWB_Options_Video_C_GetDesktopResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetScreenResolution
struct UWB_Options_Video_C_GetScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetUserSettings
struct UWB_Options_Video_C_GetUserSettings_Params
{
	class UGameUserSettings*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.GetIsGamepad
struct UWB_Options_Video_C_GetIsGamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.ScrollToCurrentlyFocusedWidget
struct UWB_Options_Video_C_ScrollToCurrentlyFocusedWidget_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.NavToBackButton
struct UWB_Options_Video_C_NavToBackButton_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.NavToOptionsButtons
struct UWB_Options_Video_C_NavToOptionsButtons_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.NavToTextButtons
struct UWB_Options_Video_C_NavToTextButtons_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.OnPreviewKeyDown
struct UWB_Options_Video_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.ActivateWidget
struct UWB_Options_Video_C_ActivateWidget_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.OnInputSwitched
struct UWB_Options_Video_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.CheckFocus
struct UWB_Options_Video_C_CheckFocus_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Video_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_Options_Video_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.ClickBack
struct UWB_Options_Video_C_ClickBack_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.SetGamepadAppearance
struct UWB_Options_Video_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Video.WB_Options_Video_C.HandleRemoveWidget
struct UWB_Options_Video_C_HandleRemoveWidget_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Video_C_BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.OnConfirmReset
struct UWB_Options_Video_C_OnConfirmReset_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.SetDefaultValues
struct UWB_Options_Video_C_SetDefaultValues_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.InitializeVideoSettings
struct UWB_Options_Video_C_InitializeVideoSettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.SetupButtons
struct UWB_Options_Video_C_SetupButtons_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.CheckSettings
struct UWB_Options_Video_C_CheckSettings_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.SetSavedValues
struct UWB_Options_Video_C_SetSavedValues_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature
struct UWB_Options_Video_C_BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.OnCancelRequest
struct UWB_Options_Video_C_OnCancelRequest_Params
{
};

// Function WB_Options_Video.WB_Options_Video_C.Tick
struct UWB_Options_Video_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.ExecuteUbergraph_WB_Options_Video
struct UWB_Options_Video_C_ExecuteUbergraph_WB_Options_Video_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Video.WB_Options_Video_C.OnClicked_Back__DelegateSignature
struct UWB_Options_Video_C_OnClicked_Back__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
