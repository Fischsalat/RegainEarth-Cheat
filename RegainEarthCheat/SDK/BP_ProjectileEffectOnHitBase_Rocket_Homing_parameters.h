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

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.IsOnPlayersSideAndAttackable
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.IsEnemiesSideAndAttackable
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ReceiveBeginPlay
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.CheckDistonaceToTarget
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_CheckDistonaceToTarget_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Server_DetonateSelfAndTarget
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_Server_DetonateSelfAndTarget_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.UpdateRendevousPoint
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_UpdateRendevousPoint_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ReceiveDestroyed
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_ReceiveDestroyed_Params
{
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Multicast_StartHomingToTarget
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_Multicast_StartHomingToTarget_Params
{
	class AActor*                                      HomingTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Server_OverrideValues
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_Server_OverrideValues_Params
{
	float                                              DamageExplosionRadialBaseDamage;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialMinimalDamage;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionInnerRadius;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionOuterRadius;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceMultiplier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing
struct ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
