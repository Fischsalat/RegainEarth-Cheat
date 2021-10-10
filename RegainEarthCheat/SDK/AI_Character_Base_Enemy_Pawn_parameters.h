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

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsProjectile
struct AAI_Character_Base_Enemy_Pawn_C_IsProjectile_Params
{
	bool                                               IsProjectile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSelfName
struct AAI_Character_Base_Enemy_Pawn_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsOnPlayersSideAndAttackable
struct AAI_Character_Base_Enemy_Pawn_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsEnemiesSideAndAttackable
struct AAI_Character_Base_Enemy_Pawn_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetMeshAndBoneToAimFor
struct AAI_Character_Base_Enemy_Pawn_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetMeshForEffects
struct AAI_Character_Base_Enemy_Pawn_C_GetMeshForEffects_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetStatusEffectComponent
struct AAI_Character_Base_Enemy_Pawn_C_GetStatusEffectComponent_Params
{
	bool                                               HasStatusEffectComponent;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_StatusEffectsBaseComponent_C*            StatusEffectComponentRef;                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIgnoreAllSetFocusOnTargetFromBehaivorTree
struct AAI_Character_Base_Enemy_Pawn_C_GetIgnoreAllSetFocusOnTargetFromBehaivorTree_Params
{
	bool                                               IgnoreAllSetFocusOnTargetFromBehaivorTree;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerGotDamagedByHiddenTargetSpecialEvent
struct AAI_Character_Base_Enemy_Pawn_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params
{
	bool                                               DoneFine_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerTryDoingSpecialAttackEvent
struct AAI_Character_Base_Enemy_Pawn_C_TriggerTryDoingSpecialAttackEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
struct AAI_Character_Base_Enemy_Pawn_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerSeeTargetSpecialEvent
struct AAI_Character_Base_Enemy_Pawn_C_TriggerSeeTargetSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSeeingSenseValidTarget
struct AAI_Character_Base_Enemy_Pawn_C_GetSeeingSenseValidTarget_Params
{
	bool                                               SenseValidTarget_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLastKnownTargetLocation
struct AAI_Character_Base_Enemy_Pawn_C_GetLastKnownTargetLocation_Params
{
	struct FVector                                     LastKnownTargetLocation;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetTargetFoeOnBB
struct AAI_Character_Base_Enemy_Pawn_C_GetTargetFoeOnBB_Params
{
	class AActor*                                      TargetFoe;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetAIseePlayer
struct AAI_Character_Base_Enemy_Pawn_C_GetAIseePlayer_Params
{
	bool                                               SeePlayer_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      TargetFoe;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLaserDotRef
struct AAI_Character_Base_Enemy_Pawn_C_GetLaserDotRef_Params
{
	class UBP_LaserDotMarker_Component_C*              LaserDotRef;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLaserDotLocation
struct AAI_Character_Base_Enemy_Pawn_C_GetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCurrentWeaponSkelMesh
struct AAI_Character_Base_Enemy_Pawn_C_GetCurrentWeaponSkelMesh_Params
{
	class USceneComponent*                             CurrentWeaponSkelMesh;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetPlayerShootingCondition
struct AAI_Character_Base_Enemy_Pawn_C_GetPlayerShootingCondition_Params
{
	bool                                               CharCanShoot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCanNotAttack
struct AAI_Character_Base_Enemy_Pawn_C_GetCanNotAttack_Params
{
	bool                                               CanNotAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetName
struct AAI_Character_Base_Enemy_Pawn_C_GetName_Params
{
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetCurrentHealthPercentageAsFactor
struct AAI_Character_Base_Enemy_Pawn_C_GetCurrentHealthPercentageAsFactor_Params
{
	float                                              CurrentHealthPercentage_;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.IsAtMaxHealth
struct AAI_Character_Base_Enemy_Pawn_C_IsAtMaxHealth_Params
{
	bool                                               IsAtMaxHealth_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsBleedingOut
struct AAI_Character_Base_Enemy_Pawn_C_GetIsBleedingOut_Params
{
	bool                                               IsBleedingOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsUnconsciousOrDeadOrSimilar
struct AAI_Character_Base_Enemy_Pawn_C_GetIsUnconsciousOrDeadOrSimilar_Params
{
	bool                                               IsUnconscious_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsPhysicsHandleActive
struct AAI_Character_Base_Enemy_Pawn_C_GetIsPhysicsHandleActive_Params
{
	bool                                               Physics_Handle_Active_of_Character_;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetGrabbedComponent
struct AAI_Character_Base_Enemy_Pawn_C_GetGrabbedComponent_Params
{
	class UPrimitiveComponent*                         Grabbed_Component_of_Character;                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsDead
struct AAI_Character_Base_Enemy_Pawn_C_GetIsDead_Params
{
	bool                                               IsDead_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetIsInteracting
struct AAI_Character_Base_Enemy_Pawn_C_GetIsInteracting_Params
{
	bool                                               IsInteracting_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnRep_AiPercAndBtAreDisabled
struct AAI_Character_Base_Enemy_Pawn_C_OnRep_AiPercAndBtAreDisabled_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnRep_SetToNotHitableByBulletStrikeAndProjectile?
struct AAI_Character_Base_Enemy_Pawn_C_OnRep_SetToNotHitableByBulletStrikeAndProjectile__Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetBlackboardFuncIn Progresss
struct AAI_Character_Base_Enemy_Pawn_C_GetBlackboardFuncIn_Progresss_Params
{
	class UBlackboardComponent*                        BlackBoardRef;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetSenseValidTargetPure
struct AAI_Character_Base_Enemy_Pawn_C_GetSenseValidTargetPure_Params
{
	bool                                               SenseValidTarget_;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetLastKnownTargetLocationPure
struct AAI_Character_Base_Enemy_Pawn_C_GetLastKnownTargetLocationPure_Params
{
	struct FVector                                     LastKnownTargetLocation;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Get Target Pawn
struct AAI_Character_Base_Enemy_Pawn_C_Get_Target_Pawn_Params
{
	class AActor*                                      TargetFoe;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundValidTargetFoe;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CheckForNearestPlayer
struct AAI_Character_Base_Enemy_Pawn_C_CheckForNearestPlayer_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Get Array Of Weapon IDs Fit to Value Min Max Settings
struct AAI_Character_Base_Enemy_Pawn_C_Get_Array_Of_Weapon_IDs_Fit_to_Value_Min_Max_Settings_Params
{
	TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>         GeneratedArrayOfPossibleWeaponDrops1;                      // (Parm, OutParm)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Hit Bones Correction Impulse and Phys Blend
struct AAI_Character_Base_Enemy_Pawn_C_Hit_Bones_Correction_Impulse_and_Phys_Blend_Params
{
	bool                                               Impulse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetControllerDirectionYawNegate
struct AAI_Character_Base_Enemy_Pawn_C_GetControllerDirectionYawNegate_Params
{
	float                                              Yaw;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.UserConstructionScript
struct AAI_Character_Base_Enemy_Pawn_C_UserConstructionScript_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__FinishedFunc
struct AAI_Character_Base_Enemy_Pawn_C_PhatBlend2__FinishedFunc_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__UpdateFunc
struct AAI_Character_Base_Enemy_Pawn_C_PhatBlend2__UpdateFunc_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PhatBlend2__StartImpulse__EventFunc
struct AAI_Character_Base_Enemy_Pawn_C_PhatBlend2__StartImpulse__EventFunc_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveEffect__FinishedFunc
struct AAI_Character_Base_Enemy_Pawn_C_DissolveEffect__FinishedFunc_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveEffect__UpdateFunc
struct AAI_Character_Base_Enemy_Pawn_C_DissolveEffect__UpdateFunc_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttackDamageToTarget
struct AAI_Character_Base_Enemy_Pawn_C_AttackDamageToTarget_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.WalkToNextRandomPointInRange
struct AAI_Character_Base_Enemy_Pawn_C_WalkToNextRandomPointInRange_Params
{
	bool                                               RangeBasedOnSpawnPoint_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StopChasingTarget
struct AAI_Character_Base_Enemy_Pawn_C_StopChasingTarget_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartGoToSpawnLocation
struct AAI_Character_Base_Enemy_Pawn_C_StartGoToSpawnLocation_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartLoopSearchAtLastPlayerLocation
struct AAI_Character_Base_Enemy_Pawn_C_StartLoopSearchAtLastPlayerLocation_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime
struct AAI_Character_Base_Enemy_Pawn_C_ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetWeapon
struct AAI_Character_Base_Enemy_Pawn_C_SetWeapon_Params
{
	class USkeletalMesh*                               WeaponMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                WeaponComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Primary;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsSingleShot
struct AAI_Character_Base_Enemy_Pawn_C_ShootCharEffectsSingleShot_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetHit
struct AAI_Character_Base_Enemy_Pawn_C_GetHit_Params
{
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GetBulletDirection
struct AAI_Character_Base_Enemy_Pawn_C_GetBulletDirection_Params
{
	struct FVector                                     BulletDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsAutofireStart
struct AAI_Character_Base_Enemy_Pawn_C_ShootCharEffectsAutofireStart_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ShootCharEffectsAutofireStop
struct AAI_Character_Base_Enemy_Pawn_C_ShootCharEffectsAutofireStop_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PickupWeapon
struct AAI_Character_Base_Enemy_Pawn_C_PickupWeapon_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.WeaponMeshAndPropertiesHaveChanged
struct AAI_Character_Base_Enemy_Pawn_C_WeaponMeshAndPropertiesHaveChanged_Params
{
	class UBP_Weapon_C*                                BPWeaponComponentRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttachCurrentWeaponStopAimingState
struct AAI_Character_Base_Enemy_Pawn_C_AttachCurrentWeaponStopAimingState_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AttachCurrentWeaponToHandsAndStartAimingState
struct AAI_Character_Base_Enemy_Pawn_C_AttachCurrentWeaponToHandsAndStartAimingState_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DropCurrentWeapon
struct AAI_Character_Base_Enemy_Pawn_C_DropCurrentWeapon_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetLaserDotLocation
struct AAI_Character_Base_Enemy_Pawn_C_SetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewIntensity
struct AAI_Character_Base_Enemy_Pawn_C_SetNewIntensity_Params
{
	float                                              NewIntensity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewColor
struct AAI_Character_Base_Enemy_Pawn_C_SetNewColor_Params
{
	struct FLinearColor                                NewLightColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ThrowGrenade
struct AAI_Character_Base_Enemy_Pawn_C_ThrowGrenade_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PickupGrenade
struct AAI_Character_Base_Enemy_Pawn_C_PickupGrenade_Params
{
	class UClass*                                      PickupGrenadeType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CancelPickupAndReplicate
struct AAI_Character_Base_Enemy_Pawn_C_CancelPickupAndReplicate_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToggleForceDancingPawn
struct AAI_Character_Base_Enemy_Pawn_C_ToggleForceDancingPawn_Params
{
	bool                                               SetDancing_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetMaxHealthInterf
struct AAI_Character_Base_Enemy_Pawn_C_SetMaxHealthInterf_Params
{
	float                                              NewMaxHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature
struct AAI_Character_Base_Enemy_Pawn_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Did NOT See Player for some Time
struct AAI_Character_Base_Enemy_Pawn_C_Did_NOT_See_Player_for_some_Time_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearActualTargetPawnAndSetAISensedTargetOff
struct AAI_Character_Base_Enemy_Pawn_C_ClearActualTargetPawnAndSetAISensedTargetOff_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearTargetLastKnownLocation
struct AAI_Character_Base_Enemy_Pawn_C_ClearTargetLastKnownLocation_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartTimerToCheckForNearestPlayer
struct AAI_Character_Base_Enemy_Pawn_C_StartTimerToCheckForNearestPlayer_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetNewTarget
struct AAI_Character_Base_Enemy_Pawn_C_SetNewTarget_Params
{
	class AActor*                                      FoundNewNearTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.UpdateLastSeenTargetLocationToActualTargetLocation
struct AAI_Character_Base_Enemy_Pawn_C_UpdateLastSeenTargetLocationToActualTargetLocation_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn
struct AAI_Character_Base_Enemy_Pawn_C_ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerDamagePerceptionStimulus
struct AAI_Character_Base_Enemy_Pawn_C_TriggerDamagePerceptionStimulus_Params
{
	class AActor*                                      SourceActorOrDamageCausedActor;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 AI_Stimulus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InvestigatorOnlyUsedWhenSourceActorNotValidForReaction;    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetTargetFoeOnBBandReplicate
struct AAI_Character_Base_Enemy_Pawn_C_SetTargetFoeOnBBandReplicate_Params
{
	class AActor*                                      TargetFoe;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetLastKnownTargetLocation
struct AAI_Character_Base_Enemy_Pawn_C_SetLastKnownTargetLocation_Params
{
	struct FVector                                     LastKnownTargetLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetSeeingSenseValidTarget
struct AAI_Character_Base_Enemy_Pawn_C_SetSeeingSenseValidTarget_Params
{
	bool                                               SenseValidTarget_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearTargetPawnButDoNotAISeeTargetSense
struct AAI_Character_Base_Enemy_Pawn_C_ClearTargetPawnButDoNotAISeeTargetSense_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToggleAiTemporarilyLostSightOfTarget
struct AAI_Character_Base_Enemy_Pawn_C_ToggleAiTemporarilyLostSightOfTarget_Params
{
	bool                                               AiTemporarilyLostSightOfTarget_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AIPerceptionForgetAndResetLastStimulis
struct AAI_Character_Base_Enemy_Pawn_C_AIPerceptionForgetAndResetLastStimulis_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnCurrentTargetPlayerUnconscious_Event
struct AAI_Character_Base_Enemy_Pawn_C_OnCurrentTargetPlayerUnconscious_Event_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ClearKnownTargetsAndClearResetAIPerceptionStimulus
struct AAI_Character_Base_Enemy_Pawn_C_ClearKnownTargetsAndClearResetAIPerceptionStimulus_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OpenGateStartAiSense
struct AAI_Character_Base_Enemy_Pawn_C_OpenGateStartAiSense_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CloseGateStopAiSense
struct AAI_Character_Base_Enemy_Pawn_C_CloseGateStopAiSense_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.OnCurrentTargetTurretDestroyded
struct AAI_Character_Base_Enemy_Pawn_C_OnCurrentTargetTurretDestroyded_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Attack
struct AAI_Character_Base_Enemy_Pawn_C_Attack_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceivePointDamage
struct AAI_Character_Base_Enemy_Pawn_C_ReceivePointDamage_Params
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

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ManuallyTriggerDoOnDeath
struct AAI_Character_Base_Enemy_Pawn_C_ManuallyTriggerDoOnDeath_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartAttack
struct AAI_Character_Base_Enemy_Pawn_C_StartAttack_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_DoOnDeath
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_DoOnDeath_Params
{
	struct FVector                                     BulletDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HeadShot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Hit_Bone_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DamageCauseLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HitWasRadialDamage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_DamageType_BaseREWave_C*                 DamageTypeRef;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_VisualImpactOnHit
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_VisualImpactOnHit_Params
{
	struct FVector                                     BulletDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HeadShot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Hit_Bone_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DamageType_BaseREWave_C*                 DamageTypeRef;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Despawn
struct AAI_Character_Base_Enemy_Pawn_C_Despawn_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StrikeAttackDamageToTargetWithSocketname
struct AAI_Character_Base_Enemy_Pawn_C_StrikeAttackDamageToTargetWithSocketname_Params
{
	struct FName                                       SlotNameOfSlotWhichHits;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_PlayInteractionAnimation
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_PlayInteractionAnimation_Params
{
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveAnyDamage
struct AAI_Character_Base_Enemy_Pawn_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Server_ApplyDamageManually
struct AAI_Character_Base_Enemy_Pawn_C_Server_ApplyDamageManually_Params
{
	struct FVector                                     ShotFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Investigator;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HitBone;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DamageType_BaseREWave_C*                 DamageTypeOfManuallyDamage;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ApplyDamageManually
struct AAI_Character_Base_Enemy_Pawn_C_ApplyDamageManually_Params
{
	struct FVector                                     ShotFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Investigator;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DropOnDeathCalledOnAllClients_OnlyCallOnServer
struct AAI_Character_Base_Enemy_Pawn_C_DropOnDeathCalledOnAllClients_OnlyCallOnServer_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_AiSuccessfulHitPlayer
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_AiSuccessfulHitPlayer_Params
{
	class ABP_PlayerCharacter_BPBase_C*                PlayerPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_HitPlayerVisualAndSound
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_HitPlayerVisualAndSound_Params
{
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HitBone;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveRadialDamage
struct AAI_Character_Base_Enemy_Pawn_C_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Origin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DissolveSelf
struct AAI_Character_Base_Enemy_Pawn_C_DissolveSelf_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ForceFullDissolve
struct AAI_Character_Base_Enemy_Pawn_C_ForceFullDissolve_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.HitByDissolveWeaponHit
struct AAI_Character_Base_Enemy_Pawn_C_HitByDissolveWeaponHit_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PlayFootStepLocal
struct AAI_Character_Base_Enemy_Pawn_C_PlayFootStepLocal_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveBeginPlay
struct AAI_Character_Base_Enemy_Pawn_C_ReceiveBeginPlay_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveTick
struct AAI_Character_Base_Enemy_Pawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetShortlyDidPlayerSeeAnimFalse
struct AAI_Character_Base_Enemy_Pawn_C_SetShortlyDidPlayerSeeAnimFalse_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StarTimerForShortlyDidFirstSeePlayerAnim
struct AAI_Character_Base_Enemy_Pawn_C_StarTimerForShortlyDidFirstSeePlayerAnim_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_StartAIFirstSeePlayerAnim
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_StartAIFirstSeePlayerAnim_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.StartAIFirstSeePlayerAnim
struct AAI_Character_Base_Enemy_Pawn_C_StartAIFirstSeePlayerAnim_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceivePossessed
struct AAI_Character_Base_Enemy_Pawn_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveUnpossessed
struct AAI_Character_Base_Enemy_Pawn_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyOnDestroyed_Event
struct AAI_Character_Base_Enemy_Pawn_C_MyOnDestroyed_Event_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ReceiveDestroyed
struct AAI_Character_Base_Enemy_Pawn_C_ReceiveDestroyed_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyUnpossesd_Event_Event
struct AAI_Character_Base_Enemy_Pawn_C_MyUnpossesd_Event_Event_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.InformGameModeEnemyGetsKilledOnlyServerCalled
struct AAI_Character_Base_Enemy_Pawn_C_InformGameModeEnemyGetsKilledOnlyServerCalled_Params
{
	class AController*                                 ControllerWhoKills;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DebugOutput
struct AAI_Character_Base_Enemy_Pawn_C_DebugOutput_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AiOnDeath_Event
struct AAI_Character_Base_Enemy_Pawn_C_AiOnDeath_Event_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ToogleNotHitableForBulletStrikeAndProjectile
struct AAI_Character_Base_Enemy_Pawn_C_ToogleNotHitableForBulletStrikeAndProjectile_Params
{
	bool                                               SetNotHitable_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetToCanNotMove
struct AAI_Character_Base_Enemy_Pawn_C_SetToCanNotMove_Params
{
	bool                                               SetToCanNotMove_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetToCanNotAttack
struct AAI_Character_Base_Enemy_Pawn_C_SetToCanNotAttack_Params
{
	bool                                               SetToCanNotAttack_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.PrintStringToLog
struct AAI_Character_Base_Enemy_Pawn_C_PrintStringToLog_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetRenderCustomDepthStencil
struct AAI_Character_Base_Enemy_Pawn_C_SetRenderCustomDepthStencil_Params
{
	bool                                               SetOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewValueIfSetOn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.RunMoveToTargetPointDebug
struct AAI_Character_Base_Enemy_Pawn_C_RunMoveToTargetPointDebug_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.DoAJump
struct AAI_Character_Base_Enemy_Pawn_C_DoAJump_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.LerpToTempAimPitchToActiveAimPitch
struct AAI_Character_Base_Enemy_Pawn_C_LerpToTempAimPitchToActiveAimPitch_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Multicast_Pitch
struct AAI_Character_Base_Enemy_Pawn_C_Multicast_Pitch_Params
{
	float                                              AimingPitchClamped;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.CalculateAimingPicthAndDoMulticast
struct AAI_Character_Base_Enemy_Pawn_C_CalculateAimingPicthAndDoMulticast_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.HealSomeHealth
struct AAI_Character_Base_Enemy_Pawn_C_HealSomeHealth_Params
{
	float                                              AmountHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.Server_HealthSomeHealth
struct AAI_Character_Base_Enemy_Pawn_C_Server_HealthSomeHealth_Params
{
	float                                              healthValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SetModifiedSpeed
struct AAI_Character_Base_Enemy_Pawn_C_SetModifiedSpeed_Params
{
	float                                              CurrentSpeedModifier;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.BindWeaponSlowDownStatusEffect
struct AAI_Character_Base_Enemy_Pawn_C_BindWeaponSlowDownStatusEffect_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SlowDownEffectEnded_Event2
struct AAI_Character_Base_Enemy_Pawn_C_SlowDownEffectEnded_Event2_Params
{
	bool                                               EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SpeedModifyEffectStarted_Event_1
struct AAI_Character_Base_Enemy_Pawn_C_SpeedModifyEffectStarted_Event_1_Params
{
	float                                              SpeedMultiplierOfStartedEffect;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.TriggerPawnMovementSpeedModifyEffect
struct AAI_Character_Base_Enemy_Pawn_C_TriggerPawnMovementSpeedModifyEffect_Params
{
	struct FSSpeedEffectSettingsStruct                 SpeedEffectSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.ExecuteUbergraph_AI_Character_Base_Enemy_Pawn
struct AAI_Character_Base_Enemy_Pawn_C_ExecuteUbergraph_AI_Character_Base_Enemy_Pawn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature
struct AAI_Character_Base_Enemy_Pawn_C_GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature_Params
{
	bool                                               FinishedFine_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature
struct AAI_Character_Base_Enemy_Pawn_C_SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature_Params
{
	bool                                               FinishedFine_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.SeeTargetSpecialEventFinished__DelegateSignature
struct AAI_Character_Base_Enemy_Pawn_C_SeeTargetSpecialEventFinished__DelegateSignature_Params
{
	bool                                               FinishedFine_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.AiOnDeath__DelegateSignature
struct AAI_Character_Base_Enemy_Pawn_C_AiOnDeath__DelegateSignature_Params
{
};

// Function AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C.MyUnpossesd_Event__DelegateSignature
struct AAI_Character_Base_Enemy_Pawn_C_MyUnpossesd_Event__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
