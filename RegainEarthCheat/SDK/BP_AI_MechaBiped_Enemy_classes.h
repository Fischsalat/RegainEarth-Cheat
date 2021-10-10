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

// BlueprintGeneratedClass BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C
// 0x014A (FullSize[0x0B16] - InheritedSize[0x09CC])
class ABP_AI_MechaBiped_Enemy_C : public AAI_Character_Base_Enemy_Pawn_C
{
public:
	unsigned char                                      UnknownData_V409[0x4];                                     // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      SK_Missile_Type1_2;                                        // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SK_Missile_Type1_3;                                        // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SK_Missile_Type1_4;                                        // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SK_Missile_Type1_5;                                        // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SpecialEventPlane;                                         // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ExplosionLocation;                                         // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ExplodableComponent_C*                   BP_ExplodableComponent;                                    // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ChildActorFlare4;                                          // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ChildActorFlare3;                                          // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ChildActorFlare2;                                          // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ChildActorFlare1;                                          // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        BarrierShield;                                             // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_MechBiped_MissileRack_Left;                             // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SK_WeaponRightMiniGun;                                     // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                BP_WeaponRightRockets;                                     // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                BP_WeaponLeftMiniGun;                                      // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              RefillShaderAnimation_Progress_17C99ECB4F4E8D7C1B7A13AAE68A0CE4; // 0x0A58(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             RefillShaderAnimation__Direction_17C99ECB4F4E8D7C1B7A13AAE68A0CE4; // 0x0A5C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UUX4[0x3];                                     // 0x0A5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RefillShaderAnimation;                                     // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShrinkDeadMech_alpha01_71D6B0434E4EB6F8186DF38CC01FA318;   // 0x0A68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ShrinkDeadMech__Direction_71D6B0434E4EB6F8186DF38CC01FA318; // 0x0A6C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0FY1[0x3];                                     // 0x0A6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ShrinkDeadMech;                                            // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    BKP_RelRot_MissleRack;                                     // 0x0A78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    BKP_RelRot_MiniGun;                                        // 0x0A84(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StartInActivatedPosition;                                  // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               StartWithActivatedBarrierShield;                           // 0x0A91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               StartWithActivatedJetFlares;                               // 0x0A92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               BarrierShieldActivated;                                    // 0x0A93(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	bool                                               JetFlaresActivated;                                        // 0x0A94(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	bool                                               MechActivated;                                             // 0x0A95(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_P2LE[0x2];                                     // 0x0A96(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultBarrierShieldWorldScale;                            // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4OTS[0x4];                                     // 0x0A9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_RocketFlare_C*>                   JetFlaresChildBPs;                                         // 0x0AA0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                                JetFlareColor;                                             // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JetFlareLightIntensMax;                                    // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JetFlarePointLightRadius;                                  // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JetFlareStartAlpha;                                        // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BKP_ActorScale;                                            // 0x0ACC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           StartMechAnim;                                             // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           IdleAnim;                                                  // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WeaponMovmentToggle;                                       // 0x0AE8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      NextRocketSlotIndex;                                       // 0x0AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UOZ1[0x6];                                     // 0x0AEA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USkeletalMeshComponent*>              RocketsSkeletalMeshArray;                                  // 0x0AF0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 Weapon2Rockets;                                            // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 Weapon1MiniGun;                                            // 0x0B01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CTL6[0x2];                                     // 0x0B02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RocketMissleDelayMin;                                      // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              RocketMissleDelayMax;                                      // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               MissleRocketsUsable_;                                      // 0x0B0C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_6BG4[0x3];                                     // 0x0B0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayBetweenShotsMultiplierWhenWeaponSlowed;               // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use2dAimOffsetForFullBodySkelMeshAimOffset;                // 0x0B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Debug_Visualize_Explosion_Radius;                          // 0x0B15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C");
		return ptr;
	}



	void OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere);
	void GetMesh(class UMeshComponent** Mesh);
	void GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection);
	void GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent);
	void GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef);
	void OnRep_MissleRocketsUsable_();
	void OnRep_MechActivated();
	void OnRep_JetFlaresActived();
	void OnRep_BarrierShieldActivated();
	void GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh);
	void UserConstructionScript();
	void ShrinkDeadMech__FinishedFunc();
	void ShrinkDeadMech__UpdateFunc();
	void RefillShaderAnimation__FinishedFunc();
	void RefillShaderAnimation__UpdateFunc();
	void FireRadialImpulse();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartAttack();
	void Start_attack_Event_manual();
	void End_Auto_Shooting_manually();
	void SwitchWeaponMovmentOn();
	void SwitchWeaponMovmentOff();
	void SetDeactivatedMechProps();
	void SetActivateBarrierShieldProps();
	void MinimizeBarrierShield();
	void Multicast_DoShutdownJetFlares();
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void Multicast_DoOnDeath(const struct FVector& BulletDirection, bool HeadShot, const struct FName& Hit_Bone_Name, const struct FVector& DamageCauseLocation, float Damage, bool HitWasRadialDamage, class UBP_DamageType_BaseREWave_C* DamageTypeRef);
	void Server_SetActivateBarrierShieldPropsNotify();
	void Server_SetDeactivateBarrierShieldNotify();
	void Server_SetDeactivateMechPropsNotify();
	void Server_SetActivatedMechPropsNotify();
	void Server_SetShutdownJetFlaresPropsNotify();
	void SetDeactivateBarrierShieldProps();
	void SetActivatedMechProps();
	void Multicast_DoDeactivateBarrierShield(float OptionalDelay_);
	void Server_SetActiveJetFlaresPropsNotify();
	void Multicast_DoStartUpFlares();
	void SetShutdownJetFlaresProps();
	void SetActiveJetFlaresProps();
	void JetFlareShutdownNow_Event_1();
	void JetFlareActiveNow_Event_1();
	void Server_ActivateMechShutDownShieldDisableJetsEnableAi();
	void Mutlicast_DoActivateMechAnimAndEnableAi();
	void ShootRocket(class USkeletalMeshComponent* Slot);
	void Multicast_ReloadRocket(class USkeletalMeshComponent* Slot);
	void Multicast_HideRocketOnShoot(class USkeletalMeshComponent* RocketSlot);
	void DriveTickWeaponPitchAndYawForSeperateWeaponMeshes();
	void DriveTickWeaponPitchAndYawWithAnimBpAimOffset2D();
	void AiOnDeath_Event_1();
	void ExecuteUbergraph_BP_AI_MechaBiped_Enemy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
