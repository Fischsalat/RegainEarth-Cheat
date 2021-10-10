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

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetMesh
struct ABP_Turret_Rocket_C_GetMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetPiercedFireDirectionOfOwner
struct ABP_Turret_Rocket_C_GetPiercedFireDirectionOfOwner_Params
{
	class UArrowComponent*                             ArrowDirection;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetAudioComponentForVentFireSound
struct ABP_Turret_Rocket_C_GetAudioComponentForVentFireSound_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetExplodableComponent
struct ABP_Turret_Rocket_C_GetExplodableComponent_Params
{
	class UBP_ExplodableComponent_C*                   ExplodableCompRef;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.UserConstructionScript
struct ABP_Turret_Rocket_C_UserConstructionScript_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.TimelineReloadRocket__FinishedFunc
struct ABP_Turret_Rocket_C_TimelineReloadRocket__FinishedFunc_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.TimelineReloadRocket__UpdateFunc
struct ABP_Turret_Rocket_C_TimelineReloadRocket__UpdateFunc_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ReceiveBeginPlay
struct ABP_Turret_Rocket_C_ReceiveBeginPlay_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.CheckIfDeploymentFinished
struct ABP_Turret_Rocket_C_CheckIfDeploymentFinished_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ClearInvalidDetectedTargets
struct ABP_Turret_Rocket_C_ClearInvalidDetectedTargets_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Server_ShootRocketToTarget
struct ABP_Turret_Rocket_C_Server_ShootRocketToTarget_Params
{
	class AActor*                                      RocketTargetActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LauncherIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartFiringRocket
struct ABP_Turret_Rocket_C_StartFiringRocket_Params
{
	class AActor*                                      TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TargetIsRocket;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Multicast_DoRocketFireVisuals
struct ABP_Turret_Rocket_C_Multicast_DoRocketFireVisuals_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ReloadCountdown_OnlyOnServer
struct ABP_Turret_Rocket_C_ReloadCountdown_OnlyOnServer_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartReloadTimer_OnlyOnServer
struct ABP_Turret_Rocket_C_StartReloadTimer_OnlyOnServer_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Client_AddSpawnedRocketToMap
struct ABP_Turret_Rocket_C_Client_AddSpawnedRocketToMap_Params
{
	class AActor*                                      TragetActor;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C* SpawnedHomingMissile;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartDestroyedActorReferencesCleanerLoop
struct ABP_Turret_Rocket_C_StartDestroyedActorReferencesCleanerLoop_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.SetValuesOnRocket
struct ABP_Turret_Rocket_C_SetValuesOnRocket_Params
{
	class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C* CreatedRocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.OnActorDetectedAndAttackableAndInLOS
struct ABP_Turret_Rocket_C_OnActorDetectedAndAttackableAndInLOS_Params
{
	class AActor*                                      DetectedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartRocketReloadVisuals_OnlyOnServer
struct ABP_Turret_Rocket_C_StartRocketReloadVisuals_OnlyOnServer_Params
{
	int                                                SlotIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Multicast_UpdateRocketReloadVisuals
struct ABP_Turret_Rocket_C_Multicast_UpdateRocketReloadVisuals_Params
{
	int                                                ValidSlotndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.DestroyedExplodeFired_Event
struct ABP_Turret_Rocket_C_DestroyedExplodeFired_Event_Params
{
};

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ExecuteUbergraph_BP_Turret_Rocket
struct ABP_Turret_Rocket_C_ExecuteUbergraph_BP_Turret_Rocket_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
