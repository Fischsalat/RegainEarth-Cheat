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

// Function BP_Teleportation.BP_Teleportation_C.DissolveMesh_Timeline__FinishedFunc
// (BlueprintEvent)
void ABP_Teleportation_C::DissolveMesh_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.DissolveMesh_Timeline__FinishedFunc");

	ABP_Teleportation_C_DissolveMesh_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.DissolveMesh_Timeline__UpdateFunc
// (BlueprintEvent)
void ABP_Teleportation_C::DissolveMesh_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.DissolveMesh_Timeline__UpdateFunc");

	ABP_Teleportation_C_DissolveMesh_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.Spawn_Timeline__FinishedFunc
// (BlueprintEvent)
void ABP_Teleportation_C::Spawn_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.Spawn_Timeline__FinishedFunc");

	ABP_Teleportation_C_Spawn_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.Spawn_Timeline__UpdateFunc
// (BlueprintEvent)
void ABP_Teleportation_C::Spawn_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.Spawn_Timeline__UpdateFunc");

	ABP_Teleportation_C_Spawn_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Teleportation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.ReceiveBeginPlay");

	ABP_Teleportation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.DoDissolve
// (BlueprintCallable, BlueprintEvent)
void ABP_Teleportation_C::DoDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.DoDissolve");

	ABP_Teleportation_C_DoDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.StartTeleportation
// (BlueprintCallable, BlueprintEvent)
void ABP_Teleportation_C::StartTeleportation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.StartTeleportation");

	ABP_Teleportation_C_StartTeleportation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.DoSpawn
// (BlueprintCallable, BlueprintEvent)
void ABP_Teleportation_C::DoSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.DoSpawn");

	ABP_Teleportation_C_DoSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.ReceiveTick");

	ABP_Teleportation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.EQS_SearchBehindPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::EQS_SearchBehindPlayer(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.EQS_SearchBehindPlayer");

	ABP_Teleportation_C_EQS_SearchBehindPlayer_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.ContinoueVisualsForSpawnTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportingTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::ContinoueVisualsForSpawnTeleport(class AActor* TeleportingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.ContinoueVisualsForSpawnTeleport");

	ABP_Teleportation_C_ContinoueVisualsForSpawnTeleport_Params params;
	params.TeleportingTarget = TeleportingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.StartDissolveAndTeleportaionWithAllSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportingTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bMakeNotHitableWhenInTeleportDissolve_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TeleportToRelatedTargetInsteadDestinationLocation_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  OptionalRelatedTargetToTeleportTo (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ETeleportLocationsToRelatedTarget_ETeleportLocationsToRelatedTarget> RelatedTargetSpawnLocationEvaluation (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EqsRadiusOfCircleToTest        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEffectFollowActor_            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bKeepSameRotation_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bRotateToRelatedTarget         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ColorBoost                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedFactorCircleParticle      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedFactorDissolveEffects     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Effect_Size                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Circle_Thickness               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                EffectRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraSystem*          DissoveEffect_Choice           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*          SpawnEffect_Choice             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::StartDissolveAndTeleportaionWithAllSettings(class AActor* TeleportingTarget, bool bMakeNotHitableWhenInTeleportDissolve_, const struct FVector& Destination, bool TeleportToRelatedTargetInsteadDestinationLocation_, class AActor* OptionalRelatedTargetToTeleportTo, TEnumAsByte<ETeleportLocationsToRelatedTarget_ETeleportLocationsToRelatedTarget> RelatedTargetSpawnLocationEvaluation, float EqsRadiusOfCircleToTest, bool bEffectFollowActor_, bool bKeepSameRotation_, bool bRotateToRelatedTarget, const struct FRotator& NewRotation, const struct FLinearColor& Color, float ColorBoost, float SpeedFactorCircleParticle, float SpeedFactorDissolveEffects, float Height, float Effect_Size, float Circle_Thickness, const struct FRotator& EffectRotation, class UNiagaraSystem* DissoveEffect_Choice, class UNiagaraSystem* SpawnEffect_Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.StartDissolveAndTeleportaionWithAllSettings");

	ABP_Teleportation_C_StartDissolveAndTeleportaionWithAllSettings_Params params;
	params.TeleportingTarget = TeleportingTarget;
	params.bMakeNotHitableWhenInTeleportDissolve_ = bMakeNotHitableWhenInTeleportDissolve_;
	params.Destination = Destination;
	params.TeleportToRelatedTargetInsteadDestinationLocation_ = TeleportToRelatedTargetInsteadDestinationLocation_;
	params.OptionalRelatedTargetToTeleportTo = OptionalRelatedTargetToTeleportTo;
	params.RelatedTargetSpawnLocationEvaluation = RelatedTargetSpawnLocationEvaluation;
	params.EqsRadiusOfCircleToTest = EqsRadiusOfCircleToTest;
	params.bEffectFollowActor_ = bEffectFollowActor_;
	params.bKeepSameRotation_ = bKeepSameRotation_;
	params.bRotateToRelatedTarget = bRotateToRelatedTarget;
	params.NewRotation = NewRotation;
	params.Color = Color;
	params.ColorBoost = ColorBoost;
	params.SpeedFactorCircleParticle = SpeedFactorCircleParticle;
	params.SpeedFactorDissolveEffects = SpeedFactorDissolveEffects;
	params.Height = Height;
	params.Effect_Size = Effect_Size;
	params.Circle_Thickness = Circle_Thickness;
	params.EffectRotation = EffectRotation;
	params.DissoveEffect_Choice = DissoveEffect_Choice;
	params.SpawnEffect_Choice = SpawnEffect_Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportingTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect(class AActor* TeleportingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect");

	ABP_Teleportation_C_Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect_Params params;
	params.TeleportingTarget = TeleportingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.StartDissolveAndTeleportaion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportingTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OptionalRelatedTargetToTeleportTo (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::StartDissolveAndTeleportaion(class AActor* TeleportingTarget, class AActor* OptionalRelatedTargetToTeleportTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.StartDissolveAndTeleportaion");

	ABP_Teleportation_C_StartDissolveAndTeleportaion_Params params;
	params.TeleportingTarget = TeleportingTarget;
	params.OptionalRelatedTargetToTeleportTo = OptionalRelatedTargetToTeleportTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.Multicast_DoTeleport
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportingTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bKeepSameRotation_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Teleportation_C::Multicast_DoTeleport(class AActor* TeleportingTarget, const struct FVector& Destination, const struct FRotator& NewRotation, bool bKeepSameRotation_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.Multicast_DoTeleport");

	ABP_Teleportation_C_Multicast_DoTeleport_Params params;
	params.TeleportingTarget = TeleportingTarget;
	params.Destination = Destination;
	params.NewRotation = NewRotation;
	params.bKeepSameRotation_ = bKeepSameRotation_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.EQS_SearchBehindPlayerAlternative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::EQS_SearchBehindPlayerAlternative(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.EQS_SearchBehindPlayerAlternative");

	ABP_Teleportation_C_EQS_SearchBehindPlayerAlternative_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.ExecuteUbergraph_BP_Teleportation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Teleportation_C::ExecuteUbergraph_BP_Teleportation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.ExecuteUbergraph_BP_Teleportation");

	ABP_Teleportation_C_ExecuteUbergraph_BP_Teleportation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleportation.BP_Teleportation_C.TeleportFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedFine_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Teleportation_C::TeleportFinished__DelegateSignature(bool FinishedFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleportation.BP_Teleportation_C.TeleportFinished__DelegateSignature");

	ABP_Teleportation_C_TeleportFinished__DelegateSignature_Params params;
	params.FinishedFine_ = FinishedFine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
