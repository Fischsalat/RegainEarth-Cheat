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

// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetPlayerPawnList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APawn*>           PlayerPawnList                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_Lobby_GameState_Interface_C::SetPlayerPawnList(TArray<class APawn*> PlayerPawnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetPlayerPawnList");

	UBPI_Lobby_GameState_Interface_C_SetPlayerPawnList_Params params;
	params.PlayerPawnList = PlayerPawnList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetPlayerControllerList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
void UBPI_Lobby_GameState_Interface_C::SetPlayerControllerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetPlayerControllerList");

	UBPI_Lobby_GameState_Interface_C_SetPlayerControllerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetSelectedMapServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SetMapKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_Lobby_GameState_Interface_C::SetSelectedMapServer(const struct FString& SetMapKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.SetSelectedMapServer");

	UBPI_Lobby_GameState_Interface_C_SetSelectedMapServer_Params params;
	params.SetMapKey = SetMapKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.GetSelectedMapServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedMapServer              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_Lobby_GameState_Interface_C::GetSelectedMapServer(struct FString* SelectedMapServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lobby_GameState_Interface.BPI_Lobby_GameState_Interface_C.GetSelectedMapServer");

	UBPI_Lobby_GameState_Interface_C_GetSelectedMapServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedMapServer != nullptr)
		*SelectedMapServer = params.SelectedMapServer;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
