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

// Function BP_Weapon.BP_Weapon_C.CheckWeaponReloadPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Possible_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::CheckWeaponReloadPossible(bool* Possible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.CheckWeaponReloadPossible");

	UBP_Weapon_C_CheckWeaponReloadPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Possible_ != nullptr)
		*Possible_ = params.Possible_;

}


// Function BP_Weapon.BP_Weapon_C.CheckIfArraySlotIndexHasAnOverlappingNonBlockingValidSurfaceF
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      TargetHitsArray                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int                            ArraySlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FoundValidOverlapSurface       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitOnlyValidWhenFoundValidOverlapSurface (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                 LocationOnlyValidWhenFoundValidOverlapSurface (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::CheckIfArraySlotIndexHasAnOverlappingNonBlockingValidSurfaceF(TArray<struct FHitResult> TargetHitsArray, int ArraySlotIndex, bool* FoundValidOverlapSurface, struct FHitResult* HitOnlyValidWhenFoundValidOverlapSurface, struct FVector* LocationOnlyValidWhenFoundValidOverlapSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.CheckIfArraySlotIndexHasAnOverlappingNonBlockingValidSurfaceF");

	UBP_Weapon_C_CheckIfArraySlotIndexHasAnOverlappingNonBlockingValidSurfaceF_Params params;
	params.TargetHitsArray = TargetHitsArray;
	params.ArraySlotIndex = ArraySlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundValidOverlapSurface != nullptr)
		*FoundValidOverlapSurface = params.FoundValidOverlapSurface;
	if (HitOnlyValidWhenFoundValidOverlapSurface != nullptr)
		*HitOnlyValidWhenFoundValidOverlapSurface = params.HitOnlyValidWhenFoundValidOverlapSurface;
	if (LocationOnlyValidWhenFoundValidOverlapSurface != nullptr)
		*LocationOnlyValidWhenFoundValidOverlapSurface = params.LocationOnlyValidWhenFoundValidOverlapSurface;

}


// Function BP_Weapon.BP_Weapon_C.OnRep_CharacterWeaponMesh
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::OnRep_CharacterWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.OnRep_CharacterWeaponMesh");

	UBP_Weapon_C_OnRep_CharacterWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.OnRep_WeaponID
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::OnRep_WeaponID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.OnRep_WeaponID");

	UBP_Weapon_C_OnRep_WeaponID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ReloadConditionCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NeedAndReadyForReload_         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::ReloadConditionCheck(bool* NeedAndReadyForReload_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ReloadConditionCheck");

	UBP_Weapon_C_ReloadConditionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NeedAndReadyForReload_ != nullptr)
		*NeedAndReadyForReload_ = params.NeedAndReadyForReload_;

}


// Function BP_Weapon.BP_Weapon_C.ReloadCalc
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::ReloadCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ReloadCalc");

	UBP_Weapon_C_ReloadCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ShootCondition
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::ShootCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ShootCondition");

	UBP_Weapon_C_ShootCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.BulletDirectionFromAIMuzzle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::BulletDirectionFromAIMuzzle(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.BulletDirectionFromAIMuzzle");

	UBP_Weapon_C_BulletDirectionFromAIMuzzle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;

}


// Function BP_Weapon.BP_Weapon_C.BulletDirectionFromPlayerCam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::BulletDirectionFromPlayerCam(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.BulletDirectionFromPlayerCam");

	UBP_Weapon_C_BulletDirectionFromPlayerCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;

}


