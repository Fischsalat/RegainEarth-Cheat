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

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
struct ABP_Turret_Laser_Base_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params
{
	class USphereComponent*                            CreatedSphere;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetMeshAndBoneToAimFor
struct ABP_Turret_Laser_Base_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetSelfName
struct ABP_Turret_Laser_Base_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_IsOnPause?_1
struct ABP_Turret_Laser_Base_C_OnRep_IsOnPause__1_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetAIseePlayer
struct ABP_Turret_Laser_Base_C_GetAIseePlayer_Params
{
	bool                                               SeePlayer_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       TargetPawn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetTargetPawnOnBB
struct ABP_Turret_Laser_Base_C_GetTargetPawnOnBB_Params
{
	class ACharacter*                                  TargetChararacter;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetLastKnownTargetLocation
struct ABP_Turret_Laser_Base_C_GetLastKnownTargetLocation_Params
{
	struct FVector                                     LastKnownTargetLocation;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetSeeingSenseValidTarget
struct ABP_Turret_Laser_Base_C_GetSeeingSenseValidTarget_Params
{
	bool                                               SenseValidTarget_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerSeeTargetSpecialEvent
struct ABP_Turret_Laser_Base_C_TriggerSeeTargetSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
struct ABP_Turret_Laser_Base_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerGotDamagedByHiddenTargetSpecialEvent
struct ABP_Turret_Laser_Base_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params
{
	bool                                               DoneFine_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerTryDoingSpecialAttackEvent
struct ABP_Turret_Laser_Base_C_TriggerTryDoingSpecialAttackEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_InRangeAndOnSight
struct ABP_Turret_Laser_Base_C_OnRep_InRangeAndOnSight_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_FoundTargetObjectComponent
struct ABP_Turret_Laser_Base_C_OnRep_FoundTargetObjectComponent_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.SyncStateToClientsWhenHaveAuthority
struct ABP_Turret_Laser_Base_C_SyncStateToClientsWhenHaveAuthority_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoLineTraceAndEvaluateHitTarget
struct ABP_Turret_Laser_Base_C_DoLineTraceAndEvaluateHitTarget_Params
{
	struct FVector                                     Start;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_valid_target;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UserConstructionScript
struct ABP_Turret_Laser_Base_C_UserConstructionScript_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__FinishedFunc
struct ABP_Turret_Laser_Base_C_TimelineIdleRotation__FinishedFunc_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__UpdateFunc
struct ABP_Turret_Laser_Base_C_TimelineIdleRotation__UpdateFunc_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__NewTrack_0__EventFunc
struct ABP_Turret_Laser_Base_C_TimelineIdleRotation__NewTrack_0__EventFunc_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UpdateRotation
struct ABP_Turret_Laser_Base_C_UpdateRotation_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ReceiveTick
struct ABP_Turret_Laser_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.FireBullet
struct ABP_Turret_Laser_Base_C_FireBullet_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.LaserPointer
struct ABP_Turret_Laser_Base_C_LaserPointer_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TraceForTargetInForwardTraceLine
struct ABP_Turret_Laser_Base_C_TraceForTargetInForwardTraceLine_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UpdateStartTraceEndTrace
struct ABP_Turret_Laser_Base_C_UpdateStartTraceEndTrace_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace
struct ABP_Turret_Laser_Base_C_DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.RestartEvaluateSphereHits
struct ABP_Turret_Laser_Base_C_RestartEvaluateSphereHits_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel
struct ABP_Turret_Laser_Base_C_DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.RestartEvaluateSphereHitsMovingObjectInTunnel
struct ABP_Turret_Laser_Base_C_RestartEvaluateSphereHitsMovingObjectInTunnel_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.Multicast_SyncStateToClients
struct ABP_Turret_Laser_Base_C_Multicast_SyncStateToClients_Params
{
	struct FRotator                                    MountRelRot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    TurretRelRot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.SyncStart_UpdateRotationOnClients
struct ABP_Turret_Laser_Base_C_SyncStart_UpdateRotationOnClients_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ReceiveBeginPlay
struct ABP_Turret_Laser_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartTurretIdleRotationAgainFromStart
struct ABP_Turret_Laser_Base_C_StartTurretIdleRotationAgainFromStart_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StopTurretIdleRotation
struct ABP_Turret_Laser_Base_C_StopTurretIdleRotation_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartTurretIdleRotationPlayResume
struct ABP_Turret_Laser_Base_C_StartTurretIdleRotationPlayResume_Params
{
	float                                              NewTimeLineTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ResetDoOnceStopTurretIdleRot
struct ABP_Turret_Laser_Base_C_ResetDoOnceStopTurretIdleRot_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DestroyedExplodeFired_Event
struct ABP_Turret_Laser_Base_C_DestroyedExplodeFired_Event_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.CheckForOverlappingActors
struct ABP_Turret_Laser_Base_C_CheckForOverlappingActors_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnActorDetectedAndAttackableAndInLOS
struct ABP_Turret_Laser_Base_C_OnActorDetectedAndAttackableAndInLOS_Params
{
	class AActor*                                      DetectedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.CheckIsDetectedActorAttackable
struct ABP_Turret_Laser_Base_C_CheckIsDetectedActorAttackable_Params
{
	class AActor*                                      ActorToCheck;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasDetectedViaOverlapBeginEvent;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnActorLeftRange
struct ABP_Turret_Laser_Base_C_OnActorLeftRange_Params
{
	class AActor*                                      LeftActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartEventTickGateAndStartFullFunctionsAgain
struct ABP_Turret_Laser_Base_C_StartEventTickGateAndStartFullFunctionsAgain_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StopEventTickGateAndShutDownCompletly
struct ABP_Turret_Laser_Base_C_StopEventTickGateAndShutDownCompletly_Params
{
};

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ExecuteUbergraph_BP_Turret_Laser_Base
struct ABP_Turret_Laser_Base_C_ExecuteUbergraph_BP_Turret_Laser_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
