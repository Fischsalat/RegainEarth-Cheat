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

// Function BP_Turret_Base.BP_Turret_Base_C.IsProjectile
struct ABP_Turret_Base_C_IsProjectile_Params
{
	bool                                               IsProjectile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Base.BP_Turret_Base_C.IsOnPlayersSideAndAttackable
struct ABP_Turret_Base_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Base.BP_Turret_Base_C.IsEnemiesSideAndAttackable
struct ABP_Turret_Base_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Base.BP_Turret_Base_C.GetMeshAndBoneToAimFor
struct ABP_Turret_Base_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Base.BP_Turret_Base_C.GetSelfName
struct ABP_Turret_Base_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Base.BP_Turret_Base_C.OnRep_IsOnPause?
struct ABP_Turret_Base_C_OnRep_IsOnPause__Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.GetIsUnconsciousOrDeadOrSimilar
struct ABP_Turret_Base_C_GetIsUnconsciousOrDeadOrSimilar_Params
{
	bool                                               IsUnconscious_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Base.BP_Turret_Base_C.UserConstructionScript
struct ABP_Turret_Base_C_UserConstructionScript_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.StartSphereDetectionLoop
struct ABP_Turret_Base_C_StartSphereDetectionLoop_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.CheckForOverlappingActors
struct ABP_Turret_Base_C_CheckForOverlappingActors_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Turret_Base_C_BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Turret_Base.BP_Turret_Base_C.CheckIsDetectedActorAttackable
struct ABP_Turret_Base_C_CheckIsDetectedActorAttackable_Params
{
	class AActor*                                      ActorToCheck;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasDetectedViaOverlapBeginEvent;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Base.BP_Turret_Base_C.OnActorDetectedAndAttackableAndInLOS
struct ABP_Turret_Base_C_OnActorDetectedAndAttackableAndInLOS_Params
{
	class AActor*                                      DetectedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Base.BP_Turret_Base_C.CheckIsDetectedActorInLOS
struct ABP_Turret_Base_C_CheckIsDetectedActorInLOS_Params
{
	class AActor*                                      ActorToCheck;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Base.BP_Turret_Base_C.OnActorLeftRange
struct ABP_Turret_Base_C_OnActorLeftRange_Params
{
	class AActor*                                      LeftActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Base.BP_Turret_Base_C.BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Turret_Base_C_BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Base.BP_Turret_Base_C.SynchonizeOverlappedActors
struct ABP_Turret_Base_C_SynchonizeOverlappedActors_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.StopEventTickGateAndShutDownCompletly
struct ABP_Turret_Base_C_StopEventTickGateAndShutDownCompletly_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.StartEventTickGateAndStartFullFunctionsAgain
struct ABP_Turret_Base_C_StartEventTickGateAndStartFullFunctionsAgain_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.Server_StopEventTickGateAndShutDownCompletlyAndReplicate
struct ABP_Turret_Base_C_Server_StopEventTickGateAndShutDownCompletlyAndReplicate_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate
struct ABP_Turret_Base_C_Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate_Params
{
};

// Function BP_Turret_Base.BP_Turret_Base_C.ExecuteUbergraph_BP_Turret_Base
struct ABP_Turret_Base_C_ExecuteUbergraph_BP_Turret_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
