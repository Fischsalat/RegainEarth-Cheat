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

// Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AdminMenu_PopUp_C::BndEvt__W_Back_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	UW_AdminMenu_PopUp_C_BndEvt__W_Back_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.BndEvt__W_JoinSession_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AdminMenu_PopUp_C::BndEvt__W_JoinSession_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.BndEvt__W_JoinSession_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");

	UW_AdminMenu_PopUp_C_BndEvt__W_JoinSession_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AdminMenu_PopUp_C::Activate(const struct FString& PlayerName, int Ping, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.Activate");

	UW_AdminMenu_PopUp_C_Activate_Params params;
	params.PlayerName = PlayerName;
	params.Ping = Ping;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.ExecuteUbergraph_W_AdminMenu_PopUp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_AdminMenu_PopUp_C::ExecuteUbergraph_W_AdminMenu_PopUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.ExecuteUbergraph_W_AdminMenu_PopUp");

	UW_AdminMenu_PopUp_C_ExecuteUbergraph_W_AdminMenu_PopUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.OnKick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_AdminMenu_PopUp_C::OnKick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.OnKick__DelegateSignature");

	UW_AdminMenu_PopUp_C_OnKick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_AdminMenu_PopUp_C::OnBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AdminMenu_PopUp.W_AdminMenu_PopUp_C.OnBack__DelegateSignature");

	UW_AdminMenu_PopUp_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
