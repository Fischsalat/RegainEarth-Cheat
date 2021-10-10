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

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.UpdateChatWindowWithOneNewMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Sender                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*       OwnerPlayerControllerOfChatMessage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatWindowLobby_C::UpdateChatWindowWithOneNewMessage(const struct FText& Sender, const struct FText& Text, class APlayerController* OwnerPlayerControllerOfChatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.UpdateChatWindowWithOneNewMessage");

	UW_ChatWindowLobby_C_UpdateChatWindowWithOneNewMessage_Params params;
	params.Sender = Sender;
	params.Text = Text;
	params.OwnerPlayerControllerOfChatMessage = OwnerPlayerControllerOfChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatWindowLobby.W_ChatWindowLobby_C.OnTextCommitted_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatWindowLobby_C::OnTextCommitted_Event_1(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.OnTextCommitted_Event_1");

	UW_ChatWindowLobby_C_OnTextCommitted_Event_1_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatWindowLobby.W_ChatWindowLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ChatWindowLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.Construct");

	UW_ChatWindowLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatWindowLobby.W_ChatWindowLobby_C.SentMessageToServerAndReplicateToClients
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToSend                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_ChatWindowLobby_C::SentMessageToServerAndReplicateToClients(const struct FText& TextToSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.SentMessageToServerAndReplicateToClients");

	UW_ChatWindowLobby_C_SentMessageToServerAndReplicateToClients_Params params;
	params.TextToSend = TextToSend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatWindowLobby.W_ChatWindowLobby_C.BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UW_ChatWindowLobby_C::BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UW_ChatWindowLobby_C_BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatWindowLobby.W_ChatWindowLobby_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatWindowLobby_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UW_ChatWindowLobby_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatWindowLobby.W_ChatWindowLobby_C.ExecuteUbergraph_W_ChatWindowLobby
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatWindowLobby_C::ExecuteUbergraph_W_ChatWindowLobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatWindowLobby.W_ChatWindowLobby_C.ExecuteUbergraph_W_ChatWindowLobby");

	UW_ChatWindowLobby_C_ExecuteUbergraph_W_ChatWindowLobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
