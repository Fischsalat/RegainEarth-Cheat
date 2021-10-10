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

// Function W_InGameFrame.W_InGameFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InGameFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.ActiveWidget");

	UW_InGameFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameFrame.W_InGameFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.OnHovered");

	UW_InGameFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_AnswerFrame_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature
// (BlueprintEvent)
void UW_InGameFrame_C::BndEvt__W_AnswerFrame_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_AnswerFrame_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature");

	UW_InGameFrame_C_BndEvt__W_AnswerFrame_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_20_OnYes__DelegateSignature
// (BlueprintEvent)
void UW_InGameFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_20_OnYes__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_20_OnYes__DelegateSignature");

	UW_InGameFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_20_OnYes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_26_OnCancel__DelegateSignature
// (BlueprintEvent)
void UW_InGameFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_26_OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_26_OnCancel__DelegateSignature");

	UW_InGameFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_26_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameFrame.W_InGameFrame_C.AllButtonsPressedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameFrame_C::AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.AllButtonsPressedEvents");

	UW_InGameFrame_C_AllButtonsPressedEvents_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameFrame.W_InGameFrame_C.ExecuteUbergraph_W_InGameFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameFrame_C::ExecuteUbergraph_W_InGameFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameFrame.W_InGameFrame_C.ExecuteUbergraph_W_InGameFrame");

	UW_InGameFrame_C_ExecuteUbergraph_W_InGameFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
