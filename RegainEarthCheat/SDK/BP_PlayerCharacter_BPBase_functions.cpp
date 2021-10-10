// Name: RegainEart-FirtstStrike, Version: Version-1
#pragma once
#include "pch.h"
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

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShouldTakeChargeDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldTakeDamage               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyAllowFullChargeHits        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::ShouldTakeChargeDamage(bool* ShouldTakeDamage, bool* OnlyAllowFullChargeHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShouldTakeChargeDamage");

	ABP_PlayerCharacter_BPBase_C_ShouldTakeChargeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldTakeDamage != nullptr)
		*ShouldTakeDamage = params.ShouldTakeDamage;
	if (OnlyAllowFullChargeHits != nullptr)
		*OnlyAllowFullChargeHits = params.OnlyAllowFullChargeHits;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsElExpReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasCharged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsElExpReady(bool* WasCharged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsElExpReady");

	ABP_PlayerCharacter_BPBase_C_IsElExpReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasCharged != nullptr)
		*WasCharged = params.WasCharged;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetShieldComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Shield_C*            ShieldComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetShieldComponent(class UBP_Shield_C** ShieldComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetShieldComponent");

	ABP_PlayerCharacter_BPBase_C_GetShieldComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShieldComponent != nullptr)
		*ShieldComponent = params.ShieldComponent;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshForBodyShield
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MeshUsedForBodyShield          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetMeshForBodyShield(class UMeshComponent** MeshUsedForBodyShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshForBodyShield");

	ABP_PlayerCharacter_BPBase_C_GetMeshForBodyShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MeshUsedForBodyShield != nullptr)
		*MeshUsedForBodyShield = params.MeshUsedForBodyShield;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsProjectile                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsProjectile(bool* IsProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsProjectile");

	ABP_PlayerCharacter_BPBase_C_IsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsProjectile != nullptr)
		*IsProjectile = params.IsProjectile;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetSelfName");

	ABP_PlayerCharacter_BPBase_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsOnPlayersSideAndAttackable");

	ABP_PlayerCharacter_BPBase_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsEnemiesSideAndAttackable");

	ABP_PlayerCharacter_BPBase_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshAndBoneToAimFor");

	ABP_PlayerCharacter_BPBase_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshForEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetMeshForEffects(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshForEffects");

	ABP_PlayerCharacter_BPBase_C_GetMeshForEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetStatusEffectComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasStatusEffectComponent       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_StatusEffectsBaseComponent_C* StatusEffectComponentRef       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetStatusEffectComponent(bool* HasStatusEffectComponent, class UBP_StatusEffectsBaseComponent_C** StatusEffectComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetStatusEffectComponent");

	ABP_PlayerCharacter_BPBase_C_GetStatusEffectComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasStatusEffectComponent != nullptr)
		*HasStatusEffectComponent = params.HasStatusEffectComponent;
	if (StatusEffectComponentRef != nullptr)
		*StatusEffectComponentRef = params.StatusEffectComponentRef;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCanNotAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanNotAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetCanNotAttack(bool* CanNotAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCanNotAttack");

	ABP_PlayerCharacter_BPBase_C_GetCanNotAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanNotAttack != nullptr)
		*CanNotAttack = params.CanNotAttack;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetName");

	ABP_PlayerCharacter_BPBase_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCurrentHealthPercentageAsFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealthPercentage_       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCurrentHealthPercentageAsFactor");

	ABP_PlayerCharacter_BPBase_C_GetCurrentHealthPercentageAsFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentHealthPercentage_ != nullptr)
		*CurrentHealthPercentage_ = params.CurrentHealthPercentage_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsAtMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAtMaxHealth_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsAtMaxHealth(bool* IsAtMaxHealth_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsAtMaxHealth");

	ABP_PlayerCharacter_BPBase_C_IsAtMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAtMaxHealth_ != nullptr)
		*IsAtMaxHealth_ = params.IsAtMaxHealth_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsBleedingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBleedingOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetIsBleedingOut(bool* IsBleedingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsBleedingOut");

	ABP_PlayerCharacter_BPBase_C_GetIsBleedingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBleedingOut != nullptr)
		*IsBleedingOut = params.IsBleedingOut;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsUnconsciousOrDeadOrSimilar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnconscious_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsUnconsciousOrDeadOrSimilar");

	ABP_PlayerCharacter_BPBase_C_GetIsUnconsciousOrDeadOrSimilar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnconscious_ != nullptr)
		*IsUnconscious_ = params.IsUnconscious_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteracting_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetIsInteracting(bool* IsInteracting_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsInteracting");

	ABP_PlayerCharacter_BPBase_C_GetIsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInteracting_ != nullptr)
		*IsInteracting_ = params.IsInteracting_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetIsDead(bool* IsDead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsDead");

	ABP_PlayerCharacter_BPBase_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead_ != nullptr)
		*IsDead_ = params.IsDead_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetGrabbedComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Grabbed_Component_of_Character (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetGrabbedComponent");

	ABP_PlayerCharacter_BPBase_C_GetGrabbedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbed_Component_of_Character != nullptr)
		*Grabbed_Component_of_Character = params.Grabbed_Component_of_Character;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsPhysicsHandleActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Physics_Handle_Active_of_Character_ (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsPhysicsHandleActive");

	ABP_PlayerCharacter_BPBase_C_GetIsPhysicsHandleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Physics_Handle_Active_of_Character_ != nullptr)
		*Physics_Handle_Active_of_Character_ = params.Physics_Handle_Active_of_Character_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetLaserDotRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LaserDotMarker_Component_C* LaserDotRef                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetLaserDotRef(class UBP_LaserDotMarker_Component_C** LaserDotRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetLaserDotRef");

	ABP_PlayerCharacter_BPBase_C_GetLaserDotRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LaserDotRef != nullptr)
		*LaserDotRef = params.LaserDotRef;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetLaserDotLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetLaserDotLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetLaserDotLocation");

	ABP_PlayerCharacter_BPBase_C_GetLaserDotLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCurrentWeaponSkelMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CurrentWeaponSkelMesh          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCurrentWeaponSkelMesh");

	ABP_PlayerCharacter_BPBase_C_GetCurrentWeaponSkelMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWeaponSkelMesh != nullptr)
		*CurrentWeaponSkelMesh = params.CurrentWeaponSkelMesh;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetPlayerShootingCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CharCanShoot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::GetPlayerShootingCondition(bool* CharCanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetPlayerShootingCondition");

	ABP_PlayerCharacter_BPBase_C_GetPlayerShootingCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharCanShoot != nullptr)
		*CharCanShoot = params.CharCanShoot;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetActivePlayerCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ActiveCamera                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetActivePlayerCamera(class UCameraComponent** ActiveCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetActivePlayerCamera");

	ABP_PlayerCharacter_BPBase_C_GetActivePlayerCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveCamera != nullptr)
		*ActiveCamera = params.ActiveCamera;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickUpItemToInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountToChangeAddOrRemove       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InformPlayerWithMessage        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasInventoryPickupFine_        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InventoryWasFull_              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NotAbleToRemove_CountToLess_   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NewItemCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::PickUpItemToInventory(int CountToChangeAddOrRemove, TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool InformPlayerWithMessage, bool* WasInventoryPickupFine_, bool* InventoryWasFull_, bool* NotAbleToRemove_CountToLess_, int* NewItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickUpItemToInventory");

	ABP_PlayerCharacter_BPBase_C_PickUpItemToInventory_Params params;
	params.CountToChangeAddOrRemove = CountToChangeAddOrRemove;
	params.ItemId = ItemId;
	params.InformPlayerWithMessage = InformPlayerWithMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasInventoryPickupFine_ != nullptr)
		*WasInventoryPickupFine_ = params.WasInventoryPickupFine_;
	if (InventoryWasFull_ != nullptr)
		*InventoryWasFull_ = params.InventoryWasFull_;
	if (NotAbleToRemove_CountToLess_ != nullptr)
		*NotAbleToRemove_CountToLess_ = params.NotAbleToRemove_CountToLess_;
	if (NewItemCount != nullptr)
		*NewItemCount = params.NewItemCount;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetInventoryItemAndCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Get_also_Items_with_count_zero_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventorySlotStructB> InventoryNOTAsReference        (Parm, OutParm)
