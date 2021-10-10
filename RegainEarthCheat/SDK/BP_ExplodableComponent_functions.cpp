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

// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteracting_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::GetIsInteracting(bool* IsInteracting_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsInteracting");

	UBP_ExplodableComponent_C_GetIsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInteracting_ != nullptr)
		*IsInteracting_ = params.IsInteracting_;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::GetIsDead(bool* IsDead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsDead");

	UBP_ExplodableComponent_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead_ != nullptr)
		*IsDead_ = params.IsDead_;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetGrabbedComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Grabbed_Component_of_Character (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetGrabbedComponent");

	UBP_ExplodableComponent_C_GetGrabbedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbed_Component_of_Character != nullptr)
		*Grabbed_Component_of_Character = params.Grabbed_Component_of_Character;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsPhysicsHandleActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Physics_Handle_Active_of_Character_ (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsPhysicsHandleActive");

	UBP_ExplodableComponent_C_GetIsPhysicsHandleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Physics_Handle_Active_of_Character_ != nullptr)
		*Physics_Handle_Active_of_Character_ = params.Physics_Handle_Active_of_Character_;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsUnconsciousOrDeadOrSimilar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnconscious_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsUnconsciousOrDeadOrSimilar");

	UBP_ExplodableComponent_C_GetIsUnconsciousOrDeadOrSimilar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnconscious_ != nullptr)
		*IsUnconscious_ = params.IsUnconscious_;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsBleedingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBleedingOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::GetIsBleedingOut(bool* IsBleedingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetIsBleedingOut");

	UBP_ExplodableComponent_C_GetIsBleedingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBleedingOut != nullptr)
		*IsBleedingOut = params.IsBleedingOut;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.IsAtMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAtMaxHealth_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::IsAtMaxHealth(bool* IsAtMaxHealth_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.IsAtMaxHealth");

	UBP_ExplodableComponent_C_IsAtMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAtMaxHealth_ != nullptr)
		*IsAtMaxHealth_ = params.IsAtMaxHealth_;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetCurrentHealthPercentageAsFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealthPercentage_       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetCurrentHealthPercentageAsFactor");

	UBP_ExplodableComponent_C_GetCurrentHealthPercentageAsFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentHealthPercentage_ != nullptr)
		*CurrentHealthPercentage_ = params.CurrentHealthPercentage_;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetName");

	UBP_ExplodableComponent_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetCanNotAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanNotAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::GetCanNotAttack(bool* CanNotAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.GetCanNotAttack");

	UBP_ExplodableComponent_C_GetCanNotAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanNotAttack != nullptr)
		*CanNotAttack = params.CanNotAttack;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetDebrisActorCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     StaticMeshComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           EnableCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SetPawnToCollisionIgnore       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::SetDebrisActorCollision(class AActor* Actor, class UPrimitiveComponent* StaticMeshComponent, bool EnableCollision, bool SetPawnToCollisionIgnore, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetDebrisActorCollision");

	UBP_ExplodableComponent_C_SetDebrisActorCollision_Params params;
	params.Actor = Actor;
	params.StaticMeshComponent = StaticMeshComponent;
	params.EnableCollision = EnableCollision;
	params.SetPawnToCollisionIgnore = SetPawnToCollisionIgnore;
	params.CanCharacterStepUpOn = CanCharacterStepUpOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetDebrisActorProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*    StaticMeshComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeathTimer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bPhysicsEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCollisionEnabled              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCastShadows                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SetPawnToCollisionIgnore       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::SetDebrisActorProperties(class AActor* Actor, class UStaticMeshComponent* StaticMeshComponent, class UStaticMesh* StaticMesh, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, const struct FVector& Impulse, float DeathTimer, bool bPhysicsEnabled, bool bCollisionEnabled, bool bCastShadows, bool SetPawnToCollisionIgnore, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetDebrisActorProperties");

	UBP_ExplodableComponent_C_SetDebrisActorProperties_Params params;
	params.Actor = Actor;
	params.StaticMeshComponent = StaticMeshComponent;
	params.StaticMesh = StaticMesh;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.Impulse = Impulse;
	params.DeathTimer = DeathTimer;
	params.bPhysicsEnabled = bPhysicsEnabled;
	params.bCollisionEnabled = bCollisionEnabled;
	params.bCastShadows = bCastShadows;
	params.SetPawnToCollisionIgnore = SetPawnToCollisionIgnore;
	params.CanCharacterStepUpOn = CanCharacterStepUpOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SpawnDebrisActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDestructionSystemDebrisActorProperties DebrisProps                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOnDebris     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::SpawnDebrisActor(const struct FDestructionSystemDebrisActorProperties& DebrisProps, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOnDebris)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.SpawnDebrisActor");

	UBP_ExplodableComponent_C_SpawnDebrisActor_Params params;
	params.DebrisProps = DebrisProps;
	params.CanCharacterStepUpOnDebris = CanCharacterStepUpOnDebris;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExplodableGotDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DamageLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ImpactPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ImpactNormal                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::ExplodableGotDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& DamageLocation, const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, class UPrimitiveComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExplodableGotDamage");

	UBP_ExplodableComponent_C_ExplodableGotDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageLocation = DamageLocation;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetAllExplodableConstructSettings
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageToTriggerExplode         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageToTriggerGotPierced      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionRadialBaseDamage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionRadialMinimalDamage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionInnerRadius     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageExplosionOuterRadius     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DoOptionalSprayShellFragmentsAsProjectiles_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              PunctureSound                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*         ExplosionEffect                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ExplosionEffectScale           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimeAfterExplosiveGotPiercedTillExplosionStarts (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayWhenExplodeTriggersUntilExplosionStarts (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDestructionSystemDebrisActorProperties> DebrisMeshesSpawnOnExplode     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSDestructionDebrisCollisionSpawnImpulseProps DebrisDefaultsSpawnImpulseCollision (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpDebris       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              DebrisSpawnBaseTransform       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                           UseOptionalCustomExplosionLocation_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*         OptionalCustomExplosionLocation (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MinHitsToExplodeRegardlessOfDamge (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DebugVisualizeExplosionRadius  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ExplodableComponent_C::SetAllExplodableConstructSettings(float DamageToTriggerExplode, float DamageToTriggerGotPierced, float DamageExplosionRadialBaseDamage, float DamageExplosionRadialMinimalDamage, float DamageExplosionInnerRadius, float DamageExplosionOuterRadius, bool DoOptionalSprayShellFragmentsAsProjectiles_, class USoundBase* PunctureSound, class UParticleSystem* ExplosionEffect, float ExplosionEffectScale, float TimeAfterExplosiveGotPiercedTillExplosionStarts, float DelayWhenExplodeTriggersUntilExplosionStarts, TArray<struct FDestructionSystemDebrisActorProperties>* DebrisMeshesSpawnOnExplode, const struct FSDestructionDebrisCollisionSpawnImpulseProps& DebrisDefaultsSpawnImpulseCollision, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpDebris, const struct FTransform& DebrisSpawnBaseTransform, bool UseOptionalCustomExplosionLocation_, class USceneComponent* OptionalCustomExplosionLocation, int MinHitsToExplodeRegardlessOfDamge, bool DebugVisualizeExplosionRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetAllExplodableConstructSettings");

	UBP_ExplodableComponent_C_SetAllExplodableConstructSettings_Params params;
	params.DamageToTriggerExplode = DamageToTriggerExplode;
	params.DamageToTriggerGotPierced = DamageToTriggerGotPierced;
	params.DamageExplosionRadialBaseDamage = DamageExplosionRadialBaseDamage;
	params.DamageExplosionRadialMinimalDamage = DamageExplosionRadialMinimalDamage;
	params.DamageExplosionInnerRadius = DamageExplosionInnerRadius;
	params.DamageExplosionOuterRadius = DamageExplosionOuterRadius;
	params.DoOptionalSprayShellFragmentsAsProjectiles_ = DoOptionalSprayShellFragmentsAsProjectiles_;
	params.PunctureSound = PunctureSound;
	params.ExplosionEffect = ExplosionEffect;
	params.ExplosionEffectScale = ExplosionEffectScale;
	params.TimeAfterExplosiveGotPiercedTillExplosionStarts = TimeAfterExplosiveGotPiercedTillExplosionStarts;
	params.DelayWhenExplodeTriggersUntilExplosionStarts = DelayWhenExplodeTriggersUntilExplosionStarts;
	params.DebrisDefaultsSpawnImpulseCollision = DebrisDefaultsSpawnImpulseCollision;
	params.CanCharacterStepUpDebris = CanCharacterStepUpDebris;
	params.DebrisSpawnBaseTransform = DebrisSpawnBaseTransform;
	params.UseOptionalCustomExplosionLocation_ = UseOptionalCustomExplosionLocation_;
	params.OptionalCustomExplosionLocation = OptionalCustomExplosionLocation;
	params.MinHitsToExplodeRegardlessOfDamge = MinHitsToExplodeRegardlessOfDamge;
	params.DebugVisualizeExplosionRadius = DebugVisualizeExplosionRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DebrisMeshesSpawnOnExplode != nullptr)
		*DebrisMeshesSpawnOnExplode = params.DebrisMeshesSpawnOnExplode;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_ExplodableComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.ReceiveBeginPlay");

	UBP_ExplodableComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExplodeNow
// (BlueprintCallable, BlueprintEvent)
void UBP_ExplodableComponent_C::ExplodeNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExplodeNow");

	UBP_ExplodableComponent_C_ExplodeNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_TriggerGotPierced
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::Multicast_TriggerGotPierced(const struct FVector& DamageLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_TriggerGotPierced");

	UBP_ExplodableComponent_C_Multicast_TriggerGotPierced_Params params;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Kill
// (BlueprintCallable, BlueprintEvent)
void UBP_ExplodableComponent_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.Kill");

	UBP_ExplodableComponent_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_StartExplosion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnGround_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 DamageLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ImpactNormal                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ImpactPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::Multicast_StartExplosion(bool OnGround_, const struct FRotator& Rotation, const struct FVector& DamageLocation, const struct FVector& ImpactNormal, const struct FVector& ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_StartExplosion");

	UBP_ExplodableComponent_C_Multicast_StartExplosion_Params params;
	params.OnGround_ = OnGround_;
	params.Rotation = Rotation;
	params.DamageLocation = DamageLocation;
	params.ImpactNormal = ImpactNormal;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_PiercedVentFireStarts
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::Multicast_PiercedVentFireStarts(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.Multicast_PiercedVentFireStarts");

	UBP_ExplodableComponent_C_Multicast_PiercedVentFireStarts_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetExplodeAndStart
// (BlueprintCallable, BlueprintEvent)
void UBP_ExplodableComponent_C::SetExplodeAndStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetExplodeAndStart");

	UBP_ExplodableComponent_C_SetExplodeAndStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetMeshComponentGetInfluencedByRadialImpulseOnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IgnoreRedialImpule_            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::SetMeshComponentGetInfluencedByRadialImpulseOnOff(class UStaticMeshComponent* Mesh, bool IgnoreRedialImpule_, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.SetMeshComponentGetInfluencedByRadialImpulseOnOff");

	UBP_ExplodableComponent_C_SetMeshComponentGetInfluencedByRadialImpulseOnOff_Params params;
	params.Mesh = Mesh;
	params.IgnoreRedialImpule_ = IgnoreRedialImpule_;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.StartVentPierceFireParticleAndAddForce_CalledByMulticast
// (BlueprintCallable, BlueprintEvent)
void UBP_ExplodableComponent_C::StartVentPierceFireParticleAndAddForce_CalledByMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.StartVentPierceFireParticleAndAddForce_CalledByMulticast");

	UBP_ExplodableComponent_C_StartVentPierceFireParticleAndAddForce_CalledByMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExecuteUbergraph_BP_ExplodableComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ExplodableComponent_C::ExecuteUbergraph_BP_ExplodableComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.ExecuteUbergraph_BP_ExplodableComponent");

	UBP_ExplodableComponent_C_ExecuteUbergraph_BP_ExplodableComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.DestroyedExplodeFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ExplodableComponent_C::DestroyedExplodeFired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.DestroyedExplodeFired__DelegateSignature");

	UBP_ExplodableComponent_C_DestroyedExplodeFired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableComponent.BP_ExplodableComponent_C.PiercedFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ExplodableComponent_C::PiercedFired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableComponent.BP_ExplodableComponent_C.PiercedFired__DelegateSignature");

	UBP_ExplodableComponent_C_PiercedFired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
