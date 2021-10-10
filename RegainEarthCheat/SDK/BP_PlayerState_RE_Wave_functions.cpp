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

// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.IsInDeadSpectatorMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DeadSpectatorMode_             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerState_RE_Wave_C::IsInDeadSpectatorMode(bool* DeadSpectatorMode_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.IsInDeadSpectatorMode");

	ABP_PlayerState_RE_Wave_C_IsInDeadSpectatorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeadSpectatorMode_ != nullptr)
		*DeadSpectatorMode_ = params.DeadSpectatorMode_;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStateIsReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ready_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerState_RE_Wave_C::GetPlayerStateIsReady(bool* ready_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStateIsReady");

	ABP_PlayerState_RE_Wave_C_GetPlayerStateIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ready_ != nullptr)
		*ready_ = params.ready_;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStateName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 player_name                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::GetPlayerStateName(struct FString* player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStateName");

	ABP_PlayerState_RE_Wave_C_GetPlayerStateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (player_name != nullptr)
		*player_name = params.player_name;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStatePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ping_in_ms                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::GetPlayerStatePing(int* ping_in_ms)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerStatePing");

	ABP_PlayerState_RE_Wave_C_GetPlayerStatePing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ping_in_ms != nullptr)
		*ping_in_ms = params.ping_in_ms;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerScore                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::GetPlayerScore(int* PlayerScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetPlayerScore");

	ABP_PlayerState_RE_Wave_C_GetPlayerScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerScore != nullptr)
		*PlayerScore = params.PlayerScore;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetOwnPlayername
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::GetOwnPlayername(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.GetOwnPlayername");

	ABP_PlayerState_RE_Wave_C_GetOwnPlayername_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsInAir
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerKillsInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsInAir");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerKillsInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerRevivedOtherPlayer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerRevivedOtherPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerRevivedOtherPlayer");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerRevivedOtherPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsExplosives
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerKillsExplosives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsExplosives");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerKillsExplosives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsHeadshots
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerKillsHeadshots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKillsHeadshots");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerKillsHeadshots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerGotDeath
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerGotDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerGotDeath");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerGotDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_IsReady
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_IsReady");

	ABP_PlayerState_RE_Wave_C_OnRep_IsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_SteamID
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_SteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_SteamID");

	ABP_PlayerState_RE_Wave_C_OnRep_SteamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKills
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerKills");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerUnconscious
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerUnconscious()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerUnconscious");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerUnconscious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerScore
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::OnRep_PlayerScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.OnRep_PlayerScore");

	ABP_PlayerState_RE_Wave_C_OnRep_PlayerScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillCloseCombat
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillCloseCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillCloseCombat");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillCloseCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillWithPossessedAi
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillWithPossessedAi()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillWithPossessedAi");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillWithPossessedAi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillWithLauncher
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillWithLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillWithLauncher");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillWithLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetPlayerStateIsReadyAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetReady_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerState_RE_Wave_C::SetPlayerStateIsReadyAndReplicate(bool SetReady_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetPlayerStateIsReadyAndReplicate");

	ABP_PlayerState_RE_Wave_C_SetPlayerStateIsReadyAndReplicate_Params params;
	params.SetReady_ = SetReady_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.Server_SetPlayerStateIsReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewReadyState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerState_RE_Wave_C::Server_SetPlayerStateIsReady(bool NewReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.Server_SetPlayerStateIsReady");

	ABP_PlayerState_RE_Wave_C_Server_SetPlayerStateIsReady_Params params;
	params.NewReadyState = NewReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.ReceiveBeginPlay");

	ABP_PlayerState_RE_Wave_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetOwnPlayernameDeprecated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::SetOwnPlayernameDeprecated(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetOwnPlayernameDeprecated");

	ABP_PlayerState_RE_Wave_C_SetOwnPlayernameDeprecated_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.UpdatePlayerScore
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::UpdatePlayerScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.UpdatePlayerScore");

	ABP_PlayerState_RE_Wave_C_UpdatePlayerScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddToPlayerScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreToAddToPlayerScore        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::AddToPlayerScore(int ScoreToAddToPlayerScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddToPlayerScore");

	ABP_PlayerState_RE_Wave_C_AddToPlayerScore_Params params;
	params.ScoreToAddToPlayerScore = ScoreToAddToPlayerScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByOne
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByOne");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillByOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerUnconsciousByOne
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerUnconsciousByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerUnconsciousByOne");

	ABP_PlayerState_RE_Wave_C_AddPlayerUnconsciousByOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PersonaStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPersonaStateChange     Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_PlayerState_RE_Wave_C::PersonaStateChanged(const struct FPersonaStateChange& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PersonaStateChanged");

	ABP_PlayerState_RE_Wave_C_PersonaStateChanged_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.RetriveSteamUserData
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::RetriveSteamUserData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.RetriveSteamUserData");

	ABP_PlayerState_RE_Wave_C_RetriveSteamUserData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PersonaStateChangedManualCall
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PersonaStateChangedManualCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PersonaStateChangedManualCall");

	ABP_PlayerState_RE_Wave_C_PersonaStateChangedManualCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetSteamIDAndStartRepNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::SetSteamIDAndStartRepNotify(const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetSteamIDAndStartRepNotify");

	ABP_PlayerState_RE_Wave_C_SetSteamIDAndStartRepNotify_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SubtractFromPlayerScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubtractScore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::SubtractFromPlayerScore(int SubtractScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SubtractFromPlayerScore");

	ABP_PlayerState_RE_Wave_C_SubtractFromPlayerScore_Params params;
	params.SubtractScore = SubtractScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.TriggerRequestUserInformationSteam
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::TriggerRequestUserInformationSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.TriggerRequestUserInformationSteam");

	ABP_PlayerState_RE_Wave_C_TriggerRequestUserInformationSteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetDeadSpectatorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetNewIsDeadSpectatorMode_     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerState_RE_Wave_C::SetDeadSpectatorMode(bool SetNewIsDeadSpectatorMode_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.SetDeadSpectatorMode");

	ABP_PlayerState_RE_Wave_C_SetDeadSpectatorMode_Params params;
	params.SetNewIsDeadSpectatorMode_ = SetNewIsDeadSpectatorMode_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerDeathByOne
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerDeathByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerDeathByOne");

	ABP_PlayerState_RE_Wave_C_AddPlayerDeathByOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByExplosiveByOne
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillByExplosiveByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByExplosiveByOne");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillByExplosiveByOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByHeadshotByOne
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillByHeadshotByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillByHeadshotByOne");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillByHeadshotByOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerRevivedOtherPlayerByOne
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerRevivedOtherPlayerByOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerRevivedOtherPlayerByOne");

	ABP_PlayerState_RE_Wave_C_AddPlayerRevivedOtherPlayerByOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillInAir
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::AddPlayerKillInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.AddPlayerKillInAir");

	ABP_PlayerState_RE_Wave_C_AddPlayerKillInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.ExecuteUbergraph_BP_PlayerState_RE_Wave
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerState_RE_Wave_C::ExecuteUbergraph_BP_PlayerState_RE_Wave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.ExecuteUbergraph_BP_PlayerState_RE_Wave");

	ABP_PlayerState_RE_Wave_C_ExecuteUbergraph_BP_PlayerState_RE_Wave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsInAirUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsKillsInAirUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsInAirUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsKillsInAirUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsExplosiveUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsKillsExplosiveUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsExplosiveUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsKillsExplosiveUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsHeadshotUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsKillsHeadshotUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsHeadshotUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsKillsHeadshotUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsGotDeathUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsGotDeathUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsGotDeathUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsGotDeathUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsScoresUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsScoresUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsScoresUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsScoresUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsNameUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsNameUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsNameUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsNameUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsAvatarUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsAvatarUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsAvatarUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsAvatarUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsGotUnconsciousUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsGotUnconsciousUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsGotUnconsciousUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsGotUnconsciousUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerState_RE_Wave_C::PlayerStatsKillsUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C.PlayerStatsKillsUpdated__DelegateSignature");

	ABP_PlayerState_RE_Wave_C_PlayerStatsKillsUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
