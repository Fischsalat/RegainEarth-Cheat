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

// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetIgnoreAllSetFocusOnTargetFromBehaivorTree
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IgnoreAllSetFocusOnTargetFromBehaivorTree (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::GetIgnoreAllSetFocusOnTargetFromBehaivorTree(bool* IgnoreAllSetFocusOnTargetFromBehaivorTree)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetIgnoreAllSetFocusOnTargetFromBehaivorTree");

	UAI_Enemy_Pawn_Interface_C_GetIgnoreAllSetFocusOnTargetFromBehaivorTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreAllSetFocusOnTargetFromBehaivorTree != nullptr)
		*IgnoreAllSetFocusOnTargetFromBehaivorTree = params.IgnoreAllSetFocusOnTargetFromBehaivorTree;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearKnownTargetsAndClearResetAIPerceptionStimulus
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::ClearKnownTargetsAndClearResetAIPerceptionStimulus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearKnownTargetsAndClearResetAIPerceptionStimulus");

	UAI_Enemy_Pawn_Interface_C_ClearKnownTargetsAndClearResetAIPerceptionStimulus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.AIPerceptionForgetAndResetLastStimulis
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::AIPerceptionForgetAndResetLastStimulis()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.AIPerceptionForgetAndResetLastStimulis");

	UAI_Enemy_Pawn_Interface_C_AIPerceptionForgetAndResetLastStimulis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.PrintStringToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::PrintStringToLog(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.PrintStringToLog");

	UAI_Enemy_Pawn_Interface_C_PrintStringToLog_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ToggleAiTemporarilyLostSightOfTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AiTemporarilyLostSightOfTarget_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::ToggleAiTemporarilyLostSightOfTarget(bool AiTemporarilyLostSightOfTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ToggleAiTemporarilyLostSightOfTarget");

	UAI_Enemy_Pawn_Interface_C_ToggleAiTemporarilyLostSightOfTarget_Params params;
	params.AiTemporarilyLostSightOfTarget_ = AiTemporarilyLostSightOfTarget_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerTryDoingSpecialAttackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::TriggerTryDoingSpecialAttackEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerTryDoingSpecialAttackEvent");

	UAI_Enemy_Pawn_Interface_C_TriggerTryDoingSpecialAttackEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerGotDamagedByHiddenTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerGotDamagedByHiddenTargetSpecialEvent");

	UAI_Enemy_Pawn_Interface_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine_ != nullptr)
		*DoneFine_ = params.DoneFine_;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent");

	UAI_Enemy_Pawn_Interface_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerSeeTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::TriggerSeeTargetSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerSeeTargetSpecialEvent");

	UAI_Enemy_Pawn_Interface_C_TriggerSeeTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetSeeingSenseValidTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SenseValidTarget_              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::GetSeeingSenseValidTarget(bool* SenseValidTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetSeeingSenseValidTarget");

	UAI_Enemy_Pawn_Interface_C_GetSeeingSenseValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SenseValidTarget_ != nullptr)
		*SenseValidTarget_ = params.SenseValidTarget_;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetSeeingSenseValidTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SenseValidTarget_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::SetSeeingSenseValidTarget(bool SenseValidTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetSeeingSenseValidTarget");

	UAI_Enemy_Pawn_Interface_C_SetSeeingSenseValidTarget_Params params;
	params.SenseValidTarget_ = SenseValidTarget_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetLastKnownTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastKnownTargetLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::GetLastKnownTargetLocation(struct FVector* LastKnownTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetLastKnownTargetLocation");

	UAI_Enemy_Pawn_Interface_C_GetLastKnownTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastKnownTargetLocation != nullptr)
		*LastKnownTargetLocation = params.LastKnownTargetLocation;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetLastKnownTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastKnownTargetLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::SetLastKnownTargetLocation(const struct FVector& LastKnownTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetLastKnownTargetLocation");

	UAI_Enemy_Pawn_Interface_C_SetLastKnownTargetLocation_Params params;
	params.LastKnownTargetLocation = LastKnownTargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetTargetFoeOnBB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetFoe                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::GetTargetFoeOnBB(class AActor** TargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetTargetFoeOnBB");

	UAI_Enemy_Pawn_Interface_C_GetTargetFoeOnBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetFoe != nullptr)
		*TargetFoe = params.TargetFoe;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetTargetFoeOnBBandReplicate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetFoe                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::SetTargetFoeOnBBandReplicate(class AActor* TargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.SetTargetFoeOnBBandReplicate");

	UAI_Enemy_Pawn_Interface_C_SetTargetFoeOnBBandReplicate_Params params;
	params.TargetFoe = TargetFoe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerDamagePerceptionStimulus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceActorOrDamageCausedActor (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             AI_Stimulus                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InvestigatorOnlyUsedWhenSourceActorNotValidForReaction (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::TriggerDamagePerceptionStimulus(class AActor* SourceActorOrDamageCausedActor, const struct FAIStimulus& AI_Stimulus, float Damage, class AController* InvestigatorOnlyUsedWhenSourceActorNotValidForReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.TriggerDamagePerceptionStimulus");

	UAI_Enemy_Pawn_Interface_C_TriggerDamagePerceptionStimulus_Params params;
	params.SourceActorOrDamageCausedActor = SourceActorOrDamageCausedActor;
	params.AI_Stimulus = AI_Stimulus;
	params.Damage = Damage;
	params.InvestigatorOnlyUsedWhenSourceActorNotValidForReaction = InvestigatorOnlyUsedWhenSourceActorNotValidForReaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn");

	UAI_Enemy_Pawn_Interface_C_ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearTargetPawnButDoNotAISeeTargetSense
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::ClearTargetPawnButDoNotAISeeTargetSense()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearTargetPawnButDoNotAISeeTargetSense");

	UAI_Enemy_Pawn_Interface_C_ClearTargetPawnButDoNotAISeeTargetSense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.UpdateLastSeenTargetLocationToActualTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::UpdateLastSeenTargetLocationToActualTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.UpdateLastSeenTargetLocationToActualTargetLocation");

	UAI_Enemy_Pawn_Interface_C_UpdateLastSeenTargetLocationToActualTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearTargetLastKnownLocation
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::ClearTargetLastKnownLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearTargetLastKnownLocation");

	UAI_Enemy_Pawn_Interface_C_ClearTargetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearActualTargetPawnAndSetAISensedTargetOff
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::ClearActualTargetPawnAndSetAISensedTargetOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ClearActualTargetPawnAndSetAISensedTargetOff");

	UAI_Enemy_Pawn_Interface_C_ClearActualTargetPawnAndSetAISensedTargetOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StrikeAttackDamageToTargetWithSocketname
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SlotNameOfSlotWhichHits        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::StrikeAttackDamageToTargetWithSocketname(const struct FName& SlotNameOfSlotWhichHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StrikeAttackDamageToTargetWithSocketname");

	UAI_Enemy_Pawn_Interface_C_StrikeAttackDamageToTargetWithSocketname_Params params;
	params.SlotNameOfSlotWhichHits = SlotNameOfSlotWhichHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartAIFirstSeePlayerAnim
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::StartAIFirstSeePlayerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartAIFirstSeePlayerAnim");

	UAI_Enemy_Pawn_Interface_C_StartAIFirstSeePlayerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime");

	UAI_Enemy_Pawn_Interface_C_ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartAttack
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartAttack");

	UAI_Enemy_Pawn_Interface_C_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartLoopSearchAtLastPlayerLocation
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::StartLoopSearchAtLastPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartLoopSearchAtLastPlayerLocation");

	UAI_Enemy_Pawn_Interface_C_StartLoopSearchAtLastPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartGoToSpawnLocation
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::StartGoToSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartGoToSpawnLocation");

	UAI_Enemy_Pawn_Interface_C_StartGoToSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StopChasingTarget
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::StopChasingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StopChasingTarget");

	UAI_Enemy_Pawn_Interface_C_StopChasingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.WalkToNextRandomPointInRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RangeBasedOnSpawnPoint_        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAI_Enemy_Pawn_Interface_C::WalkToNextRandomPointInRange(bool RangeBasedOnSpawnPoint_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.WalkToNextRandomPointInRange");

	UAI_Enemy_Pawn_Interface_C_WalkToNextRandomPointInRange_Params params;
	params.RangeBasedOnSpawnPoint_ = RangeBasedOnSpawnPoint_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartChasingTarget_DEPR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TagetFoe                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::StartChasingTarget_DEPR(class AActor* TagetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.StartChasingTarget_DEPR");

	UAI_Enemy_Pawn_Interface_C_StartChasingTarget_DEPR_Params params;
	params.TagetFoe = TagetFoe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetAIseePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SeePlayer_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  TargetFoe                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAI_Enemy_Pawn_Interface_C::GetAIseePlayer(bool* SeePlayer_, class AActor** TargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.GetAIseePlayer");

	UAI_Enemy_Pawn_Interface_C_GetAIseePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeePlayer_ != nullptr)
		*SeePlayer_ = params.SeePlayer_;
	if (TargetFoe != nullptr)
		*TargetFoe = params.TargetFoe;

}


// Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.AttackDamageToTarget
// (Public, BlueprintCallable, BlueprintEvent)
void UAI_Enemy_Pawn_Interface_C::AttackDamageToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Enemy_Pawn_Interface.AI_Enemy_Pawn_Interface_C.AttackDamageToTarget");

	UAI_Enemy_Pawn_Interface_C_AttackDamageToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
