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

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsOnPlayersSideAndAttackable
struct ABP_ProjectileEffectOnHitBase_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsEnemiesSideAndAttackable
struct ABP_ProjectileEffectOnHitBase_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetMeshAndBoneToAimFor
struct ABP_ProjectileEffectOnHitBase_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetSelfName
struct ABP_ProjectileEffectOnHitBase_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsProjectile
struct ABP_ProjectileEffectOnHitBase_C_IsProjectile_Params
{
	bool                                               IsProjectile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetInvestigator
struct ABP_ProjectileEffectOnHitBase_C_GetInvestigator_Params
{
	class APawn*                                       PawnInvestigator;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.UserConstructionScript
struct ABP_ProjectileEffectOnHitBase_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit__FinishedFunc
struct ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit__FinishedFunc_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit__UpdateFunc
struct ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit__UpdateFunc_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit_ShortLifetime__FinishedFunc
struct ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit_ShortLifetime__FinishedFunc_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit_ShortLifetime__UpdateFunc
struct ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit_ShortLifetime__UpdateFunc_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveBeginPlay
struct ABP_ProjectileEffectOnHitBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveTick
struct ABP_ProjectileEffectOnHitBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveHit
struct ABP_ProjectileEffectOnHitBase_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Other;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSelfMoved;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.MulticastAddImpusle
struct ABP_ProjectileEffectOnHitBase_C_MulticastAddImpusle_Params
{
	class UPrimitiveComponent*                         Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impulse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.SetProjectileDamage
struct ABP_ProjectileEffectOnHitBase_C_SetProjectileDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.EndVisualizeToAll
struct ABP_ProjectileEffectOnHitBase_C_EndVisualizeToAll_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_EndVisualizeToAll
struct ABP_ProjectileEffectOnHitBase_C_Multicast_EndVisualizeToAll_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_HitImpactVisuals
struct ABP_ProjectileEffectOnHitBase_C_Multicast_HitImpactVisuals_Params
{
	struct FHitResult                                  HitResult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_EndVisualizeToAll_ShortProjLifetime
struct ABP_ProjectileEffectOnHitBase_C_Multicast_EndVisualizeToAll_ShortProjLifetime_Params
{
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.SetProjectileSizeScaleFactor
struct ABP_ProjectileEffectOnHitBase_C_SetProjectileSizeScaleFactor_Params
{
	float                                              SizeScaleFactor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.TriggerProjectileCustomHitEvent
struct ABP_ProjectileEffectOnHitBase_C_TriggerProjectileCustomHitEvent_Params
{
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase
struct ABP_ProjectileEffectOnHitBase_C_ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
