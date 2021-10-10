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

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsInteracting
struct UBP_ExplodableComponent_C_GetIsInteracting_Params
{
	bool                                               IsInteracting_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsDead
struct UBP_ExplodableComponent_C_GetIsDead_Params
{
	bool                                               IsDead_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetGrabbedComponent
struct UBP_ExplodableComponent_C_GetGrabbedComponent_Params
{
	class UPrimitiveComponent*                         Grabbed_Component_of_Character;                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsPhysicsHandleActive
struct UBP_ExplodableComponent_C_GetIsPhysicsHandleActive_Params
{
	bool                                               Physics_Handle_Active_of_Character_;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsUnconsciousOrDeadOrSimilar
struct UBP_ExplodableComponent_C_GetIsUnconsciousOrDeadOrSimilar_Params
{
	bool                                               IsUnconscious_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsBleedingOut
struct UBP_ExplodableComponent_C_GetIsBleedingOut_Params
{
	bool                                               IsBleedingOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.IsAtMaxHealth
struct UBP_ExplodableComponent_C_IsAtMaxHealth_Params
{
	bool                                               IsAtMaxHealth_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetCurrentHealthPercentageAsFactor
struct UBP_ExplodableComponent_C_GetCurrentHealthPercentageAsFactor_Params
{
	float                                              CurrentHealthPercentage_;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetName
struct UBP_ExplodableComponent_C_GetName_Params
{
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetCanNotAttack
struct UBP_ExplodableComponent_C_GetCanNotAttack_Params
{
	bool                                               CanNotAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetDebrisActorCollision
struct UBP_ExplodableComponent_C_SetDebrisActorCollision_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         StaticMeshComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableCollision;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetPawnToCollisionIgnore;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpOn;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetDebrisActorProperties
struct UBP_ExplodableComponent_C_SetDebrisActorProperties_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 StaticMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impulse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathTimer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPhysicsEnabled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCollisionEnabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetPawnToCollisionIgnore;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpOn;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SpawnDebrisActor
struct UBP_ExplodableComponent_C_SpawnDebrisActor_Params
{
	struct FDestructionSystemDebrisActorProperties     DebrisProps;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpOnDebris;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExplodableGotDamage
struct UBP_ExplodableComponent_C_ExplodableGotDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DamageLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactNormal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetAllExplodableConstructSettings
struct UBP_ExplodableComponent_C_SetAllExplodableConstructSettings_Params
{
	float                                              DamageToTriggerExplode;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToTriggerGotPierced;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialBaseDamage;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialMinimalDamage;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionInnerRadius;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionOuterRadius;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoOptionalSprayShellFragmentsAsProjectiles_;               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  PunctureSound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ExplosionEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplosionEffectScale;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAfterExplosiveGotPiercedTillExplosionStarts;           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayWhenExplodeTriggersUntilExplosionStarts;              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDestructionSystemDebrisActorProperties> DebrisMeshesSpawnOnExplode;                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSDestructionDebrisCollisionSpawnImpulseProps DebrisDefaultsSpawnImpulseCollision;                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpDebris;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  DebrisSpawnBaseTransform;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               UseOptionalCustomExplosionLocation_;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             OptionalCustomExplosionLocation;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinHitsToExplodeRegardlessOfDamge;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugVisualizeExplosionRadius;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ReceiveBeginPlay
struct UBP_ExplodableComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExplodeNow
struct UBP_ExplodableComponent_C_ExplodeNow_Params
{
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_TriggerGotPierced
struct UBP_ExplodableComponent_C_Multicast_TriggerGotPierced_Params
{
	struct FVector                                     DamageLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Kill
struct UBP_ExplodableComponent_C_Kill_Params
{
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_StartExplosion
struct UBP_ExplodableComponent_C_Multicast_StartExplosion_Params
{
	bool                                               OnGround_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DamageLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactNormal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_PiercedVentFireStarts
struct UBP_ExplodableComponent_C_Multicast_PiercedVentFireStarts_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetExplodeAndStart
struct UBP_ExplodableComponent_C_SetExplodeAndStart_Params
{
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetMeshComponentGetInfluencedByRadialImpulseOnOff
struct UBP_ExplodableComponent_C_SetMeshComponentGetInfluencedByRadialImpulseOnOff_Params
{
	class UStaticMeshComponent*                        Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreRedialImpule_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.StartVentPierceFireParticleAndAddForce_CalledByMulticast
struct UBP_ExplodableComponent_C_StartVentPierceFireParticleAndAddForce_CalledByMulticast_Params
{
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExecuteUbergraph_BP_ExplodableComponent
struct UBP_ExplodableComponent_C_ExecuteUbergraph_BP_ExplodableComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.DestroyedExplodeFired__DelegateSignature
struct UBP_ExplodableComponent_C_DestroyedExplodeFired__DelegateSignature_Params
{
};

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.PiercedFired__DelegateSignature
struct UBP_ExplodableComponent_C_PiercedFired__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
