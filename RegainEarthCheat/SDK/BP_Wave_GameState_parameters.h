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

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetSelectedMapServer
struct ABP_Wave_GameState_C_GetSelectedMapServer_Params
{
	struct FString                                     SelectedMapServer;                                         // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetSteamIDPlayerArrayAsSteamIdObject
struct ABP_Wave_GameState_C_GetSteamIDPlayerArrayAsSteamIdObject_Params
{
	TArray<struct FSteamID>                            SteamIdArray;                                              // (Parm, OutParm)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetTeamScore
struct ABP_Wave_GameState_C_GetTeamScore_Params
{
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ElapsedMatchtime
struct ABP_Wave_GameState_C_OnRep_ElapsedMatchtime_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ElapsedRoundtime
struct ABP_Wave_GameState_C_OnRep_ElapsedRoundtime_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetHighestPlayerCountInMatch
struct ABP_Wave_GameState_C_GetHighestPlayerCountInMatch_Params
{
	int                                                HighestPlayerCountInMatch;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetCountOfActivePlayers
struct ABP_Wave_GameState_C_GetCountOfActivePlayers_Params
{
	int                                                CountOfActivePlayers;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_CountOfActivePlayers
struct ABP_Wave_GameState_C_OnRep_CountOfActivePlayers_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetCurrentRoundGS
struct ABP_Wave_GameState_C_GetCurrentRoundGS_Params
{
	int                                                CurrentRoundSyncFromGameMode;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_GameIsPaused
struct ABP_Wave_GameState_C_OnRep_GameIsPaused_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_CountEnemiesLeft
struct ABP_Wave_GameState_C_OnRep_CountEnemiesLeft_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_PlayersPawnList
struct ABP_Wave_GameState_C_OnRep_PlayersPawnList_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_SelectedMapKey_Server
struct ABP_Wave_GameState_C_OnRep_SelectedMapKey_Server_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_PlayersControllersList_OnlyForServerUseable
struct ABP_Wave_GameState_C_OnRep_PlayersControllersList_OnlyForServerUseable_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.FUpdateTeamScoreBySumPlayerScore
struct ABP_Wave_GameState_C_FUpdateTeamScoreBySumPlayerScore_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnRep_ScoreOverallAsTeam
struct ABP_Wave_GameState_C_OnRep_ScoreOverallAsTeam_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.GetCountEnemiesLeft
struct ABP_Wave_GameState_C_GetCountEnemiesLeft_Params
{
	int                                                CountEnemiesLeft;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.SetSelectedMapServer
struct ABP_Wave_GameState_C_SetSelectedMapServer_Params
{
	struct FString                                     SetMapKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.SetPlayerControllerList
struct ABP_Wave_GameState_C_SetPlayerControllerList_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.SetPlayerPawnList
struct ABP_Wave_GameState_C_SetPlayerPawnList_Params
{
	TArray<class APawn*>                               PlayerPawnList;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.ReceiveBeginPlay
struct ABP_Wave_GameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.DecreaseEnemyCount
struct ABP_Wave_GameState_C_DecreaseEnemyCount_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.IncreaseEnemyCount
struct ABP_Wave_GameState_C_IncreaseEnemyCount_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.ResetEnemyCount
struct ABP_Wave_GameState_C_ResetEnemyCount_Params
{
	int                                                NewEnemyCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.AddSteamIdToPlayerSteamIdList
struct ABP_Wave_GameState_C_AddSteamIdToPlayerSteamIdList_Params
{
	struct FString                                     NewSteamId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameOverWin
struct ABP_Wave_GameState_C_Multicast_GameModeCallsGameOverWin_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameOverLoose
struct ABP_Wave_GameState_C_Multicast_GameModeCallsGameOverLoose_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.UpdateTeamScoreBySumPlayerScores
struct ABP_Wave_GameState_C_UpdateTeamScoreBySumPlayerScores_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.Multicast_GameModeCallsGameStarts
struct ABP_Wave_GameState_C_Multicast_GameModeCallsGameStarts_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.Server_PauseGameOnClientsAndServer
struct ABP_Wave_GameState_C_Server_PauseGameOnClientsAndServer_Params
{
	bool                                               PauseGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.PauseGameLocally
struct ABP_Wave_GameState_C_PauseGameLocally_Params
{
	float                                              DelayBeforePause;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSetPaused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.SetSyncCurrentRoundToGameState
struct ABP_Wave_GameState_C_SetSyncCurrentRoundToGameState_Params
{
	int                                                CurrentRoundSyncFromGameMode;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.SetCountOfActivePlayers
struct ABP_Wave_GameState_C_SetCountOfActivePlayers_Params
{
	int                                                CountOfActivePlayers;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.SetElapsedRoundtime
struct ABP_Wave_GameState_C_SetElapsedRoundtime_Params
{
	int                                                ElapsedRoundtime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.AddToElapsedMatchtime
struct ABP_Wave_GameState_C_AddToElapsedMatchtime_Params
{
	int                                                ElapsedMatchtime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.ExecuteUbergraph_BP_Wave_GameState
struct ABP_Wave_GameState_C_ExecuteUbergraph_BP_Wave_GameState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnOnlyFewEnemiesLeft__DelegateSignature
struct ABP_Wave_GameState_C_OnOnlyFewEnemiesLeft__DelegateSignature_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameStarts_GStateReplicated__DelegateSignature
struct ABP_Wave_GameState_C_OnGameStarts_GStateReplicated__DelegateSignature_Params
{
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameOverLoose_GStateReplicated__DelegateSignature
struct ABP_Wave_GameState_C_OnGameOverLoose_GStateReplicated__DelegateSignature_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_GameState.BP_Wave_GameState_C.OnGameOverWin_GStateReplicated__DelegateSignature
struct ABP_Wave_GameState_C_OnGameOverWin_GStateReplicated__DelegateSignature_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
