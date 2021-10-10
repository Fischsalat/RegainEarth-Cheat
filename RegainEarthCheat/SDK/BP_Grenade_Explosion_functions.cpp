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

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Explosion_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	ABP_Grenade_Explosion_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Explosion_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetExplodableComponent");

	ABP_Grenade_Explosion_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Explosion_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetMesh");

	ABP_Grenade_Explosion_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Explosion_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetPiercedFireDirectionOfOwner");

	ABP_Grenade_Explosion_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Explosion_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetAudioComponentForVentFireSound");

	ABP_Grenade_Explosion_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.UserConstructionScript");

	ABP_Grenade_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.TriggerEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Explosion_C::TriggerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.TriggerEffect");

	ABP_Grenade_Explosion_C_TriggerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.FireRadialImpulse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Explosion_C::FireRadialImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.FireRadialImpulse");

	ABP_Grenade_Explosion_C_FireRadialImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.ExecuteUbergraph_BP_Grenade_Explosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Explosion_C::ExecuteUbergraph_BP_Grenade_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.ExecuteUbergraph_BP_Grenade_Explosion");

	ABP_Grenade_Explosion_C_ExecuteUbergraph_BP_Grenade_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
