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

// Function W_TimerWarningFrame.W_TimerWarningFrame_C.BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TimerWarningFrame_C::BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrame.W_TimerWarningFrame_C.BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature");

	UW_TimerWarningFrame_C_BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrame.W_TimerWarningFrame_C.BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TimerWarningFrame_C::BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrame.W_TimerWarningFrame_C.BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature");

	UW_TimerWarningFrame_C_BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrame.W_TimerWarningFrame_C.Activate
// (BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrame_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrame.W_TimerWarningFrame_C.Activate");

	UW_TimerWarningFrame_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrame.W_TimerWarningFrame_C.ExecuteUbergraph_W_TimerWarningFrame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TimerWarningFrame_C::ExecuteUbergraph_W_TimerWarningFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrame.W_TimerWarningFrame_C.ExecuteUbergraph_W_TimerWarningFrame");

	UW_TimerWarningFrame_C_ExecuteUbergraph_W_TimerWarningFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrame.W_TimerWarningFrame_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrame_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrame.W_TimerWarningFrame_C.OnCancel__DelegateSignature");

	UW_TimerWarningFrame_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TimerWarningFrame.W_TimerWarningFrame_C.OnSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_TimerWarningFrame_C::OnSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TimerWarningFrame.W_TimerWarningFrame_C.OnSave__DelegateSignature");

	UW_TimerWarningFrame_C_OnSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
