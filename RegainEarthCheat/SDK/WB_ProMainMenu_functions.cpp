// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WB_ProMainMenu.WB_ProMainMenu_C.RemoveCaptureCharacter
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::RemoveCaptureCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.RemoveCaptureCharacter");

	UWB_ProMainMenu_C_RemoveCaptureCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.CreateCaptureCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::CreateCaptureCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.CreateCaptureCharacter");

	UWB_ProMainMenu_C_CreateCaptureCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.GetOptionButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_SettingsButton01_C*> Array                          (Parm, OutParm, ContainsInstancedReference)
void UWB_ProMainMenu_C::GetOptionButtons(TArray<class UWB_SettingsButton01_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.GetOptionButtons");

	UWB_ProMainMenu_C_GetOptionButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentOptionButtonFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_SettingsButton01_C*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::SetCurrentOptionButtonFocus(class UWB_SettingsButton01_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentOptionButtonFocus");

	UWB_ProMainMenu_C_SetCurrentOptionButtonFocus_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentTabButtonFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::SetCurrentTabButtonFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentTabButtonFocus");

	UWB_ProMainMenu_C_SetCurrentTabButtonFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.FindCurrentTabButtonIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::FindCurrentTabButtonIndex(int* CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.FindCurrentTabButtonIndex");

	UWB_ProMainMenu_C_FindCurrentTabButtonIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentIndex != nullptr)
		*CurrentIndex = params.CurrentIndex;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SwitchTabButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIncrease                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProMainMenu_C::SwitchTabButton(bool bIncrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SwitchTabButton");

	UWB_ProMainMenu_C_SwitchTabButton_Params params;
	params.bIncrease = bIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.GetTabButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_TabButton01_C*> Array                          (Parm, OutParm, ContainsInstancedReference)
void UWB_ProMainMenu_C::GetTabButtons(TArray<class UWB_TabButton01_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.GetTabButtons");

	UWB_ProMainMenu_C_GetTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_ProMainMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.OnKeyDown");

	UWB_ProMainMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_ProMainMenu.WB_ProMainMenu_C.GetOnMouseEntered
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           MouseEntered                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProMainMenu_C::GetOnMouseEntered(bool* MouseEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.GetOnMouseEntered");

	UWB_ProMainMenu_C_GetOnMouseEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEntered != nullptr)
		*MouseEntered = params.MouseEntered;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Global
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::SetWidgetIndex_Global(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Global");

	UWB_ProMainMenu_C_SetWidgetIndex_Global_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Tabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::SetWidgetIndex_Tabs(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Tabs");

	UWB_ProMainMenu_C_SetWidgetIndex_Tabs_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.OnSwitchBackFromChild
// (BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::OnSwitchBackFromChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.OnSwitchBackFromChild");

	UWB_ProMainMenu_C_OnSwitchBackFromChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ProMainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.Construct");

	UWB_ProMainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.OnInputSwitched");

	UWB_ProMainMenu_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProMainMenu_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetGamepadAppearance");

	UWB_ProMainMenu_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.CheckMouseEntered
// (BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::CheckMouseEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.CheckMouseEntered");

	UWB_ProMainMenu_C_CheckMouseEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.OnConfirmQuit
// (BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::OnConfirmQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.OnConfirmQuit");

	UWB_ProMainMenu_C_OnConfirmQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.ClickQuit
// (BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::ClickQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.ClickQuit");

	UWB_ProMainMenu_C_ClickQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.ClickHome
// (BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::ClickHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.ClickHome");

	UWB_ProMainMenu_C_ClickHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.OnCancelQuit
// (BlueprintCallable, BlueprintEvent)
void UWB_ProMainMenu_C::OnCancelQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.OnCancelQuit");

	UWB_ProMainMenu_C_OnCancelQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateCaptureCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProMainMenu_C::UpdateCaptureCharacter(bool bShowCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateCaptureCharacter");

	UWB_ProMainMenu_C_UpdateCaptureCharacter_Params params;
	params.bShowCharacter = bShowCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateTabAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::UpdateTabAnim(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateTabAnim");

	UWB_ProMainMenu_C_UpdateTabAnim_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseBaseColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Grad0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetBaseColor");

	UWB_ProMainMenu_C_SetBaseColor_Params params;
	params.bUseBaseColor = bUseBaseColor;
	params.Grad0 = Grad0;
	params.Grad1 = Grad1;
	params.Grad2 = Grad2;
	params.Grad3 = Grad3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_SelectChapter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_SelectChapter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_SelectChapter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_SelectChapter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ProMainMenu_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_ProMainMenu_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.SetupButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseButtonSounds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.SetupButtonSounds");

	UWB_ProMainMenu_C_SetupButtonSounds_Params params;
	params.bUseButtonSounds = bUseButtonSounds;
	params.Clicked = Clicked;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.Tick");

	UWB_ProMainMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProMainMenu.WB_ProMainMenu_C.ExecuteUbergraph_WB_ProMainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProMainMenu_C::ExecuteUbergraph_WB_ProMainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProMainMenu.WB_ProMainMenu_C.ExecuteUbergraph_WB_ProMainMenu");

	UWB_ProMainMenu_C_ExecuteUbergraph_WB_ProMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
