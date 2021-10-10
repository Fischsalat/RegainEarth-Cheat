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

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
struct ABP_ProjectileEffectOnHitBase_Rocket_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params
{
	class USphereComponent*                            CreatedSphere;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetExplodableComponent
struct ABP_ProjectileEffectOnHitBase_Rocket_C_GetExplodableComponent_Params
{
	class UBP_ExplodableComponent_C*                   ExplodableCompRef;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetMesh
struct ABP_ProjectileEffectOnHitBase_Rocket_C_GetMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetPiercedFireDirectionOfOwner
struct ABP_ProjectileEffectOnHitBase_Rocket_C_GetPiercedFireDirectionOfOwner_Params
{
	class UArrowComponent*                             ArrowDirection;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetAudioComponentForVentFireSound
struct ABP_ProjectileEffectOnHitBase_Rocket_C_GetAudioComponentForVentFireSound_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.IsOnPlayersSideAndAttackable
struct ABP_ProjectileEffectOnHitBase_Rocket_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.IsEnemiesSideAndAttackable
struct ABP_ProjectileEffectOnHitBase_Rocket_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.UserConstructionScript
struct ABP_ProjectileEffectOnHitBase_Rocket_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.TriggerProjectileCustomHitEvent
struct ABP_ProjectileEffectOnHitBase_Rocket_C_TriggerProjectileCustomHitEvent_Params
{
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.ReceiveBeginPlay
struct ABP_ProjectileEffectOnHitBase_Rocket_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.FireRadialImpulse
struct ABP_ProjectileEffectOnHitBase_Rocket_C_FireRadialImpulse_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.Multicast_EndVisualizeToAll
struct ABP_ProjectileEffectOnHitBase_Rocket_C_Multicast_EndVisualizeToAll_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.DestroyedExplodeFired_Event
struct ABP_ProjectileEffectOnHitBase_Rocket_C_DestroyedExplodeFired_Event_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket
struct ABP_ProjectileEffectOnHitBase_Rocket_C_ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
