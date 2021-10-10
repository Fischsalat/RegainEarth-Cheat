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

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShouldTakeChargeDamage
struct ABP_PlayerCharacter_BPBase_C_ShouldTakeChargeDamage_Params
{
	bool                                               ShouldTakeDamage;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyAllowFullChargeHits;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsElExpReady
struct ABP_PlayerCharacter_BPBase_C_IsElExpReady_Params
{
	bool                                               WasCharged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetShieldComponent
struct ABP_PlayerCharacter_BPBase_C_GetShieldComponent_Params
{
	class UBP_Shield_C*                                ShieldComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshForBodyShield
struct ABP_PlayerCharacter_BPBase_C_GetMeshForBodyShield_Params
{
	class UMeshComponent*                              MeshUsedForBodyShield;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsProjectile
struct ABP_PlayerCharacter_BPBase_C_IsProjectile_Params
{
	bool                                               IsProjectile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetSelfName
struct ABP_PlayerCharacter_BPBase_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsOnPlayersSideAndAttackable
struct ABP_PlayerCharacter_BPBase_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsEnemiesSideAndAttackable
struct ABP_PlayerCharacter_BPBase_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshAndBoneToAimFor
struct ABP_PlayerCharacter_BPBase_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetMeshForEffects
struct ABP_PlayerCharacter_BPBase_C_GetMeshForEffects_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetStatusEffectComponent
struct ABP_PlayerCharacter_BPBase_C_GetStatusEffectComponent_Params
{
	bool                                               HasStatusEffectComponent;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_StatusEffectsBaseComponent_C*            StatusEffectComponentRef;                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCanNotAttack
struct ABP_PlayerCharacter_BPBase_C_GetCanNotAttack_Params
{
	bool                                               CanNotAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetName
struct ABP_PlayerCharacter_BPBase_C_GetName_Params
{
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCurrentHealthPercentageAsFactor
struct ABP_PlayerCharacter_BPBase_C_GetCurrentHealthPercentageAsFactor_Params
{
	float                                              CurrentHealthPercentage_;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsAtMaxHealth
struct ABP_PlayerCharacter_BPBase_C_IsAtMaxHealth_Params
{
	bool                                               IsAtMaxHealth_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsBleedingOut
struct ABP_PlayerCharacter_BPBase_C_GetIsBleedingOut_Params
{
	bool                                               IsBleedingOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsUnconsciousOrDeadOrSimilar
struct ABP_PlayerCharacter_BPBase_C_GetIsUnconsciousOrDeadOrSimilar_Params
{
	bool                                               IsUnconscious_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsInteracting
struct ABP_PlayerCharacter_BPBase_C_GetIsInteracting_Params
{
	bool                                               IsInteracting_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsDead
struct ABP_PlayerCharacter_BPBase_C_GetIsDead_Params
{
	bool                                               IsDead_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetGrabbedComponent
struct ABP_PlayerCharacter_BPBase_C_GetGrabbedComponent_Params
{
	class UPrimitiveComponent*                         Grabbed_Component_of_Character;                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetIsPhysicsHandleActive
struct ABP_PlayerCharacter_BPBase_C_GetIsPhysicsHandleActive_Params
{
	bool                                               Physics_Handle_Active_of_Character_;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetLaserDotRef
struct ABP_PlayerCharacter_BPBase_C_GetLaserDotRef_Params
{
	class UBP_LaserDotMarker_Component_C*              LaserDotRef;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetLaserDotLocation
struct ABP_PlayerCharacter_BPBase_C_GetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetCurrentWeaponSkelMesh
struct ABP_PlayerCharacter_BPBase_C_GetCurrentWeaponSkelMesh_Params
{
	class USceneComponent*                             CurrentWeaponSkelMesh;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetPlayerShootingCondition
struct ABP_PlayerCharacter_BPBase_C_GetPlayerShootingCondition_Params
{
	bool                                               CharCanShoot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetActivePlayerCamera
struct ABP_PlayerCharacter_BPBase_C_GetActivePlayerCamera_Params
{
	class UCameraComponent*                            ActiveCamera;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickUpItemToInventory
struct ABP_PlayerCharacter_BPBase_C_PickUpItemToInventory_Params
{
	int                                                CountToChangeAddOrRemove;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InformPlayerWithMessage;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasInventoryPickupFine_;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InventoryWasFull_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NotAbleToRemove_CountToLess_;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewItemCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetInventoryItemAndCount
struct ABP_PlayerCharacter_BPBase_C_GetInventoryItemAndCount_Params
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Get_also_Items_with_count_zero_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FInventorySlotStructB>               InventoryNOTAsReference;                                   // (Parm, OutParm)
	int                                                Count_of_different_Items_in_Result_Array;                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_Item_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                FoundOnIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventorySlotStructB                       FoundInventoryItemSlotStruct;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemDataStructF                            FoundInventoryItemFullDetails;                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckGetItemFirstTime
struct ABP_PlayerCharacter_BPBase_C_CheckGetItemFirstTime_Params
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            SearchItemID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_New_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetFullInventoryWithAllItemDetails
struct ABP_PlayerCharacter_BPBase_C_GetFullInventoryWithAllItemDetails_Params
{
	bool                                               Get_also_Items_with_count_zero_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>> GetItemCategories;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Count_of_different_Items_in_Result_Array;                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_Items_Without_Errors_;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FItemDataStructF>                    Inventory_Full;                                            // (Parm, OutParm)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Get Vector and Rot in View Line
struct ABP_PlayerCharacter_BPBase_C_Get_Vector_and_Rot_in_View_Line_Params
{
	float                                              Distance_in_front;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Done_fine_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformLocVecRot;                                        // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetInventoryItemCount
struct ABP_PlayerCharacter_BPBase_C_SetInventoryItemCount_Params
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Set_to_specfic_count;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Set_to_Max_Stack_Size;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Only_Add_when_Item_already_in_inventory_at_least_with_0;   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlayPickupSound_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Should_Player_be_informed;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Done_fine_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetPlayerCameraManager
struct ABP_PlayerCharacter_BPBase_C_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        PlayerCamManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_CurrentGrenade
struct ABP_PlayerCharacter_BPBase_C_OnRep_CurrentGrenade_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ModelSkinSelectedIndex
struct ABP_PlayerCharacter_BPBase_C_OnRep_ModelSkinSelectedIndex_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponCloseCombatIsArmedInHands
struct ABP_PlayerCharacter_BPBase_C_OnRep_WeaponCloseCombatIsArmedInHands_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ForcedDancing
struct ABP_PlayerCharacter_BPBase_C_OnRep_ForcedDancing_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponGun2IsArmedInHands
struct ABP_PlayerCharacter_BPBase_C_OnRep_WeaponGun2IsArmedInHands_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponGun1IsArmedInHands
struct ABP_PlayerCharacter_BPBase_C_OnRep_WeaponGun1IsArmedInHands_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_WeaponPistolIsArmedInHands
struct ABP_PlayerCharacter_BPBase_C_OnRep_WeaponPistolIsArmedInHands_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetWeaponPawnAnimations_Locally
struct ABP_PlayerCharacter_BPBase_C_SetWeaponPawnAnimations_Locally_Params
{
	RegainEarth_FS_EWeaponPawnAnimationGroups          WeaponPawnAnimationGroup;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdatePawnAnimWeapTypeAnimBpCam_Locally
struct ABP_PlayerCharacter_BPBase_C_UpdatePawnAnimWeapTypeAnimBpCam_Locally_Params
{
	class UWeapon_Base_Component_C*                    BPWeapon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon Locally
struct ABP_PlayerCharacter_BPBase_C_UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon_Locally_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCurrentWeaponAndReplicate
struct ABP_PlayerCharacter_BPBase_C_SetCurrentWeaponAndReplicate_Params
{
	class UBP_Weapon_C*                                CurrentWeapon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRunStateAndReplicate
struct ABP_PlayerCharacter_BPBase_C_SetRunStateAndReplicate_Params
{
	bool                                               NewRunButtonPressedState;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_CurrentWeapon
struct ABP_PlayerCharacter_BPBase_C_OnRep_CurrentWeapon_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SwitchFreeStateWhenInExpectedState
struct ABP_PlayerCharacter_BPBase_C_SwitchFreeStateWhenInExpectedState_Params
{
	RegainEarth_FS_EStateOfAction                      ExpectedActualStateToSwitchToFreeState;                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyAimingState
struct ABP_PlayerCharacter_BPBase_C_IsInAnyAimingState_Params
{
	bool                                               bIsInAnyAimingState;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SwitchAimingAndReplicate
struct ABP_PlayerCharacter_BPBase_C_SwitchAimingAndReplicate_Params
{
	RegainEarth_FS_EStateOfAiming                      ActualAimingState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Attach Current Weapon to Bone
struct ABP_PlayerCharacter_BPBase_C_Attach_Current_Weapon_to_Bone_Params
{
	TMap<RegainEarth_FS_EWeaponPawnAnimationGroups, struct FName> TargetMap;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               AttachingToHand_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_Weapon_C*                                WeaponToChange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyAimingStateAndArmed?
struct ABP_PlayerCharacter_BPBase_C_IsInAnyAimingStateAndArmed__Params
{
	bool                                               bIsInAnyAimingState;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.IsInAnyZoomedAimingStateAndArmed?
struct ABP_PlayerCharacter_BPBase_C_IsInAnyZoomedAimingStateAndArmed__Params
{
	bool                                               bIsInAnyZOOMAimingState;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRep_ActualAimingState
struct ABP_PlayerCharacter_BPBase_C_OnRep_ActualAimingState_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCamRotationControlsPawn
struct ABP_PlayerCharacter_BPBase_C_SetCamRotationControlsPawn_Params
{
	bool                                               bSetCamRotationControlsPawn;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckPlayerInFreeActionStatePure
struct ABP_PlayerCharacter_BPBase_C_CheckPlayerInFreeActionStatePure_Params
{
	bool                                               PlayerInFreeState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UserConstructionScript
struct ABP_PlayerCharacter_BPBase_C_UserConstructionScript_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_0__FinishedFunc
struct ABP_PlayerCharacter_BPBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_0__UpdateFunc
struct ABP_PlayerCharacter_BPBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RotationReviveTimeline__FinishedFunc
struct ABP_PlayerCharacter_BPBase_C_RotationReviveTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RotationReviveTimeline__UpdateFunc
struct ABP_PlayerCharacter_BPBase_C_RotationReviveTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_AimingSpeedChange__FinishedFunc
struct ABP_PlayerCharacter_BPBase_C_Timeline_AimingSpeedChange__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_AimingSpeedChange__UpdateFunc
struct ABP_PlayerCharacter_BPBase_C_Timeline_AimingSpeedChange__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopLegGlowAnimation__FinishedFunc
struct ABP_PlayerCharacter_BPBase_C_StopLegGlowAnimation__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopLegGlowAnimation__UpdateFunc
struct ABP_PlayerCharacter_BPBase_C_StopLegGlowAnimation__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_1__FinishedFunc
struct ABP_PlayerCharacter_BPBase_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Timeline_1__UpdateFunc
struct ABP_PlayerCharacter_BPBase_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_RadialScan_K2Node_InputActionEvent_22
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_RadialScan_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_21
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_InteractUse_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_20
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_InteractUse_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Fire_K2Node_InputActionEvent_17
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_Fire_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Fire_K2Node_InputActionEvent_16
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_Fire_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_AimingState_K2Node_InputActionEvent_15
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_AimingState_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_AimingState_K2Node_InputActionEvent_14
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_AimingState_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Reload_K2Node_InputActionEvent_13
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_Reload_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectSidearm_K2Node_InputActionEvent_12
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectSidearm_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF
struct ABP_PlayerCharacter_BPBase_C_OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF
struct ABP_PlayerCharacter_BPBase_C_OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF
struct ABP_PlayerCharacter_BPBase_C_OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF
struct ABP_PlayerCharacter_BPBase_C_OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF
struct ABP_PlayerCharacter_BPBase_C_OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Run_K2Node_InputActionEvent_5
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_Run_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_Run_K2Node_InputActionEvent_4
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_InteractUse_K2Node_InputActionEvent_3
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_InteractUse_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1
struct ABP_PlayerCharacter_BPBase_C_InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToogleNotHitableForBulletStrikeAndProjectile
struct ABP_PlayerCharacter_BPBase_C_ToogleNotHitableForBulletStrikeAndProjectile_Params
{
	bool                                               SetNotHitable_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetToCanNotMove
struct ABP_PlayerCharacter_BPBase_C_SetToCanNotMove_Params
{
	bool                                               SetToCanNotMove_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetToCanNotAttack
struct ABP_PlayerCharacter_BPBase_C_SetToCanNotAttack_Params
{
	bool                                               SetToCanNotAttack_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRenderCustomDepthStencil
struct ABP_PlayerCharacter_BPBase_C_SetRenderCustomDepthStencil_Params
{
	bool                                               SetOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewValueIfSetOn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetWeapon
struct ABP_PlayerCharacter_BPBase_C_SetWeapon_Params
{
	class USkeletalMesh*                               WeaponMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                WeaponComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Primary;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetHit
struct ABP_PlayerCharacter_BPBase_C_GetHit_Params
{
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.GetBulletDirection
struct ABP_PlayerCharacter_BPBase_C_GetBulletDirection_Params
{
	struct FVector                                     BulletDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Deactivate Crosshair
struct ABP_PlayerCharacter_BPBase_C_Deactivate_Crosshair_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Active Crosshair
struct ABP_PlayerCharacter_BPBase_C_Active_Crosshair_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ScanWaveFoundPawnOrImportantActor
struct ABP_PlayerCharacter_BPBase_C_ScanWaveFoundPawnOrImportantActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToggleForceDancingPawn
struct ABP_PlayerCharacter_BPBase_C_ToggleForceDancingPawn_Params
{
	bool                                               SetDancing_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PullTryToStartForceDancing_CalledLoopPerTimer
struct ABP_PlayerCharacter_BPBase_C_PullTryToStartForceDancing_CalledLoopPerTimer_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopForceDancing
struct ABP_PlayerCharacter_BPBase_C_StopForceDancing_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolsteredStartDance_Event
struct ABP_PlayerCharacter_BPBase_C_WeaponHolsteredStartDance_Event_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetForceDancingAndStartRepNotify
struct ABP_PlayerCharacter_BPBase_C_Server_SetForceDancingAndStartRepNotify_Params
{
	bool                                               ForcedDancing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartForceDance
struct ABP_PlayerCharacter_BPBase_C_Server_StartForceDance_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartForceDance
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartForceDance_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TakeAnyDamageBP
struct ABP_PlayerCharacter_BPBase_C_TakeAnyDamageBP_Params
{
	float                                              NewHealth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageTaken;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoOnHealthZeroCallIsReplicated
struct ABP_PlayerCharacter_BPBase_C_DoOnHealthZeroCallIsReplicated_Params
{
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_PlayerZeroHealth
struct ABP_PlayerCharacter_BPBase_C_Multicast_PlayerZeroHealth_Params
{
	class AActor*                                      Damage_Causer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartDamagePostEffect
struct ABP_PlayerCharacter_BPBase_C_StartDamagePostEffect_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartDamagePostEffect
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartDamagePostEffect_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_DoOnDeath
struct ABP_PlayerCharacter_BPBase_C_Multicast_DoOnDeath_Params
{
	class AActor*                                      Damage_Causer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ShowReviveWidget
struct ABP_PlayerCharacter_BPBase_C_Multicast_ShowReviveWidget_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_HideReviveWidget
struct ABP_PlayerCharacter_BPBase_C_Multicast_HideReviveWidget_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PauseBleedOutTime
struct ABP_PlayerCharacter_BPBase_C_Server_PauseBleedOutTime_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ResumeBleedOutTime
struct ABP_PlayerCharacter_BPBase_C_Server_ResumeBleedOutTime_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PlayerDied
struct ABP_PlayerCharacter_BPBase_C_Server_PlayerDied_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_RevivedAnotherPlayerFinished
struct ABP_PlayerCharacter_BPBase_C_Server_RevivedAnotherPlayerFinished_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_RevivedAnotherPlayerFinished
struct ABP_PlayerCharacter_BPBase_C_Multicast_RevivedAnotherPlayerFinished_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.BleetOutOneMoreSecond
struct ABP_PlayerCharacter_BPBase_C_BleetOutOneMoreSecond_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetBleedOutTimeInWidget
struct ABP_PlayerCharacter_BPBase_C_Multicast_SetBleedOutTimeInWidget_Params
{
	float                                              ActualBleedout;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetGateOpen_PlayerZeroHealth
struct ABP_PlayerCharacter_BPBase_C_ResetGateOpen_PlayerZeroHealth_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartReviveOtherPlayer
struct ABP_PlayerCharacter_BPBase_C_Server_StartReviveOtherPlayer_Params
{
	class ABP_PlayerCharacter_BPBase_C*                PlayerRefToRevive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.EnteredReviveTrigger
struct ABP_PlayerCharacter_BPBase_C_EnteredReviveTrigger_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.LeavesReviveTrigger
struct ABP_PlayerCharacter_BPBase_C_LeavesReviveTrigger_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoReviveOtherPlayerOnlyCalledOnServer
struct ABP_PlayerCharacter_BPBase_C_DoReviveOtherPlayerOnlyCalledOnServer_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_EndReviveOtherPlayer
struct ABP_PlayerCharacter_BPBase_C_Server_EndReviveOtherPlayer_Params
{
	bool                                               EndedWithPositiveRevivedResult_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetReviveProgressbar_OwningClient
struct ABP_PlayerCharacter_BPBase_C_SetReviveProgressbar_OwningClient_Params
{
	float                                              NeededReviveTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActualPassedReviveTime;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReviveOngoing_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ThisPlayerIsRevivedNow
struct ABP_PlayerCharacter_BPBase_C_Multicast_ThisPlayerIsRevivedNow_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ThisPlayerIsRevivedNow
struct ABP_PlayerCharacter_BPBase_C_Server_ThisPlayerIsRevivedNow_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRevivingMontage
struct ABP_PlayerCharacter_BPBase_C_StartRevivingMontage_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartReviveVisualsOnClients
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartReviveVisualsOnClients_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_InterruptReviveVisualsOnClients
struct ABP_PlayerCharacter_BPBase_C_Multicast_InterruptReviveVisualsOnClients_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_TriggerTakeAnyDamage
struct ABP_PlayerCharacter_BPBase_C_Server_TriggerTakeAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Investigator;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.HealSomeHealth
struct ABP_PlayerCharacter_BPBase_C_HealSomeHealth_Params
{
	float                                              AmountHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_HealthSomeHealth
struct ABP_PlayerCharacter_BPBase_C_Server_HealthSomeHealth_Params
{
	float                                              healthValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActionFinished_Event
struct ABP_PlayerCharacter_BPBase_C_ActionFinished_Event_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerBackFromDeadToUnconBleedOut_OnSrv
struct ABP_PlayerCharacter_BPBase_C_SetPlayerBackFromDeadToUnconBleedOut_OnSrv_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetPlayerBackFromDeadToUnconBleedOut
struct ABP_PlayerCharacter_BPBase_C_Multicast_SetPlayerBackFromDeadToUnconBleedOut_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRepCPP_CurrentHealthBP
struct ABP_PlayerCharacter_BPBase_C_OnRepCPP_CurrentHealthBP_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetCurrentHealthToHud
struct ABP_PlayerCharacter_BPBase_C_SetCurrentHealthToHud_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetMaxHealthInterf
struct ABP_PlayerCharacter_BPBase_C_SetMaxHealthInterf_Params
{
	float                                              NewMaxHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetMaxHealth
struct ABP_PlayerCharacter_BPBase_C_Server_SetMaxHealth_Params
{
	float                                              healthValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnRepCPP_MaxHealthBP
struct ABP_PlayerCharacter_BPBase_C_OnRepCPP_MaxHealthBP_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveAnyDamage
struct ABP_PlayerCharacter_BPBase_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnChargeHit
struct ABP_PlayerCharacter_BPBase_C_OnChargeHit_Params
{
	float                                              ChargeAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ChargeEnergy
struct ABP_PlayerCharacter_BPBase_C_ChargeEnergy_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnElExpCreation
struct ABP_PlayerCharacter_BPBase_C_OnElExpCreation_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoHolsteringSwitchForWeaponReplicated
struct ABP_PlayerCharacter_BPBase_C_DoHolsteringSwitchForWeaponReplicated_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetUnarmedHolsterWeaponIfWeapEquipped_Replicated
struct ABP_PlayerCharacter_BPBase_C_SetUnarmedHolsterWeaponIfWeapEquipped_Replicated_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InterruptReload
struct ABP_PlayerCharacter_BPBase_C_InterruptReload_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartUnHolsterWeapon
struct ABP_PlayerCharacter_BPBase_C_StartUnHolsterWeapon_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartHolsterWeapon
struct ABP_PlayerCharacter_BPBase_C_StartHolsterWeapon_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckAimingButtonPressed
struct ABP_PlayerCharacter_BPBase_C_CheckAimingButtonPressed_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetAimingState
struct ABP_PlayerCharacter_BPBase_C_Server_SetAimingState_Params
{
	RegainEarth_FS_EStateOfAiming                      NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Release AimingState
struct ABP_PlayerCharacter_BPBase_C_Release_AimingState_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_Reload
struct ABP_PlayerCharacter_BPBase_C_Multicast_Reload_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_Reload
struct ABP_PlayerCharacter_BPBase_C_Server_Reload_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartHolsteringAnimation
struct ABP_PlayerCharacter_BPBase_C_Server_StartHolsteringAnimation_Params
{
	bool                                               bWeaponInHandNextTargetState;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartUnHolsterAnimation
struct ABP_PlayerCharacter_BPBase_C_Server_StartUnHolsterAnimation_Params
{
	bool                                               bWeaponInHandNextTargetState;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartUnHolsterAnimation
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartUnHolsterAnimation_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartHolsteringAnimation
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartHolsteringAnimation_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsSingleShot
struct ABP_PlayerCharacter_BPBase_C_ShootCharEffectsSingleShot_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DoHolsterWeaponWhenFreeStateReplicated
struct ABP_PlayerCharacter_BPBase_C_DoHolsterWeaponWhenFreeStateReplicated_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartWepSwitchChangeCurrentWeaponAndHolster
struct ABP_PlayerCharacter_BPBase_C_StartWepSwitchChangeCurrentWeaponAndHolster_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartWepSwitchUnHolsterWeapon
struct ABP_PlayerCharacter_BPBase_C_StartWepSwitchUnHolsterWeapon_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetAutofirePawn
struct ABP_PlayerCharacter_BPBase_C_Multicast_SetAutofirePawn_Params
{
	bool                                               AutofireState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetAutofirePawn
struct ABP_PlayerCharacter_BPBase_C_Server_SetAutofirePawn_Params
{
	bool                                               AutofireState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsAutofireStop
struct ABP_PlayerCharacter_BPBase_C_ShootCharEffectsAutofireStop_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ShootCharEffectsAutofireStart
struct ABP_PlayerCharacter_BPBase_C_ShootCharEffectsAutofireStart_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRemoteAutofirePawn
struct ABP_PlayerCharacter_BPBase_C_StartRemoteAutofirePawn_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetCurrentWeapon
struct ABP_PlayerCharacter_BPBase_C_Server_SetCurrentWeapon_Params
{
	class UBP_Weapon_C*                                CurrentWeapon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectSidearm
struct ABP_PlayerCharacter_BPBase_C_StartSelectSidearm_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectMainGun1
struct ABP_PlayerCharacter_BPBase_C_StartSelectMainGun1_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopAllPossibleRunningActions
struct ABP_PlayerCharacter_BPBase_C_StopAllPossibleRunningActions_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickupWeapon
struct ABP_PlayerCharacter_BPBase_C_PickupWeapon_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OwningClient_PickupWeapon
struct ABP_PlayerCharacter_BPBase_C_OwningClient_PickupWeapon_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate
struct ABP_PlayerCharacter_BPBase_C_SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolstered_Event
struct ABP_PlayerCharacter_BPBase_C_WeaponHolstered_Event_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetPawnAnimations
struct ABP_PlayerCharacter_BPBase_C_Server_SetPawnAnimations_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_SetPawnAnimations
struct ABP_PlayerCharacter_BPBase_C_Multicast_SetPawnAnimations_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponMeshAndPropertiesHaveChanged
struct ABP_PlayerCharacter_BPBase_C_WeaponMeshAndPropertiesHaveChanged_Params
{
	class UBP_Weapon_C*                                BPWeaponComponentRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectMainGun2
struct ABP_PlayerCharacter_BPBase_C_StartSelectMainGun2_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.AttachCurrentWeaponToHandsAndStartAimingState
struct ABP_PlayerCharacter_BPBase_C_AttachCurrentWeaponToHandsAndStartAimingState_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.AttachCurrentWeaponStopAimingState
struct ABP_PlayerCharacter_BPBase_C_AttachCurrentWeaponStopAimingState_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SimpleSpawnWeapon
struct ABP_PlayerCharacter_BPBase_C_Server_SimpleSpawnWeapon_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DropCurrentWeapon
struct ABP_PlayerCharacter_BPBase_C_DropCurrentWeapon_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckerAutofireOn
struct ABP_PlayerCharacter_BPBase_C_CheckerAutofireOn_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartFireWeaponActionWithOUTTimerStart
struct ABP_PlayerCharacter_BPBase_C_StartFireWeaponActionWithOUTTimerStart_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopForceFireWeaponActionButNotPressedFireTimer
struct ABP_PlayerCharacter_BPBase_C_StopForceFireWeaponActionButNotPressedFireTimer_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponUNHolstered_Event_1
struct ABP_PlayerCharacter_BPBase_C_WeaponUNHolstered_Event_1_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomStartReload
struct ABP_PlayerCharacter_BPBase_C_CustomStartReload_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomCycleDownWeapon
struct ABP_PlayerCharacter_BPBase_C_CustomCycleDownWeapon_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomShootPressed
struct ABP_PlayerCharacter_BPBase_C_CustomShootPressed_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomShootReleased
struct ABP_PlayerCharacter_BPBase_C_CustomShootReleased_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewColor
struct ABP_PlayerCharacter_BPBase_C_SetNewColor_Params
{
	struct FLinearColor                                NewLightColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewIntensity
struct ABP_PlayerCharacter_BPBase_C_SetNewIntensity_Params
{
	float                                              NewIntensity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetLaserDotLocation
struct ABP_PlayerCharacter_BPBase_C_SetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartSelectCloseCombat
struct ABP_PlayerCharacter_BPBase_C_StartSelectCloseCombat_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ToggleCamShoulderView
struct ABP_PlayerCharacter_BPBase_C_ToggleCamShoulderView_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CheckHoldDownKeyPressed
struct ABP_PlayerCharacter_BPBase_C_CheckHoldDownKeyPressed_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReleaseHolsterWeaponKey
struct ABP_PlayerCharacter_BPBase_C_ReleaseHolsterWeaponKey_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetCamRoRightShoulderView
struct ABP_PlayerCharacter_BPBase_C_ResetCamRoRightShoulderView_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SwitchActiveGrenadeSlot
struct ABP_PlayerCharacter_BPBase_C_Server_SwitchActiveGrenadeSlot_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveBeginPlay
struct ABP_PlayerCharacter_BPBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceiveTick
struct ABP_PlayerCharacter_BPBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PlayFootstep
struct ABP_PlayerCharacter_BPBase_C_Server_PlayFootstep_Params
{
	int                                                SurfaceID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_PlayFootstep
struct ABP_PlayerCharacter_BPBase_C_Multicast_PlayFootstep_Params
{
	int                                                SurfaceID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayFootstepOfSimulatedProxies
struct ABP_PlayerCharacter_BPBase_C_PlayFootstepOfSimulatedProxies_Params
{
	int                                                SurfaceID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewParam2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct ABP_PlayerCharacter_BPBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct ABP_PlayerCharacter_BPBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetSpeedAndPawnRotationControl
struct ABP_PlayerCharacter_BPBase_C_SetSpeedAndPawnRotationControl_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_ControlYaw
struct ABP_PlayerCharacter_BPBase_C_Server_ControlYaw_Params
{
	float                                              Yaw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_ControlRotationPitch
struct ABP_PlayerCharacter_BPBase_C_Multicast_ControlRotationPitch_Params
{
	float                                              AimPitchAlreadyClamped;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetRunState
struct ABP_PlayerCharacter_BPBase_C_Server_SetRunState_Params
{
	bool                                               NewRunState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ResetPlayerActionStateAimingStateAndHolsterResetDead
struct ABP_PlayerCharacter_BPBase_C_ResetPlayerActionStateAimingStateAndHolsterResetDead_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_PickItUp
struct ABP_PlayerCharacter_BPBase_C_Server_PickItUp_Params
{
	class UObject*                                     PickUpActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnWhoPicksItUp;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayFootStepLocal
struct ABP_PlayerCharacter_BPBase_C_PlayFootStepLocal_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.RunningbuttonPressedChecker
struct ABP_PlayerCharacter_BPBase_C_RunningbuttonPressedChecker_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartRunningIfPossibleWithoutStartingRunButtonTimer
struct ABP_PlayerCharacter_BPBase_C_StartRunningIfPossibleWithoutStartingRunButtonTimer_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CancelPickupAndReplicate
struct ABP_PlayerCharacter_BPBase_C_CancelPickupAndReplicate_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CancelPickup
struct ABP_PlayerCharacter_BPBase_C_CancelPickup_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomInputAxisTurn
struct ABP_PlayerCharacter_BPBase_C_CustomInputAxisTurn_Params
{
	float                                              Axis_Val;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomInputAxisLookUp
struct ABP_PlayerCharacter_BPBase_C_CustomInputAxisLookUp_Params
{
	float                                              Axis_Val;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomMoveForward
struct ABP_PlayerCharacter_BPBase_C_CustomMoveForward_Params
{
	float                                              Axis_Val;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomAxisMoveForward
struct ABP_PlayerCharacter_BPBase_C_CustomAxisMoveForward_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.CustomAxisMoveRight
struct ABP_PlayerCharacter_BPBase_C_CustomAxisMoveRight_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ControlRotationReplciationPitchPerTimer
struct ABP_PlayerCharacter_BPBase_C_ControlRotationReplciationPitchPerTimer_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerSpectatorCamBackToDefaultCam
struct ABP_PlayerCharacter_BPBase_C_SetPlayerSpectatorCamBackToDefaultCam_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetPlayerCamToSpectatorOnlyForNonLocalPlControlled
struct ABP_PlayerCharacter_BPBase_C_SetPlayerCamToSpectatorOnlyForNonLocalPlControlled_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_PickupGrenade
struct ABP_PlayerCharacter_BPBase_C_Client_PickupGrenade_Params
{
	class UClass*                                      PickupGrenadeType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EquipedGrenadeAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.UpdateGrenadeAmmoInHUD
struct ABP_PlayerCharacter_BPBase_C_UpdateGrenadeAmmoInHUD_Params
{
	bool                                               UpdateActiveGrenade;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ThrowGrenade
struct ABP_PlayerCharacter_BPBase_C_ThrowGrenade_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartGrenadeThrowAnimation
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartGrenadeThrowAnimation_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartGrenadeThrowAnimation
struct ABP_PlayerCharacter_BPBase_C_Server_StartGrenadeThrowAnimation_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StartGrenadeThrowAnimation
struct ABP_PlayerCharacter_BPBase_C_StartGrenadeThrowAnimation_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.StopGrenadeThrow
struct ABP_PlayerCharacter_BPBase_C_StopGrenadeThrow_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ThrowGrenadeKeyIsPressed
struct ABP_PlayerCharacter_BPBase_C_ThrowGrenadeKeyIsPressed_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetModifiedSpeed
struct ABP_PlayerCharacter_BPBase_C_SetModifiedSpeed_Params
{
	float                                              CurrentSpeedModifier;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TriggerPawnMovementSpeedModifyEffect
struct ABP_PlayerCharacter_BPBase_C_TriggerPawnMovementSpeedModifyEffect_Params
{
	struct FSSpeedEffectSettingsStruct                 SpeedEffectSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PickupGrenade
struct ABP_PlayerCharacter_BPBase_C_PickupGrenade_Params
{
	class UClass*                                      PickupGrenadeType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_UpdateGrenade
struct ABP_PlayerCharacter_BPBase_C_Client_UpdateGrenade_Params
{
	class UBP_GrenadeWeapon_C*                         GrenadeToUpdate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GrenadeAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GrenadeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpdateActiveGrenadeOnHud;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetNewPlayerModelSkin
struct ABP_PlayerCharacter_BPBase_C_Server_SetNewPlayerModelSkin_Params
{
	int                                                ModelSkinSelectedIndex;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetNewPlayerModelSkin_Replicated
struct ABP_PlayerCharacter_BPBase_C_SetNewPlayerModelSkin_Replicated_Params
{
	int                                                ModelSkinSelectedIndex;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActivateSelectedCustomFovFieldOfView
struct ABP_PlayerCharacter_BPBase_C_ActivateSelectedCustomFovFieldOfView_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Client_InformAboutPossesed
struct ABP_PlayerCharacter_BPBase_C_Client_InformAboutPossesed_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ReceivePossessed
struct ABP_PlayerCharacter_BPBase_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.TriggerReadAndSetNewMouseSettingsSensitivity
struct ABP_PlayerCharacter_BPBase_C_TriggerReadAndSetNewMouseSettingsSensitivity_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_SetFinishedBeginPlayFinePawn
struct ABP_PlayerCharacter_BPBase_C_Server_SetFinishedBeginPlayFinePawn_Params
{
	bool                                               FinishedBeginPlayFine;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.DisplayNameWidgetAndChangeSize
struct ABP_PlayerCharacter_BPBase_C_DisplayNameWidgetAndChangeSize_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetLocationVelocityAndRotationEventMulticast
struct ABP_PlayerCharacter_BPBase_C_SetLocationVelocityAndRotationEventMulticast_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MeshVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Multicast_StartRagdoll
struct ABP_PlayerCharacter_BPBase_C_Multicast_StartRagdoll_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.Server_StartRagdoll
struct ABP_PlayerCharacter_BPBase_C_Server_StartRagdoll_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SetRagdoll
struct ABP_PlayerCharacter_BPBase_C_SetRagdoll_Params
{
	bool                                               SetRagdollOn_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ExecuteUbergraph_BP_PlayerCharacter_BPBase
struct ABP_PlayerCharacter_BPBase_C_ExecuteUbergraph_BP_PlayerCharacter_BPBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.PlayerCharacterFinishedBeginPlay__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_PlayerCharacterFinishedBeginPlay__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.SpeedModifyEffectEnded__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_SpeedModifyEffectEnded__DelegateSignature_Params
{
	class ABP_PlayerCharacter_BPBase_C*                PlayerPawnRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnPlayerUnconscious__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_OnPlayerUnconscious__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.ActionFinished__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_ActionFinished__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.OnPlayerDeath__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_OnPlayerDeath__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponUNHolstered__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_WeaponUNHolstered__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C.WeaponHolstered__DelegateSignature
struct ABP_PlayerCharacter_BPBase_C_WeaponHolstered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
