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

// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.SetNewValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsYesButtonVisibility          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_WarningAndConfirmFrame_C::SetNewValues(const struct FText& Title, const struct FText& Message, bool IsYesButtonVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.SetNewValues");

	UW_WarningAndConfirmFrame_C_SetNewValues_Params params;
	params.Title = Title;
	params.Message = Message;
	params.IsYesButtonVisibility = IsYesButtonVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WarningAndConfirmFrame_C::BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature");

	UW_WarningAndConfirmFrame_C_BndEvt__W_Save_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WarningAndConfirmFrame_C::BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature");

	UW_WarningAndConfirmFrame_C_BndEvt__W_Cancel_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.Activate
// (BlueprintCallable, BlueprintEvent)
void UW_WarningAndConfirmFrame_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.Activate");

	UW_WarningAndConfirmFrame_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_WarningAndConfirmFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.PreConstruct");

	UW_WarningAndConfirmFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.ExecuteUbergraph_W_WarningAndConfirmFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WarningAndConfirmFrame_C::ExecuteUbergraph_W_WarningAndConfirmFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.ExecuteUbergraph_W_WarningAndConfirmFrame");

	UW_WarningAndConfirmFrame_C_ExecuteUbergraph_W_WarningAndConfirmFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_WarningAndConfirmFrame_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.OnCancel__DelegateSignature");

	UW_WarningAndConfirmFrame_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.OnYes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_WarningAndConfirmFrame_C::OnYes__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningAndConfirmFrame.W_WarningAndConfirmFrame_C.OnYes__DelegateSignature");

	UW_WarningAndConfirmFrame_C_OnYes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
