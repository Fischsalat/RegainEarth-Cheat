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

// Function WB_Options_Audio.WB_Options_Audio_C.GetIsGamepad
struct UWB_Options_Audio_C_GetIsGamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Audio.WB_Options_Audio_C.NavToBackButton
struct UWB_Options_Audio_C_NavToBackButton_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.NavToOptionsButtons
struct UWB_Options_Audio_C_NavToOptionsButtons_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.NavToTextButtons
struct UWB_Options_Audio_C_NavToTextButtons_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.OnPreviewKeyDown
struct UWB_Options_Audio_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.ActivateWidget
struct UWB_Options_Audio_C_ActivateWidget_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.OnInputSwitched
struct UWB_Options_Audio_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.CheckFocus
struct UWB_Options_Audio_C_CheckFocus_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.ClickBack
struct UWB_Options_Audio_C_ClickBack_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.SetGamepadAppearance
struct UWB_Options_Audio_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Audio.WB_Options_Audio_C.HandleRemoveWidget
struct UWB_Options_Audio_C_HandleRemoveWidget_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.OnConfirmReset
struct UWB_Options_Audio_C_OnConfirmReset_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_MasterVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_MasterVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_MusicVolume_K2Node_ComponentBoundEvent_1_OnProgressChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_MusicVolume_K2Node_ComponentBoundEvent_1_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_DialogueVolume_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_DialogueVolume_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_EffectsVolume_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_EffectsVolume_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_AudioProfile_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_AudioProfile_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_Music_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_Music_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_Subtitles_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
struct UWB_Options_Audio_C_BndEvt__Option_Subtitles_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.SetupButtons
struct UWB_Options_Audio_C_SetupButtons_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.OnCancelRequest
struct UWB_Options_Audio_C_OnCancelRequest_Params
{
};

// Function WB_Options_Audio.WB_Options_Audio_C.Tick
struct UWB_Options_Audio_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.ExecuteUbergraph_WB_Options_Audio
struct UWB_Options_Audio_C_ExecuteUbergraph_WB_Options_Audio_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Audio.WB_Options_Audio_C.OnClicked_Back__DelegateSignature
struct UWB_Options_Audio_C_OnClicked_Back__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
