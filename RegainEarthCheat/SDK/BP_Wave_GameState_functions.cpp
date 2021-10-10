// Name: RegainEart-FirtstStrike, Version: Version-1

#include "pch.h"

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

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetSelectedMapServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedMapServer              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::GetSelectedMapServer(struct FString* SelectedMapServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetSelectedMapServer");

	ABP_Wave_GameState_C_GetSelectedMapServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedMapServer != nullptr)
		*SelectedMapServer = params.SelectedMapServer;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.GetSteamIDPlayerArrayAsSteamIdObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        SteamIdArray                   (Parm, OutParm)
void ABP_Wave_GameState_C::GetSteamIDPlayerArrayAsSteamIdObject(TArray<struct FSteamID>* SteamIdArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetSteamIDPlayerArrayAsSteamIdObject");

	ABP_Wave_GameState_C_GetSteamIDPlayerArrayAsSteamIdObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIdArray != nullptr)
		*SteamIdArray = params.SteamIdArray;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.GetTeamScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::GetTeamScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetTeamScore");

	ABP_Wave_GameState_C_GetTeamScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ElapsedMatchtime
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_ElapsedMatchtime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ElapsedMatchtime");

	ABP_Wave_GameState_C_OnRep_ElapsedMatchtime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ElapsedRoundtime
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_ElapsedRoundtime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ElapsedRoundtime");

	ABP_Wave_GameState_C_OnRep_ElapsedRoundtime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.GetHighestPlayerCountInMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            HighestPlayerCountInMatch      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::GetHighestPlayerCountInMatch(int* HighestPlayerCountInMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetHighestPlayerCountInMatch");

	ABP_Wave_GameState_C_GetHighestPlayerCountInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HighestPlayerCountInMatch != nullptr)
		*HighestPlayerCountInMatch = params.HighestPlayerCountInMatch;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.GetCountOfActivePlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CountOfActivePlayers           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::GetCountOfActivePlayers(int* CountOfActivePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetCountOfActivePlayers");

	ABP_Wave_GameState_C_GetCountOfActivePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountOfActivePlayers != nullptr)
		*CountOfActivePlayers = params.CountOfActivePlayers;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_CountOfActivePlayers
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_CountOfActivePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_CountOfActivePlayers");

	ABP_Wave_GameState_C_OnRep_CountOfActivePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.GetCurrentRoundGS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentRoundSyncFromGameMode   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::GetCurrentRoundGS(int* CurrentRoundSyncFromGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetCurrentRoundGS");

	ABP_Wave_GameState_C_GetCurrentRoundGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentRoundSyncFromGameMode != nullptr)
		*CurrentRoundSyncFromGameMode = params.CurrentRoundSyncFromGameMode;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_GameIsPaused
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_GameIsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_GameIsPaused");

	ABP_Wave_GameState_C_OnRep_GameIsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_CountEnemiesLeft
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_CountEnemiesLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_CountEnemiesLeft");

	ABP_Wave_GameState_C_OnRep_CountEnemiesLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_PlayersPawnList
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_PlayersPawnList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_PlayersPawnList");

	ABP_Wave_GameState_C_OnRep_PlayersPawnList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_SelectedMapKey_Server
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_SelectedMapKey_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_SelectedMapKey_Server");

	ABP_Wave_GameState_C_OnRep_SelectedMapKey_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_PlayersControllersList_OnlyForServerUseable
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_PlayersControllersList_OnlyForServerUseable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_PlayersControllersList_OnlyForServerUseable");

	ABP_Wave_GameState_C_OnRep_PlayersControllersList_OnlyForServerUseable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.FUpdateTeamScoreBySumPlayerScore
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::FUpdateTeamScoreBySumPlayerScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.FUpdateTeamScoreBySumPlayerScore");

	ABP_Wave_GameState_C_FUpdateTeamScoreBySumPlayerScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ScoreOverallAsTeam
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnRep_ScoreOverallAsTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ScoreOverallAsTeam");

	ABP_Wave_GameState_C_OnRep_ScoreOverallAsTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.GetCountEnemiesLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CountEnemiesLeft               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::GetCountEnemiesLeft(int* CountEnemiesLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.GetCountEnemiesLeft");

	ABP_Wave_GameState_C_GetCountEnemiesLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountEnemiesLeft != nullptr)
		*CountEnemiesLeft = params.CountEnemiesLeft;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.SetSelectedMapServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SetMapKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::SetSelectedMapServer(const struct FString& SetMapKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.SetSelectedMapServer");

	ABP_Wave_GameState_C_SetSelectedMapServer_Params params;
	params.SetMapKey = SetMapKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.SetPlayerControllerList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::SetPlayerControllerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.SetPlayerControllerList");

	ABP_Wave_GameState_C_SetPlayerControllerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.SetPlayerPawnList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APawn*>           PlayerPawnList                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Wave_GameState_C::SetPlayerPawnList(TArray<class APawn*> PlayerPawnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.SetPlayerPawnList");

	ABP_Wave_GameState_C_SetPlayerPawnList_Params params;
	params.PlayerPawnList = PlayerPawnList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Wave_GameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.ReceiveBeginPlay");

	ABP_Wave_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.DecreaseEnemyCount
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::DecreaseEnemyCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.DecreaseEnemyCount");

	ABP_Wave_GameState_C_DecreaseEnemyCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.IncreaseEnemyCount
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::IncreaseEnemyCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.IncreaseEnemyCount");

	ABP_Wave_GameState_C_IncreaseEnemyCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.ResetEnemyCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewEnemyCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::ResetEnemyCount(int NewEnemyCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.ResetEnemyCount");

	ABP_Wave_GameState_C_ResetEnemyCount_Params params;
	params.NewEnemyCount = NewEnemyCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.AddSteamIdToPlayerSteamIdList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewSteamId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::AddSteamIdToPlayerSteamIdList(const struct FString& NewSteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.AddSteamIdToPlayerSteamIdList");

	ABP_Wave_GameState_C_AddSteamIdToPlayerSteamIdList_Params params;
	params.NewSteamId = NewSteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameOverWin
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::Multicast_GameModeCallsGameOverWin(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameOverWin");

	ABP_Wave_GameState_C_Multicast_GameModeCallsGameOverWin_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameOverLoose
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::Multicast_GameModeCallsGameOverLoose(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameOverLoose");

	ABP_Wave_GameState_C_Multicast_GameModeCallsGameOverLoose_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.UpdateTeamScoreBySumPlayerScores
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::UpdateTeamScoreBySumPlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.UpdateTeamScoreBySumPlayerScores");

	ABP_Wave_GameState_C_UpdateTeamScoreBySumPlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameStarts
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::Multicast_GameModeCallsGameStarts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameStarts");

	ABP_Wave_GameState_C_Multicast_GameModeCallsGameStarts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.Server_PauseGameOnClientsAndServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PauseGame                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_GameState_C::Server_PauseGameOnClientsAndServer(bool PauseGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.Server_PauseGameOnClientsAndServer");

	ABP_Wave_GameState_C_Server_PauseGameOnClientsAndServer_Params params;
	params.PauseGame = PauseGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.PauseGameLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayBeforePause               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSetPaused                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_GameState_C::PauseGameLocally(float DelayBeforePause, bool bSetPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.PauseGameLocally");

	ABP_Wave_GameState_C_PauseGameLocally_Params params;
	params.DelayBeforePause = DelayBeforePause;
	params.bSetPaused = bSetPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.SetSyncCurrentRoundToGameState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentRoundSyncFromGameMode   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::SetSyncCurrentRoundToGameState(int CurrentRoundSyncFromGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.SetSyncCurrentRoundToGameState");

	ABP_Wave_GameState_C_SetSyncCurrentRoundToGameState_Params params;
	params.CurrentRoundSyncFromGameMode = CurrentRoundSyncFromGameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.SetCountOfActivePlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountOfActivePlayers           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::SetCountOfActivePlayers(int CountOfActivePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.SetCountOfActivePlayers");

	ABP_Wave_GameState_C_SetCountOfActivePlayers_Params params;
	params.CountOfActivePlayers = CountOfActivePlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.SetElapsedRoundtime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ElapsedRoundtime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::SetElapsedRoundtime(int ElapsedRoundtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.SetElapsedRoundtime");

	ABP_Wave_GameState_C_SetElapsedRoundtime_Params params;
	params.ElapsedRoundtime = ElapsedRoundtime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.AddToElapsedMatchtime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ElapsedMatchtime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::AddToElapsedMatchtime(int ElapsedMatchtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.AddToElapsedMatchtime");

	ABP_Wave_GameState_C_AddToElapsedMatchtime_Params params;
	params.ElapsedMatchtime = ElapsedMatchtime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.ExecuteUbergraph_BP_Wave_GameState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::ExecuteUbergraph_BP_Wave_GameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.ExecuteUbergraph_BP_Wave_GameState");

	ABP_Wave_GameState_C_ExecuteUbergraph_BP_Wave_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnOnlyFewEnemiesLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnOnlyFewEnemiesLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnOnlyFewEnemiesLeft__DelegateSignature");

	ABP_Wave_GameState_C_OnOnlyFewEnemiesLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameStarts_GStateReplicated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_GameState_C::OnGameStarts_GStateReplicated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameStarts_GStateReplicated__DelegateSignature");

	ABP_Wave_GameState_C_OnGameStarts_GStateReplicated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameOverLoose_GStateReplicated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::OnGameOverLoose_GStateReplicated__DelegateSignature(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameOverLoose_GStateReplicated__DelegateSignature");

	ABP_Wave_GameState_C_OnGameOverLoose_GStateReplicated__DelegateSignature_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameOverWin_GStateReplicated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_GameState_C::OnGameOverWin_GStateReplicated__DelegateSignature(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameOverWin_GStateReplicated__DelegateSignature");

	ABP_Wave_GameState_C_OnGameOverWin_GStateReplicated__DelegateSignature_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
