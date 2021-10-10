#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.UpdateChatWindowWithOneNewMessage
struct UW_ChatWindowLobby_C_UpdateChatWindowWithOneNewMessage_Params
{
	struct FText                                       Sender;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                           OwnerPlayerControllerOfChatMessage;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.OnTextCommitted_Event_1
struct UW_ChatWindowLobby_C_OnTextCommitted_Event_1_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.Construct
struct UW_ChatWindowLobby_C_Construct_Params
{
};

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.SentMessageToServerAndReplicateToClients
struct UW_ChatWindowLobby_C_SentMessageToServerAndReplicateToClients_Params
{
	struct FText                                       TextToSend;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UW_ChatWindowLobby_C_BndEvt__Button_Sent_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UW_ChatWindowLobby_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1181_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChatWindowLobby.W_ChatWindowLobby_C.ExecuteUbergraph_W_ChatWindowLobby
struct UW_ChatWindowLobby_C_ExecuteUbergraph_W_ChatWindowLobby_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
