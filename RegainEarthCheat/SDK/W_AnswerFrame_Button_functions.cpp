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

// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_AnswerFrame_Button_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.SetCustomFocus");

	UW_AnswerFrame_Button_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.IsHaveFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_AnswerFrame_Button_C::IsHaveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.IsHaveFocus");

	UW_AnswerFrame_Button_C_IsHaveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_AnswerFrame_Button_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.SetHovered");

	UW_AnswerFrame_Button_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_AnswerFrame_Button_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.PreConstruct");

	UW_AnswerFrame_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_AnswerFrame_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_AnswerFrame_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_AnswerFrame_Button_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.Accept");

	UW_AnswerFrame_Button_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AnswerFrame_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.Tick");

	UW_AnswerFrame_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.ExecuteUbergraph_W_AnswerFrame_Button
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AnswerFrame_Button_C::ExecuteUbergraph_W_AnswerFrame_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.ExecuteUbergraph_W_AnswerFrame_Button");

	UW_AnswerFrame_Button_C_ExecuteUbergraph_W_AnswerFrame_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_AnswerFrame_Button_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame_Button.W_AnswerFrame_Button_C.OnUnhovered__DelegateSignature");

	UW_AnswerFrame_Button_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