// Function BP_Weapon.BP_Weapon_C.Reload_Interrupt
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Reload_Interrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Reload_Interrupt");

	UBP_Weapon_C_Reload_Interrupt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Shoot_Presssed
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Shoot_Presssed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Shoot_Presssed");

	UBP_Weapon_C_Shoot_Presssed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Shoot_Released
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Shoot_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Shoot_Released");

	UBP_Weapon_C_Shoot_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Change_ShootingMode
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Change_ShootingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Change_ShootingMode");

	UBP_Weapon_C_Change_ShootingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.GrenadeThrow_Pressed
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::GrenadeThrow_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.GrenadeThrow_Pressed");

	UBP_Weapon_C_GrenadeThrow_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.StartExpandToFullSize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::StartExpandToFullSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.StartExpandToFullSize");

	UBP_Weapon_C_StartExpandToFullSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.StartShrinkToSmallSize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::StartShrinkToSmallSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.StartShrinkToSmallSize");

	UBP_Weapon_C_StartShrinkToSmallSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Spreading
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Spreading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Spreading");

	UBP_Weapon_C_Spreading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.DoShoot
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::DoShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.DoShoot");

	UBP_Weapon_C_DoShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SpreadingDecrease
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::SpreadingDecrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SpreadingDecrease");

	UBP_Weapon_C_SpreadingDecrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.AutoFire
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::AutoFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.AutoFire");

	UBP_Weapon_C_AutoFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ShootPressed
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::ShootPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ShootPressed");

	UBP_Weapon_C_ShootPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ShootReleased
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::ShootReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ShootReleased");

	UBP_Weapon_C_ShootReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.CharacterWeaponSet
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::CharacterWeaponSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.CharacterWeaponSet");

	UBP_Weapon_C_CharacterWeaponSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SingleFire
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::SingleFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SingleFire");

	UBP_Weapon_C_SingleFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ClipDrop
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::ClipDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ClipDrop");

	UBP_Weapon_C_ClipDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SetClipDropVector
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::SetClipDropVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SetClipDropVector");

	UBP_Weapon_C_SetClipDropVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ReceiveBeginPlay");

	UBP_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SyncInventoryAmmoToLocalAmmInPocketVar
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::SyncInventoryAmmoToLocalAmmInPocketVar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SyncInventoryAmmoToLocalAmmInPocketVar");

	UBP_Weapon_C_SyncInventoryAmmoToLocalAmmInPocketVar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Multicast_BullettHit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           LastHitResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::Multicast_BullettHit(const struct FHitResult& Hit_Result, bool LastHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Multicast_BullettHit");

	UBP_Weapon_C_Multicast_BullettHit_Params params;
	params.Hit_Result = Hit_Result;
	params.LastHitResult = LastHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Server_BulletHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           LastHitResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::Server_BulletHit(const struct FHitResult& Hit_Result, bool LastHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Server_BulletHit");

	UBP_Weapon_C_Server_BulletHit_Params params;
	params.Hit_Result = Hit_Result;
	params.LastHitResult = LastHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Reload_Start
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Reload_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Reload_Start");

	UBP_Weapon_C_Reload_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Clip_Drop
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Clip_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Clip_Drop");

	UBP_Weapon_C_Clip_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Multicast_ShootVisuals
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Multicast_ShootVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Multicast_ShootVisuals");

	UBP_Weapon_C_Multicast_ShootVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Server_ShootVisuals
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Server_ShootVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Server_ShootVisuals");

	UBP_Weapon_C_Server_ShootVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Reload_Finished_SetClipFull
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Reload_Finished_SetClipFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Reload_Finished_SetClipFull");

	UBP_Weapon_C_Reload_Finished_SetClipFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Local_BulletHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LastHitResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit_Result                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UBP_Weapon_C::Local_BulletHit(bool LastHitResult, const struct FHitResult& Hit_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Local_BulletHit");

	UBP_Weapon_C_Local_BulletHit_Params params;
	params.LastHitResult = LastHitResult;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SetAllWeapPropsToWeaponIDReplicate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::SetAllWeapPropsToWeaponIDReplicate(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SetAllWeapPropsToWeaponIDReplicate");

	UBP_Weapon_C_SetAllWeapPropsToWeaponIDReplicate_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SetAllWeaponProperties
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::SetAllWeaponProperties(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SetAllWeaponProperties");

	UBP_Weapon_C_SetAllWeaponProperties_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Server_SetWeaponIdAndStartRepNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::Server_SetWeaponIdAndStartRepNotify(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Server_SetWeaponIdAndStartRepNotify");

	UBP_Weapon_C_Server_SetWeaponIdAndStartRepNotify_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Server_StartProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ParticleClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Spawn_Transform_Location       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Spawn_Transform_Rotation       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::Server_StartProjectile(class UClass* ParticleClass, const struct FVector& Spawn_Transform_Location, const struct FRotator& Spawn_Transform_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Server_StartProjectile");

	UBP_Weapon_C_Server_StartProjectile_Params params;
	params.ParticleClass = ParticleClass;
	params.Spawn_Transform_Location = Spawn_Transform_Location;
	params.Spawn_Transform_Rotation = Spawn_Transform_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Multicast_StartProjectileReliable
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Multicast_StartProjectileReliable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Multicast_StartProjectileReliable");

	UBP_Weapon_C_Multicast_StartProjectileReliable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Multicast_StartProjectileNOTReliable
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::Multicast_StartProjectileNOTReliable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Multicast_StartProjectileNOTReliable");

	UBP_Weapon_C_Multicast_StartProjectileNOTReliable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Server_BulletTraceHitNothing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TraceEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::Server_BulletTraceHitNothing(const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Server_BulletTraceHitNothing");

	UBP_Weapon_C_Server_BulletTraceHitNothing_Params params;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.CalledByParentConstructionScript
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::CalledByParentConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.CalledByParentConstructionScript");

	UBP_Weapon_C_CalledByParentConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.BACKSPLATTER
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TraceForwardRot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::BACKSPLATTER(const struct FRotator& TraceForwardRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.BACKSPLATTER");

	UBP_Weapon_C_BACKSPLATTER_Params params;
	params.TraceForwardRot = TraceForwardRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.CallBeginPlaySetupAfterWeaponSettingsLoaded
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::CallBeginPlaySetupAfterWeaponSettingsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.CallBeginPlaySetupAfterWeaponSettingsLoaded");

	UBP_Weapon_C_CallBeginPlaySetupAfterWeaponSettingsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ReceiveTick");

	UBP_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SetToggleThisIsActiveUsedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OwnerHasThisWeaponActiveAssigned (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::SetToggleThisIsActiveUsedWeapon(bool OwnerHasThisWeaponActiveAssigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SetToggleThisIsActiveUsedWeapon");

	UBP_Weapon_C_SetToggleThisIsActiveUsedWeapon_Params params;
	params.OwnerHasThisWeaponActiveAssigned = OwnerHasThisWeaponActiveAssigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ToggleLaserDotPointerOnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LaserDotPointerActivated_      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Weapon_C::ToggleLaserDotPointerOnOff(bool LaserDotPointerActivated_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ToggleLaserDotPointerOnOff");

	UBP_Weapon_C_ToggleLaserDotPointerOnOff_Params params;
	params.LaserDotPointerActivated_ = LaserDotPointerActivated_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.SetLaserPointerLocation
// (BlueprintCallable, BlueprintEvent)
void UBP_Weapon_C::SetLaserPointerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.SetLaserPointerLocation");

	UBP_Weapon_C_SetLaserPointerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Local_BulletTraceHitNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TraceEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::Local_BulletTraceHitNothing(const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Local_BulletTraceHitNothing");

	UBP_Weapon_C_Local_BulletTraceHitNothing_Params params;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.Multicast_BulletTraceHitNothing
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TraceEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::Multicast_BulletTraceHitNothing(const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.Multicast_BulletTraceHitNothing");

	UBP_Weapon_C_Multicast_BulletTraceHitNothing_Params params;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ShootPressedWithCustomPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WeaponShotPitchOffset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::ShootPressedWithCustomPitch(float WeaponShotPitchOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ShootPressedWithCustomPitch");

	UBP_Weapon_C_ShootPressedWithCustomPitch_Params params;
	params.WeaponShotPitchOffset = WeaponShotPitchOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.DoHitImpulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ImpulseFactorOnHit             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::DoHitImpulse(float ImpulseFactorOnHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.DoHitImpulse");

	UBP_Weapon_C_DoHitImpulse_Params params;
	params.ImpulseFactorOnHit = ImpulseFactorOnHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Weapon.BP_Weapon_C.ExecuteUbergraph_BP_Weapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Weapon_C::ExecuteUbergraph_BP_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon.BP_Weapon_C.ExecuteUbergraph_BP_Weapon");

	UBP_Weapon_C_ExecuteUbergraph_BP_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
