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

// Function W_LobbyFrame.W_LobbyFrame_C.SetButtonsDisabled
// (Public, BlueprintCallable, BlueprintEvent)
void UW_LobbyFrame_C::SetButtonsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.SetButtonsDisabled");

	UW_LobbyFrame_C_SetButtonsDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.IsReadyChecker
// (Public, BlueprintCallable, BlueprintEvent)
void UW_LobbyFrame_C::IsReadyChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.IsReadyChecker");

	UW_LobbyFrame_C_IsReadyChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.SetReadyStateToUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LobbyFrame_C::SetReadyStateToUI(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.SetReadyStateToUI");

	UW_LobbyFrame_C_SetReadyStateToUI_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LobbyFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.ActiveWidget");

	UW_LobbyFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.OnHovered");

	UW_LobbyFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_LobbyFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.Construct");

	UW_LobbyFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.AddNewPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                   PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyFrame_C::AddNewPlayer(const struct FString& inString, int inInt, bool IsReady, class APawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.AddNewPlayer");

	UW_LobbyFrame_C_AddNewPlayer_Params params;
	params.inString = inString;
	params.inInt = inInt;
	params.IsReady = IsReady;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.ClearPlayers
// (BlueprintCallable, BlueprintEvent)
void UW_LobbyFrame_C::ClearPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.ClearPlayers");

	UW_LobbyFrame_C_ClearPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_Lobby_TimerButton_K2Node_ComponentBoundEvent_95_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyFrame_C::BndEvt__W_Lobby_TimerButton_K2Node_ComponentBoundEvent_95_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_Lobby_TimerButton_K2Node_ComponentBoundEvent_95_OnPressed__DelegateSignature");

	UW_LobbyFrame_C_BndEvt__W_Lobby_TimerButton_K2Node_ComponentBoundEvent_95_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.OpenAdminMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyFrame_C::OpenAdminMenu(class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.OpenAdminMenu");

	UW_LobbyFrame_C_OpenAdminMenu_Params params;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_AdminMenu_PopUp_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature
// (BlueprintEvent)
void UW_LobbyFrame_C::BndEvt__W_AdminMenu_PopUp_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_AdminMenu_PopUp_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature");

	UW_LobbyFrame_C_BndEvt__W_AdminMenu_PopUp_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_BoolButton_K2Node_ComponentBoundEvent_362_OnChangeValue__DelegateSignature
// (BlueprintEvent)
void UW_LobbyFrame_C::BndEvt__W_BoolButton_K2Node_ComponentBoundEvent_362_OnChangeValue__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_BoolButton_K2Node_ComponentBoundEvent_362_OnChangeValue__DelegateSignature");

	UW_LobbyFrame_C_BndEvt__W_BoolButton_K2Node_ComponentBoundEvent_362_OnChangeValue__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyFrame_C::BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");

	UW_LobbyFrame_C_BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__Button_211_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_LobbyFrame_C::BndEvt__Button_211_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__Button_211_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_LobbyFrame_C_BndEvt__Button_211_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.MapChangedByServer
// (BlueprintCallable, BlueprintEvent)
void UW_LobbyFrame_C::MapChangedByServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.MapChangedByServer");

	UW_LobbyFrame_C_MapChangedByServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LobbyFrame.W_LobbyFrame_C.ExecuteUbergraph_W_LobbyFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyFrame_C::ExecuteUbergraph_W_LobbyFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LobbyFrame.W_LobbyFrame_C.ExecuteUbergraph_W_LobbyFrame");

	UW_LobbyFrame_C_ExecuteUbergraph_W_LobbyFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
