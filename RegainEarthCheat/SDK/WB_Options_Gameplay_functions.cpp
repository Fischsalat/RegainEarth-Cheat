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

// Function WB_Options_Gameplay.WB_Options_Gameplay_C.GetIsGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Gameplay_C::GetIsGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.GetIsGamepad");

	UWB_Options_Gameplay_C_GetIsGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToBackButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::NavToBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToBackButton");

	UWB_Options_Gameplay_C_NavToBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToOptionsButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::NavToOptionsButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToOptionsButtons");

	UWB_Options_Gameplay_C_NavToOptionsButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToTextButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::NavToTextButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToTextButtons");

	UWB_Options_Gameplay_C_NavToTextButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Options_Gameplay_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnPreviewKeyDown");

	UWB_Options_Gameplay_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Gameplay_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.ActivateWidget");

	UWB_Options_Gameplay_C_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnInputSwitched");

	UWB_Options_Gameplay_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.CheckFocus");

	UWB_Options_Gameplay_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Gameplay_C::BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Gameplay_C::BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.ClickBack
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::ClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.ClickBack");

	UWB_Options_Gameplay_C_ClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Gameplay_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetGamepadAppearance");

	UWB_Options_Gameplay_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Gameplay_C::BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Gameplay_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnConfirmReset
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::OnConfirmReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnConfirmReset");

	UWB_Options_Gameplay_C_OnConfirmReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnCancelRequest
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::OnCancelRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnCancelRequest");

	UWB_Options_Gameplay_C_OnCancelRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetDefaultValues
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::SetDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetDefaultValues");

	UWB_Options_Gameplay_C_SetDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.Tick");

	UWB_Options_Gameplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.ExecuteUbergraph_WB_Options_Gameplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Gameplay_C::ExecuteUbergraph_WB_Options_Gameplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.ExecuteUbergraph_WB_Options_Gameplay");

	UWB_Options_Gameplay_C_ExecuteUbergraph_WB_Options_Gameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnClicked_Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Options_Gameplay_C::OnClicked_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnClicked_Back__DelegateSignature");

	UWB_Options_Gameplay_C_OnClicked_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
