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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C
// 0x0630 (FullSize[0x0B30] - InheritedSize[0x0500])
class ABP_PlayerCharacter_BPBase_C : public ATPS_PlayerCharacter_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_GrenadeWeapon_C*                         BP_GrenadeWeapon2;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Shield_C*                                BP_Shield;                                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StatusEffectsBaseComponent_C*            BP_StatusEffectsBaseComponent;                             // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        GrenadeThrowStartPoint;                                    // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh_CloseCombat;                                  // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CloseCombatWeapon_C*                     BP_CloseCombatWeapon;                                      // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GrenadeWeapon_C*                         BP_GrenadeWeapon1;                                         // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SpecialEventSphere;                                        // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_LaserDotMarker_Component_C*              BP_LaserDotMarker_Component;                               // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                 // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SV_DistortionSphere;                                       // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialScanComponent_C*                   BP_RadialScanComponent;                                    // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                BP_Weapon_Gun1;                                            // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                BP_Weapon_Gun2;                                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SimpleReplicatedRagdollSystem_Component_C* BP_SimpleReplicatedRagdollSystem_Component;                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            AboveHeadWidget;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UATPCCameraComponent*                        ATPCCamera;                                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                BP_Weapon_WeaponPistol;                                    // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh_Sidearm;                                      // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh_Gun2;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh_Gun1;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Footsteps;                                                 // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_GlowWeight_C79BD5914AD07B59F886018AC54AB678;    // 0x05C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_C79BD5914AD07B59F886018AC54AB678;    // 0x05C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HTFC[0x3];                                     // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StopLegGlowAnimation_GlowWeight_396602D249ABA5863F52C288E3B741A0; // 0x05D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             StopLegGlowAnimation__Direction_396602D249ABA5863F52C288E3B741A0; // 0x05D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WAY6[0x3];                                     // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          StopLegGlowAnimation;                                      // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationReviveTimeline_Rotation_59B4148B42F01416B195C8A1F1513DF2; // 0x05E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             RotationReviveTimeline__Direction_59B4148B42F01416B195C8A1F1513DF2; // 0x05E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N860[0x3];                                     // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RotationReviveTimeline;                                    // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_alpha_B47F290B4F86615B1EE9E4AF8687A452;         // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_B47F290B4F86615B1EE9E4AF8687A452;    // 0x05F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BAIX[0x3];                                     // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_AimingSpeedChange_FieldOfViewZoomTimeline_89A616254E3FD4B5A01DFEBE3F80B7A3; // 0x0600(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_AimingSpeedChange__Direction_89A616254E3FD4B5A01DFEBE3F80B7A3; // 0x0604(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NGKZ[0x3];                                     // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_AimingSpeedChange;                                // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            ActiveCamera;                                              // 0x0610(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPawnAnimations_struct                WeaponPawnAnimationList;                                   // 0x0618(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequenceBase*                           WeapAnimHolster;                                           // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HolsterAnimLength;                                         // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6MIL[0x4];                                     // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                RunningHolsterAnimMontage;                                 // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               statetesting;                                              // 0x06A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P4H8[0x7];                                     // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           WeapAnimUnHolster;                                         // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           WeapAnimReload;                                            // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWeaponInHandNextTargetState;                              // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JI9Z[0x3];                                     // 0x06B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxZoomAimWalkingSpeed;                                    // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFreeRunSpeed;                                           // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayFootsteps;                                             // 0x06C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlayFootstepsMovementRattle;                               // 0x06C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMJ0[0x2];                                     // 0x06C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Footsteps_Volume_Max_Multiplier;                           // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FieldOfViewZoomAiming;                                     // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedCustomCamFOV;                                      // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GDIJ[0x4];                                     // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                Running_Reload_Anim_Montage;                               // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Reload_Anim_Seq_length;                                    // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxADSAimWalkingSpeed;                                     // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWeaponActiveWalkpeed;                                   // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWeaponInHandWalkingSpeed;                               // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EStateOfAiming                      ActualAimingState;                                         // 0x06F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_69MN[0x3];                                     // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TMP_ActualWalkingSpead;                                    // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentBaseWalkingSpeedWithoutModifier;                    // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_76L6[0x4];                                     // 0x06FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<RegainEarth_FS_EWeaponPawnAnimationGroups, struct FName> MapWeaponToBoneActiveArmed;                                // 0x0700(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_Weapon_C*                                WeaponGun1;                                                // 0x0750(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                WeaponSidearm;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                WeaponGun2;                                                // 0x0760(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<RegainEarth_FS_EWeaponPawnAnimationGroups, struct FName> MapWeaponToBoneHolstered;                                  // 0x0768(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBlendSpaceBase*                             WeapAnimShootBS;                                           // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EStateOfWalkSpeed                   WalkRunState;                                              // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RunButtonPressed;                                          // 0x07C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AHV3[0x2];                                     // 0x07C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<RegainEarth_FS_EWeaponTypes, int>             Ammo;                                                      // 0x07C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    WeaponHolstered;                                           // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_Weapon_C*                                NextSelectedWeapon;                                        // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                TMP_NextSelectWeapon;                                      // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    WeaponUNHolstered;                                         // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DoAutofire;                                                // 0x0848(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V46M[0x7];                                     // 0x0849(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Weapon_C*                                CurrentWeapon;                                             // 0x0850(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               bDead;                                                     // 0x0858(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E276[0x7];                                     // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_InGameMenu_C*                             W_MainMenu;                                                // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerDeath;                                             // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                BleedoutTimerHandle;                                       // 0x0880(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AReviveTrigger_C*                            ReviveTrigger;                                             // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActualBleedOutTime;                                        // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxBleedOutTime;                                           // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnBleedOut;                                                // 0x0898(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z65E[0x7];                                     // 0x0899(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ReviveTimerHandle;                                         // 0x08A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_BPBase_C*                ReviveAPlayerPawnRef;                                      // 0x08A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayerNeededReviveTime;                                    // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PassedReviveActiveTime;                                    // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReviveUpdateIntervall;                                     // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Pelvis_Bone_Name;                                          // 0x08BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Capsule_Location_Start;                                    // 0x08C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Capsule_Location_End;                                      // 0x08D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BKP_CapsuleCollisionProfilname;                            // 0x08DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Physical_Animation_Profile_Name;                           // 0x08E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NDYZ[0x4];                                     // 0x08EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicsAsset*                               RagdollPhysAsset;                                          // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicsAsset*                               DefaultPhysAsset;                                          // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BKP_MeshCollisionProfilname;                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BKP_CapsuleHalfHeight;                                     // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OMLG[0x4];                                     // 0x090C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  BKP_MesghRelativeTransform;                                // 0x0910(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinDistanceValueToStartInterpolateToServerMesh;            // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RQED[0x4];                                     // 0x0944(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDamageEvent                                DamageEventDummy;                                          // 0x0948(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BeingInReviveTrigger;                                      // 0x0958(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsRevivingFromOtherPlayer;                                 // 0x0959(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8ZT5[0x2];                                     // 0x095A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  TMP_HitResult;                                             // 0x095C(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ABP_PlayerCharacter_BPBase_C*                TMP_FoundPlayerOnLineTravce;                               // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnRevivingAPlayer;                                         // 0x09F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_STYW[0x7];                                     // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                RevivingAnimMonatge;                                       // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ActionFinished;                                            // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              TMP_Start_ZRotationForRotate;                              // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrigRelZHeadWidget;                                        // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceNextWidgetSizeCalc;                                // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WeaponGun1IsArmedInHands;                                  // 0x0A1C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_B78R[0x3];                                     // 0x0A1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SizeWidgetOnDistanceCalcChange;                            // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WeaponPistolIsArmedInHands;                                // 0x0A24(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               WeaponGun2IsArmedInHands;                                  // 0x0A25(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               WeaponCloseCombatIsArmedInHands;                           // 0x0A26(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_APEG[0x1];                                     // 0x0A27(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                checkWidgetSizeTimer;                                      // 0x0A28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerUnconscious;                                       // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class APlayerController*, float>              SummarizeFriendyFireDamage;                                // 0x0A40(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CurrentSpeedMultiplierByEffect;                            // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O1WW[0x4];                                     // 0x0A94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SpeedModifyEffectEnded;                                    // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               FinishedBeginPlayFinePawn;                                 // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LobbyActive;                                               // 0x0AA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPlayerAndNotAIPawn;                                      // 0x0AAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WR4S[0x5];                                     // 0x0AAB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    PlayerCharacterFinishedBeginPlay;                          // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ForcedDancing;                                             // 0x0AC0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_K0QK[0x7];                                     // 0x0AC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                PullForceDancingTimer;                                     // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TempNewAimingPitchClamped;                                 // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_37W6[0x4];                                     // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UATPCCameraModeScript_PawnUseControllerRotation* ATPC_ModeScript;                                           // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimPitchInterpSpeed;                                       // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 StartWeaponGun1;                                           // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 StartWeaponPistol;                                         // 0x0AE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TSBN[0x2];                                     // 0x0AE6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Weapon_C*                                WeaponCloseCombat;                                         // 0x0AE8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ModelSkinSelectedIndex;                                    // 0x0AF0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V32I[0x4];                                     // 0x0AF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ThrowKeyPressedTimer;                                      // 0x0AF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               CamAtRightShoulderView_;                                   // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3SLX[0x7];                                     // 0x0B01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                HolsterWeaponPressedTimer;                                 // 0x0B08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TimeWhenPressedHolsterWeapKey;                             // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartMaxHealth;                                            // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GrenadeWeapon_C*                         CurrentGrenade;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               WasChargedJustNow;                                         // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T27L[0x3];                                     // 0x0B21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OnChargeHitEnergyChargeDelay;                              // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ChargeEnergyTimer;                                         // 0x0B28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter_BPBase.BP_PlayerCharacter_BPBase_C");
		return ptr;
	}



	void ShouldTakeChargeDamage(bool* ShouldTakeDamage, bool* OnlyAllowFullChargeHits);
	void IsElExpReady(bool* WasCharged);
	void GetShieldComponent(class UBP_Shield_C** ShieldComponent);
	void GetMeshForBodyShield(class UMeshComponent** MeshUsedForBodyShield);
	void IsProjectile(bool* IsProjectile);
	void GetSelfName(struct FName* Name);
	void IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar);
	void IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar);
	void GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim);
	void GetMeshForEffects(class UMeshComponent** Mesh);
	void GetStatusEffectComponent(bool* HasStatusEffectComponent, class UBP_StatusEffectsBaseComponent_C** StatusEffectComponentRef);
	void GetCanNotAttack(bool* CanNotAttack);
	void GetName(struct FString* Name);
	void GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_);
	void IsAtMaxHealth(bool* IsAtMaxHealth_);
	void GetIsBleedingOut(bool* IsBleedingOut);
	void GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_);
	void GetIsInteracting(bool* IsInteracting_);
	void GetIsDead(bool* IsDead_);
	void GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character);
	void GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_);
	void GetLaserDotRef(class UBP_LaserDotMarker_Component_C** LaserDotRef);
	void GetLaserDotLocation(struct FVector* Location);
	void GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh);
	void GetPlayerShootingCondition(bool* CharCanShoot);
	void GetActivePlayerCamera(class UCameraComponent** ActiveCamera);
	void PickUpItemToInventory(int CountToChangeAddOrRemove, TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool InformPlayerWithMessage, bool* WasInventoryPickupFine_, bool* InventoryWasFull_, bool* NotAbleToRemove_CountToLess_, int* NewItemCount);
	void GetInventoryItemAndCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, bool Get_also_Items_with_count_zero_, TArray<struct FInventorySlotStructB>* InventoryNOTAsReference, int* Count_of_different_Items_in_Result_Array, bool* Found_Item_, int* FoundOnIndex, struct FInventorySlotStructB* FoundInventoryItemSlotStruct, struct FItemDataStructF* FoundInventoryItemFullDetails);
	void CheckGetItemFirstTime(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> SearchItemID, bool* Is_New_);
	void GetFullInventoryWithAllItemDetails(bool Get_also_Items_with_count_zero_, TArray<TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>>* GetItemCategories, int* Count_of_different_Items_in_Result_Array, bool* Found_Items_Without_Errors_, TArray<struct FItemDataStructF>* Inventory_Full);
	void Get_Vector_and_Rot_in_View_Line(float Distance_in_front, bool* Done_fine_, struct FTransform* TransformLocVecRot);
	void SetInventoryItemCount(TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum> ItemId, int Set_to_specfic_count, bool Set_to_Max_Stack_Size, bool Only_Add_when_Item_already_in_inventory_at_least_with_0, bool PlayPickupSound_, bool Should_Player_be_informed, bool* Done_fine_);
	void GetPlayerCameraManager(class APlayerCameraManager** PlayerCamManager);
	void OnRep_CurrentGrenade();
	void OnRep_ModelSkinSelectedIndex();
	void OnRep_WeaponCloseCombatIsArmedInHands();
	void OnRep_ForcedDancing();
	void OnRep_WeaponGun2IsArmedInHands();
	void OnRep_WeaponGun1IsArmedInHands();
	void OnRep_WeaponPistolIsArmedInHands();
	void SetWeaponPawnAnimations_Locally(RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup);
	void UpdatePawnAnimWeapTypeAnimBpCam_Locally(class UWeapon_Base_Component_C* BPWeapon);
	void UpdatePawnAnimWeapTypeAnimBpCamToCurrentWeapon_Locally();
	void SetCurrentWeaponAndReplicate(class UBP_Weapon_C* CurrentWeapon);
	void SetRunStateAndReplicate(bool NewRunButtonPressedState);
	void OnRep_CurrentWeapon();
	void SwitchFreeStateWhenInExpectedState(RegainEarth_FS_EStateOfAction ExpectedActualStateToSwitchToFreeState);
	void IsInAnyAimingState(bool* bIsInAnyAimingState);
	void SwitchAimingAndReplicate(RegainEarth_FS_EStateOfAiming ActualAimingState);
	void Attach_Current_Weapon_to_Bone(TMap<RegainEarth_FS_EWeaponPawnAnimationGroups, struct FName> TargetMap, bool AttachingToHand_, class UBP_Weapon_C* WeaponToChange);
	void IsInAnyAimingStateAndArmed_(bool* bIsInAnyAimingState);
	void IsInAnyZoomedAimingStateAndArmed_(bool* bIsInAnyZOOMAimingState);
	void OnRep_ActualAimingState();
	void SetCamRotationControlsPawn(bool bSetCamRotationControlsPawn);
	void CheckPlayerInFreeActionStatePure(bool* PlayerInFreeState);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void RotationReviveTimeline__FinishedFunc();
	void RotationReviveTimeline__UpdateFunc();
	void Timeline_AimingSpeedChange__FinishedFunc();
	void Timeline_AimingSpeedChange__UpdateFunc();
	void StopLegGlowAnimation__FinishedFunc();
	void StopLegGlowAnimation__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void InpActEvt_RadialScan_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_InteractUse_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_InteractUse_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_HolsterWeapon_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_HolsterWeapon_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_AimingState_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_AimingState_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Reload_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_SelectSidearm_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SelectMainGun1_K2Node_InputActionEvent_11(const struct FKey& Key);
	void OnNotifyEnd_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName);
	void OnNotifyBegin_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName);
	void OnInterrupted_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName);
	void OnBlendOut_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName);
	void OnCompleted_0DB0B82346B0E3C77FA5EEBFD13356DF(const struct FName& NotifyName);
	void InpActEvt_CycleWeaponsUp_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_CycleWeaponsDown_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_SelectMainGun2_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SelectCloseCombat_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SwitchGrenades_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Run_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_InteractUse_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ThrowGrenade_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ThrowGrenade_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_);
	void SetToCanNotMove(bool SetToCanNotMove_);
	void SetToCanNotAttack(bool SetToCanNotAttack_);
	void SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn);
	void SetWeapon(class USkeletalMesh* WeaponMesh, class UBP_Weapon_C* WeaponComponent, bool Primary);
	void GetHit(const struct FHitResult& Hit);
	void GetBulletDirection(const struct FVector& BulletDirection, const struct FName& Bone);
	void Deactivate_Crosshair();
	void Active_Crosshair();
	void ScanWaveFoundPawnOrImportantActor(class AActor* Actor);
	void ToggleForceDancingPawn(bool SetDancing_);
	void PullTryToStartForceDancing_CalledLoopPerTimer();
	void StopForceDancing();
	void WeaponHolsteredStartDance_Event();
	void Server_SetForceDancingAndStartRepNotify(bool ForcedDancing);
	void Server_StartForceDance();
	void Multicast_StartForceDance();
	void TakeAnyDamageBP(float NewHealth, float DamageTaken, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void DoOnHealthZeroCallIsReplicated(class AActor* DamageCauser);
	void Multicast_PlayerZeroHealth(class AActor* Damage_Causer);
	void StartDamagePostEffect();
	void Multicast_StartDamagePostEffect();
	void Multicast_DoOnDeath(class AActor* Damage_Causer);
	void Multicast_ShowReviveWidget();
	void Multicast_HideReviveWidget();
	void Server_PauseBleedOutTime();
	void Server_ResumeBleedOutTime();
	void Server_PlayerDied();
	void Server_RevivedAnotherPlayerFinished();
	void Multicast_RevivedAnotherPlayerFinished();
	void BleetOutOneMoreSecond();
	void Multicast_SetBleedOutTimeInWidget(float ActualBleedout);
	void ResetGateOpen_PlayerZeroHealth();
	void Server_StartReviveOtherPlayer(class ABP_PlayerCharacter_BPBase_C* PlayerRefToRevive);
	void EnteredReviveTrigger();
	void LeavesReviveTrigger();
	void DoReviveOtherPlayerOnlyCalledOnServer();
	void Server_EndReviveOtherPlayer(bool EndedWithPositiveRevivedResult_);
	void SetReviveProgressbar_OwningClient(float NeededReviveTime, float ActualPassedReviveTime, bool ReviveOngoing_);
	void Multicast_ThisPlayerIsRevivedNow();
	void Server_ThisPlayerIsRevivedNow();
	void StartRevivingMontage();
	void Multicast_StartReviveVisualsOnClients();
	void Multicast_InterruptReviveVisualsOnClients();
	void Server_TriggerTakeAnyDamage(float Damage, class AActor* Investigator);
	void HealSomeHealth(float AmountHealth);
	void Server_HealthSomeHealth(float healthValue);
	void ActionFinished_Event();
	void SetPlayerBackFromDeadToUnconBleedOut_OnSrv();
	void Multicast_SetPlayerBackFromDeadToUnconBleedOut();
	void OnRepCPP_CurrentHealthBP();
	void SetCurrentHealthToHud();
	void SetMaxHealthInterf(float NewMaxHealth);
	void Server_SetMaxHealth(float healthValue);
	void OnRepCPP_MaxHealthBP();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnChargeHit(float ChargeAmount);
	void ChargeEnergy();
	void OnElExpCreation();
	void DoHolsteringSwitchForWeaponReplicated();
	void SetUnarmedHolsterWeaponIfWeapEquipped_Replicated();
	void InterruptReload();
	void StartUnHolsterWeapon();
	void StartHolsterWeapon();
	void CheckAimingButtonPressed();
	void Server_SetAimingState(RegainEarth_FS_EStateOfAiming NewParam);
	void Release_AimingState();
	void Multicast_Reload();
	void Server_Reload();
	void Server_StartHolsteringAnimation(bool bWeaponInHandNextTargetState);
	void Server_StartUnHolsterAnimation(bool bWeaponInHandNextTargetState);
	void Multicast_StartUnHolsterAnimation();
	void Multicast_StartHolsteringAnimation();
	void ShootCharEffectsSingleShot();
	void DoHolsterWeaponWhenFreeStateReplicated();
	void StartWepSwitchChangeCurrentWeaponAndHolster();
	void StartWepSwitchUnHolsterWeapon();
	void Multicast_SetAutofirePawn(bool AutofireState);
	void Server_SetAutofirePawn(bool AutofireState);
	void ShootCharEffectsAutofireStop();
	void ShootCharEffectsAutofireStart();
	void StartRemoteAutofirePawn();
	void Server_SetCurrentWeapon(class UBP_Weapon_C* CurrentWeapon);
	void StartSelectSidearm();
	void StartSelectMainGun1();
	void StopAllPossibleRunningActions();
	void PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID);
	void OwningClient_PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID);
	void SetArmedUnHolsterWeaponIfWeapNotEquipped_Replicate();
	void WeaponHolstered_Event();
	void Server_SetPawnAnimations();
	void Multicast_SetPawnAnimations();
	void WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef);
	void StartSelectMainGun2();
	void AttachCurrentWeaponToHandsAndStartAimingState();
	void AttachCurrentWeaponStopAimingState();
	void Server_SimpleSpawnWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID);
	void DropCurrentWeapon();
	void CheckerAutofireOn();
	void StartFireWeaponActionWithOUTTimerStart();
	void StopForceFireWeaponActionButNotPressedFireTimer();
	void WeaponUNHolstered_Event_1();
	void CustomStartReload();
	void CustomCycleDownWeapon();
	void CustomShootPressed();
	void CustomShootReleased();
	void SetNewColor(const struct FLinearColor& NewLightColor);
	void SetNewIntensity(float NewIntensity);
	void SetLaserDotLocation(const struct FVector& Location);
	void StartSelectCloseCombat();
	void ToggleCamShoulderView();
	void CheckHoldDownKeyPressed();
	void ReleaseHolsterWeaponKey();
	void ResetCamRoRightShoulderView();
	void Server_SwitchActiveGrenadeSlot();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Server_PlayFootstep(int SurfaceID, float VolumeMultiplier);
	void Multicast_PlayFootstep(int SurfaceID, float VolumeMultiplier);
	void PlayFootstepOfSimulatedProxies(int SurfaceID, float NewParam2);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void SetSpeedAndPawnRotationControl();
	void Server_ControlYaw(float Yaw);
	void Multicast_ControlRotationPitch(float AimPitchAlreadyClamped);
	void Server_SetRunState(bool NewRunState);
	void ResetPlayerActionStateAimingStateAndHolsterResetDead();
	void Server_PickItUp(class UObject* PickUpActor, class APawn* PawnWhoPicksItUp);
	void PlayFootStepLocal();
	void RunningbuttonPressedChecker();
	void StartRunningIfPossibleWithoutStartingRunButtonTimer();
	void CancelPickupAndReplicate();
	void CancelPickup();
	void CustomInputAxisTurn(float Axis_Val);
	void CustomInputAxisLookUp(float Axis_Val);
	void CustomMoveForward(float Axis_Val);
	void CustomAxisMoveForward(float AxisValue);
	void CustomAxisMoveRight(float AxisValue);
	void ControlRotationReplciationPitchPerTimer();
	void SetPlayerSpectatorCamBackToDefaultCam();
	void SetPlayerCamToSpectatorOnlyForNonLocalPlControlled();
	void Client_PickupGrenade(class UClass* PickupGrenadeType, int EquipedGrenadeAmount);
	void UpdateGrenadeAmmoInHUD(bool UpdateActiveGrenade);
	void ThrowGrenade();
	void Multicast_StartGrenadeThrowAnimation();
	void Server_StartGrenadeThrowAnimation();
	void StartGrenadeThrowAnimation();
	void StopGrenadeThrow();
	void ThrowGrenadeKeyIsPressed();
	void SetModifiedSpeed(float CurrentSpeedModifier);
	void TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings);
	void PickupGrenade(class UClass* PickupGrenadeType, int AddedAmount);
	void Client_UpdateGrenade(class UBP_GrenadeWeapon_C* GrenadeToUpdate, int GrenadeAmount, class UClass* GrenadeType, bool UpdateActiveGrenadeOnHud);
	void Server_SetNewPlayerModelSkin(int ModelSkinSelectedIndex);
	void SetNewPlayerModelSkin_Replicated(int ModelSkinSelectedIndex);
	void ActivateSelectedCustomFovFieldOfView();
	void Client_InformAboutPossesed();
	void ReceivePossessed(class AController* NewController);
	void TriggerReadAndSetNewMouseSettingsSensitivity();
	void Server_SetFinishedBeginPlayFinePawn(bool FinishedBeginPlayFine);
	void DisplayNameWidgetAndChangeSize();
	void SetLocationVelocityAndRotationEventMulticast(const struct FVector& Location, const struct FVector& MeshVelocity, const struct FRotator& Rotation);
	void Multicast_StartRagdoll();
	void Server_StartRagdoll();
	void SetRagdoll(bool SetRagdollOn_);
	void ExecuteUbergraph_BP_PlayerCharacter_BPBase(int EntryPoint);
	void PlayerCharacterFinishedBeginPlay__DelegateSignature();
	void SpeedModifyEffectEnded__DelegateSignature(class ABP_PlayerCharacter_BPBase_C* PlayerPawnRef);
	void OnPlayerUnconscious__DelegateSignature();
	void ActionFinished__DelegateSignature();
	void OnPlayerDeath__DelegateSignature();
	void WeaponUNHolstered__DelegateSignature();
	void WeaponHolstered__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