// int                            Count_of_different_Items_in_Result_Array (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_Item_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            FoundOnIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlotStructB   FoundInventoryItemSlotStruct   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataStructF        FoundInventoryItemFullDetails  (Parm, OutParm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetInventoryItemAndCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool Get_also_Items_with_count_zero_, TArray<struct FInventorySlotStructB>* InventoryNOTAsReference, int* Count_of_different_Items_in_Result_Array, bool* Found_Item_, int* FoundOnIndex, struct FInventorySlotStructB* FoundInventoryItemSlotStruct, struct FItemDataStructF* FoundInventoryItemFullDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetInventoryItemAndCount");

	ABP_PlayerCharacter_BPBase_C_GetInventoryItemAndCount_Params params;
	params.ItemId = ItemId;
	params.Get_also_Items_with_count_zero_ = Get_also_Items_with_count_zero_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InventoryNOTAsReference != nullptr)
		*InventoryNOTAsReference = params.InventoryNOTAsReference;
	if (Count_of_different_Items_in_Result_Array != nullptr)
		*Count_of_different_Items_in_Result_Array = params.Count_of_different_Items_in_Result_Array;
	if (Found_Item_ != nullptr)
		*Found_Item_ = params.Found_Item_;
	if (FoundOnIndex != nullptr)
		*FoundOnIndex = params.FoundOnIndex;
	if (FoundInventoryItemSlotStruct != nullptr)
		*FoundInventoryItemSlotStruct = params.FoundInventoryItemSlotStruct;
	if (FoundInventoryItemFullDetails != nullptr)
		*FoundInventoryItemFullDetails = params.FoundInventoryItemFullDetails;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckGetItemFirstTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> SearchItemID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_New_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::CheckGetItemFirstTime(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> SearchItemID, bool* Is_New_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckGetItemFirstTime");

	ABP_PlayerCharacter_BPBase_C_CheckGetItemFirstTime_Params params;
	params.SearchItemID = SearchItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_New_ != nullptr)
		*Is_New_ = params.Is_New_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetFullInventoryWithAllItemDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Get_also_Items_with_count_zero_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>> GetItemCategories              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Count_of_different_Items_in_Result_Array (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_Items_Without_Errors_    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemDataStructF> Inventory_Full                 (Parm, OutParm)
void ABP_PlayerCharacter_BPBase_C::GetFullInventoryWithAllItemDetails(bool Get_also_Items_with_count_zero_, TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>>* GetItemCategories, int* Count_of_different_Items_in_Result_Array, bool* Found_Items_Without_Errors_, TArray<struct FItemDataStructF>* Inventory_Full)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetFullInventoryWithAllItemDetails");

	ABP_PlayerCharacter_BPBase_C_GetFullInventoryWithAllItemDetails_Params params;
	params.Get_also_Items_with_count_zero_ = Get_also_Items_with_count_zero_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetItemCategories != nullptr)
		*GetItemCategories = params.GetItemCategories;
	if (Count_of_different_Items_in_Result_Array != nullptr)
		*Count_of_different_Items_in_Result_Array = params.Count_of_different_Items_in_Result_Array;
	if (Found_Items_Without_Errors_ != nullptr)
		*Found_Items_Without_Errors_ = params.Found_Items_Without_Errors_;
	if (Inventory_Full != nullptr)
		*Inventory_Full = params.Inventory_Full;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Get Vector and Rot in View Line
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance_in_front              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Done_fine_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              TransformLocVecRot             (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Get_Vector_and_Rot_in_View_Line(float Distance_in_front, bool* Done_fine_, struct FTransform* TransformLocVecRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Get Vector and Rot in View Line");

	ABP_PlayerCharacter_BPBase_C_Get_Vector_and_Rot_in_View_Line_Params params;
	params.Distance_in_front = Distance_in_front;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Done_fine_ != nullptr)
		*Done_fine_ = params.Done_fine_;
	if (TransformLocVecRot != nullptr)
		*TransformLocVecRot = params.TransformLocVecRot;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetInventoryItemCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Set_to_specfic_count           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Set_to_Max_Stack_Size          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Only_Add_when_Item_already_in_inventory_at_least_with_0 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           PlayPickupSound_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Should_Player_be_informed      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Done_fine_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetInventoryItemCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, int Set_to_specfic_count, bool Set_to_Max_Stack_Size, bool Only_Add_when_Item_already_in_inventory_at_least_with_0, bool PlayPickupSound_, bool Should_Player_be_informed, bool* Done_fine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetInventoryItemCount");

	ABP_PlayerCharacter_BPBase_C_SetInventoryItemCount_Params params;
	params.ItemId = ItemId;
	params.Set_to_specfic_count = Set_to_specfic_count;
	params.Set_to_Max_Stack_Size = Set_to_Max_Stack_Size;
	params.Only_Add_when_Item_already_in_inventory_at_least_with_0 = Only_Add_when_Item_already_in_inventory_at_least_with_0;
	params.PlayPickupSound_ = PlayPickupSound_;
	params.Should_Player_be_informed = Should_Player_be_informed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Done_fine_ != nullptr)
		*Done_fine_ = params.Done_fine_;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetPlayerCameraManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*    PlayerCamManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetPlayerCameraManager(class APlayerCameraManager** PlayerCamManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetPlayerCameraManager");

	ABP_PlayerCharacter_BPBase_C_GetPlayerCameraManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerCamManager != nullptr)
		*PlayerCamManager = params.PlayerCamManager;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_CurrentGrenade
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_CurrentGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_CurrentGrenade");

	ABP_PlayerCharacter_BPBase_C_OnRep_CurrentGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ModelSkinSelectedIndex
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_ModelSkinSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ModelSkinSelectedIndex");

	ABP_PlayerCharacter_BPBase_C_OnRep_ModelSkinSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponCloseCombatIsArmedInHands
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_WeaponCloseCombatIsArmedInHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponCloseCombatIsArmedInHands");

	ABP_PlayerCharacter_BPBase_C_OnRep_WeaponCloseCombatIsArmedInHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ForcedDancing
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_ForcedDancing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ForcedDancing");

	ABP_PlayerCharacter_BPBase_C_OnRep_ForcedDancing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponGun2IsArmedInHands
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_WeaponGun2IsArmedInHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponGun2IsArmedInHands");

	ABP_PlayerCharacter_BPBase_C_OnRep_WeaponGun2IsArmedInHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponGun1IsArmedInHands
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_WeaponGun1IsArmedInHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponGun1IsArmedInHands");

	ABP_PlayerCharacter_BPBase_C_OnRep_WeaponGun1IsArmedInHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponPistolIsArmedInHands
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_WeaponPistolIsArmedInHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponPistolIsArmedInHands");

	ABP_PlayerCharacter_BPBase_C_OnRep_WeaponPistolIsArmedInHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetWeaponPawnAnimations_Locally
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetWeaponPawnAnimations_Locally(RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetWeaponPawnAnimations_Locally");

	ABP_PlayerCharacter_BPBase_C_SetWeaponPawnAnimations_Locally_Params params;
	params.WeaponPawnAnimationGroup = WeaponPawnAnimationGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdatePawnAnimWeapTypeAnimBpCam_Locally
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeapon_Base_Component_C* BPWeapon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::UpdatePawnAnimWeapTypeAnimBpCam_Locally(class UWeapon_Base_Component_C* BPWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdatePawnAnimWeapTypeAnimBpCam_Locally");

	ABP_PlayerCharacter_BPBase_C_UpdatePawnAnimWeapTypeAnimBpCam_Locally_Params params;
	params.BPWeapon = BPWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon Locally
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon_Locally()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon Locally");

	ABP_PlayerCharacter_BPBase_C_UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon_Locally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCurrentWeaponAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            CurrentWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetCurrentWeaponAndReplicate(class UBP_Weapon_C* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCurrentWeaponAndReplicate");

	ABP_PlayerCharacter_BPBase_C_SetCurrentWeaponAndReplicate_Params params;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRunStateAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewRunButtonPressedState       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetRunStateAndReplicate(bool NewRunButtonPressedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRunStateAndReplicate");

	ABP_PlayerCharacter_BPBase_C_SetRunStateAndReplicate_Params params;
	params.NewRunButtonPressedState = NewRunButtonPressedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_CurrentWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_CurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_CurrentWeapon");

	ABP_PlayerCharacter_BPBase_C_OnRep_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SwitchFreeStateWhenInExpectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EStateOfAction  ExpectedActualStateToSwitchToFreeState (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SwitchFreeStateWhenInExpectedState(RegainEarth_FS_EStateOfAction ExpectedActualStateToSwitchToFreeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SwitchFreeStateWhenInExpectedState");

	ABP_PlayerCharacter_BPBase_C_SwitchFreeStateWhenInExpectedState_Params params;
	params.ExpectedActualStateToSwitchToFreeState = ExpectedActualStateToSwitchToFreeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyAimingState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsInAnyAimingState            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsInAnyAimingState(bool* bIsInAnyAimingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyAimingState");

	ABP_PlayerCharacter_BPBase_C_IsInAnyAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInAnyAimingState != nullptr)
		*bIsInAnyAimingState = params.bIsInAnyAimingState;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SwitchAimingAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EStateOfAiming  ActualAimingState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SwitchAimingAndReplicate(RegainEarth_FS_EStateOfAiming ActualAimingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SwitchAimingAndReplicate");

	ABP_PlayerCharacter_BPBase_C_SwitchAimingAndReplicate_Params params;
	params.ActualAimingState = ActualAimingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Attach Current Weapon to Bone
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<RegainEarth_FS_EWeaponPawnAnimationGroups, struct FName> TargetMap                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           AttachingToHand_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_Weapon_C*            WeaponToChange                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Attach_Current_Weapon_to_Bone(TMap<RegainEarth_FS_EWeaponPawnAnimationGroups, struct FName> TargetMap, bool AttachingToHand_, class UBP_Weapon_C* WeaponToChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Attach Current Weapon to Bone");

	ABP_PlayerCharacter_BPBase_C_Attach_Current_Weapon_to_Bone_Params params;
	params.TargetMap = TargetMap;
	params.AttachingToHand_ = AttachingToHand_;
	params.WeaponToChange = WeaponToChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyAimingStateAndArmed?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsInAnyAimingState            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsInAnyAimingStateAndArmed_(bool* bIsInAnyAimingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyAimingStateAndArmed?");

	ABP_PlayerCharacter_BPBase_C_IsInAnyAimingStateAndArmed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInAnyAimingState != nullptr)
		*bIsInAnyAimingState = params.bIsInAnyAimingState;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyZoomedAimingStateAndArmed?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsInAnyZOOMAimingState        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::IsInAnyZoomedAimingStateAndArmed_(bool* bIsInAnyZOOMAimingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyZoomedAimingStateAndArmed?");

	ABP_PlayerCharacter_BPBase_C_IsInAnyZoomedAimingStateAndArmed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInAnyZOOMAimingState != nullptr)
		*bIsInAnyZOOMAimingState = params.bIsInAnyZOOMAimingState;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ActualAimingState
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRep_ActualAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ActualAimingState");

	ABP_PlayerCharacter_BPBase_C_OnRep_ActualAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCamRotationControlsPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSetCamRotationControlsPawn    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetCamRotationControlsPawn(bool bSetCamRotationControlsPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCamRotationControlsPawn");

	ABP_PlayerCharacter_BPBase_C_SetCamRotationControlsPawn_Params params;
	params.bSetCamRotationControlsPawn = bSetCamRotationControlsPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckPlayerInFreeActionStatePure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           PlayerInFreeState              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::CheckPlayerInFreeActionStatePure(bool* PlayerInFreeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckPlayerInFreeActionStatePure");

	ABP_PlayerCharacter_BPBase_C_CheckPlayerInFreeActionStatePure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInFreeState != nullptr)
		*PlayerInFreeState = params.PlayerInFreeState;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UserConstructionScript");

	ABP_PlayerCharacter_BPBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_0__FinishedFunc");

	ABP_PlayerCharacter_BPBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_0__UpdateFunc");

	ABP_PlayerCharacter_BPBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RotationReviveTimeline__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::RotationReviveTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RotationReviveTimeline__FinishedFunc");

	ABP_PlayerCharacter_BPBase_C_RotationReviveTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RotationReviveTimeline__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::RotationReviveTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RotationReviveTimeline__UpdateFunc");

	ABP_PlayerCharacter_BPBase_C_RotationReviveTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_AimingSpeedChange__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Timeline_AimingSpeedChange__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_AimingSpeedChange__FinishedFunc");

	ABP_PlayerCharacter_BPBase_C_Timeline_AimingSpeedChange__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_AimingSpeedChange__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Timeline_AimingSpeedChange__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_AimingSpeedChange__UpdateFunc");

	ABP_PlayerCharacter_BPBase_C_Timeline_AimingSpeedChange__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopLegGlowAnimation__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StopLegGlowAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopLegGlowAnimation__FinishedFunc");

	ABP_PlayerCharacter_BPBase_C_StopLegGlowAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopLegGlowAnimation__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StopLegGlowAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopLegGlowAnimation__UpdateFunc");

	ABP_PlayerCharacter_BPBase_C_StopLegGlowAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_1__FinishedFunc");

	ABP_PlayerCharacter_BPBase_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_1__UpdateFunc");

	ABP_PlayerCharacter_BPBase_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_RadialScan_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_RadialScan_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_RadialScan_K2Node_InputActionEvent_22");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_RadialScan_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_InteractUse_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_21");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_InteractUse_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_InteractUse_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_20");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_InteractUse_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Fire_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_Fire_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Fire_K2Node_InputActionEvent_17");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_Fire_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Fire_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_Fire_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Fire_K2Node_InputActionEvent_16");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_Fire_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_AimingState_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_AimingState_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_AimingState_K2Node_InputActionEvent_15");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_AimingState_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_AimingState_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_AimingState_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_AimingState_K2Node_InputActionEvent_14");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_AimingState_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Reload_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_Reload_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Reload_K2Node_InputActionEvent_13");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_Reload_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectSidearm_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_SelectSidearm_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectSidearm_K2Node_InputActionEvent_12");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectSidearm_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF");

	ABP_PlayerCharacter_BPBase_C_OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF");

	ABP_PlayerCharacter_BPBase_C_OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF");

	ABP_PlayerCharacter_BPBase_C_OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF");

	ABP_PlayerCharacter_BPBase_C_OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF");

	ABP_PlayerCharacter_BPBase_C_OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Run_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_Run_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Run_K2Node_InputActionEvent_5");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_Run_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Run_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Run_K2Node_InputActionEvent_4");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_InteractUse_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_3");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_InteractUse_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1");

	ABP_PlayerCharacter_BPBase_C_InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToogleNotHitableForBulletStrikeAndProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetNotHitable_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToogleNotHitableForBulletStrikeAndProjectile");

	ABP_PlayerCharacter_BPBase_C_ToogleNotHitableForBulletStrikeAndProjectile_Params params;
	params.SetNotHitable_ = SetNotHitable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetToCanNotMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotMove_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetToCanNotMove(bool SetToCanNotMove_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetToCanNotMove");

	ABP_PlayerCharacter_BPBase_C_SetToCanNotMove_Params params;
	params.SetToCanNotMove_ = SetToCanNotMove_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetToCanNotAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotAttack_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetToCanNotAttack(bool SetToCanNotAttack_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetToCanNotAttack");

	ABP_PlayerCharacter_BPBase_C_SetToCanNotAttack_Params params;
	params.SetToCanNotAttack_ = SetToCanNotAttack_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRenderCustomDepthStencil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetOn_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NewValueIfSetOn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRenderCustomDepthStencil");

	ABP_PlayerCharacter_BPBase_C_SetRenderCustomDepthStencil_Params params;
	params.SetOn_ = SetOn_;
	params.NewValueIfSetOn = NewValueIfSetOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           WeaponMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Weapon_C*            WeaponComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetWeapon(class USkeletalMesh* WeaponMesh, class UBP_Weapon_C* WeaponComponent, bool Primary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetWeapon");

	ABP_PlayerCharacter_BPBase_C_SetWeapon_Params params;
	params.WeaponMesh = WeaponMesh;
	params.WeaponComponent = WeaponComponent;
	params.Primary = Primary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_PlayerCharacter_BPBase_C::GetHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetHit");

	ABP_PlayerCharacter_BPBase_C_GetHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetBulletDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BulletDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::GetBulletDirection(const struct FVector& BulletDirection, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetBulletDirection");

	ABP_PlayerCharacter_BPBase_C_GetBulletDirection_Params params;
	params.BulletDirection = BulletDirection;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Deactivate Crosshair
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Deactivate_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Deactivate Crosshair");

	ABP_PlayerCharacter_BPBase_C_Deactivate_Crosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Active Crosshair
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Active_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Active Crosshair");

	ABP_PlayerCharacter_BPBase_C_Active_Crosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ScanWaveFoundPawnOrImportantActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::ScanWaveFoundPawnOrImportantActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ScanWaveFoundPawnOrImportantActor");

	ABP_PlayerCharacter_BPBase_C_ScanWaveFoundPawnOrImportantActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToggleForceDancingPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDancing_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::ToggleForceDancingPawn(bool SetDancing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToggleForceDancingPawn");

	ABP_PlayerCharacter_BPBase_C_ToggleForceDancingPawn_Params params;
	params.SetDancing_ = SetDancing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PullTryToStartForceDancing_CalledLoopPerTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::PullTryToStartForceDancing_CalledLoopPerTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PullTryToStartForceDancing_CalledLoopPerTimer");

	ABP_PlayerCharacter_BPBase_C_PullTryToStartForceDancing_CalledLoopPerTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopForceDancing
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StopForceDancing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopForceDancing");

	ABP_PlayerCharacter_BPBase_C_StopForceDancing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolsteredStartDance_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::WeaponHolsteredStartDance_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolsteredStartDance_Event");

	ABP_PlayerCharacter_BPBase_C_WeaponHolsteredStartDance_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetForceDancingAndStartRepNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForcedDancing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_SetForceDancingAndStartRepNotify(bool ForcedDancing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetForceDancingAndStartRepNotify");

	ABP_PlayerCharacter_BPBase_C_Server_SetForceDancingAndStartRepNotify_Params params;
	params.ForcedDancing = ForcedDancing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartForceDance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_StartForceDance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartForceDance");

	ABP_PlayerCharacter_BPBase_C_Server_StartForceDance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartForceDance
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartForceDance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartForceDance");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartForceDance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TakeAnyDamageBP
// (HasOutParms, BlueprintEvent)
// Parameters:
// float                          NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::TakeAnyDamageBP(float NewHealth, float DamageTaken, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TakeAnyDamageBP");

	ABP_PlayerCharacter_BPBase_C_TakeAnyDamageBP_Params params;
	params.NewHealth = NewHealth;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoOnHealthZeroCallIsReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::DoOnHealthZeroCallIsReplicated(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoOnHealthZeroCallIsReplicated");

	ABP_PlayerCharacter_BPBase_C_DoOnHealthZeroCallIsReplicated_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_PlayerZeroHealth
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Damage_Causer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Multicast_PlayerZeroHealth(class AActor* Damage_Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_PlayerZeroHealth");

	ABP_PlayerCharacter_BPBase_C_Multicast_PlayerZeroHealth_Params params;
	params.Damage_Causer = Damage_Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartDamagePostEffect
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartDamagePostEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartDamagePostEffect");

	ABP_PlayerCharacter_BPBase_C_StartDamagePostEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartDamagePostEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartDamagePostEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartDamagePostEffect");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartDamagePostEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_DoOnDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Damage_Causer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Multicast_DoOnDeath(class AActor* Damage_Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_DoOnDeath");

	ABP_PlayerCharacter_BPBase_C_Multicast_DoOnDeath_Params params;
	params.Damage_Causer = Damage_Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ShowReviveWidget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_ShowReviveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ShowReviveWidget");

	ABP_PlayerCharacter_BPBase_C_Multicast_ShowReviveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_HideReviveWidget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_HideReviveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_HideReviveWidget");

	ABP_PlayerCharacter_BPBase_C_Multicast_HideReviveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PauseBleedOutTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_PauseBleedOutTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PauseBleedOutTime");

	ABP_PlayerCharacter_BPBase_C_Server_PauseBleedOutTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ResumeBleedOutTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_ResumeBleedOutTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ResumeBleedOutTime");

	ABP_PlayerCharacter_BPBase_C_Server_ResumeBleedOutTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PlayerDied
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_PlayerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PlayerDied");

	ABP_PlayerCharacter_BPBase_C_Server_PlayerDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_RevivedAnotherPlayerFinished
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_RevivedAnotherPlayerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_RevivedAnotherPlayerFinished");

	ABP_PlayerCharacter_BPBase_C_Server_RevivedAnotherPlayerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_RevivedAnotherPlayerFinished
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_RevivedAnotherPlayerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_RevivedAnotherPlayerFinished");

	ABP_PlayerCharacter_BPBase_C_Multicast_RevivedAnotherPlayerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.BleetOutOneMoreSecond
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::BleetOutOneMoreSecond()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.BleetOutOneMoreSecond");

	ABP_PlayerCharacter_BPBase_C_BleetOutOneMoreSecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetBleedOutTimeInWidget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualBleedout                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Multicast_SetBleedOutTimeInWidget(float ActualBleedout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetBleedOutTimeInWidget");

	ABP_PlayerCharacter_BPBase_C_Multicast_SetBleedOutTimeInWidget_Params params;
	params.ActualBleedout = ActualBleedout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetGateOpen_PlayerZeroHealth
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ResetGateOpen_PlayerZeroHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetGateOpen_PlayerZeroHealth");

	ABP_PlayerCharacter_BPBase_C_ResetGateOpen_PlayerZeroHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartReviveOtherPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_BPBase_C* PlayerRefToRevive              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_StartReviveOtherPlayer(class ABP_PlayerCharacter_BPBase_C* PlayerRefToRevive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartReviveOtherPlayer");

	ABP_PlayerCharacter_BPBase_C_Server_StartReviveOtherPlayer_Params params;
	params.PlayerRefToRevive = PlayerRefToRevive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.EnteredReviveTrigger
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::EnteredReviveTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.EnteredReviveTrigger");

	ABP_PlayerCharacter_BPBase_C_EnteredReviveTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.LeavesReviveTrigger
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::LeavesReviveTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.LeavesReviveTrigger");

	ABP_PlayerCharacter_BPBase_C_LeavesReviveTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoReviveOtherPlayerOnlyCalledOnServer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::DoReviveOtherPlayerOnlyCalledOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoReviveOtherPlayerOnlyCalledOnServer");

	ABP_PlayerCharacter_BPBase_C_DoReviveOtherPlayerOnlyCalledOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_EndReviveOtherPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EndedWithPositiveRevivedResult_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_EndReviveOtherPlayer(bool EndedWithPositiveRevivedResult_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_EndReviveOtherPlayer");

	ABP_PlayerCharacter_BPBase_C_Server_EndReviveOtherPlayer_Params params;
	params.EndedWithPositiveRevivedResult_ = EndedWithPositiveRevivedResult_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetReviveProgressbar_OwningClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NeededReviveTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ActualPassedReviveTime         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReviveOngoing_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetReviveProgressbar_OwningClient(float NeededReviveTime, float ActualPassedReviveTime, bool ReviveOngoing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetReviveProgressbar_OwningClient");

	ABP_PlayerCharacter_BPBase_C_SetReviveProgressbar_OwningClient_Params params;
	params.NeededReviveTime = NeededReviveTime;
	params.ActualPassedReviveTime = ActualPassedReviveTime;
	params.ReviveOngoing_ = ReviveOngoing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ThisPlayerIsRevivedNow
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_ThisPlayerIsRevivedNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ThisPlayerIsRevivedNow");

	ABP_PlayerCharacter_BPBase_C_Multicast_ThisPlayerIsRevivedNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ThisPlayerIsRevivedNow
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_ThisPlayerIsRevivedNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ThisPlayerIsRevivedNow");

	ABP_PlayerCharacter_BPBase_C_Server_ThisPlayerIsRevivedNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRevivingMontage
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartRevivingMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRevivingMontage");

	ABP_PlayerCharacter_BPBase_C_StartRevivingMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartReviveVisualsOnClients
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartReviveVisualsOnClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartReviveVisualsOnClients");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartReviveVisualsOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_InterruptReviveVisualsOnClients
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_InterruptReviveVisualsOnClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_InterruptReviveVisualsOnClients");

	ABP_PlayerCharacter_BPBase_C_Multicast_InterruptReviveVisualsOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_TriggerTakeAnyDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Investigator                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_TriggerTakeAnyDamage(float Damage, class AActor* Investigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_TriggerTakeAnyDamage");

	ABP_PlayerCharacter_BPBase_C_Server_TriggerTakeAnyDamage_Params params;
	params.Damage = Damage;
	params.Investigator = Investigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.HealSomeHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::HealSomeHealth(float AmountHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.HealSomeHealth");

	ABP_PlayerCharacter_BPBase_C_HealSomeHealth_Params params;
	params.AmountHealth = AmountHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_HealthSomeHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          healthValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_HealthSomeHealth(float healthValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_HealthSomeHealth");

	ABP_PlayerCharacter_BPBase_C_Server_HealthSomeHealth_Params params;
	params.healthValue = healthValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActionFinished_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ActionFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActionFinished_Event");

	ABP_PlayerCharacter_BPBase_C_ActionFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerBackFromDeadToUnconBleedOut_OnSrv
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetPlayerBackFromDeadToUnconBleedOut_OnSrv()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerBackFromDeadToUnconBleedOut_OnSrv");

	ABP_PlayerCharacter_BPBase_C_SetPlayerBackFromDeadToUnconBleedOut_OnSrv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetPlayerBackFromDeadToUnconBleedOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_SetPlayerBackFromDeadToUnconBleedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetPlayerBackFromDeadToUnconBleedOut");

	ABP_PlayerCharacter_BPBase_C_Multicast_SetPlayerBackFromDeadToUnconBleedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRepCPP_CurrentHealthBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRepCPP_CurrentHealthBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRepCPP_CurrentHealthBP");

	ABP_PlayerCharacter_BPBase_C_OnRepCPP_CurrentHealthBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCurrentHealthToHud
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetCurrentHealthToHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCurrentHealthToHud");

	ABP_PlayerCharacter_BPBase_C_SetCurrentHealthToHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetMaxHealthInterf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMaxHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetMaxHealthInterf(float NewMaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetMaxHealthInterf");

	ABP_PlayerCharacter_BPBase_C_SetMaxHealthInterf_Params params;
	params.NewMaxHealth = NewMaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetMaxHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          healthValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_SetMaxHealth(float healthValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetMaxHealth");

	ABP_PlayerCharacter_BPBase_C_Server_SetMaxHealth_Params params;
	params.healthValue = healthValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRepCPP_MaxHealthBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnRepCPP_MaxHealthBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRepCPP_MaxHealthBP");

	ABP_PlayerCharacter_BPBase_C_OnRepCPP_MaxHealthBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveAnyDamage");

	ABP_PlayerCharacter_BPBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnChargeHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargeAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OnChargeHit(float ChargeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnChargeHit");

	ABP_PlayerCharacter_BPBase_C_OnChargeHit_Params params;
	params.ChargeAmount = ChargeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ChargeEnergy
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ChargeEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ChargeEnergy");

	ABP_PlayerCharacter_BPBase_C_ChargeEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnElExpCreation
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnElExpCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnElExpCreation");

	ABP_PlayerCharacter_BPBase_C_OnElExpCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoHolsteringSwitchForWeaponReplicated
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::DoHolsteringSwitchForWeaponReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoHolsteringSwitchForWeaponReplicated");

	ABP_PlayerCharacter_BPBase_C_DoHolsteringSwitchForWeaponReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetUnarmedHolsterWeaponIfWeapEquipped_Replicated
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetUnarmedHolsterWeaponIfWeapEquipped_Replicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetUnarmedHolsterWeaponIfWeapEquipped_Replicated");

	ABP_PlayerCharacter_BPBase_C_SetUnarmedHolsterWeaponIfWeapEquipped_Replicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InterruptReload
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::InterruptReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InterruptReload");

	ABP_PlayerCharacter_BPBase_C_InterruptReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartUnHolsterWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartUnHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartUnHolsterWeapon");

	ABP_PlayerCharacter_BPBase_C_StartUnHolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartHolsterWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartHolsterWeapon");

	ABP_PlayerCharacter_BPBase_C_StartHolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckAimingButtonPressed
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CheckAimingButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckAimingButtonPressed");

	ABP_PlayerCharacter_BPBase_C_CheckAimingButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetAimingState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EStateOfAiming  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_SetAimingState(RegainEarth_FS_EStateOfAiming NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetAimingState");

	ABP_PlayerCharacter_BPBase_C_Server_SetAimingState_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Release AimingState
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Release_AimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Release AimingState");

	ABP_PlayerCharacter_BPBase_C_Release_AimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_Reload
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_Reload");

	ABP_PlayerCharacter_BPBase_C_Multicast_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_Reload
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_Reload");

	ABP_PlayerCharacter_BPBase_C_Server_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartHolsteringAnimation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWeaponInHandNextTargetState   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_StartHolsteringAnimation(bool bWeaponInHandNextTargetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartHolsteringAnimation");

	ABP_PlayerCharacter_BPBase_C_Server_StartHolsteringAnimation_Params params;
	params.bWeaponInHandNextTargetState = bWeaponInHandNextTargetState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartUnHolsterAnimation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWeaponInHandNextTargetState   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_StartUnHolsterAnimation(bool bWeaponInHandNextTargetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartUnHolsterAnimation");

	ABP_PlayerCharacter_BPBase_C_Server_StartUnHolsterAnimation_Params params;
	params.bWeaponInHandNextTargetState = bWeaponInHandNextTargetState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartUnHolsterAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartUnHolsterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartUnHolsterAnimation");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartUnHolsterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartHolsteringAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartHolsteringAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartHolsteringAnimation");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartHolsteringAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsSingleShot
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ShootCharEffectsSingleShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsSingleShot");

	ABP_PlayerCharacter_BPBase_C_ShootCharEffectsSingleShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoHolsterWeaponWhenFreeStateReplicated
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::DoHolsterWeaponWhenFreeStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoHolsterWeaponWhenFreeStateReplicated");

	ABP_PlayerCharacter_BPBase_C_DoHolsterWeaponWhenFreeStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartWepSwitchChangeCurrentWeaponAndHolster
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartWepSwitchChangeCurrentWeaponAndHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartWepSwitchChangeCurrentWeaponAndHolster");

	ABP_PlayerCharacter_BPBase_C_StartWepSwitchChangeCurrentWeaponAndHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartWepSwitchUnHolsterWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartWepSwitchUnHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartWepSwitchUnHolsterWeapon");

	ABP_PlayerCharacter_BPBase_C_StartWepSwitchUnHolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetAutofirePawn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutofireState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Multicast_SetAutofirePawn(bool AutofireState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetAutofirePawn");

	ABP_PlayerCharacter_BPBase_C_Multicast_SetAutofirePawn_Params params;
	params.AutofireState = AutofireState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetAutofirePawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutofireState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_SetAutofirePawn(bool AutofireState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetAutofirePawn");

	ABP_PlayerCharacter_BPBase_C_Server_SetAutofirePawn_Params params;
	params.AutofireState = AutofireState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsAutofireStop
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ShootCharEffectsAutofireStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsAutofireStop");

	ABP_PlayerCharacter_BPBase_C_ShootCharEffectsAutofireStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsAutofireStart
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ShootCharEffectsAutofireStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsAutofireStart");

	ABP_PlayerCharacter_BPBase_C_ShootCharEffectsAutofireStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRemoteAutofirePawn
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartRemoteAutofirePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRemoteAutofirePawn");

	ABP_PlayerCharacter_BPBase_C_StartRemoteAutofirePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetCurrentWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            CurrentWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_SetCurrentWeapon(class UBP_Weapon_C* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetCurrentWeapon");

	ABP_PlayerCharacter_BPBase_C_Server_SetCurrentWeapon_Params params;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectSidearm
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartSelectSidearm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectSidearm");

	ABP_PlayerCharacter_BPBase_C_StartSelectSidearm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectMainGun1
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartSelectMainGun1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectMainGun1");

	ABP_PlayerCharacter_BPBase_C_StartSelectMainGun1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopAllPossibleRunningActions
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StopAllPossibleRunningActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopAllPossibleRunningActions");

	ABP_PlayerCharacter_BPBase_C_StopAllPossibleRunningActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickupWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickupWeapon");

	ABP_PlayerCharacter_BPBase_C_PickupWeapon_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OwningClient_PickupWeapon
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::OwningClient_PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OwningClient_PickupWeapon");

	ABP_PlayerCharacter_BPBase_C_OwningClient_PickupWeapon_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate");

	ABP_PlayerCharacter_BPBase_C_SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolstered_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::WeaponHolstered_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolstered_Event");

	ABP_PlayerCharacter_BPBase_C_WeaponHolstered_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetPawnAnimations
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_SetPawnAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetPawnAnimations");

	ABP_PlayerCharacter_BPBase_C_Server_SetPawnAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetPawnAnimations
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_SetPawnAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetPawnAnimations");

	ABP_PlayerCharacter_BPBase_C_Multicast_SetPawnAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponMeshAndPropertiesHaveChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            BPWeaponComponentRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponMeshAndPropertiesHaveChanged");

	ABP_PlayerCharacter_BPBase_C_WeaponMeshAndPropertiesHaveChanged_Params params;
	params.BPWeaponComponentRef = BPWeaponComponentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectMainGun2
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartSelectMainGun2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectMainGun2");

	ABP_PlayerCharacter_BPBase_C_StartSelectMainGun2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.AttachCurrentWeaponToHandsAndStartAimingState
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::AttachCurrentWeaponToHandsAndStartAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.AttachCurrentWeaponToHandsAndStartAimingState");

	ABP_PlayerCharacter_BPBase_C_AttachCurrentWeaponToHandsAndStartAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.AttachCurrentWeaponStopAimingState
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::AttachCurrentWeaponStopAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.AttachCurrentWeaponStopAimingState");

	ABP_PlayerCharacter_BPBase_C_AttachCurrentWeaponStopAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SimpleSpawnWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_SimpleSpawnWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SimpleSpawnWeapon");

	ABP_PlayerCharacter_BPBase_C_Server_SimpleSpawnWeapon_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DropCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::DropCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DropCurrentWeapon");

	ABP_PlayerCharacter_BPBase_C_DropCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckerAutofireOn
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CheckerAutofireOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckerAutofireOn");

	ABP_PlayerCharacter_BPBase_C_CheckerAutofireOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartFireWeaponActionWithOUTTimerStart
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartFireWeaponActionWithOUTTimerStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartFireWeaponActionWithOUTTimerStart");

	ABP_PlayerCharacter_BPBase_C_StartFireWeaponActionWithOUTTimerStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopForceFireWeaponActionButNotPressedFireTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StopForceFireWeaponActionButNotPressedFireTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopForceFireWeaponActionButNotPressedFireTimer");

	ABP_PlayerCharacter_BPBase_C_StopForceFireWeaponActionButNotPressedFireTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponUNHolstered_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::WeaponUNHolstered_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponUNHolstered_Event_1");

	ABP_PlayerCharacter_BPBase_C_WeaponUNHolstered_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomStartReload
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CustomStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomStartReload");

	ABP_PlayerCharacter_BPBase_C_CustomStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomCycleDownWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CustomCycleDownWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomCycleDownWeapon");

	ABP_PlayerCharacter_BPBase_C_CustomCycleDownWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomShootPressed
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CustomShootPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomShootPressed");

	ABP_PlayerCharacter_BPBase_C_CustomShootPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomShootReleased
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CustomShootReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomShootReleased");

	ABP_PlayerCharacter_BPBase_C_CustomShootReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewLightColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetNewColor(const struct FLinearColor& NewLightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewColor");

	ABP_PlayerCharacter_BPBase_C_SetNewColor_Params params;
	params.NewLightColor = NewLightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetNewIntensity(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewIntensity");

	ABP_PlayerCharacter_BPBase_C_SetNewIntensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetLaserDotLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetLaserDotLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetLaserDotLocation");

	ABP_PlayerCharacter_BPBase_C_SetLaserDotLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectCloseCombat
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartSelectCloseCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectCloseCombat");

	ABP_PlayerCharacter_BPBase_C_StartSelectCloseCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToggleCamShoulderView
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ToggleCamShoulderView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToggleCamShoulderView");

	ABP_PlayerCharacter_BPBase_C_ToggleCamShoulderView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckHoldDownKeyPressed
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CheckHoldDownKeyPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckHoldDownKeyPressed");

	ABP_PlayerCharacter_BPBase_C_CheckHoldDownKeyPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReleaseHolsterWeaponKey
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ReleaseHolsterWeaponKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReleaseHolsterWeaponKey");

	ABP_PlayerCharacter_BPBase_C_ReleaseHolsterWeaponKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetCamRoRightShoulderView
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ResetCamRoRightShoulderView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetCamRoRightShoulderView");

	ABP_PlayerCharacter_BPBase_C_ResetCamRoRightShoulderView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SwitchActiveGrenadeSlot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_SwitchActiveGrenadeSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SwitchActiveGrenadeSlot");

	ABP_PlayerCharacter_BPBase_C_Server_SwitchActiveGrenadeSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveBeginPlay");

	ABP_PlayerCharacter_BPBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveTick");

	ABP_PlayerCharacter_BPBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PlayFootstep
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SurfaceID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_PlayFootstep(int SurfaceID, float VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PlayFootstep");

	ABP_PlayerCharacter_BPBase_C_Server_PlayFootstep_Params params;
	params.SurfaceID = SurfaceID;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_PlayFootstep
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SurfaceID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Multicast_PlayFootstep(int SurfaceID, float VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_PlayFootstep");

	ABP_PlayerCharacter_BPBase_C_Multicast_PlayFootstep_Params params;
	params.SurfaceID = SurfaceID;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayFootstepOfSimulatedProxies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SurfaceID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewParam2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::PlayFootstepOfSimulatedProxies(int SurfaceID, float NewParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayFootstepOfSimulatedProxies");

	ABP_PlayerCharacter_BPBase_C_PlayFootstepOfSimulatedProxies_Params params;
	params.SurfaceID = SurfaceID;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	ABP_PlayerCharacter_BPBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	ABP_PlayerCharacter_BPBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetSpeedAndPawnRotationControl
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetSpeedAndPawnRotationControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetSpeedAndPawnRotationControl");

	ABP_PlayerCharacter_BPBase_C_SetSpeedAndPawnRotationControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ControlYaw
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_ControlYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ControlYaw");

	ABP_PlayerCharacter_BPBase_C_Server_ControlYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ControlRotationPitch
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimPitchAlreadyClamped         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Multicast_ControlRotationPitch(float AimPitchAlreadyClamped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ControlRotationPitch");

	ABP_PlayerCharacter_BPBase_C_Multicast_ControlRotationPitch_Params params;
	params.AimPitchAlreadyClamped = AimPitchAlreadyClamped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetRunState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewRunState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_SetRunState(bool NewRunState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetRunState");

	ABP_PlayerCharacter_BPBase_C_Server_SetRunState_Params params;
	params.NewRunState = NewRunState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetPlayerActionStateAimingStateAndHolsterResetDead
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ResetPlayerActionStateAimingStateAndHolsterResetDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetPlayerActionStateAimingStateAndHolsterResetDead");

	ABP_PlayerCharacter_BPBase_C_ResetPlayerActionStateAimingStateAndHolsterResetDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PickItUp
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 PickUpActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnWhoPicksItUp               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_PickItUp(class UObject* PickUpActor, class APawn* PawnWhoPicksItUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PickItUp");

	ABP_PlayerCharacter_BPBase_C_Server_PickItUp_Params params;
	params.PickUpActor = PickUpActor;
	params.PawnWhoPicksItUp = PawnWhoPicksItUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayFootStepLocal
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::PlayFootStepLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayFootStepLocal");

	ABP_PlayerCharacter_BPBase_C_PlayFootStepLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RunningbuttonPressedChecker
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::RunningbuttonPressedChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RunningbuttonPressedChecker");

	ABP_PlayerCharacter_BPBase_C_RunningbuttonPressedChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRunningIfPossibleWithoutStartingRunButtonTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartRunningIfPossibleWithoutStartingRunButtonTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRunningIfPossibleWithoutStartingRunButtonTimer");

	ABP_PlayerCharacter_BPBase_C_StartRunningIfPossibleWithoutStartingRunButtonTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CancelPickupAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CancelPickupAndReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CancelPickupAndReplicate");

	ABP_PlayerCharacter_BPBase_C_CancelPickupAndReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CancelPickup
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::CancelPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CancelPickup");

	ABP_PlayerCharacter_BPBase_C_CancelPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomInputAxisTurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Val                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::CustomInputAxisTurn(float Axis_Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomInputAxisTurn");

	ABP_PlayerCharacter_BPBase_C_CustomInputAxisTurn_Params params;
	params.Axis_Val = Axis_Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomInputAxisLookUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Val                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::CustomInputAxisLookUp(float Axis_Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomInputAxisLookUp");

	ABP_PlayerCharacter_BPBase_C_CustomInputAxisLookUp_Params params;
	params.Axis_Val = Axis_Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomMoveForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Val                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::CustomMoveForward(float Axis_Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomMoveForward");

	ABP_PlayerCharacter_BPBase_C_CustomMoveForward_Params params;
	params.Axis_Val = Axis_Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomAxisMoveForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::CustomAxisMoveForward(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomAxisMoveForward");

	ABP_PlayerCharacter_BPBase_C_CustomAxisMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomAxisMoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::CustomAxisMoveRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomAxisMoveRight");

	ABP_PlayerCharacter_BPBase_C_CustomAxisMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ControlRotationReplciationPitchPerTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ControlRotationReplciationPitchPerTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ControlRotationReplciationPitchPerTimer");

	ABP_PlayerCharacter_BPBase_C_ControlRotationReplciationPitchPerTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerSpectatorCamBackToDefaultCam
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetPlayerSpectatorCamBackToDefaultCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerSpectatorCamBackToDefaultCam");

	ABP_PlayerCharacter_BPBase_C_SetPlayerSpectatorCamBackToDefaultCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerCamToSpectatorOnlyForNonLocalPlControlled
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::SetPlayerCamToSpectatorOnlyForNonLocalPlControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerCamToSpectatorOnlyForNonLocalPlControlled");

	ABP_PlayerCharacter_BPBase_C_SetPlayerCamToSpectatorOnlyForNonLocalPlControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_PickupGrenade
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PickupGrenadeType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            EquipedGrenadeAmount           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Client_PickupGrenade(class UClass* PickupGrenadeType, int EquipedGrenadeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_PickupGrenade");

	ABP_PlayerCharacter_BPBase_C_Client_PickupGrenade_Params params;
	params.PickupGrenadeType = PickupGrenadeType;
	params.EquipedGrenadeAmount = EquipedGrenadeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdateGrenadeAmmoInHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpdateActiveGrenade            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::UpdateGrenadeAmmoInHUD(bool UpdateActiveGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdateGrenadeAmmoInHUD");

	ABP_PlayerCharacter_BPBase_C_UpdateGrenadeAmmoInHUD_Params params;
	params.UpdateActiveGrenade = UpdateActiveGrenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ThrowGrenade
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ThrowGrenade");

	ABP_PlayerCharacter_BPBase_C_ThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartGrenadeThrowAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartGrenadeThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartGrenadeThrowAnimation");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartGrenadeThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartGrenadeThrowAnimation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_StartGrenadeThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartGrenadeThrowAnimation");

	ABP_PlayerCharacter_BPBase_C_Server_StartGrenadeThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartGrenadeThrowAnimation
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StartGrenadeThrowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartGrenadeThrowAnimation");

	ABP_PlayerCharacter_BPBase_C_StartGrenadeThrowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopGrenadeThrow
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::StopGrenadeThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopGrenadeThrow");

	ABP_PlayerCharacter_BPBase_C_StopGrenadeThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ThrowGrenadeKeyIsPressed
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ThrowGrenadeKeyIsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ThrowGrenadeKeyIsPressed");

	ABP_PlayerCharacter_BPBase_C_ThrowGrenadeKeyIsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetModifiedSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSpeedModifier           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetModifiedSpeed(float CurrentSpeedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetModifiedSpeed");

	ABP_PlayerCharacter_BPBase_C_SetModifiedSpeed_Params params;
	params.CurrentSpeedModifier = CurrentSpeedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TriggerPawnMovementSpeedModifyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSpeedEffectSettingsStruct SpeedEffectSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TriggerPawnMovementSpeedModifyEffect");

	ABP_PlayerCharacter_BPBase_C_TriggerPawnMovementSpeedModifyEffect_Params params;
	params.SpeedEffectSettings = SpeedEffectSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickupGrenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PickupGrenadeType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::PickupGrenade(class UClass* PickupGrenadeType, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickupGrenade");

	ABP_PlayerCharacter_BPBase_C_PickupGrenade_Params params;
	params.PickupGrenadeType = PickupGrenadeType;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_UpdateGrenade
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GrenadeWeapon_C*     GrenadeToUpdate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GrenadeAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GrenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UpdateActiveGrenadeOnHud       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Client_UpdateGrenade(class UBP_GrenadeWeapon_C* GrenadeToUpdate, int GrenadeAmount, class UClass* GrenadeType, bool UpdateActiveGrenadeOnHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_UpdateGrenade");

	ABP_PlayerCharacter_BPBase_C_Client_UpdateGrenade_Params params;
	params.GrenadeToUpdate = GrenadeToUpdate;
	params.GrenadeAmount = GrenadeAmount;
	params.GrenadeType = GrenadeType;
	params.UpdateActiveGrenadeOnHud = UpdateActiveGrenadeOnHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetNewPlayerModelSkin
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModelSkinSelectedIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::Server_SetNewPlayerModelSkin(int ModelSkinSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetNewPlayerModelSkin");

	ABP_PlayerCharacter_BPBase_C_Server_SetNewPlayerModelSkin_Params params;
	params.ModelSkinSelectedIndex = ModelSkinSelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewPlayerModelSkin_Replicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ModelSkinSelectedIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SetNewPlayerModelSkin_Replicated(int ModelSkinSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewPlayerModelSkin_Replicated");

	ABP_PlayerCharacter_BPBase_C_SetNewPlayerModelSkin_Replicated_Params params;
	params.ModelSkinSelectedIndex = ModelSkinSelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActivateSelectedCustomFovFieldOfView
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ActivateSelectedCustomFovFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActivateSelectedCustomFovFieldOfView");

	ABP_PlayerCharacter_BPBase_C_ActivateSelectedCustomFovFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_InformAboutPossesed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Client_InformAboutPossesed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_InformAboutPossesed");

	ABP_PlayerCharacter_BPBase_C_Client_InformAboutPossesed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceivePossessed");

	ABP_PlayerCharacter_BPBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TriggerReadAndSetNewMouseSettingsSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::TriggerReadAndSetNewMouseSettingsSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TriggerReadAndSetNewMouseSettingsSensitivity");

	ABP_PlayerCharacter_BPBase_C_TriggerReadAndSetNewMouseSettingsSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetFinishedBeginPlayFinePawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedBeginPlayFine          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::Server_SetFinishedBeginPlayFinePawn(bool FinishedBeginPlayFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetFinishedBeginPlayFinePawn");

	ABP_PlayerCharacter_BPBase_C_Server_SetFinishedBeginPlayFinePawn_Params params;
	params.FinishedBeginPlayFine = FinishedBeginPlayFine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DisplayNameWidgetAndChangeSize
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::DisplayNameWidgetAndChangeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DisplayNameWidgetAndChangeSize");

	ABP_PlayerCharacter_BPBase_C_DisplayNameWidgetAndChangeSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetLocationVelocityAndRotationEventMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 MeshVelocity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetLocationVelocityAndRotationEventMulticast(const struct FVector& Location, const struct FVector& MeshVelocity, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetLocationVelocityAndRotationEventMulticast");

	ABP_PlayerCharacter_BPBase_C_SetLocationVelocityAndRotationEventMulticast_Params params;
	params.Location = Location;
	params.MeshVelocity = MeshVelocity;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartRagdoll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Multicast_StartRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartRagdoll");

	ABP_PlayerCharacter_BPBase_C_Multicast_StartRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartRagdoll
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::Server_StartRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartRagdoll");

	ABP_PlayerCharacter_BPBase_C_Server_StartRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetRagdollOn_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerCharacter_BPBase_C::SetRagdoll(bool SetRagdollOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRagdoll");

	ABP_PlayerCharacter_BPBase_C_SetRagdoll_Params params;
	params.SetRagdollOn_ = SetRagdollOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ExecuteUbergraph_BP_PlayerCharacter_BPBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::ExecuteUbergraph_BP_PlayerCharacter_BPBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ExecuteUbergraph_BP_PlayerCharacter_BPBase");

	ABP_PlayerCharacter_BPBase_C_ExecuteUbergraph_BP_PlayerCharacter_BPBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayerCharacterFinishedBeginPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::PlayerCharacterFinishedBeginPlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayerCharacterFinishedBeginPlay__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_PlayerCharacterFinishedBeginPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SpeedModifyEffectEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_BPBase_C* PlayerPawnRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerCharacter_BPBase_C::SpeedModifyEffectEnded__DelegateSignature(class ABP_PlayerCharacter_BPBase_C* PlayerPawnRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SpeedModifyEffectEnded__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_SpeedModifyEffectEnded__DelegateSignature_Params params;
	params.PlayerPawnRef = PlayerPawnRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnPlayerUnconscious__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnPlayerUnconscious__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnPlayerUnconscious__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_OnPlayerUnconscious__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::ActionFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActionFinished__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_ActionFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnPlayerDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::OnPlayerDeath__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnPlayerDeath__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_OnPlayerDeath__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponUNHolstered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::WeaponUNHolstered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponUNHolstered__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_WeaponUNHolstered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolstered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PlayerCharacter_BPBase_C::WeaponHolstered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolstered__DelegateSignature");

	ABP_PlayerCharacter_BPBase_C_WeaponHolstered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
