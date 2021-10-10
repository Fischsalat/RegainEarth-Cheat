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

// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.IsOnPlayersSideAndAttackable");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.IsEnemiesSideAndAttackable");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ReceiveBeginPlay");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.CheckDistonaceToTarget
// (BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::CheckDistonaceToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.CheckDistonaceToTarget");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_CheckDistonaceToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Server_DetonateSelfAndTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::Server_DetonateSelfAndTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Server_DetonateSelfAndTarget");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_Server_DetonateSelfAndTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.UpdateRendevousPoint
// (BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::UpdateRendevousPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.UpdateRendevousPoint");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_UpdateRendevousPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ReceiveDestroyed");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Multicast_StartHomingToTarget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HomingTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::Multicast_StartHomingToTarget(class AActor* HomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Multicast_StartHomingToTarget");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_Multicast_StartHomingToTarget_Params params;
	params.HomingTarget = HomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Server_OverrideValues
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageExplosionRadialBaseDamage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionRadialMinimalDamage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionInnerRadius     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionOuterRadius     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ForceMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::Server_OverrideValues(float DamageExplosionRadialBaseDamage, float DamageExplosionRadialMinimalDamage, float DamageExplosionInnerRadius, float DamageExplosionOuterRadius, float ForceMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.Server_OverrideValues");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_Server_OverrideValues_Params params;
	params.DamageExplosionRadialBaseDamage = DamageExplosionRadialBaseDamage;
	params.DamageExplosionRadialMinimalDamage = DamageExplosionRadialMinimalDamage;
	params.DamageExplosionInnerRadius = DamageExplosionInnerRadius;
	params.DamageExplosionOuterRadius = DamageExplosionOuterRadius;
	params.ForceMultiplier = ForceMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_Homing_C::ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing");

	ABP_ProjectileEffectOnHitBase_Rocket_Homing_C_ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
