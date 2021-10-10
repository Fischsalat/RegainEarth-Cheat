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

// BlueprintGeneratedClass BP_PhysicsExplodable.BP_PhysicsExplodable_C
// 0x0154 (FullSize[0x03E8] - InheritedSize[0x0294])
class ABP_PhysicsExplodable_C : public ABP_PhysicsEnabledStaticMesh_C
{
public:
	unsigned char                                      UnknownData_YI15[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBillboardComponent*                         OptionalCustomExplosionLocation;                           // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         SpawnDebrisLocationBase;                                   // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioComponent;                                            // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                       RadialForce;                                               // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             PiercedFireDirectionArrow;                                 // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ExplodableComponent_C*                   BP_ExplodableComponent;                                    // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  PiercedFireDirectionTransform;                             // 0x02D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               BlastRadialImpulseOnExplosion;                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DebugShowRadiusImpulse;                                    // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DebugShowRadiusExplodeDamage;                              // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V9AR[0x5];                                     // 0x0303(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URadialForceComponent*                       RadialForceComponent;                                      // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysImpulseRadius;                                         // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysImpulseStrength;                                       // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoOptionalSprayShellFragmentsAsProjectiles_;               // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1O90[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageToGetPierced;                                        // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToTriggerExplode;                                    // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinHitsToExplodeRegardlessOfDamge;                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              DamageExplosionRadialBaseDamage;                           // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialMinimalDamage;                        // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionInnerRadius;                                // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionOuterRadius;                                // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  PiercedStateSound;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplosionEffectScale;                                      // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAfterExplosiveGotPiercedTillExplosionStarts;           // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayWhenExplodeTriggersUntilExplosionStarts;              // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G73D[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ExplosionDeathEffect;                                      // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDestructionSystemDebrisActorProperties> DebrisMeshesSpawnOnExplode;                                // 0x0358(0x0010) (Edit, BlueprintVisible)
	struct FSDestructionDebrisCollisionSpawnImpulseProps DebrisDefaultsSpawnImpulseCollision;                       // 0x0368(0x0048) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpDebris;                                  // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseOptionalCustomExplosionLocation;                        // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsExplodedAlready_;                                        // 0x03B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8L8Q[0x5];                                     // 0x03B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USceneComponent*>                     AllSceneComponents;                                        // 0x03B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>                 TMP_SkelMeshAndMeshComponents;                             // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               DebugVisualizeExplosionRadius;                             // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YWCF[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            VisualizeOuterExplosiveRadius;                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhysicsExplodable.BP_PhysicsExplodable_C");
		return ptr;
	}



	void GetIsInteracting(bool* IsInteracting_);
	void GetIsDead(bool* IsDead_);
	void GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character);
	void GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_);
	void GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_);
	void GetIsBleedingOut(bool* IsBleedingOut);
	void IsAtMaxHealth(bool* IsAtMaxHealth_);
	void GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_);
	void GetName(struct FString* Name);
	void GetCanNotAttack(bool* CanNotAttack);
	void OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere);
	void GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef);
	void GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent);
	void GetMesh(class UMeshComponent** Mesh);
	void GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection);
	void UserConstructionScript();
	void PlayFootStepLocal();
	void HealSomeHealth(float AmountHealth);
	void ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_);
	void SetToCanNotMove(bool SetToCanNotMove_);
	void SetToCanNotAttack(bool SetToCanNotAttack_);
	void CancelPickupAndReplicate();
	void ToggleForceDancingPawn(bool SetDancing_);
	void SetMaxHealthInterf(float NewMaxHealth);
	void ReceiveBeginPlay();
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void FireRadialImpulse();
	void DestroyedExplodeFired_Event();
	void PiercedFired_Event();
	void SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_PhysicsExplodable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
