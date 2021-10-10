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

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.ToClient_StartGameInterface
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Lobby_PlayerController_Interface_C::ToClient_StartGameInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.ToClient_StartGameInterface");

	UBPI_Lobby_PlayerController_Interface_C_ToClient_StartGameInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.RefreshPlayerListValuesCompletely
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Lobby_PlayerController_Interface_C::RefreshPlayerListValuesCompletely()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.RefreshPlayerListValuesCompletely");

	UBPI_Lobby_PlayerController_Interface_C_RefreshPlayerListValuesCompletely_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SetReadyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewReadyState                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Lobby_PlayerController_Interface_C::SetReadyState(bool NewReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SetReadyState");

	UBPI_Lobby_PlayerController_Interface_C_SetReadyState_Params params;
	params.NewReadyState = NewReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.UpdatePlayerControllers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AController*>     PlayersControllerList_OnlyUseableOnServer (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_Lobby_PlayerController_Interface_C::UpdatePlayerControllers(TArray<class AController*> PlayersControllerList_OnlyUseableOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.UpdatePlayerControllers");

	UBPI_Lobby_PlayerController_Interface_C_UpdatePlayerControllers_Params params;
	params.PlayersControllerList_OnlyUseableOnServer = PlayersControllerList_OnlyUseableOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SetPlayerListAndUpdatePlayerListValuesCompletely
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APawn*>           PlayerPawnList                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_Lobby_PlayerController_Interface_C::SetPlayerListAndUpdatePlayerListValuesCompletely(TArray<class APawn*> PlayerPawnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SetPlayerListAndUpdatePlayerListValuesCompletely");

	UBPI_Lobby_PlayerController_Interface_C_SetPlayerListAndUpdatePlayerListValuesCompletely_Params params;
	params.PlayerPawnList = PlayerPawnList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SendChatMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToSend                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            PlayerStateRefOfSender         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Lobby_PlayerController_Interface_C::SendChatMessage(const struct FText& TextToSend, class APlayerState* PlayerStateRefOfSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SendChatMessage");

	UBPI_Lobby_PlayerController_Interface_C_SendChatMessage_Params params;
	params.TextToSend = TextToSend;
	params.PlayerStateRefOfSender = PlayerStateRefOfSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.GetLobbyWidgetReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LobbyFrame_C*         LobbyWidgetLobyFrameRef        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Lobby_PlayerController_Interface_C::GetLobbyWidgetReference(class UW_LobbyFrame_C** LobbyWidgetLobyFrameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.GetLobbyWidgetReference");

	UBPI_Lobby_PlayerController_Interface_C_GetLobbyWidgetReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyWidgetLobyFrameRef != nullptr)
		*LobbyWidgetLobyFrameRef = params.LobbyWidgetLobyFrameRef;

}


// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.ExecuteTest
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Lobby_PlayerController_Interface_C::ExecuteTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.ExecuteTest");

	UBPI_Lobby_PlayerController_Interface_C_ExecuteTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
