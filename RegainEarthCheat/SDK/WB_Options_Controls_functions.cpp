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

// Function WB_Options_Controls.WB_Options_Controls_C.RecalculateByMinMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ProgressButton_C*    ProgressOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Options_Controls_C::RecalculateByMinMax(float Value, class UWB_ProgressButton_C* ProgressOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.RecalculateByMinMax");

	UWB_Options_Controls_C_RecalculateByMinMax_Params params;
	params.Value = Value;
	params.ProgressOption = ProgressOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Controls.WB_Options_Controls_C.GetIsGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Controls_C::GetIsGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.GetIsGamepad");

	UWB_Options_Controls_C_GetIsGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Controls.WB_Options_Controls_C.NavToBackButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::NavToBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.NavToBackButton");

	UWB_Options_Controls_C_NavToBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.NavToOptionsButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::NavToOptionsButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.NavToOptionsButtons");

	UWB_Options_Controls_C_NavToOptionsButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.NavToTextButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::NavToTextButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.NavToTextButtons");

	UWB_Options_Controls_C_NavToTextButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Options_Controls_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnPreviewKeyDown");

	UWB_Options_Controls_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Controls_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.ActivateWidget");

	UWB_Options_Controls_C_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnInputSwitched");

	UWB_Options_Controls_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.CheckFocus");

	UWB_Options_Controls_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Controls_C::BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Controls_C::BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.ClickBack
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::ClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.ClickBack");

	UWB_Options_Controls_C_ClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Button_KeyBindings_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Controls_C::BndEvt__Button_KeyBindings_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Button_KeyBindings_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Button_KeyBindings_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Controls_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.SetGamepadAppearance");

	UWB_Options_Controls_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Controls_C::BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.SetDefaultValues
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::SetDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.SetDefaultValues");

	UWB_Options_Controls_C_SetDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.OnConfirmReset
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::OnConfirmReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnConfirmReset");

	UWB_Options_Controls_C_OnConfirmReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.OnCancelRequest
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::OnCancelRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnCancelRequest");

	UWB_Options_Controls_C_OnCancelRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature");

	UWB_Options_Controls_C_BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::SetupButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.SetupButtons");

	UWB_Options_Controls_C_SetupButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.Tick");

	UWB_Options_Controls_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.ExecuteUbergraph_WB_Options_Controls
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Controls_C::ExecuteUbergraph_WB_Options_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.ExecuteUbergraph_WB_Options_Controls");

	UWB_Options_Controls_C_ExecuteUbergraph_WB_Options_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Controls.WB_Options_Controls_C.OnClicked_Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Options_Controls_C::OnClicked_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnClicked_Back__DelegateSignature");

	UWB_Options_Controls_C_OnClicked_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
