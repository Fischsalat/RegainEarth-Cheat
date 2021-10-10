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

// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TimerWarningFrameButton_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.SetCustomFocus");

	UW_TimerWarningFrameButton_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.IsHaveFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_TimerWarningFrameButton_C::IsHaveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.IsHaveFocus");

	UW_TimerWarningFrameButton_C_IsHaveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrameButton_C::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.Timer");

	UW_TimerWarningFrameButton_C_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TimerWarningFrameButton_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.SetHovered");

	UW_TimerWarningFrameButton_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TimerWarningFrameButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.PreConstruct");

	UW_TimerWarningFrameButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_TimerWarningFrameButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_TimerWarningFrameButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrameButton_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.Accept");

	UW_TimerWarningFrameButton_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.TimerFinished
// (BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrameButton_C::TimerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.TimerFinished");

	UW_TimerWarningFrameButton_C_TimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeSeconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TimerWarningFrameButton_C::StartTimer(int TimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.StartTimer");

	UW_TimerWarningFrameButton_C_StartTimer_Params params;
	params.TimeSeconds = TimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.ActivateTimer
// (BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrameButton_C::ActivateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.ActivateTimer");

	UW_TimerWarningFrameButton_C_ActivateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.ClearTimer
// (BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrameButton_C::ClearTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.ClearTimer");

	UW_TimerWarningFrameButton_C_ClearTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TimerWarningFrameButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.Tick");

	UW_TimerWarningFrameButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.ExecuteUbergraph_W_TimerWarningFrameButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TimerWarningFrameButton_C::ExecuteUbergraph_W_TimerWarningFrameButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.ExecuteUbergraph_W_TimerWarningFrameButton");

	UW_TimerWarningFrameButton_C_ExecuteUbergraph_W_TimerWarningFrameButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrameButton_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrameButton.W_TimerWarningFrameButton_C.OnUnhovered__DelegateSignature");

	UW_TimerWarningFrameButton_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
