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

// Function BP_Weapon.BP_Weapon_C.CheckWeaponReloadPossible
struct UBP_Weapon_C_CheckWeaponReloadPossible_Params
{
	bool                                               Possible_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.CheckIfArraySlotIndexHasAnOverlappingNonBlockingValidSurfaceF
struct UBP_Weapon_C_CheckIfArraySlotIndexHasAnOverlappingNonBlockingValidSurfaceF_Params
{
	TArray<struct FHitResult>                          TargetHitsArray;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int                                                ArraySlotIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundValidOverlapSurface;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitOnlyValidWhenFoundValidOverlapSurface;                  // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     LocationOnlyValidWhenFoundValidOverlapSurface;             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.OnRep_CharacterWeaponMesh
struct UBP_Weapon_C_OnRep_CharacterWeaponMesh_Params
{
};

// Function BP_Weapon.BP_Weapon_C.OnRep_WeaponID
struct UBP_Weapon_C_OnRep_WeaponID_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ReloadConditionCheck
struct UBP_Weapon_C_ReloadConditionCheck_Params
{
	bool                                               NeedAndReadyForReload_;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.ReloadCalc
struct UBP_Weapon_C_ReloadCalc_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ShootCondition
struct UBP_Weapon_C_ShootCondition_Params
{
};

// Function BP_Weapon.BP_Weapon_C.BulletDirectionFromAIMuzzle
struct UBP_Weapon_C_BulletDirectionFromAIMuzzle_Params
{
	struct FVector                                     Start;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.BulletDirectionFromPlayerCam
struct UBP_Weapon_C_BulletDirectionFromPlayerCam_Params
{
	struct FVector                                     Start;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.Reload_Interrupt
struct UBP_Weapon_C_Reload_Interrupt_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Shoot_Presssed
struct UBP_Weapon_C_Shoot_Presssed_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Shoot_Released
struct UBP_Weapon_C_Shoot_Released_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Change_ShootingMode
struct UBP_Weapon_C_Change_ShootingMode_Params
{
};

// Function BP_Weapon.BP_Weapon_C.GrenadeThrow_Pressed
struct UBP_Weapon_C_GrenadeThrow_Pressed_Params
{
};

// Function BP_Weapon.BP_Weapon_C.StartExpandToFullSize
struct UBP_Weapon_C_StartExpandToFullSize_Params
{
};

// Function BP_Weapon.BP_Weapon_C.StartShrinkToSmallSize
struct UBP_Weapon_C_StartShrinkToSmallSize_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Spreading
struct UBP_Weapon_C_Spreading_Params
{
};

// Function BP_Weapon.BP_Weapon_C.DoShoot
struct UBP_Weapon_C_DoShoot_Params
{
};

// Function BP_Weapon.BP_Weapon_C.SpreadingDecrease
struct UBP_Weapon_C_SpreadingDecrease_Params
{
};

// Function BP_Weapon.BP_Weapon_C.AutoFire
struct UBP_Weapon_C_AutoFire_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ShootPressed
struct UBP_Weapon_C_ShootPressed_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ShootReleased
struct UBP_Weapon_C_ShootReleased_Params
{
};

// Function BP_Weapon.BP_Weapon_C.CharacterWeaponSet
struct UBP_Weapon_C_CharacterWeaponSet_Params
{
};

// Function BP_Weapon.BP_Weapon_C.SingleFire
struct UBP_Weapon_C_SingleFire_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ClipDrop
struct UBP_Weapon_C_ClipDrop_Params
{
};

// Function BP_Weapon.BP_Weapon_C.SetClipDropVector
struct UBP_Weapon_C_SetClipDropVector_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ReceiveBeginPlay
struct UBP_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon.BP_Weapon_C.SyncInventoryAmmoToLocalAmmInPocketVar
struct UBP_Weapon_C_SyncInventoryAmmoToLocalAmmInPocketVar_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Multicast_BullettHit
struct UBP_Weapon_C_Multicast_BullettHit_Params
{
	struct FHitResult                                  Hit_Result;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               LastHitResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.Server_BulletHit
struct UBP_Weapon_C_Server_BulletHit_Params
{
	struct FHitResult                                  Hit_Result;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               LastHitResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.Reload_Start
struct UBP_Weapon_C_Reload_Start_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Clip_Drop
struct UBP_Weapon_C_Clip_Drop_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Multicast_ShootVisuals
struct UBP_Weapon_C_Multicast_ShootVisuals_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Server_ShootVisuals
struct UBP_Weapon_C_Server_ShootVisuals_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Reload_Finished_SetClipFull
struct UBP_Weapon_C_Reload_Finished_SetClipFull_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Local_BulletHit
struct UBP_Weapon_C_Local_BulletHit_Params
{
	bool                                               LastHitResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit_Result;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Weapon.BP_Weapon_C.SetAllWeapPropsToWeaponIDReplicate
struct UBP_Weapon_C_SetAllWeapPropsToWeaponIDReplicate_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.SetAllWeaponProperties
struct UBP_Weapon_C_SetAllWeaponProperties_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.Server_SetWeaponIdAndStartRepNotify
struct UBP_Weapon_C_Server_SetWeaponIdAndStartRepNotify_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.Server_StartProjectile
struct UBP_Weapon_C_Server_StartProjectile_Params
{
	class UClass*                                      ParticleClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Spawn_Transform_Location;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Spawn_Transform_Rotation;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.Multicast_StartProjectileReliable
struct UBP_Weapon_C_Multicast_StartProjectileReliable_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Multicast_StartProjectileNOTReliable
struct UBP_Weapon_C_Multicast_StartProjectileNOTReliable_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Server_BulletTraceHitNothing
struct UBP_Weapon_C_Server_BulletTraceHitNothing_Params
{
	struct FVector                                     TraceEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.CalledByParentConstructionScript
struct UBP_Weapon_C_CalledByParentConstructionScript_Params
{
};

// Function BP_Weapon.BP_Weapon_C.BACKSPLATTER
struct UBP_Weapon_C_BACKSPLATTER_Params
{
	struct FRotator                                    TraceForwardRot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.CallBeginPlaySetupAfterWeaponSettingsLoaded
struct UBP_Weapon_C_CallBeginPlaySetupAfterWeaponSettingsLoaded_Params
{
};

// Function BP_Weapon.BP_Weapon_C.ReceiveTick
struct UBP_Weapon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.SetToggleThisIsActiveUsedWeapon
struct UBP_Weapon_C_SetToggleThisIsActiveUsedWeapon_Params
{
	bool                                               OwnerHasThisWeaponActiveAssigned;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.ToggleLaserDotPointerOnOff
struct UBP_Weapon_C_ToggleLaserDotPointerOnOff_Params
{
	bool                                               LaserDotPointerActivated_;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Weapon.BP_Weapon_C.SetLaserPointerLocation
struct UBP_Weapon_C_SetLaserPointerLocation_Params
{
};

// Function BP_Weapon.BP_Weapon_C.Local_BulletTraceHitNothing
struct UBP_Weapon_C_Local_BulletTraceHitNothing_Params
{
	struct FVector                                     TraceEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.Multicast_BulletTraceHitNothing
struct UBP_Weapon_C_Multicast_BulletTraceHitNothing_Params
{
	struct FVector                                     TraceEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.ShootPressedWithCustomPitch
struct UBP_Weapon_C_ShootPressedWithCustomPitch_Params
{
	float                                              WeaponShotPitchOffset;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.DoHitImpulse
struct UBP_Weapon_C_DoHitImpulse_Params
{
	float                                              ImpulseFactorOnHit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weapon.BP_Weapon_C.ExecuteUbergraph_BP_Weapon
struct UBP_Weapon_C_ExecuteUbergraph_BP_Weapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
