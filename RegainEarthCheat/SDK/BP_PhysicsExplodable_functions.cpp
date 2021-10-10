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

// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteracting_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::GetIsInteracting(bool* IsInteracting_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsInteracting");

	ABP_PhysicsExplodable_C_GetIsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInteracting_ != nullptr)
		*IsInteracting_ = params.IsInteracting_;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::GetIsDead(bool* IsDead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsDead");

	ABP_PhysicsExplodable_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead_ != nullptr)
		*IsDead_ = params.IsDead_;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetGrabbedComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Grabbed_Component_of_Character (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetGrabbedComponent");

	ABP_PhysicsExplodable_C_GetGrabbedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbed_Component_of_Character != nullptr)
		*Grabbed_Component_of_Character = params.Grabbed_Component_of_Character;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsPhysicsHandleActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Physics_Handle_Active_of_Character_ (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsPhysicsHandleActive");

	ABP_PhysicsExplodable_C_GetIsPhysicsHandleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Physics_Handle_Active_of_Character_ != nullptr)
		*Physics_Handle_Active_of_Character_ = params.Physics_Handle_Active_of_Character_;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsUnconsciousOrDeadOrSimilar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnconscious_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsUnconsciousOrDeadOrSimilar");

	ABP_PhysicsExplodable_C_GetIsUnconsciousOrDeadOrSimilar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnconscious_ != nullptr)
		*IsUnconscious_ = params.IsUnconscious_;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsBleedingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBleedingOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::GetIsBleedingOut(bool* IsBleedingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetIsBleedingOut");

	ABP_PhysicsExplodable_C_GetIsBleedingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBleedingOut != nullptr)
		*IsBleedingOut = params.IsBleedingOut;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.IsAtMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAtMaxHealth_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::IsAtMaxHealth(bool* IsAtMaxHealth_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.IsAtMaxHealth");

	ABP_PhysicsExplodable_C_IsAtMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAtMaxHealth_ != nullptr)
		*IsAtMaxHealth_ = params.IsAtMaxHealth_;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetCurrentHealthPercentageAsFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealthPercentage_       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetCurrentHealthPercentageAsFactor");

	ABP_PhysicsExplodable_C_GetCurrentHealthPercentageAsFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentHealthPercentage_ != nullptr)
		*CurrentHealthPercentage_ = params.CurrentHealthPercentage_;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetName");

	ABP_PhysicsExplodable_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetCanNotAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanNotAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::GetCanNotAttack(bool* CanNotAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetCanNotAttack");

	ABP_PhysicsExplodable_C_GetCanNotAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanNotAttack != nullptr)
		*CanNotAttack = params.CanNotAttack;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	ABP_PhysicsExplodable_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetExplodableComponent");

	ABP_PhysicsExplodable_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetAudioComponentForVentFireSound");

	ABP_PhysicsExplodable_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetMesh");

	ABP_PhysicsExplodable_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.GetPiercedFireDirectionOfOwner");

	ABP_PhysicsExplodable_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PhysicsExplodable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.UserConstructionScript");

	ABP_PhysicsExplodable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.PlayFootStepLocal
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PhysicsExplodable_C::PlayFootStepLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.PlayFootStepLocal");

	ABP_PhysicsExplodable_C_PlayFootStepLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.HealSomeHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::HealSomeHealth(float AmountHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.HealSomeHealth");

	ABP_PhysicsExplodable_C_HealSomeHealth_Params params;
	params.AmountHealth = AmountHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ToogleNotHitableForBulletStrikeAndProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetNotHitable_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ToogleNotHitableForBulletStrikeAndProjectile");

	ABP_PhysicsExplodable_C_ToogleNotHitableForBulletStrikeAndProjectile_Params params;
	params.SetNotHitable_ = SetNotHitable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetToCanNotMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotMove_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::SetToCanNotMove(bool SetToCanNotMove_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetToCanNotMove");

	ABP_PhysicsExplodable_C_SetToCanNotMove_Params params;
	params.SetToCanNotMove_ = SetToCanNotMove_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetToCanNotAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotAttack_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::SetToCanNotAttack(bool SetToCanNotAttack_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetToCanNotAttack");

	ABP_PhysicsExplodable_C_SetToCanNotAttack_Params params;
	params.SetToCanNotAttack_ = SetToCanNotAttack_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.CancelPickupAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PhysicsExplodable_C::CancelPickupAndReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.CancelPickupAndReplicate");

	ABP_PhysicsExplodable_C_CancelPickupAndReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ToggleForceDancingPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDancing_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PhysicsExplodable_C::ToggleForceDancingPawn(bool SetDancing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ToggleForceDancingPawn");

	ABP_PhysicsExplodable_C_ToggleForceDancingPawn_Params params;
	params.SetDancing_ = SetDancing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetMaxHealthInterf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMaxHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::SetMaxHealthInterf(float NewMaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetMaxHealthInterf");

	ABP_PhysicsExplodable_C_SetMaxHealthInterf_Params params;
	params.NewMaxHealth = NewMaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PhysicsExplodable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveBeginPlay");

	ABP_PhysicsExplodable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_PhysicsExplodable_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceivePointDamage");

	ABP_PhysicsExplodable_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveRadialDamage");

	ABP_PhysicsExplodable_C_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.FireRadialImpulse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PhysicsExplodable_C::FireRadialImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.FireRadialImpulse");

	ABP_PhysicsExplodable_C_FireRadialImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.DestroyedExplodeFired_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PhysicsExplodable_C::DestroyedExplodeFired_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.DestroyedExplodeFired_Event");

	ABP_PhysicsExplodable_C_DestroyedExplodeFired_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.PiercedFired_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PhysicsExplodable_C::PiercedFired_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.PiercedFired_Event");

	ABP_PhysicsExplodable_C_PiercedFired_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetRenderCustomDepthStencil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetOn_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NewValueIfSetOn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.SetRenderCustomDepthStencil");

	ABP_PhysicsExplodable_C_SetRenderCustomDepthStencil_Params params;
	params.SetOn_ = SetOn_;
	params.NewValueIfSetOn = NewValueIfSetOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ReceiveAnyDamage");

	ABP_PhysicsExplodable_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ExecuteUbergraph_BP_PhysicsExplodable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PhysicsExplodable_C::ExecuteUbergraph_BP_PhysicsExplodable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhysicsExplodable.BP_PhysicsExplodable_C.ExecuteUbergraph_BP_PhysicsExplodable");

	ABP_PhysicsExplodable_C_ExecuteUbergraph_BP_PhysicsExplodable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
