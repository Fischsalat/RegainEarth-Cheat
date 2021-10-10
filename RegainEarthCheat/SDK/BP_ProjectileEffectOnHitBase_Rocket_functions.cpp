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

// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	ABP_ProjectileEffectOnHitBase_Rocket_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetExplodableComponent");

	ABP_ProjectileEffectOnHitBase_Rocket_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetMesh");

	ABP_ProjectileEffectOnHitBase_Rocket_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetPiercedFireDirectionOfOwner");

	ABP_ProjectileEffectOnHitBase_Rocket_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.GetAudioComponentForVentFireSound");

	ABP_ProjectileEffectOnHitBase_Rocket_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_Rocket_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.IsOnPlayersSideAndAttackable");

	ABP_ProjectileEffectOnHitBase_Rocket_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_Rocket_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.IsEnemiesSideAndAttackable");

	ABP_ProjectileEffectOnHitBase_Rocket_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.UserConstructionScript");

	ABP_ProjectileEffectOnHitBase_Rocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.TriggerProjectileCustomHitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_ProjectileEffectOnHitBase_Rocket_C::TriggerProjectileCustomHitEvent(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.TriggerProjectileCustomHitEvent");

	ABP_ProjectileEffectOnHitBase_Rocket_C_TriggerProjectileCustomHitEvent_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.ReceiveBeginPlay");

	ABP_ProjectileEffectOnHitBase_Rocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.FireRadialImpulse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_C::FireRadialImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.FireRadialImpulse");

	ABP_ProjectileEffectOnHitBase_Rocket_C_FireRadialImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.Multicast_EndVisualizeToAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_C::Multicast_EndVisualizeToAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.Multicast_EndVisualizeToAll");

	ABP_ProjectileEffectOnHitBase_Rocket_C_Multicast_EndVisualizeToAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.DestroyedExplodeFired_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_Rocket_C::DestroyedExplodeFired_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.DestroyedExplodeFired_Event");

	ABP_ProjectileEffectOnHitBase_Rocket_C_DestroyedExplodeFired_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_Rocket_C::ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket");

	ABP_ProjectileEffectOnHitBase_Rocket_C_ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
