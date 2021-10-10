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

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
struct ABP_Grenade_Explosion_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params
{
	class USphereComponent*                            CreatedSphere;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetExplodableComponent
struct ABP_Grenade_Explosion_C_GetExplodableComponent_Params
{
	class UBP_ExplodableComponent_C*                   ExplodableCompRef;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetMesh
struct ABP_Grenade_Explosion_C_GetMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetPiercedFireDirectionOfOwner
struct ABP_Grenade_Explosion_C_GetPiercedFireDirectionOfOwner_Params
{
	class UArrowComponent*                             ArrowDirection;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.GetAudioComponentForVentFireSound
struct ABP_Grenade_Explosion_C_GetAudioComponentForVentFireSound_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.UserConstructionScript
struct ABP_Grenade_Explosion_C_UserConstructionScript_Params
{
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.TriggerEffect
struct ABP_Grenade_Explosion_C_TriggerEffect_Params
{
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.FireRadialImpulse
struct ABP_Grenade_Explosion_C_FireRadialImpulse_Params
{
};

// Function BP_Grenade_Explosion.BP_Grenade_Explosion_C.ExecuteUbergraph_BP_Grenade_Explosion
struct ABP_Grenade_Explosion_C_ExecuteUbergraph_BP_Grenade_Explosion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
