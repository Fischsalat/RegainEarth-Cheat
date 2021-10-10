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

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.ToClient_StartGameInterface
struct UBPI_Lobby_PlayerController_Interface_C_ToClient_StartGameInterface_Params
{
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.RefreshPlayerListValuesCompletely
struct UBPI_Lobby_PlayerController_Interface_C_RefreshPlayerListValuesCompletely_Params
{
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SetReadyState
struct UBPI_Lobby_PlayerController_Interface_C_SetReadyState_Params
{
	bool                                               NewReadyState;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.UpdatePlayerControllers
struct UBPI_Lobby_PlayerController_Interface_C_UpdatePlayerControllers_Params
{
	TArray<class AController*>                         PlayersControllerList_OnlyUseableOnServer;                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SetPlayerListAndUpdatePlayerListValuesCompletely
struct UBPI_Lobby_PlayerController_Interface_C_SetPlayerListAndUpdatePlayerListValuesCompletely_Params
{
	TArray<class APawn*>                               PlayerPawnList;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.SendChatMessage
struct UBPI_Lobby_PlayerController_Interface_C_SendChatMessage_Params
{
	struct FText                                       TextToSend;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                PlayerStateRefOfSender;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.GetLobbyWidgetReference
struct UBPI_Lobby_PlayerController_Interface_C_GetLobbyWidgetReference_Params
{
	class UW_LobbyFrame_C*                             LobbyWidgetLobyFrameRef;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C.ExecuteTest
struct UBPI_Lobby_PlayerController_Interface_C_ExecuteTest_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
