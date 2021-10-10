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

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillWithLauncher
struct UBPI_PlayerState_C_AddPlayerKillWithLauncher_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillWithPossessedAi
struct UBPI_PlayerState_C_AddPlayerKillWithPossessedAi_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillCloseCombat
struct UBPI_PlayerState_C_AddPlayerKillCloseCombat_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillInAir
struct UBPI_PlayerState_C_AddPlayerKillInAir_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerRevivedOtherPlayerByOne
struct UBPI_PlayerState_C_AddPlayerRevivedOtherPlayerByOne_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillByExplosiveByOne
struct UBPI_PlayerState_C_AddPlayerKillByExplosiveByOne_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillByHeadshotByOne
struct UBPI_PlayerState_C_AddPlayerKillByHeadshotByOne_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerKillByOne
struct UBPI_PlayerState_C_AddPlayerKillByOne_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerDeathByOne
struct UBPI_PlayerState_C_AddPlayerDeathByOne_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddPlayerUnconsciousByOne
struct UBPI_PlayerState_C_AddPlayerUnconsciousByOne_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.SetDeadSpectatorMode
struct UBPI_PlayerState_C_SetDeadSpectatorMode_Params
{
	bool                                               SetNewIsDeadSpectatorMode_;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerState.BPI_PlayerState_C.IsInDeadSpectatorMode
struct UBPI_PlayerState_C_IsInDeadSpectatorMode_Params
{
	bool                                               DeadSpectatorMode_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerState.BPI_PlayerState_C.TriggerRequestUserInformationSteam
struct UBPI_PlayerState_C_TriggerRequestUserInformationSteam_Params
{
};

// Function BPI_PlayerState.BPI_PlayerState_C.SubtractFromPlayerScore
struct UBPI_PlayerState_C_SubtractFromPlayerScore_Params
{
	int                                                SubtractScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.SetSteamIDAndStartRepNotify
struct UBPI_PlayerState_C_SetSteamIDAndStartRepNotify_Params
{
	struct FString                                     SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.SetPlayerStateIsReadyAndReplicate
struct UBPI_PlayerState_C_SetPlayerStateIsReadyAndReplicate_Params
{
	bool                                               SetReady_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerState.BPI_PlayerState_C.GetPlayerStateIsReady
struct UBPI_PlayerState_C_GetPlayerStateIsReady_Params
{
	bool                                               ready_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerState.BPI_PlayerState_C.GetPlayerStateName
struct UBPI_PlayerState_C_GetPlayerStateName_Params
{
	struct FString                                     player_name;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.GetPlayerStatePing
struct UBPI_PlayerState_C_GetPlayerStatePing_Params
{
	int                                                ping_in_ms;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.AddToPlayerScore
struct UBPI_PlayerState_C_AddToPlayerScore_Params
{
	int                                                ScoreToAddToPlayerScore;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.GetPlayerScore
struct UBPI_PlayerState_C_GetPlayerScore_Params
{
	int                                                PlayerScore;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.GetOwnPlayername
struct UBPI_PlayerState_C_GetOwnPlayername_Params
{
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_PlayerState.BPI_PlayerState_C.SetOwnPlayername
struct UBPI_PlayerState_C_SetOwnPlayername_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
