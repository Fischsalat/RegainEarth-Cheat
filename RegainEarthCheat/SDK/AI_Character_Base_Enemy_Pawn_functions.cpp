// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"
#include "pch.h"

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

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsProjectile                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::IsProjectile(bool* IsProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsProjectile");

	AAI_Character_Base_Enemy_Pawn_C_IsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsProjectile != nullptr)
		*IsProjectile = params.IsProjectile;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSelfName");

	AAI_Character_Base_Enemy_Pawn_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsOnPlayersSideAndAttackable");

	AAI_Character_Base_Enemy_Pawn_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsEnemiesSideAndAttackable");

	AAI_Character_Base_Enemy_Pawn_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetMeshAndBoneToAimFor");

	AAI_Character_Base_Enemy_Pawn_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetMeshForEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetMeshForEffects(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetMeshForEffects");

	AAI_Character_Base_Enemy_Pawn_C_GetMeshForEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetStatusEffectComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasStatusEffectComponent       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_StatusEffectsBaseComponent_C* StatusEffectComponentRef       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetStatusEffectComponent(bool* HasStatusEffectComponent, class UBP_StatusEffectsBaseComponent_C** StatusEffectComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetStatusEffectComponent");

	AAI_Character_Base_Enemy_Pawn_C_GetStatusEffectComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasStatusEffectComponent != nullptr)
		*HasStatusEffectComponent = params.HasStatusEffectComponent;
	if (StatusEffectComponentRef != nullptr)
		*StatusEffectComponentRef = params.StatusEffectComponentRef;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIgnoreAllSetFocusOnTargetFromBehaivorTree
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IgnoreAllSetFocusOnTargetFromBehaivorTree (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetIgnoreAllSetFocusOnTargetFromBehaivorTree(bool* IgnoreAllSetFocusOnTargetFromBehaivorTree)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIgnoreAllSetFocusOnTargetFromBehaivorTree");

	AAI_Character_Base_Enemy_Pawn_C_GetIgnoreAllSetFocusOnTargetFromBehaivorTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreAllSetFocusOnTargetFromBehaivorTree != nullptr)
		*IgnoreAllSetFocusOnTargetFromBehaivorTree = params.IgnoreAllSetFocusOnTargetFromBehaivorTree;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerGotDamagedByHiddenTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerGotDamagedByHiddenTargetSpecialEvent");

	AAI_Character_Base_Enemy_Pawn_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine_ != nullptr)
		*DoneFine_ = params.DoneFine_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerTryDoingSpecialAttackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::TriggerTryDoingSpecialAttackEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerTryDoingSpecialAttackEvent");

	AAI_Character_Base_Enemy_Pawn_C_TriggerTryDoingSpecialAttackEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent");

	AAI_Character_Base_Enemy_Pawn_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerSeeTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::TriggerSeeTargetSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerSeeTargetSpecialEvent");

	AAI_Character_Base_Enemy_Pawn_C_TriggerSeeTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSeeingSenseValidTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SenseValidTarget_              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetSeeingSenseValidTarget(bool* SenseValidTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSeeingSenseValidTarget");

	AAI_Character_Base_Enemy_Pawn_C_GetSeeingSenseValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SenseValidTarget_ != nullptr)
		*SenseValidTarget_ = params.SenseValidTarget_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLastKnownTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastKnownTargetLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetLastKnownTargetLocation(struct FVector* LastKnownTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLastKnownTargetLocation");

	AAI_Character_Base_Enemy_Pawn_C_GetLastKnownTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastKnownTargetLocation != nullptr)
		*LastKnownTargetLocation = params.LastKnownTargetLocation;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetTargetFoeOnBB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetFoe                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetTargetFoeOnBB(class AActor** TargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetTargetFoeOnBB");

	AAI_Character_Base_Enemy_Pawn_C_GetTargetFoeOnBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetFoe != nullptr)
		*TargetFoe = params.TargetFoe;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetAIseePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SeePlayer_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  TargetFoe                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetAIseePlayer(bool* SeePlayer_, class AActor** TargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetAIseePlayer");

	AAI_Character_Base_Enemy_Pawn_C_GetAIseePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeePlayer_ != nullptr)
		*SeePlayer_ = params.SeePlayer_;
	if (TargetFoe != nullptr)
		*TargetFoe = params.TargetFoe;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLaserDotRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LaserDotMarker_Component_C* LaserDotRef                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetLaserDotRef(class UBP_LaserDotMarker_Component_C** LaserDotRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLaserDotRef");

	AAI_Character_Base_Enemy_Pawn_C_GetLaserDotRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LaserDotRef != nullptr)
		*LaserDotRef = params.LaserDotRef;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLaserDotLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetLaserDotLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLaserDotLocation");

	AAI_Character_Base_Enemy_Pawn_C_GetLaserDotLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCurrentWeaponSkelMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CurrentWeaponSkelMesh          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCurrentWeaponSkelMesh");

	AAI_Character_Base_Enemy_Pawn_C_GetCurrentWeaponSkelMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWeaponSkelMesh != nullptr)
		*CurrentWeaponSkelMesh = params.CurrentWeaponSkelMesh;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetPlayerShootingCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CharCanShoot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetPlayerShootingCondition(bool* CharCanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetPlayerShootingCondition");

	AAI_Character_Base_Enemy_Pawn_C_GetPlayerShootingCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharCanShoot != nullptr)
		*CharCanShoot = params.CharCanShoot;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCanNotAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanNotAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetCanNotAttack(bool* CanNotAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCanNotAttack");

	AAI_Character_Base_Enemy_Pawn_C_GetCanNotAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanNotAttack != nullptr)
		*CanNotAttack = params.CanNotAttack;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetName");

	AAI_Character_Base_Enemy_Pawn_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCurrentHealthPercentageAsFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealthPercentage_       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCurrentHealthPercentageAsFactor");

	AAI_Character_Base_Enemy_Pawn_C_GetCurrentHealthPercentageAsFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentHealthPercentage_ != nullptr)
		*CurrentHealthPercentage_ = params.CurrentHealthPercentage_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsAtMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAtMaxHealth_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::IsAtMaxHealth(bool* IsAtMaxHealth_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsAtMaxHealth");

	AAI_Character_Base_Enemy_Pawn_C_IsAtMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAtMaxHealth_ != nullptr)
		*IsAtMaxHealth_ = params.IsAtMaxHealth_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsBleedingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBleedingOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetIsBleedingOut(bool* IsBleedingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsBleedingOut");

	AAI_Character_Base_Enemy_Pawn_C_GetIsBleedingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBleedingOut != nullptr)
		*IsBleedingOut = params.IsBleedingOut;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsUnconsciousOrDeadOrSimilar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnconscious_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsUnconsciousOrDeadOrSimilar");

	AAI_Character_Base_Enemy_Pawn_C_GetIsUnconsciousOrDeadOrSimilar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnconscious_ != nullptr)
		*IsUnconscious_ = params.IsUnconscious_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsPhysicsHandleActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Physics_Handle_Active_of_Character_ (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsPhysicsHandleActive");

	AAI_Character_Base_Enemy_Pawn_C_GetIsPhysicsHandleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Physics_Handle_Active_of_Character_ != nullptr)
		*Physics_Handle_Active_of_Character_ = params.Physics_Handle_Active_of_Character_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetGrabbedComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Grabbed_Component_of_Character (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetGrabbedComponent");

	AAI_Character_Base_Enemy_Pawn_C_GetGrabbedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbed_Component_of_Character != nullptr)
		*Grabbed_Component_of_Character = params.Grabbed_Component_of_Character;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetIsDead(bool* IsDead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsDead");

	AAI_Character_Base_Enemy_Pawn_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead_ != nullptr)
		*IsDead_ = params.IsDead_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteracting_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetIsInteracting(bool* IsInteracting_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsInteracting");

	AAI_Character_Base_Enemy_Pawn_C_GetIsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInteracting_ != nullptr)
		*IsInteracting_ = params.IsInteracting_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnRep_AiPercAndBtAreDisabled
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::OnRep_AiPercAndBtAreDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnRep_AiPercAndBtAreDisabled");

	AAI_Character_Base_Enemy_Pawn_C_OnRep_AiPercAndBtAreDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnRep_SetToNotHitableByBulletStrikeAndProjectile?
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::OnRep_SetToNotHitableByBulletStrikeAndProjectile_()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnRep_SetToNotHitableByBulletStrikeAndProjectile?");

	AAI_Character_Base_Enemy_Pawn_C_OnRep_SetToNotHitableByBulletStrikeAndProjectile__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetBlackboardFuncIn Progresss
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    BlackBoardRef                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetBlackboardFuncIn_Progresss(class UBlackboardComponent** BlackBoardRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetBlackboardFuncIn Progresss");

	AAI_Character_Base_Enemy_Pawn_C_GetBlackboardFuncIn_Progresss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlackBoardRef != nullptr)
		*BlackBoardRef = params.BlackBoardRef;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSenseValidTargetPure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SenseValidTarget_              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GetSenseValidTargetPure(bool* SenseValidTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSenseValidTargetPure");

	AAI_Character_Base_Enemy_Pawn_C_GetSenseValidTargetPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SenseValidTarget_ != nullptr)
		*SenseValidTarget_ = params.SenseValidTarget_;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLastKnownTargetLocationPure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LastKnownTargetLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetLastKnownTargetLocationPure(struct FVector* LastKnownTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLastKnownTargetLocationPure");

	AAI_Character_Base_Enemy_Pawn_C_GetLastKnownTargetLocationPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastKnownTargetLocation != nullptr)
		*LastKnownTargetLocation = params.LastKnownTargetLocation;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Get Target Pawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetFoe                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FoundValidTargetFoe            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::Get_Target_Pawn(class AActor** TargetFoe, bool* FoundValidTargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Get Target Pawn");

	AAI_Character_Base_Enemy_Pawn_C_Get_Target_Pawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetFoe != nullptr)
		*TargetFoe = params.TargetFoe;
	if (FoundValidTargetFoe != nullptr)
		*FoundValidTargetFoe = params.FoundValidTargetFoe;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CheckForNearestPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::CheckForNearestPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CheckForNearestPlayer");

	AAI_Character_Base_Enemy_Pawn_C_CheckForNearestPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Get Array Of Weapon IDs Fit to Value Min Max Settings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>> GeneratedArrayOfPossibleWeaponDrops1 (Parm, OutParm)
