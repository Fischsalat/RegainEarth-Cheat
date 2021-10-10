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

// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetPlayerPawnList
struct UBPI_Lobby_GameState_Interface_C_SetPlayerPawnList_Params
{
	TArray<class APawn*>                               PlayerPawnList;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetPlayerControllerList
struct UBPI_Lobby_GameState_Interface_C_SetPlayerControllerList_Params
{
};

// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetSelectedMapServer
struct UBPI_Lobby_GameState_Interface_C_SetSelectedMapServer_Params
{
	struct FString                                     SetMapKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.GetSelectedMapServer
struct UBPI_Lobby_GameState_Interface_C_GetSelectedMapServer_Params
{
	struct FString                                     SelectedMapServer;                                         // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
