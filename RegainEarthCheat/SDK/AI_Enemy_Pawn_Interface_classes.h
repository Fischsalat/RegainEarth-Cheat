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

// BlueprintGeneratedClass AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAI_Enemy_Pawn_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C");
		return ptr;
	}



	void GetIgnoreAllSetFocusOnTargetFromBehaivorTree(bool* IgnoreAllSetFocusOnTargetFromBehaivorTree);
	void ClearKnownTargetsAndClearResetAIPerceptionStimulus();
	void AIPerceptionForgetAndResetLastStimulis();
	void PrintStringToLog(const struct FString& String);
	void ToggleAiTemporarilyLostSightOfTarget(bool AiTemporarilyLostSightOfTarget_);
	void TriggerTryDoingSpecialAttackEvent(bool* DoneFine);
	void TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_);
	void TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine);
	void TriggerSeeTargetSpecialEvent(bool* DoneFine);
	void GetSeeingSenseValidTarget(bool* SenseValidTarget_);
	void SetSeeingSenseValidTarget(bool SenseValidTarget_);
	void GetLastKnownTargetLocation(struct FVector* LastKnownTargetLocation);
	void SetLastKnownTargetLocation(const struct FVector& LastKnownTargetLocation);
	void GetTargetFoeOnBB(class AActor** TargetFoe);
	void SetTargetFoeOnBBandReplicate(class AActor* TargetFoe);
	void TriggerDamagePerceptionStimulus(class AActor* SourceActorOrDamageCausedActor, const struct FAIStimulus& AI_Stimulus, float Damage, class AController* InvestigatorOnlyUsedWhenSourceActorNotValidForReaction);
	void ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn();
	void ClearTargetPawnButDoNotAISeeTargetSense();
	void UpdateLastSeenTargetLocationToActualTargetLocation();
	void ClearTargetLastKnownLocation();
	void ClearActualTargetPawnAndSetAISensedTargetOff();
	void StrikeAttackDamageToTargetWithSocketname(const struct FName& SlotNameOfSlotWhichHits);
	void StartAIFirstSeePlayerAnim();
	void ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime();
	void StartAttack();
	void StartLoopSearchAtLastPlayerLocation();
	void StartGoToSpawnLocation();
	void StopChasingTarget();
	void WalkToNextRandomPointInRange(bool RangeBasedOnSpawnPoint_);
	void StartChasingTarget_DEPR(class AActor* TagetFoe);
	void GetAIseePlayer(bool* SeePlayer_, class AActor** TargetFoe);
	void AttackDamageToTarget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
