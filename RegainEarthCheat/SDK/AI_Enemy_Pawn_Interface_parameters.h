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

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetIgnoreAllSetFocusOnTargetFromBehaivorTree
struct UAI_Enemy_Pawn_Interface_C_GetIgnoreAllSetFocusOnTargetFromBehaivorTree_Params
{
	bool                                               IgnoreAllSetFocusOnTargetFromBehaivorTree;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearKnownTargetsAndClearResetAIPerceptionStimulus
struct UAI_Enemy_Pawn_Interface_C_ClearKnownTargetsAndClearResetAIPerceptionStimulus_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.AIPerceptionForgetAndResetLastStimulis
struct UAI_Enemy_Pawn_Interface_C_AIPerceptionForgetAndResetLastStimulis_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.PrintStringToLog
struct UAI_Enemy_Pawn_Interface_C_PrintStringToLog_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ToggleAiTemporarilyLostSightOfTarget
struct UAI_Enemy_Pawn_Interface_C_ToggleAiTemporarilyLostSightOfTarget_Params
{
	bool                                               AiTemporarilyLostSightOfTarget_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerTryDoingSpecialAttackEvent
struct UAI_Enemy_Pawn_Interface_C_TriggerTryDoingSpecialAttackEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerGotDamagedByHiddenTargetSpecialEvent
struct UAI_Enemy_Pawn_Interface_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params
{
	bool                                               DoneFine_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
struct UAI_Enemy_Pawn_Interface_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerSeeTargetSpecialEvent
struct UAI_Enemy_Pawn_Interface_C_TriggerSeeTargetSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetSeeingSenseValidTarget
struct UAI_Enemy_Pawn_Interface_C_GetSeeingSenseValidTarget_Params
{
	bool                                               SenseValidTarget_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetSeeingSenseValidTarget
struct UAI_Enemy_Pawn_Interface_C_SetSeeingSenseValidTarget_Params
{
	bool                                               SenseValidTarget_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetLastKnownTargetLocation
struct UAI_Enemy_Pawn_Interface_C_GetLastKnownTargetLocation_Params
{
	struct FVector                                     LastKnownTargetLocation;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetLastKnownTargetLocation
struct UAI_Enemy_Pawn_Interface_C_SetLastKnownTargetLocation_Params
{
	struct FVector                                     LastKnownTargetLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetTargetFoeOnBB
struct UAI_Enemy_Pawn_Interface_C_GetTargetFoeOnBB_Params
{
	class AActor*                                      TargetFoe;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetTargetFoeOnBBandReplicate
struct UAI_Enemy_Pawn_Interface_C_SetTargetFoeOnBBandReplicate_Params
{
	class AActor*                                      TargetFoe;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerDamagePerceptionStimulus
struct UAI_Enemy_Pawn_Interface_C_TriggerDamagePerceptionStimulus_Params
{
	class AActor*                                      SourceActorOrDamageCausedActor;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 AI_Stimulus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InvestigatorOnlyUsedWhenSourceActorNotValidForReaction;    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn
struct UAI_Enemy_Pawn_Interface_C_ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearTargetPawnButDoNotAISeeTargetSense
struct UAI_Enemy_Pawn_Interface_C_ClearTargetPawnButDoNotAISeeTargetSense_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.UpdateLastSeenTargetLocationToActualTargetLocation
struct UAI_Enemy_Pawn_Interface_C_UpdateLastSeenTargetLocationToActualTargetLocation_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearTargetLastKnownLocation
struct UAI_Enemy_Pawn_Interface_C_ClearTargetLastKnownLocation_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearActualTargetPawnAndSetAISensedTargetOff
struct UAI_Enemy_Pawn_Interface_C_ClearActualTargetPawnAndSetAISensedTargetOff_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StrikeAttackDamageToTargetWithSocketname
struct UAI_Enemy_Pawn_Interface_C_StrikeAttackDamageToTargetWithSocketname_Params
{
	struct FName                                       SlotNameOfSlotWhichHits;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartAIFirstSeePlayerAnim
struct UAI_Enemy_Pawn_Interface_C_StartAIFirstSeePlayerAnim_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime
struct UAI_Enemy_Pawn_Interface_C_ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartAttack
struct UAI_Enemy_Pawn_Interface_C_StartAttack_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartLoopSearchAtLastPlayerLocation
struct UAI_Enemy_Pawn_Interface_C_StartLoopSearchAtLastPlayerLocation_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartGoToSpawnLocation
struct UAI_Enemy_Pawn_Interface_C_StartGoToSpawnLocation_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StopChasingTarget
struct UAI_Enemy_Pawn_Interface_C_StopChasingTarget_Params
{
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.WalkToNextRandomPointInRange
struct UAI_Enemy_Pawn_Interface_C_WalkToNextRandomPointInRange_Params
{
	bool                                               RangeBasedOnSpawnPoint_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartChasingTarget_DEPR
struct UAI_Enemy_Pawn_Interface_C_StartChasingTarget_DEPR_Params
{
	class AActor*                                      TagetFoe;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetAIseePlayer
struct UAI_Enemy_Pawn_Interface_C_GetAIseePlayer_Params
{
	bool                                               SeePlayer_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      TargetFoe;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.AttackDamageToTarget
struct UAI_Enemy_Pawn_Interface_C_AttackDamageToTarget_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
