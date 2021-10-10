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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wave_Gamemode.BP_Wave_Gamemode_C
// 0x01E8 (FullSize[0x04A8] - InheritedSize[0x02C0])
class ABP_Wave_Gamemode_C : public ATPS_Wave_GameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      tmp_OnlinePlayers[0x50];                                   // 0x02D0(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      OnlinePlayers[0x50];                                       // 0x0320(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                CurrentRound;                                              // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TMP_CountActualAIActors;                                   // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRoundtime;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntervallRoundtime;                                        // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentElapsedRoundtime;                                   // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D6FP[0x4];                                     // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                RoundTimerHandle;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               FinishedGmBeginPlayAndGameIsStarted;                       // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsGameOver_;                                               // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EX3R[0x2];                                     // 0x0392(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSubtractScoreOnPlayerUnconscious;                       // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxSubtractScoreOnPlayerDeadPerPlayer;                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HEWM[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameOverWin_GModeServerOnly;                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnGameOverLoose_GModeServerOnly;                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                LastRoundNumberToWin;                                      // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TRYO[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameStarts_GModeServerOnly;                              // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              ChanceForDroppingHealthPickup;                             // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceForDroppingWeaponPickup;                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceForDroppingGrenadePickup;                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 TempWeaponIdForDrop;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TEQ8[0x3];                                     // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UsedChanceDropHealth;                                      // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UsedChanceDropWeapon;                                      // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UsedChanceDropGrenade;                                     // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CountCalculationSinceLastWeaponDrop;                       // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CountCalculationSinceLastHealthDrop;                       // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WTP6[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APawn*>                               PlayersPawnList;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    NextWaveRoundIsStarted_GModeServerOnly;                    // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ElapsedTimeInCurrentWaveRound_GModeServerOnly;             // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, Deprecated, BlueprintCallable)
	struct FScriptMulticastDelegate                    NewRoundTextSentToPlayersFinished_GModeServerOnly;         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              CountCalculationSinceLastGrenadeDrop;                      // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiMinValueOfWeaponDrops;                                   // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiMaxValueOfWeaponDrops;                                   // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GTCK[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  DropTargetTransform;                                       // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APawn*                                       PawnKilled;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSGrenadeListDropStruct>             GrenadeDropListSettings;                                   // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSGrenadeListDropStruct>             CalculatedGrenadeDropList;                                 // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wave_Gamemode.BP_Wave_Gamemode_C");
		return ptr;
	}



	void GetAllGmKnownPlayerControllerServerUsedOnly(TArray<class AController*>* Controller);
	void GetCurrentRoundWave(int* CurrentRound);
	void GetCurrentElapsedRoundtime(float* CurrentElapsedRoundtime);
	void GetRemainingRoundTime(float* RemainingRoundTime);
	void GetPlayerCount(int* CountOfPlayers);
	void GetArrayOfWeaponIDsFitToValueMinMaxSettings(float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>* GeneratedArrayOfPossibleWeaponDrops1);
	void Check_If_Known_Player_Alive_And_Not_Dead_Unconscious(bool* SomeoneStillAlive_);
	void Handle_Enemy_Killed_and_Calculate_Score(class APawn* PawnKilled, class AController* KilledByController, float ScoreMultiplierOfEnemyKilled, TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType, bool KilledByHeadShotOrOtherGreatHit_, bool KilledByExplosivesRadialDamage, bool KilledInAir, class UBP_DamageType_BaseREWave_C* KilledByDamageType);
	class AActor* ChoosePlayerStart(class AController* Player);
	void OnFailure_9722B9E84179BFF2709AB98E37CD7DA4();
	void OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4();
	void Server_TestVarRepNotifyTesting2();
	void K2_OnLogout(class AController* ExitingController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void HandleStartingNewPlayer(class APlayerController* NewPlayer);
	void StartIterateOverAllPlayerControllerAndStartSyncPawnsTo_Clients();
	void ReceiveBeginPlay();
	void NewRoundTextSentToPlayersFinished_Event2();
	void OneEnemyKilled(class APawn* PawnKilled, class AController* KilledByController, float ScoreMultiplierOfEnemyKilled, TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType, bool KilledByHeadShotOrOtherGreatHit_, bool KilledByExplosivesRadialDamage_, bool KilledInAir, class UBP_DamageType_BaseREWave_C* KilledByDamageType, const struct FTransform& AiTransform, float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, float AiOptionalChanceForDroppingHealthPickup, float AiOptionalChanceForDroppingWeaponPickup, float AiOptionalChanceForDroppingGrenadePickup);
	void RegisterOneMoreEnemy();
	void AllPlayerShowBigMiddleScreenTextAndOnOff(const struct FText& Text, bool SetTextMessageOn_);
	void CallPlayerShowBigMiddleScreenTextAndOnOff(class AController* Controller, const struct FText& Text, bool SetTextMessageOn_);
	void PlayerCallActualRoundNumberToALLPlayerHUDs();
	void Wave_AllEnemiesCouldBeDead();
	void AllEnemyDead_CheckEndGameConditionsStartNextRound();
	void ResetDoOnceStartNextRound();
	void RestartRoundTimer();
	void RoundTimer();
	void PlayerIsDead(class APlayerController* PlayerControllerDead, class APawn* PawnDead);
	void CallGameOver(bool FinishedWithWin_);
	void InformGmBeginPlayPlayerControllerFinished(class AController* ControllerFinishesBeginPlay);
	void PlayerIsUnconscious(class APlayerController* PlayerControllerUnconscious, class APawn* PawnUnconscious);
	void PlayerHitPlayerFriendlyFire(class APlayerController* PlayerControllerGotDamage, class APawn* PawnGotDamage, class APlayerController* PlayerControllerDoesDamage, class APawn* PawnDoesDamage, int Damage);
	void PlayerRevived(class APlayerController* PlayerControllerRevived, class APawn* PawnRevived, class APlayerController* PlayerControllerReviver, class APawn* PawnReviver);
	void SentAllPlayersSetNewRoundNumber();
	void CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut();
	void CheckAICountforSureAndStartNextRoundIfNoEnemyLeft();
	void StartCheckerTimer();
	void DropLoot(const struct FTransform& AiTransform, float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, float AiOptionalChanceForDroppingHealthPickup, float AiOptionalChanceForDroppingWeaponPickup, float AiOptionalChanceForDroppingGrenadePickup, class APawn* PawnKilled);
	void DeactivateReWaveGameModeChecks();
	void PrepareNewWaveInformAllStartWave();
	void NewRoundTextSentToPlayersFinished_Event();
	void ForceToDropWeapon(const struct FTransform& AiTransform);
	void ForceToDropGrenade(const struct FTransform& AiTransform);
	void ExecuteUbergraph_BP_Wave_Gamemode(int EntryPoint);
	void NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature();
	void ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature(int ElapsedTime);
	void NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature(int RoundNumber);
	void OnGameStarts_GModeServerOnly__DelegateSignature();
	void OnGameOverLoose_GModeServerOnly__DelegateSignature(float TimeUntilPauseStarts);
	void OnGameOverWin_GModeServerOnly__DelegateSignature(float TimeUntilPauseStarts);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
