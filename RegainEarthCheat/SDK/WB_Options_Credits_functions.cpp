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

// Function WB_Options_Credits.WB_Options_Credits_C.GetIsGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Credits_C::GetIsGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.GetIsGamepad");

	UWB_Options_Credits_C_GetIsGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Credits.WB_Options_Credits_C.NavToBackButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::NavToBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.NavToBackButton");

	UWB_Options_Credits_C_NavToBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Options_Credits_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.OnPreviewKeyDown");

	UWB_Options_Credits_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Credits.WB_Options_Credits_C.ActivateCredits
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::ActivateCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.ActivateCredits");

	UWB_Options_Credits_C_ActivateCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.ActivateWidget");

	UWB_Options_Credits_C_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.OnCreditsDone
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::OnCreditsDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.OnCreditsDone");

	UWB_Options_Credits_C_OnCreditsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.HandleRemoveWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::HandleRemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.HandleRemoveWidget");

	UWB_Options_Credits_C_HandleRemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Credits_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.SetGamepadAppearance");

	UWB_Options_Credits_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.ClickBack
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::ClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.ClickBack");

	UWB_Options_Credits_C_ClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.CheckFocus");

	UWB_Options_Credits_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Credits_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.OnInputSwitched");

	UWB_Options_Credits_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Credits_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_Options_Credits_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Credits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.Tick");

	UWB_Options_Credits_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.ExecuteUbergraph_WB_Options_Credits
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Credits_C::ExecuteUbergraph_WB_Options_Credits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.ExecuteUbergraph_WB_Options_Credits");

	UWB_Options_Credits_C_ExecuteUbergraph_WB_Options_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Credits.WB_Options_Credits_C.OnClicked_Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Options_Credits_C::OnClicked_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Credits.WB_Options_Credits_C.OnClicked_Back__DelegateSignature");

	UWB_Options_Credits_C_OnClicked_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
