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

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsInteracting
struct ABP_PhysicsExplodable_C_GetIsInteracting_Params
{
	bool                                               IsInteracting_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsDead
struct ABP_PhysicsExplodable_C_GetIsDead_Params
{
	bool                                               IsDead_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetGrabbedComponent
struct ABP_PhysicsExplodable_C_GetGrabbedComponent_Params
{
	class UPrimitiveComponent*                         Grabbed_Component_of_Character;                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsPhysicsHandleActive
struct ABP_PhysicsExplodable_C_GetIsPhysicsHandleActive_Params
{
	bool                                               Physics_Handle_Active_of_Character_;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsUnconsciousOrDeadOrSimilar
struct ABP_PhysicsExplodable_C_GetIsUnconsciousOrDeadOrSimilar_Params
{
	bool                                               IsUnconscious_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsBleedingOut
struct ABP_PhysicsExplodable_C_GetIsBleedingOut_Params
{
	bool                                               IsBleedingOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.IsAtMaxHealth
struct ABP_PhysicsExplodable_C_IsAtMaxHealth_Params
{
	bool                                               IsAtMaxHealth_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetCurrentHealthPercentageAsFactor
struct ABP_PhysicsExplodable_C_GetCurrentHealthPercentageAsFactor_Params
{
	float                                              CurrentHealthPercentage_;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetName
struct ABP_PhysicsExplodable_C_GetName_Params
{
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetCanNotAttack
struct ABP_PhysicsExplodable_C_GetCanNotAttack_Params
{
	bool                                               CanNotAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
struct ABP_PhysicsExplodable_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params
{
	class USphereComponent*                            CreatedSphere;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetExplodableComponent
struct ABP_PhysicsExplodable_C_GetExplodableComponent_Params
{
	class UBP_ExplodableComponent_C*                   ExplodableCompRef;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetAudioComponentForVentFireSound
struct ABP_PhysicsExplodable_C_GetAudioComponentForVentFireSound_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetMesh
struct ABP_PhysicsExplodable_C_GetMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetPiercedFireDirectionOfOwner
struct ABP_PhysicsExplodable_C_GetPiercedFireDirectionOfOwner_Params
{
	class UArrowComponent*                             ArrowDirection;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.UserConstructionScript
struct ABP_PhysicsExplodable_C_UserConstructionScript_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.PlayFootStepLocal
struct ABP_PhysicsExplodable_C_PlayFootStepLocal_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.HealSomeHealth
struct ABP_PhysicsExplodable_C_HealSomeHealth_Params
{
	float                                              AmountHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ToogleNotHitableForBulletStrikeAndProjectile
struct ABP_PhysicsExplodable_C_ToogleNotHitableForBulletStrikeAndProjectile_Params
{
	bool                                               SetNotHitable_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetToCanNotMove
struct ABP_PhysicsExplodable_C_SetToCanNotMove_Params
{
	bool                                               SetToCanNotMove_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetToCanNotAttack
struct ABP_PhysicsExplodable_C_SetToCanNotAttack_Params
{
	bool                                               SetToCanNotAttack_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.CancelPickupAndReplicate
struct ABP_PhysicsExplodable_C_CancelPickupAndReplicate_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ToggleForceDancingPawn
struct ABP_PhysicsExplodable_C_ToggleForceDancingPawn_Params
{
	bool                                               SetDancing_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetMaxHealthInterf
struct ABP_PhysicsExplodable_C_SetMaxHealthInterf_Params
{
	float                                              NewMaxHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveBeginPlay
struct ABP_PhysicsExplodable_C_ReceiveBeginPlay_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceivePointDamage
struct ABP_PhysicsExplodable_C_ReceivePointDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ShotFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveRadialDamage
struct ABP_PhysicsExplodable_C_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Origin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.FireRadialImpulse
struct ABP_PhysicsExplodable_C_FireRadialImpulse_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.DestroyedExplodeFired_Event
struct ABP_PhysicsExplodable_C_DestroyedExplodeFired_Event_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.PiercedFired_Event
struct ABP_PhysicsExplodable_C_PiercedFired_Event_Params
{
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetRenderCustomDepthStencil
struct ABP_PhysicsExplodable_C_SetRenderCustomDepthStencil_Params
{
	bool                                               SetOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewValueIfSetOn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveAnyDamage
struct ABP_PhysicsExplodable_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ExecuteUbergraph_BP_PhysicsExplodable
struct ABP_PhysicsExplodable_C_ExecuteUbergraph_BP_PhysicsExplodable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
