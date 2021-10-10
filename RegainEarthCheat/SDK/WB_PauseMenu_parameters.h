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

// Function WB_PauseMenu.WB_PauseMenu_C.RemoveChildren
struct UWB_PauseMenu_C_RemoveChildren_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetOptionButtonFocus
struct UWB_PauseMenu_C_SetOptionButtonFocus_Params
{
	class UWB_SettingsButton01_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown
struct UWB_PauseMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetTabButtonFocus
struct UWB_PauseMenu_C_SetTabButtonFocus_Params
{
	class UWB_TabButton01_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.GetOptionButtons
struct UWB_PauseMenu_C_GetOptionButtons_Params
{
	TArray<class UWB_SettingsButton01_C*>              Array;                                                     // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentOptionButtonFocus
struct UWB_PauseMenu_C_SetCurrentOptionButtonFocus_Params
{
	class UWB_SettingsButton01_C*                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.GetOnMouseEntered
struct UWB_PauseMenu_C_GetOnMouseEntered_Params
{
	bool                                               MouseEntered;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Global
struct UWB_PauseMenu_C_SetWidgetIndex_Global_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Tabs
struct UWB_PauseMenu_C_SetWidgetIndex_Tabs_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.OnSwitchBackFromChild
struct UWB_PauseMenu_C_OnSwitchBackFromChild_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.OnInputSwitched
struct UWB_PauseMenu_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadAppearance
struct UWB_PauseMenu_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PauseMenu.WB_PauseMenu_C.CheckMouseEntered
struct UWB_PauseMenu_C_CheckMouseEntered_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.OnConfirmQuit
struct UWB_PauseMenu_C_OnConfirmQuit_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.ClickQuit
struct UWB_PauseMenu_C_ClickQuit_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.OnCancelQuit
struct UWB_PauseMenu_C_OnCancelQuit_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentFocus
struct UWB_PauseMenu_C_SetCurrentFocus_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.RemoveWidget
struct UWB_PauseMenu_C_RemoveWidget_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.ActivateWidget
struct UWB_PauseMenu_C_ActivateWidget_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_PauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.ClickBack
struct UWB_PauseMenu_C_ClickBack_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.ClickResume
struct UWB_PauseMenu_C_ClickResume_Params
{
};

// Function WB_PauseMenu.WB_PauseMenu_C.Tick
struct UWB_PauseMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu
struct UWB_PauseMenu_C_ExecuteUbergraph_WB_PauseMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
