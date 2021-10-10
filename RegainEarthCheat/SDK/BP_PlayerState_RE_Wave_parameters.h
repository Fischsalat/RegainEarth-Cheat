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

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.IsInDeadSpectatorMode
struct ABP_PlayerState_RE_Wave_C_IsInDeadSpectatorMode_Params
{
	bool                                               DeadSpectatorMode_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStateIsReady
struct ABP_PlayerState_RE_Wave_C_GetPlayerStateIsReady_Params
{
	bool                                               ready_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStateName
struct ABP_PlayerState_RE_Wave_C_GetPlayerStateName_Params
{
	struct FString                                     player_name;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStatePing
struct ABP_PlayerState_RE_Wave_C_GetPlayerStatePing_Params
{
	int                                                ping_in_ms;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerScore
struct ABP_PlayerState_RE_Wave_C_GetPlayerScore_Params
{
	int                                                PlayerScore;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetOwnPlayername
struct ABP_PlayerState_RE_Wave_C_GetOwnPlayername_Params
{
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsInAir
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerKillsInAir_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerRevivedOtherPlayer
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerRevivedOtherPlayer_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsExplosives
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerKillsExplosives_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsHeadshots
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerKillsHeadshots_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerGotDeath
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerGotDeath_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_IsReady
struct ABP_PlayerState_RE_Wave_C_OnRep_IsReady_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_SteamID
struct ABP_PlayerState_RE_Wave_C_OnRep_SteamID_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKills
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerKills_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerUnconscious
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerUnconscious_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerScore
struct ABP_PlayerState_RE_Wave_C_OnRep_PlayerScore_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillCloseCombat
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillCloseCombat_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillWithPossessedAi
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillWithPossessedAi_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillWithLauncher
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillWithLauncher_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetPlayerStateIsReadyAndReplicate
struct ABP_PlayerState_RE_Wave_C_SetPlayerStateIsReadyAndReplicate_Params
{
	bool                                               SetReady_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.Server_SetPlayerStateIsReady
struct ABP_PlayerState_RE_Wave_C_Server_SetPlayerStateIsReady_Params
{
	bool                                               NewReadyState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.ReceiveBeginPlay
struct ABP_PlayerState_RE_Wave_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetOwnPlayernameDeprecated
struct ABP_PlayerState_RE_Wave_C_SetOwnPlayernameDeprecated_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.UpdatePlayerScore
struct ABP_PlayerState_RE_Wave_C_UpdatePlayerScore_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddToPlayerScore
struct ABP_PlayerState_RE_Wave_C_AddToPlayerScore_Params
{
	int                                                ScoreToAddToPlayerScore;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByOne
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillByOne_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerUnconsciousByOne
struct ABP_PlayerState_RE_Wave_C_AddPlayerUnconsciousByOne_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PersonaStateChanged
struct ABP_PlayerState_RE_Wave_C_PersonaStateChanged_Params
{
	struct FPersonaStateChange                         Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.RetriveSteamUserData
struct ABP_PlayerState_RE_Wave_C_RetriveSteamUserData_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PersonaStateChangedManualCall
struct ABP_PlayerState_RE_Wave_C_PersonaStateChangedManualCall_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetSteamIDAndStartRepNotify
struct ABP_PlayerState_RE_Wave_C_SetSteamIDAndStartRepNotify_Params
{
	struct FString                                     SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SubtractFromPlayerScore
struct ABP_PlayerState_RE_Wave_C_SubtractFromPlayerScore_Params
{
	int                                                SubtractScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.TriggerRequestUserInformationSteam
struct ABP_PlayerState_RE_Wave_C_TriggerRequestUserInformationSteam_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetDeadSpectatorMode
struct ABP_PlayerState_RE_Wave_C_SetDeadSpectatorMode_Params
{
	bool                                               SetNewIsDeadSpectatorMode_;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerDeathByOne
struct ABP_PlayerState_RE_Wave_C_AddPlayerDeathByOne_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByExplosiveByOne
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillByExplosiveByOne_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByHeadshotByOne
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillByHeadshotByOne_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerRevivedOtherPlayerByOne
struct ABP_PlayerState_RE_Wave_C_AddPlayerRevivedOtherPlayerByOne_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillInAir
struct ABP_PlayerState_RE_Wave_C_AddPlayerKillInAir_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.ExecuteUbergraph_BP_PlayerState_RE_Wave
struct ABP_PlayerState_RE_Wave_C_ExecuteUbergraph_BP_PlayerState_RE_Wave_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsInAirUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsKillsInAirUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsExplosiveUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsKillsExplosiveUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsHeadshotUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsKillsHeadshotUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsGotDeathUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsGotDeathUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsScoresUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsScoresUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsNameUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsNameUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsAvatarUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsAvatarUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsGotUnconsciousUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsGotUnconsciousUpdated__DelegateSignature_Params
{
};

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsUpdated__DelegateSignature
struct ABP_PlayerState_RE_Wave_C_PlayerStatsKillsUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
