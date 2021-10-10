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

// Function WB_Request.WB_Request_C.NavToConfirmButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Request_C::NavToConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.NavToConfirmButton");

	UWB_Request_C_NavToConfirmButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.GetIsGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Request_C::GetIsGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.GetIsGamepad");

	UWB_Request_C_GetIsGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Request.WB_Request_C.NavToCancelButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Request_C::NavToCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.NavToCancelButton");

	UWB_Request_C_NavToCancelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Request_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnPreviewKeyDown");

	UWB_Request_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Request.WB_Request_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Request_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_Request_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowOnlyOkButton              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bUseCancelCountdown            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   HeadText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Request_C::ActivateWidget(bool bShowOnlyOkButton, bool bUseCancelCountdown, const struct FText& HeadText, const struct FText& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ActivateWidget");

	UWB_Request_C_ActivateWidget_Params params;
	params.bShowOnlyOkButton = bShowOnlyOkButton;
	params.bUseCancelCountdown = bUseCancelCountdown;
	params.HeadText = HeadText;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Request_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnInputSwitched");

	UWB_Request_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_Request_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.CheckFocus");

	UWB_Request_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.ClickCancel
// (BlueprintCallable, BlueprintEvent)
void UWB_Request_C::ClickCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ClickCancel");

	UWB_Request_C_ClickCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Request_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.SetGamepadAppearance");

	UWB_Request_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Request_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_Request_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.ClickOK
// (BlueprintCallable, BlueprintEvent)
void UWB_Request_C::ClickOK()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ClickOK");

	UWB_Request_C_ClickOK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.RemoveRequest
// (BlueprintCallable, BlueprintEvent)
void UWB_Request_C::RemoveRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.RemoveRequest");

	UWB_Request_C_RemoveRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseBaseColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Grad0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Request_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.SetBaseColor");

	UWB_Request_C_SetBaseColor_Params params;
	params.bUseBaseColor = bUseBaseColor;
	params.Grad0 = Grad0;
	params.Grad1 = Grad1;
	params.Grad2 = Grad2;
	params.Grad3 = Grad3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.Countdown
// (BlueprintCallable, BlueprintEvent)
void UWB_Request_C::Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.Countdown");

	UWB_Request_C_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Request_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.Tick");

	UWB_Request_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Request_C::ExecuteUbergraph_WB_Request(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request");

	UWB_Request_C_ExecuteUbergraph_WB_Request_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.OnClicked_Ok__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Request_C::OnClicked_Ok__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnClicked_Ok__DelegateSignature");

	UWB_Request_C_OnClicked_Ok__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Request.WB_Request_C.OnClicked_Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Request_C::OnClicked_Cancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnClicked_Cancel__DelegateSignature");

	UWB_Request_C_OnClicked_Cancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
