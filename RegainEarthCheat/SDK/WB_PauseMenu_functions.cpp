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

// Function WB_PauseMenu.WB_PauseMenu_C.RemoveChildren
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::RemoveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.RemoveChildren");

	UWB_PauseMenu_C_RemoveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetOptionButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_SettingsButton01_C*  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::SetOptionButtonFocus(class UWB_SettingsButton01_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetOptionButtonFocus");

	UWB_PauseMenu_C_SetOptionButtonFocus_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_PauseMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown");

	UWB_PauseMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_PauseMenu.WB_PauseMenu_C.SetTabButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_TabButton01_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::SetTabButtonFocus(class UWB_TabButton01_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetTabButtonFocus");

	UWB_PauseMenu_C_SetTabButtonFocus_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.GetOptionButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_SettingsButton01_C*> Array                          (Parm, OutParm, ContainsInstancedReference)
void UWB_PauseMenu_C::GetOptionButtons(TArray<class UWB_SettingsButton01_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.GetOptionButtons");

	UWB_PauseMenu_C_GetOptionButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentOptionButtonFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_SettingsButton01_C*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::SetCurrentOptionButtonFocus(class UWB_SettingsButton01_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentOptionButtonFocus");

	UWB_PauseMenu_C_SetCurrentOptionButtonFocus_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.GetOnMouseEntered
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           MouseEntered                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PauseMenu_C::GetOnMouseEntered(bool* MouseEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.GetOnMouseEntered");

	UWB_PauseMenu_C_GetOnMouseEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEntered != nullptr)
		*MouseEntered = params.MouseEntered;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Global
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::SetWidgetIndex_Global(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Global");

	UWB_PauseMenu_C_SetWidgetIndex_Global_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Tabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::SetWidgetIndex_Tabs(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Tabs");

	UWB_PauseMenu_C_SetWidgetIndex_Tabs_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Credits_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnSwitchBackFromChild
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::OnSwitchBackFromChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnSwitchBackFromChild");

	UWB_PauseMenu_C_OnSwitchBackFromChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnInputSwitched");

	UWB_PauseMenu_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PauseMenu_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadAppearance");

	UWB_PauseMenu_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.CheckMouseEntered
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::CheckMouseEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.CheckMouseEntered");

	UWB_PauseMenu_C_CheckMouseEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnConfirmQuit
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::OnConfirmQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnConfirmQuit");

	UWB_PauseMenu_C_OnConfirmQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.ClickQuit
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::ClickQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ClickQuit");

	UWB_PauseMenu_C_ClickQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnCancelQuit
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::OnCancelQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnCancelQuit");

	UWB_PauseMenu_C_OnCancelQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::SetCurrentFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentFocus");

	UWB_PauseMenu_C_SetCurrentFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.RemoveWidget");

	UWB_PauseMenu_C_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ActivateWidget");

	UWB_PauseMenu_C_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_PauseMenu_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_PauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.ClickBack
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::ClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ClickBack");

	UWB_PauseMenu_C_ClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.ClickResume
// (BlueprintCallable, BlueprintEvent)
void UWB_PauseMenu_C::ClickResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ClickResume");

	UWB_PauseMenu_C_ClickResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.Tick");

	UWB_PauseMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PauseMenu_C::ExecuteUbergraph_WB_PauseMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu");

	UWB_PauseMenu_C_ExecuteUbergraph_WB_PauseMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
