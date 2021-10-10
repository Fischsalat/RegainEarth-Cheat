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

// Function BP_Teleportation.BP_Teleportation_C.DissolveMesh_Timeline__FinishedFunc
struct ABP_Teleportation_C_DissolveMesh_Timeline__FinishedFunc_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.DissolveMesh_Timeline__UpdateFunc
struct ABP_Teleportation_C_DissolveMesh_Timeline__UpdateFunc_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.Spawn_Timeline__FinishedFunc
struct ABP_Teleportation_C_Spawn_Timeline__FinishedFunc_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.Spawn_Timeline__UpdateFunc
struct ABP_Teleportation_C_Spawn_Timeline__UpdateFunc_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.ReceiveBeginPlay
struct ABP_Teleportation_C_ReceiveBeginPlay_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.DoDissolve
struct ABP_Teleportation_C_DoDissolve_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.StartTeleportation
struct ABP_Teleportation_C_StartTeleportation_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.DoSpawn
struct ABP_Teleportation_C_DoSpawn_Params
{
};

// Function BP_Teleportation.BP_Teleportation_C.ReceiveTick
struct ABP_Teleportation_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.EQS_SearchBehindPlayer
struct ABP_Teleportation_C_EQS_SearchBehindPlayer_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryStatus>              QueryStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.ContinoueVisualsForSpawnTeleport
struct ABP_Teleportation_C_ContinoueVisualsForSpawnTeleport_Params
{
	class AActor*                                      TeleportingTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.StartDissolveAndTeleportaionWithAllSettings
struct ABP_Teleportation_C_StartDissolveAndTeleportaionWithAllSettings_Params
{
	class AActor*                                      TeleportingTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMakeNotHitableWhenInTeleportDissolve_;                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TeleportToRelatedTargetInsteadDestinationLocation_;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      OptionalRelatedTargetToTeleportTo;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETeleportLocationsToRelatedTarget_ETeleportLocationsToRelatedTarget> RelatedTargetSpawnLocationEvaluation;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EqsRadiusOfCircleToTest;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEffectFollowActor_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bKeepSameRotation_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRotateToRelatedTarget;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    NewRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ColorBoost;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedFactorCircleParticle;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedFactorDissolveEffects;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Effect_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Circle_Thickness;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    EffectRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraSystem*                              DissoveEffect_Choice;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                              SpawnEffect_Choice;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect
struct ABP_Teleportation_C_Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect_Params
{
	class AActor*                                      TeleportingTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.StartDissolveAndTeleportaion
struct ABP_Teleportation_C_StartDissolveAndTeleportaion_Params
{
	class AActor*                                      TeleportingTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OptionalRelatedTargetToTeleportTo;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.Multicast_DoTeleport
struct ABP_Teleportation_C_Multicast_DoTeleport_Params
{
	class AActor*                                      TeleportingTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    NewRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bKeepSameRotation_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Teleportation.BP_Teleportation_C.EQS_SearchBehindPlayerAlternative
struct ABP_Teleportation_C_EQS_SearchBehindPlayerAlternative_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryStatus>              QueryStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.ExecuteUbergraph_BP_Teleportation
struct ABP_Teleportation_C_ExecuteUbergraph_BP_Teleportation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Teleportation.BP_Teleportation_C.TeleportFinished__DelegateSignature
struct ABP_Teleportation_C_TeleportFinished__DelegateSignature_Params
{
	bool                                               FinishedFine_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
