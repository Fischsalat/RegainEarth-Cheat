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

// BlueprintGeneratedClass BP_CloseCombatWeapon.BP_CloseCombatWeapon_C
// 0x0132 (FullSize[0x07A0] - InheritedSize[0x066E])
class UBP_CloseCombatWeapon_C : public UBP_Weapon_C
{
public:
	unsigned char                                      UnknownData_F2C9[0x2];                                     // 0x066E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<float>                                      DamagePerChargeLevel;                                      // 0x0678(0x0010) (Edit, BlueprintVisible)
	bool                                               IsCharging;                                                // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KE87[0x3];                                     // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentChargeLevel;                                        // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      ChargeDurationUntilNextLevel;                              // 0x0690(0x0010) (Edit, BlueprintVisible)
	class AActor*                                      WeaponHolsteredRef;                                        // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      WeaponInHandRef;                                           // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RelativeSwingHitCheckOffset;                               // 0x06B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SwingHitSphereCheckRadius;                                 // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NormalDamageType;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FullChargedDamageType;                                     // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    CurrentChargeEffect;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ChargeLevelUpEffect;                                       // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             DefaultChargeEffect;                                       // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             FullChargeEffect;                                          // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                                  DefaultChargeSoundLoop;                                    // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                                  DefaultBaseSoundLoop;                                      // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                                  ChargeLevelUpSFX;                                          // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                                  FullChargeLevelUpSFX;                                      // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                                  FullChargeSoundLoop;                                       // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                     ChargeSoundLoops;                                          // 0x0718(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                              AlreadyHitActors;                                          // 0x0728(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FTimerHandle                                ChargingRepeatTimerHandle;                                 // 0x0738(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimeOfChargeTimer;                                         // 0x0740(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentChargedTime;                                        // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QYDB[0x4];                                     // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPrimitiveComponent*>                 TMP_SkelMeshAndMeshComponents;                             // 0x0750(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                              DissolveMeshTick;                                          // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DissolveMeshAlphaState;                                    // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DissolveDriverTimer;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              DissolveMeshSpeed;                                         // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OQ3J[0x4];                                     // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentChargeAnimation;                                    // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentChargeAnimationStartTime;                           // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DG2M[0x4];                                     // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                AutomaticReleaseTimer;                                     // 0x0788(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCurrentlyFullChargeSwinging;                             // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XNRX[0x3];                                     // 0x0791(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SwingDuration;                                             // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                SetIsSwiningingFalseTimer;                                 // 0x0798(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CloseCombatWeapon.BP_CloseCombatWeapon_C");
		return ptr;
	}



	void DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer(float ParameterValue, class UPrimitiveComponent* Object, class UMeshComponent** AsMesh_Component);
	void CheckWeaponReloadPossible(bool* Possible_);
	void Is_Allowed_to_Throw_Grenade(bool* Success);
	void OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName);
	void OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName);
	void OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName);
	void OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName);
	void OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void Server_OnChargeLevelUp(int ReachedChargeLevel);
	void CheckForHittedActors();
	void Server_OnActorHitWithSwing(const struct FHitResult& HitRef, int ChargedLevel);
	void ShootPressed();
	void ShootReleased();
	void Multicast_ChargingStartEffects();
	void Multicast_OnChargeLevelUpEffects(int ReachedChargeLevel);
	void Multicast_ChargeReleaseEffects(int CurrentChargedLevel);
	void Server_ChargingStartEffects();
	void Server_ChargeRelease(int CurrentChargedLevel);
	void Server_DestroyChargeEffects();
	void Multicast_DestroyChargeEffects();
	void RepeatChargingPose();
	void StopChargingPoseAnimation();
	void AddChargedTime();
	void Multicast_DoHitVisual(class UClass* DamageType, const struct FVector& Location, class AActor* HitActor, bool WasFullChargedHit_);
	void DissolveMesh(class AActor* Actor, const struct FVector& DissolveColor);
	void DriveDissolve();
	void SetCollsionOff(TArray<class UPrimitiveComponent*>* TMP_SkelMeshAndMeshComponents);
	void ResetDoOnceSetCollisionOff();
	void ForceReleaseChargedCloseCombat();
	void StartExpandToFullSize();
	void StartShrinkToSmallSize();
	void SetIsNotFullChargeSwining();
	void ExecuteUbergraph_BP_CloseCombatWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