void AAI_Character_Base_Enemy_Pawn_C::Get_Array_Of_Weapon_IDs_Fit_to_Value_Min_Max_Settings(TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>* GeneratedArrayOfPossibleWeaponDrops1)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Get Array Of Weapon IDs Fit to Value Min Max Settings");

	AAI_Character_Base_Enemy_Pawn_C_Get_Array_Of_Weapon_IDs_Fit_to_Value_Min_Max_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratedArrayOfPossibleWeaponDrops1 != nullptr)
		*GeneratedArrayOfPossibleWeaponDrops1 = params.GeneratedArrayOfPossibleWeaponDrops1;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Hit Bones Correction Impulse and Phys Blend
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Impulse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::Hit_Bones_Correction_Impulse_and_Phys_Blend(bool* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Hit Bones Correction Impulse and Phys Blend");

	AAI_Character_Base_Enemy_Pawn_C_Hit_Bones_Correction_Impulse_and_Phys_Blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Impulse != nullptr)
		*Impulse = params.Impulse;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetControllerDirectionYawNegate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetControllerDirectionYawNegate(float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetControllerDirectionYawNegate");

	AAI_Character_Base_Enemy_Pawn_C_GetControllerDirectionYawNegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.UserConstructionScript");

	AAI_Character_Base_Enemy_Pawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__FinishedFunc
// (BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::PhatBlend2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__FinishedFunc");

	AAI_Character_Base_Enemy_Pawn_C_PhatBlend2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__UpdateFunc
// (BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::PhatBlend2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__UpdateFunc");

	AAI_Character_Base_Enemy_Pawn_C_PhatBlend2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__StartImpulse__EventFunc
// (BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::PhatBlend2__StartImpulse__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__StartImpulse__EventFunc");

	AAI_Character_Base_Enemy_Pawn_C_PhatBlend2__StartImpulse__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveEffect__FinishedFunc
// (BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DissolveEffect__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveEffect__FinishedFunc");

	AAI_Character_Base_Enemy_Pawn_C_DissolveEffect__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveEffect__UpdateFunc
// (BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DissolveEffect__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveEffect__UpdateFunc");

	AAI_Character_Base_Enemy_Pawn_C_DissolveEffect__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttackDamageToTarget
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::AttackDamageToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttackDamageToTarget");

	AAI_Character_Base_Enemy_Pawn_C_AttackDamageToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.WalkToNextRandomPointInRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RangeBasedOnSpawnPoint_        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::WalkToNextRandomPointInRange(bool RangeBasedOnSpawnPoint_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.WalkToNextRandomPointInRange");

	AAI_Character_Base_Enemy_Pawn_C_WalkToNextRandomPointInRange_Params params;
	params.RangeBasedOnSpawnPoint_ = RangeBasedOnSpawnPoint_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StopChasingTarget
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StopChasingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StopChasingTarget");

	AAI_Character_Base_Enemy_Pawn_C_StopChasingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartGoToSpawnLocation
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StartGoToSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartGoToSpawnLocation");

	AAI_Character_Base_Enemy_Pawn_C_StartGoToSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartLoopSearchAtLastPlayerLocation
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StartLoopSearchAtLastPlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartLoopSearchAtLastPlayerLocation");

	AAI_Character_Base_Enemy_Pawn_C_StartLoopSearchAtLastPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime");

	AAI_Character_Base_Enemy_Pawn_C_ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           WeaponMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Weapon_C*            WeaponComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SetWeapon(class USkeletalMesh* WeaponMesh, class UBP_Weapon_C* WeaponComponent, bool Primary)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetWeapon");

	AAI_Character_Base_Enemy_Pawn_C_SetWeapon_Params params;
	params.WeaponMesh = WeaponMesh;
	params.WeaponComponent = WeaponComponent;
	params.Primary = Primary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsSingleShot
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ShootCharEffectsSingleShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsSingleShot");

	AAI_Character_Base_Enemy_Pawn_C_ShootCharEffectsSingleShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AAI_Character_Base_Enemy_Pawn_C::GetHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetHit");

	AAI_Character_Base_Enemy_Pawn_C_GetHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetBulletDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BulletDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::GetBulletDirection(const struct FVector& BulletDirection, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetBulletDirection");

	AAI_Character_Base_Enemy_Pawn_C_GetBulletDirection_Params params;
	params.BulletDirection = BulletDirection;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsAutofireStart
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ShootCharEffectsAutofireStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsAutofireStart");

	AAI_Character_Base_Enemy_Pawn_C_ShootCharEffectsAutofireStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsAutofireStop
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ShootCharEffectsAutofireStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsAutofireStop");

	AAI_Character_Base_Enemy_Pawn_C_ShootCharEffectsAutofireStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PickupWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PickupWeapon");

	AAI_Character_Base_Enemy_Pawn_C_PickupWeapon_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.WeaponMeshAndPropertiesHaveChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            BPWeaponComponentRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.WeaponMeshAndPropertiesHaveChanged");

	AAI_Character_Base_Enemy_Pawn_C_WeaponMeshAndPropertiesHaveChanged_Params params;
	params.BPWeaponComponentRef = BPWeaponComponentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttachCurrentWeaponStopAimingState
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::AttachCurrentWeaponStopAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttachCurrentWeaponStopAimingState");

	AAI_Character_Base_Enemy_Pawn_C_AttachCurrentWeaponStopAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttachCurrentWeaponToHandsAndStartAimingState
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::AttachCurrentWeaponToHandsAndStartAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttachCurrentWeaponToHandsAndStartAimingState");

	AAI_Character_Base_Enemy_Pawn_C_AttachCurrentWeaponToHandsAndStartAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DropCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DropCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DropCurrentWeapon");

	AAI_Character_Base_Enemy_Pawn_C_DropCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetLaserDotLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetLaserDotLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetLaserDotLocation");

	AAI_Character_Base_Enemy_Pawn_C_SetLaserDotLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetNewIntensity(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewIntensity");

	AAI_Character_Base_Enemy_Pawn_C_SetNewIntensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewLightColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetNewColor(const struct FLinearColor& NewLightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewColor");

	AAI_Character_Base_Enemy_Pawn_C_SetNewColor_Params params;
	params.NewLightColor = NewLightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ThrowGrenade
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ThrowGrenade");

	AAI_Character_Base_Enemy_Pawn_C_ThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PickupGrenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PickupGrenadeType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::PickupGrenade(class UClass* PickupGrenadeType, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PickupGrenade");

	AAI_Character_Base_Enemy_Pawn_C_PickupGrenade_Params params;
	params.PickupGrenadeType = PickupGrenadeType;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CancelPickupAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::CancelPickupAndReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CancelPickupAndReplicate");

	AAI_Character_Base_Enemy_Pawn_C_CancelPickupAndReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToggleForceDancingPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDancing_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::ToggleForceDancingPawn(bool SetDancing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToggleForceDancingPawn");

	AAI_Character_Base_Enemy_Pawn_C_ToggleForceDancingPawn_Params params;
	params.SetDancing_ = SetDancing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetMaxHealthInterf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMaxHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetMaxHealthInterf(float NewMaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetMaxHealthInterf");

	AAI_Character_Base_Enemy_Pawn_C_SetMaxHealthInterf_Params params;
	params.NewMaxHealth = NewMaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AAI_Character_Base_Enemy_Pawn_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Did NOT See Player for some Time
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::Did_NOT_See_Player_for_some_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Did NOT See Player for some Time");

	AAI_Character_Base_Enemy_Pawn_C_Did_NOT_See_Player_for_some_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearActualTargetPawnAndSetAISensedTargetOff
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ClearActualTargetPawnAndSetAISensedTargetOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearActualTargetPawnAndSetAISensedTargetOff");

	AAI_Character_Base_Enemy_Pawn_C_ClearActualTargetPawnAndSetAISensedTargetOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearTargetLastKnownLocation
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ClearTargetLastKnownLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearTargetLastKnownLocation");

	AAI_Character_Base_Enemy_Pawn_C_ClearTargetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartTimerToCheckForNearestPlayer
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StartTimerToCheckForNearestPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartTimerToCheckForNearestPlayer");

	AAI_Character_Base_Enemy_Pawn_C_StartTimerToCheckForNearestPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  FoundNewNearTarget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetNewTarget(class AActor* FoundNewNearTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewTarget");

	AAI_Character_Base_Enemy_Pawn_C_SetNewTarget_Params params;
	params.FoundNewNearTarget = FoundNewNearTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.UpdateLastSeenTargetLocationToActualTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::UpdateLastSeenTargetLocationToActualTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.UpdateLastSeenTargetLocationToActualTargetLocation");

	AAI_Character_Base_Enemy_Pawn_C_UpdateLastSeenTargetLocationToActualTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn");

	AAI_Character_Base_Enemy_Pawn_C_ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerDamagePerceptionStimulus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceActorOrDamageCausedActor (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             AI_Stimulus                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InvestigatorOnlyUsedWhenSourceActorNotValidForReaction (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::TriggerDamagePerceptionStimulus(class AActor* SourceActorOrDamageCausedActor, const struct FAIStimulus& AI_Stimulus, float Damage, class AController* InvestigatorOnlyUsedWhenSourceActorNotValidForReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerDamagePerceptionStimulus");

	AAI_Character_Base_Enemy_Pawn_C_TriggerDamagePerceptionStimulus_Params params;
	params.SourceActorOrDamageCausedActor = SourceActorOrDamageCausedActor;
	params.AI_Stimulus = AI_Stimulus;
	params.Damage = Damage;
	params.InvestigatorOnlyUsedWhenSourceActorNotValidForReaction = InvestigatorOnlyUsedWhenSourceActorNotValidForReaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetTargetFoeOnBBandReplicate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetFoe                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetTargetFoeOnBBandReplicate(class AActor* TargetFoe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetTargetFoeOnBBandReplicate");

	AAI_Character_Base_Enemy_Pawn_C_SetTargetFoeOnBBandReplicate_Params params;
	params.TargetFoe = TargetFoe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetLastKnownTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastKnownTargetLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetLastKnownTargetLocation(const struct FVector& LastKnownTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetLastKnownTargetLocation");

	AAI_Character_Base_Enemy_Pawn_C_SetLastKnownTargetLocation_Params params;
	params.LastKnownTargetLocation = LastKnownTargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetSeeingSenseValidTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SenseValidTarget_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SetSeeingSenseValidTarget(bool SenseValidTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetSeeingSenseValidTarget");

	AAI_Character_Base_Enemy_Pawn_C_SetSeeingSenseValidTarget_Params params;
	params.SenseValidTarget_ = SenseValidTarget_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearTargetPawnButDoNotAISeeTargetSense
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ClearTargetPawnButDoNotAISeeTargetSense()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearTargetPawnButDoNotAISeeTargetSense");

	AAI_Character_Base_Enemy_Pawn_C_ClearTargetPawnButDoNotAISeeTargetSense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToggleAiTemporarilyLostSightOfTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AiTemporarilyLostSightOfTarget_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::ToggleAiTemporarilyLostSightOfTarget(bool AiTemporarilyLostSightOfTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToggleAiTemporarilyLostSightOfTarget");

	AAI_Character_Base_Enemy_Pawn_C_ToggleAiTemporarilyLostSightOfTarget_Params params;
	params.AiTemporarilyLostSightOfTarget_ = AiTemporarilyLostSightOfTarget_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AIPerceptionForgetAndResetLastStimulis
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::AIPerceptionForgetAndResetLastStimulis()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AIPerceptionForgetAndResetLastStimulis");

	AAI_Character_Base_Enemy_Pawn_C_AIPerceptionForgetAndResetLastStimulis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnCurrentTargetPlayerUnconscious_Event
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::OnCurrentTargetPlayerUnconscious_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnCurrentTargetPlayerUnconscious_Event");

	AAI_Character_Base_Enemy_Pawn_C_OnCurrentTargetPlayerUnconscious_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearKnownTargetsAndClearResetAIPerceptionStimulus
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ClearKnownTargetsAndClearResetAIPerceptionStimulus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearKnownTargetsAndClearResetAIPerceptionStimulus");

	AAI_Character_Base_Enemy_Pawn_C_ClearKnownTargetsAndClearResetAIPerceptionStimulus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OpenGateStartAiSense
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::OpenGateStartAiSense()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OpenGateStartAiSense");

	AAI_Character_Base_Enemy_Pawn_C_OpenGateStartAiSense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CloseGateStopAiSense
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::CloseGateStopAiSense()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CloseGateStopAiSense");

	AAI_Character_Base_Enemy_Pawn_C_CloseGateStopAiSense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnCurrentTargetTurretDestroyded
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::OnCurrentTargetTurretDestroyded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnCurrentTargetTurretDestroyded");

	AAI_Character_Base_Enemy_Pawn_C_OnCurrentTargetTurretDestroyded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Attack
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Attack");

	AAI_Character_Base_Enemy_Pawn_C_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceivePointDamage
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
void AAI_Character_Base_Enemy_Pawn_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceivePointDamage");

	AAI_Character_Base_Enemy_Pawn_C_ReceivePointDamage_Params params;
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


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ManuallyTriggerDoOnDeath
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ManuallyTriggerDoOnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ManuallyTriggerDoOnDeath");

	AAI_Character_Base_Enemy_Pawn_C_ManuallyTriggerDoOnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartAttack
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartAttack");

	AAI_Character_Base_Enemy_Pawn_C_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_DoOnDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BulletDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HeadShot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Hit_Bone_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DamageCauseLocation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HitWasRadialDamage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_DamageType_BaseREWave_C* DamageTypeRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_DoOnDeath(const struct FVector& BulletDirection, bool HeadShot, const struct FName& Hit_Bone_Name, const struct FVector& DamageCauseLocation, float Damage, bool HitWasRadialDamage, class UBP_DamageType_BaseREWave_C* DamageTypeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_DoOnDeath");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_DoOnDeath_Params params;
	params.BulletDirection = BulletDirection;
	params.HeadShot = HeadShot;
	params.Hit_Bone_Name = Hit_Bone_Name;
	params.DamageCauseLocation = DamageCauseLocation;
	params.Damage = Damage;
	params.HitWasRadialDamage = HitWasRadialDamage;
	params.DamageTypeRef = DamageTypeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_VisualImpactOnHit
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BulletDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HeadShot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Hit_Bone_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DamageType_BaseREWave_C* DamageTypeRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_VisualImpactOnHit(const struct FVector& BulletDirection, bool HeadShot, const struct FName& Hit_Bone_Name, float Damage, class UBP_DamageType_BaseREWave_C* DamageTypeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_VisualImpactOnHit");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_VisualImpactOnHit_Params params;
	params.BulletDirection = BulletDirection;
	params.HeadShot = HeadShot;
	params.Hit_Bone_Name = Hit_Bone_Name;
	params.Damage = Damage;
	params.DamageTypeRef = DamageTypeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Despawn
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::Despawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Despawn");

	AAI_Character_Base_Enemy_Pawn_C_Despawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StrikeAttackDamageToTargetWithSocketname
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SlotNameOfSlotWhichHits        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::StrikeAttackDamageToTargetWithSocketname(const struct FName& SlotNameOfSlotWhichHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StrikeAttackDamageToTargetWithSocketname");

	AAI_Character_Base_Enemy_Pawn_C_StrikeAttackDamageToTargetWithSocketname_Params params;
	params.SlotNameOfSlotWhichHits = SlotNameOfSlotWhichHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_PlayInteractionAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_PlayInteractionAnimation(class UAnimSequenceBase* Animation, const struct FName& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_PlayInteractionAnimation");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_PlayInteractionAnimation_Params params;
	params.Animation = Animation;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveAnyDamage");

	AAI_Character_Base_Enemy_Pawn_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Server_ApplyDamageManually
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Investigator                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   HitBone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DamageType_BaseREWave_C* DamageTypeOfManuallyDamage     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Server_ApplyDamageManually(const struct FVector& ShotFromDirection, class AActor* DamageCauser, class AController* Investigator, float Damage, const struct FName& HitBone, class UBP_DamageType_BaseREWave_C* DamageTypeOfManuallyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Server_ApplyDamageManually");

	AAI_Character_Base_Enemy_Pawn_C_Server_ApplyDamageManually_Params params;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageCauser = DamageCauser;
	params.Investigator = Investigator;
	params.Damage = Damage;
	params.HitBone = HitBone;
	params.DamageTypeOfManuallyDamage = DamageTypeOfManuallyDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ApplyDamageManually
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Investigator                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ApplyDamageManually(const struct FVector& ShotFromDirection, class AActor* DamageCauser, class AController* Investigator, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ApplyDamageManually");

	AAI_Character_Base_Enemy_Pawn_C_ApplyDamageManually_Params params;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageCauser = DamageCauser;
	params.Investigator = Investigator;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DropOnDeathCalledOnAllClients_OnlyCallOnServer
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DropOnDeathCalledOnAllClients_OnlyCallOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DropOnDeathCalledOnAllClients_OnlyCallOnServer");

	AAI_Character_Base_Enemy_Pawn_C_DropOnDeathCalledOnAllClients_OnlyCallOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_AiSuccessfulHitPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_BPBase_C* PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_AiSuccessfulHitPlayer(class ABP_PlayerCharacter_BPBase_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_AiSuccessfulHitPlayer");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_AiSuccessfulHitPlayer_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_HitPlayerVisualAndSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   HitBone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_HitPlayerVisualAndSound(class AActor* HitActor, const struct FName& HitBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_HitPlayerVisualAndSound");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_HitPlayerVisualAndSound_Params params;
	params.HitActor = HitActor;
	params.HitBone = HitBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveRadialDamage");

	AAI_Character_Base_Enemy_Pawn_C_ReceiveRadialDamage_Params params;
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


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveSelf
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DissolveSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveSelf");

	AAI_Character_Base_Enemy_Pawn_C_DissolveSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ForceFullDissolve
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ForceFullDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ForceFullDissolve");

	AAI_Character_Base_Enemy_Pawn_C_ForceFullDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.HitByDissolveWeaponHit
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::HitByDissolveWeaponHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.HitByDissolveWeaponHit");

	AAI_Character_Base_Enemy_Pawn_C_HitByDissolveWeaponHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PlayFootStepLocal
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::PlayFootStepLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PlayFootStepLocal");

	AAI_Character_Base_Enemy_Pawn_C_PlayFootStepLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveBeginPlay");

	AAI_Character_Base_Enemy_Pawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveTick");

	AAI_Character_Base_Enemy_Pawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetShortlyDidPlayerSeeAnimFalse
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::SetShortlyDidPlayerSeeAnimFalse()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetShortlyDidPlayerSeeAnimFalse");

	AAI_Character_Base_Enemy_Pawn_C_SetShortlyDidPlayerSeeAnimFalse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StarTimerForShortlyDidFirstSeePlayerAnim
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StarTimerForShortlyDidFirstSeePlayerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StarTimerForShortlyDidFirstSeePlayerAnim");

	AAI_Character_Base_Enemy_Pawn_C_StarTimerForShortlyDidFirstSeePlayerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_StartAIFirstSeePlayerAnim
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_StartAIFirstSeePlayerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_StartAIFirstSeePlayerAnim");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_StartAIFirstSeePlayerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartAIFirstSeePlayerAnim
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::StartAIFirstSeePlayerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartAIFirstSeePlayerAnim");

	AAI_Character_Base_Enemy_Pawn_C_StartAIFirstSeePlayerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceivePossessed");

	AAI_Character_Base_Enemy_Pawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveUnpossessed");

	AAI_Character_Base_Enemy_Pawn_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyOnDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::MyOnDestroyed_Event(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyOnDestroyed_Event");

	AAI_Character_Base_Enemy_Pawn_C_MyOnDestroyed_Event_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveDestroyed");

	AAI_Character_Base_Enemy_Pawn_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyUnpossesd_Event_Event
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::MyUnpossesd_Event_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyUnpossesd_Event_Event");

	AAI_Character_Base_Enemy_Pawn_C_MyUnpossesd_Event_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.InformGameModeEnemyGetsKilledOnlyServerCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ControllerWhoKills             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::InformGameModeEnemyGetsKilledOnlyServerCalled(class AController* ControllerWhoKills)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.InformGameModeEnemyGetsKilledOnlyServerCalled");

	AAI_Character_Base_Enemy_Pawn_C_InformGameModeEnemyGetsKilledOnlyServerCalled_Params params;
	params.ControllerWhoKills = ControllerWhoKills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DebugOutput
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DebugOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DebugOutput");

	AAI_Character_Base_Enemy_Pawn_C_DebugOutput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AiOnDeath_Event
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::AiOnDeath_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AiOnDeath_Event");

	AAI_Character_Base_Enemy_Pawn_C_AiOnDeath_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToogleNotHitableForBulletStrikeAndProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetNotHitable_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToogleNotHitableForBulletStrikeAndProjectile");

	AAI_Character_Base_Enemy_Pawn_C_ToogleNotHitableForBulletStrikeAndProjectile_Params params;
	params.SetNotHitable_ = SetNotHitable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetToCanNotMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotMove_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SetToCanNotMove(bool SetToCanNotMove_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetToCanNotMove");

	AAI_Character_Base_Enemy_Pawn_C_SetToCanNotMove_Params params;
	params.SetToCanNotMove_ = SetToCanNotMove_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetToCanNotAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotAttack_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SetToCanNotAttack(bool SetToCanNotAttack_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetToCanNotAttack");

	AAI_Character_Base_Enemy_Pawn_C_SetToCanNotAttack_Params params;
	params.SetToCanNotAttack_ = SetToCanNotAttack_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PrintStringToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::PrintStringToLog(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PrintStringToLog");

	AAI_Character_Base_Enemy_Pawn_C_PrintStringToLog_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetRenderCustomDepthStencil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetOn_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NewValueIfSetOn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetRenderCustomDepthStencil");

	AAI_Character_Base_Enemy_Pawn_C_SetRenderCustomDepthStencil_Params params;
	params.SetOn_ = SetOn_;
	params.NewValueIfSetOn = NewValueIfSetOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.RunMoveToTargetPointDebug
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::RunMoveToTargetPointDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.RunMoveToTargetPointDebug");

	AAI_Character_Base_Enemy_Pawn_C_RunMoveToTargetPointDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DoAJump
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::DoAJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DoAJump");

	AAI_Character_Base_Enemy_Pawn_C_DoAJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.LerpToTempAimPitchToActiveAimPitch
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::LerpToTempAimPitchToActiveAimPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.LerpToTempAimPitchToActiveAimPitch");

	AAI_Character_Base_Enemy_Pawn_C_LerpToTempAimPitchToActiveAimPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_Pitch
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimingPitchClamped             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Multicast_Pitch(float AimingPitchClamped)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_Pitch");

	AAI_Character_Base_Enemy_Pawn_C_Multicast_Pitch_Params params;
	params.AimingPitchClamped = AimingPitchClamped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CalculateAimingPicthAndDoMulticast
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::CalculateAimingPicthAndDoMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CalculateAimingPicthAndDoMulticast");

	AAI_Character_Base_Enemy_Pawn_C_CalculateAimingPicthAndDoMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.HealSomeHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::HealSomeHealth(float AmountHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.HealSomeHealth");

	AAI_Character_Base_Enemy_Pawn_C_HealSomeHealth_Params params;
	params.AmountHealth = AmountHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Server_HealthSomeHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          healthValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::Server_HealthSomeHealth(float healthValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Server_HealthSomeHealth");

	AAI_Character_Base_Enemy_Pawn_C_Server_HealthSomeHealth_Params params;
	params.healthValue = healthValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetModifiedSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSpeedModifier           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SetModifiedSpeed(float CurrentSpeedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetModifiedSpeed");

	AAI_Character_Base_Enemy_Pawn_C_SetModifiedSpeed_Params params;
	params.CurrentSpeedModifier = CurrentSpeedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.BindWeaponSlowDownStatusEffect
// (BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::BindWeaponSlowDownStatusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.BindWeaponSlowDownStatusEffect");

	AAI_Character_Base_Enemy_Pawn_C_BindWeaponSlowDownStatusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SlowDownEffectEnded_Event2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SlowDownEffectEnded_Event2(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SlowDownEffectEnded_Event2");

	AAI_Character_Base_Enemy_Pawn_C_SlowDownEffectEnded_Event2_Params params;
	params.EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut = EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SpeedModifyEffectStarted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpeedMultiplierOfStartedEffect (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::SpeedModifyEffectStarted_Event_1(float SpeedMultiplierOfStartedEffect, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SpeedModifyEffectStarted_Event_1");

	AAI_Character_Base_Enemy_Pawn_C_SpeedModifyEffectStarted_Event_1_Params params;
	params.SpeedMultiplierOfStartedEffect = SpeedMultiplierOfStartedEffect;
	params.EffectType = EffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerPawnMovementSpeedModifyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSpeedEffectSettingsStruct SpeedEffectSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerPawnMovementSpeedModifyEffect");

	AAI_Character_Base_Enemy_Pawn_C_TriggerPawnMovementSpeedModifyEffect_Params params;
	params.SpeedEffectSettings = SpeedEffectSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ExecuteUbergraph_AI_Character_Base_Enemy_Pawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Character_Base_Enemy_Pawn_C::ExecuteUbergraph_AI_Character_Base_Enemy_Pawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ExecuteUbergraph_AI_Character_Base_Enemy_Pawn");

	AAI_Character_Base_Enemy_Pawn_C_ExecuteUbergraph_AI_Character_Base_Enemy_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedFine_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature(bool FinishedFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature");

	AAI_Character_Base_Enemy_Pawn_C_GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature_Params params;
	params.FinishedFine_ = FinishedFine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedFine_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature(bool FinishedFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature");

	AAI_Character_Base_Enemy_Pawn_C_SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature_Params params;
	params.FinishedFine_ = FinishedFine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SeeTargetSpecialEventFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedFine_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Character_Base_Enemy_Pawn_C::SeeTargetSpecialEventFinished__DelegateSignature(bool FinishedFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SeeTargetSpecialEventFinished__DelegateSignature");

	AAI_Character_Base_Enemy_Pawn_C_SeeTargetSpecialEventFinished__DelegateSignature_Params params;
	params.FinishedFine_ = FinishedFine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AiOnDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::AiOnDeath__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AiOnDeath__DelegateSignature");

	AAI_Character_Base_Enemy_Pawn_C_AiOnDeath__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyUnpossesd_Event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAI_Character_Base_Enemy_Pawn_C::MyUnpossesd_Event__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyUnpossesd_Event__DelegateSignature");

	AAI_Character_Base_Enemy_Pawn_C_MyUnpossesd_Event__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
