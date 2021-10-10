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

// Function WB_ProMainMenu.WB_ProMainMenu_C.RemoveCaptureCharacter
struct UWB_ProMainMenu_C_RemoveCaptureCharacter_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.CreateCaptureCharacter
struct UWB_ProMainMenu_C_CreateCaptureCharacter_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.GetOptionButtons
struct UWB_ProMainMenu_C_GetOptionButtons_Params
{
	TArray<class UWB_SettingsButton01_C*>              Array;                                                     // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentOptionButtonFocus
struct UWB_ProMainMenu_C_SetCurrentOptionButtonFocus_Params
{
	class UWB_SettingsButton01_C*                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentTabButtonFocus
struct UWB_ProMainMenu_C_SetCurrentTabButtonFocus_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.FindCurrentTabButtonIndex
struct UWB_ProMainMenu_C_FindCurrentTabButtonIndex_Params
{
	int                                                CurrentIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SwitchTabButton
struct UWB_ProMainMenu_C_SwitchTabButton_Params
{
	bool                                               bIncrease;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.GetTabButtons
struct UWB_ProMainMenu_C_GetTabButtons_Params
{
	TArray<class UWB_TabButton01_C*>                   Array;                                                     // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.OnKeyDown
struct UWB_ProMainMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.GetOnMouseEntered
struct UWB_ProMainMenu_C_GetOnMouseEntered_Params
{
	bool                                               MouseEntered;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Global
struct UWB_ProMainMenu_C_SetWidgetIndex_Global_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Tabs
struct UWB_ProMainMenu_C_SetWidgetIndex_Tabs_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.OnSwitchBackFromChild
struct UWB_ProMainMenu_C_OnSwitchBackFromChild_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.Construct
struct UWB_ProMainMenu_C_Construct_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.OnInputSwitched
struct UWB_ProMainMenu_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetGamepadAppearance
struct UWB_ProMainMenu_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.CheckMouseEntered
struct UWB_ProMainMenu_C_CheckMouseEntered_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.OnConfirmQuit
struct UWB_ProMainMenu_C_OnConfirmQuit_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.ClickQuit
struct UWB_ProMainMenu_C_ClickQuit_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.ClickHome
struct UWB_ProMainMenu_C_ClickHome_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.OnCancelQuit
struct UWB_ProMainMenu_C_OnCancelQuit_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateCaptureCharacter
struct UWB_ProMainMenu_C_UpdateCaptureCharacter_Params
{
	bool                                               bShowCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateTabAnim
struct UWB_ProMainMenu_C_UpdateTabAnim_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetBaseColor
struct UWB_ProMainMenu_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_SelectChapter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_SelectChapter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_ProMainMenu_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.SetupButtonSounds
struct UWB_ProMainMenu_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.Tick
struct UWB_ProMainMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProMainMenu.WB_ProMainMenu_C.ExecuteUbergraph_WB_ProMainMenu
struct UWB_ProMainMenu_C_ExecuteUbergraph_WB_ProMainMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
