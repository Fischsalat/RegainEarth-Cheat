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

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LobbyPlayerRowButton_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.SetCustomFocus");

	UW_LobbyPlayerRowButton_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LobbyPlayerRowButton_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.SetHovered");

	UW_LobbyPlayerRowButton_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyPlayerRowButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Tick");

	UW_LobbyPlayerRowButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_LobbyPlayerRowButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_LobbyPlayerRowButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_LobbyPlayerRowButton_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Accept");

	UW_LobbyPlayerRowButton_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_LobbyPlayerRowButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Construct");

	UW_LobbyPlayerRowButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.ExecuteUbergraph_W_LobbyPlayerRowButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyPlayerRowButton_C::ExecuteUbergraph_W_LobbyPlayerRowButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.ExecuteUbergraph_W_LobbyPlayerRowButton");

	UW_LobbyPlayerRowButton_C_ExecuteUbergraph_W_LobbyPlayerRowButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.OnAdminMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyPlayerRowButton_C::OnAdminMenu__DelegateSignature(class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.OnAdminMenu__DelegateSignature");

	UW_LobbyPlayerRowButton_C_OnAdminMenu__DelegateSignature_Params params;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
