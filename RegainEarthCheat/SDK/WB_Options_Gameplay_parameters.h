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

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.GetIsGamepad
struct UWB_Options_Gameplay_C_GetIsGamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToBackButton
struct UWB_Options_Gameplay_C_NavToBackButton_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToOptionsButtons
struct UWB_Options_Gameplay_C_NavToOptionsButtons_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToTextButtons
struct UWB_Options_Gameplay_C_NavToTextButtons_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnPreviewKeyDown
struct UWB_Options_Gameplay_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.ActivateWidget
struct UWB_Options_Gameplay_C_ActivateWidget_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnInputSwitched
struct UWB_Options_Gameplay_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.CheckFocus
struct UWB_Options_Gameplay_C_CheckFocus_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.ClickBack
struct UWB_Options_Gameplay_C_ClickBack_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetGamepadAppearance
struct UWB_Options_Gameplay_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_Gameplay_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnConfirmReset
struct UWB_Options_Gameplay_C_OnConfirmReset_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnCancelRequest
struct UWB_Options_Gameplay_C_OnCancelRequest_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetDefaultValues
struct UWB_Options_Gameplay_C_SetDefaultValues_Params
{
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.Tick
struct UWB_Options_Gameplay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.ExecuteUbergraph_WB_Options_Gameplay
struct UWB_Options_Gameplay_C_ExecuteUbergraph_WB_Options_Gameplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnClicked_Back__DelegateSignature
struct UWB_Options_Gameplay_C_OnClicked_Back__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
