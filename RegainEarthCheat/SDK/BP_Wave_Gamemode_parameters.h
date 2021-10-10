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

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetAllGmKnownPlayerControllerServerUsedOnly
struct ABP_Wave_Gamemode_C_GetAllGmKnownPlayerControllerServerUsedOnly_Params
{
	TArray<class AController*>                         Controller;                                                // (Parm, OutParm)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetCurrentRoundWave
struct ABP_Wave_Gamemode_C_GetCurrentRoundWave_Params
{
	int                                                CurrentRound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetCurrentElapsedRoundtime
struct ABP_Wave_Gamemode_C_GetCurrentElapsedRoundtime_Params
{
	float                                              CurrentElapsedRoundtime;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetRemainingRoundTime
struct ABP_Wave_Gamemode_C_GetRemainingRoundTime_Params
{
	float                                              RemainingRoundTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetPlayerCount
struct ABP_Wave_Gamemode_C_GetPlayerCount_Params
{
	int                                                CountOfPlayers;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetArrayOfWeaponIDsFitToValueMinMaxSettings
struct ABP_Wave_Gamemode_C_GetArrayOfWeaponIDsFitToValueMinMaxSettings_Params
{
	float                                              AiMinValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiMaxValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>         GeneratedArrayOfPossibleWeaponDrops1;                      // (Parm, OutParm)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Check If Known Player Alive And Not Dead Unconscious
struct ABP_Wave_Gamemode_C_Check_If_Known_Player_Alive_And_Not_Dead_Unconscious_Params
{
	bool                                               SomeoneStillAlive_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Handle Enemy Killed and Calculate Score
struct ABP_Wave_Gamemode_C_Handle_Enemy_Killed_and_Calculate_Score_Params
{
	class APawn*                                       PawnKilled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 KilledByController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreMultiplierOfEnemyKilled;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KilledByHeadShotOrOtherGreatHit_;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               KilledByExplosivesRadialDamage;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               KilledInAir;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_DamageType_BaseREWave_C*                 KilledByDamageType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ChoosePlayerStart
struct ABP_Wave_Gamemode_C_ChoosePlayerStart_Params
{
	class AController*                                 Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnFailure_9722B9E84179BFF2709AB98E37CD7DA4
struct ABP_Wave_Gamemode_C_OnFailure_9722B9E84179BFF2709AB98E37CD7DA4_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4
struct ABP_Wave_Gamemode_C_OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Server_TestVarRepNotifyTesting2
struct ABP_Wave_Gamemode_C_Server_TestVarRepNotifyTesting2_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.K2_OnLogout
struct ABP_Wave_Gamemode_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.K2_PostLogin
struct ABP_Wave_Gamemode_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.HandleStartingNewPlayer
struct ABP_Wave_Gamemode_C_HandleStartingNewPlayer_Params
{
	class APlayerController*                           NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.StartIterateOverAllPlayerControllerAndStartSyncPawnsTo Clients
struct ABP_Wave_Gamemode_C_StartIterateOverAllPlayerControllerAndStartSyncPawnsTo_Clients_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ReceiveBeginPlay
struct ABP_Wave_Gamemode_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_Event2
struct ABP_Wave_Gamemode_C_NewRoundTextSentToPlayersFinished_Event2_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OneEnemyKilled
struct ABP_Wave_Gamemode_C_OneEnemyKilled_Params
{
	class APawn*                                       PawnKilled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 KilledByController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreMultiplierOfEnemyKilled;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KilledByHeadShotOrOtherGreatHit_;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               KilledByExplosivesRadialDamage_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               KilledInAir;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_DamageType_BaseREWave_C*                 KilledByDamageType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  AiTransform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              AiMinValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiMaxValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingHealthPickup;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingWeaponPickup;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingGrenadePickup;                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RegisterOneMoreEnemy
struct ABP_Wave_Gamemode_C_RegisterOneMoreEnemy_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.AllPlayerShowBigMiddleScreenTextAndOnOff
struct ABP_Wave_Gamemode_C_AllPlayerShowBigMiddleScreenTextAndOnOff_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SetTextMessageOn_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CallPlayerShowBigMiddleScreenTextAndOnOff
struct ABP_Wave_Gamemode_C_CallPlayerShowBigMiddleScreenTextAndOnOff_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SetTextMessageOn_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerCallActualRoundNumberToALLPlayerHUDs
struct ABP_Wave_Gamemode_C_PlayerCallActualRoundNumberToALLPlayerHUDs_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Wave_AllEnemiesCouldBeDead
struct ABP_Wave_Gamemode_C_Wave_AllEnemiesCouldBeDead_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.AllEnemyDead_CheckEndGameConditionsStartNextRound
struct ABP_Wave_Gamemode_C_AllEnemyDead_CheckEndGameConditionsStartNextRound_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ResetDoOnceStartNextRound
struct ABP_Wave_Gamemode_C_ResetDoOnceStartNextRound_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RestartRoundTimer
struct ABP_Wave_Gamemode_C_RestartRoundTimer_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RoundTimer
struct ABP_Wave_Gamemode_C_RoundTimer_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerIsDead
struct ABP_Wave_Gamemode_C_PlayerIsDead_Params
{
	class APlayerController*                           PlayerControllerDead;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnDead;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CallGameOver
struct ABP_Wave_Gamemode_C_CallGameOver_Params
{
	bool                                               FinishedWithWin_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.InformGmBeginPlayPlayerControllerFinished
struct ABP_Wave_Gamemode_C_InformGmBeginPlayPlayerControllerFinished_Params
{
	class AController*                                 ControllerFinishesBeginPlay;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerIsUnconscious
struct ABP_Wave_Gamemode_C_PlayerIsUnconscious_Params
{
	class APlayerController*                           PlayerControllerUnconscious;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnUnconscious;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerHitPlayerFriendlyFire
struct ABP_Wave_Gamemode_C_PlayerHitPlayerFriendlyFire_Params
{
	class APlayerController*                           PlayerControllerGotDamage;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnGotDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerControllerDoesDamage;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnDoesDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerRevived
struct ABP_Wave_Gamemode_C_PlayerRevived_Params
{
	class APlayerController*                           PlayerControllerRevived;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnRevived;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerControllerReviver;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnReviver;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.SentAllPlayersSetNewRoundNumber
struct ABP_Wave_Gamemode_C_SentAllPlayersSetNewRoundNumber_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut
struct ABP_Wave_Gamemode_C_CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CheckAICountforSureAndStartNextRoundIfNoEnemyLeft
struct ABP_Wave_Gamemode_C_CheckAICountforSureAndStartNextRoundIfNoEnemyLeft_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.StartCheckerTimer
struct ABP_Wave_Gamemode_C_StartCheckerTimer_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.DropLoot
struct ABP_Wave_Gamemode_C_DropLoot_Params
{
	struct FTransform                                  AiTransform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              AiMinValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiMaxValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingHealthPickup;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingWeaponPickup;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingGrenadePickup;                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnKilled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.DeactivateReWaveGameModeChecks
struct ABP_Wave_Gamemode_C_DeactivateReWaveGameModeChecks_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PrepareNewWaveInformAllStartWave
struct ABP_Wave_Gamemode_C_PrepareNewWaveInformAllStartWave_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_Event
struct ABP_Wave_Gamemode_C_NewRoundTextSentToPlayersFinished_Event_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ForceToDropWeapon
struct ABP_Wave_Gamemode_C_ForceToDropWeapon_Params
{
	struct FTransform                                  AiTransform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ForceToDropGrenade
struct ABP_Wave_Gamemode_C_ForceToDropGrenade_Params
{
	struct FTransform                                  AiTransform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ExecuteUbergraph_BP_Wave_Gamemode
struct ABP_Wave_Gamemode_C_ExecuteUbergraph_BP_Wave_Gamemode_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature
struct ABP_Wave_Gamemode_C_NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature
struct ABP_Wave_Gamemode_C_ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature_Params
{
	int                                                ElapsedTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature
struct ABP_Wave_Gamemode_C_NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature_Params
{
	int                                                RoundNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameStarts_GModeServerOnly__DelegateSignature
struct ABP_Wave_Gamemode_C_OnGameStarts_GModeServerOnly__DelegateSignature_Params
{
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameOverLoose_GModeServerOnly__DelegateSignature
struct ABP_Wave_Gamemode_C_OnGameOverLoose_GModeServerOnly__DelegateSignature_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameOverWin_GModeServerOnly__DelegateSignature
struct ABP_Wave_Gamemode_C_OnGameOverWin_GModeServerOnly__DelegateSignature_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
