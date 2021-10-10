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

// Function W_AnswerFrame.W_AnswerFrame_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_AnswerFrame_C::Activate(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame.W_AnswerFrame_C.Activate");

	UW_AnswerFrame_C_Activate_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame.W_AnswerFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AnswerFrame_C::BndEvt__W_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame.W_AnswerFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UW_AnswerFrame_C_BndEvt__W_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame.W_AnswerFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (BlueprintEvent)
void UW_AnswerFrame_C::BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame.W_AnswerFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");

	UW_AnswerFrame_C_BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame.W_AnswerFrame_C.ExecuteUbergraph_W_AnswerFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AnswerFrame_C::ExecuteUbergraph_W_AnswerFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame.W_AnswerFrame_C.ExecuteUbergraph_W_AnswerFrame");

	UW_AnswerFrame_C_ExecuteUbergraph_W_AnswerFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AnswerFrame.W_AnswerFrame_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_AnswerFrame_C::OnBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AnswerFrame.W_AnswerFrame_C.OnBack__DelegateSignature");

	UW_AnswerFrame_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
