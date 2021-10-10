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

// BlueprintGeneratedClass BP_ExplodableComponent.BP_ExplodableComponent_C
// 0x0198 (FullSize[0x0248] - InheritedSize[0x00B0])
class UBP_ExplodableComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             PunctureVentingAudioComponent;                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  PunctureSound;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UArrowComponent*                             PiercedFireDirectionArrow;                                 // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              MeshComponent;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToTriggerExplode;                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentDamageAmount;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPiercedAlready_;                                         // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8FEI[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinHitsToExplodeRegardlessOfDamge;                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToTriggerGotPierced;                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsVentingFireAlready_;                                     // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsExplodedAlready_;                                        // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HUIO[0x2];                                     // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Explosion_Angle_Variance_VFX;                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoOptionalSprayShellFragmentsAsProjectiles_;               // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9MP7[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SprayShellFragmentsRandomAngle;                            // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SprayShellFragmentsCompleted;                              // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_978L[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageCounterDuration;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleFX;                                                   // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceMultiplier;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DPMJ[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 ExplodingActorAsDamageInvestigator;                        // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LastDamageCauserToStartDamageEffect;                       // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      OptionalSprayShellFragmentsAsProjectiles;                  // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialBaseDamage;                           // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialMinimalDamage;                        // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionInnerRadius;                                // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionOuterRadius;                                // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ExplosionEffect;                                           // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplosionEffectScale;                                      // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAfterExplosiveGotPiercedTillExplosionStarts;           // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VentFireParticle;                                          // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayWhenExplodeTriggersUntilExplosionStarts;              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1TF6[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    PiercedFired;                                              // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DestroyedExplodeFired;                                     // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDestructionSystemDebrisActorProperties> DebrisMeshesSpawnOnExplode;                                // 0x0178(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpDebris;                                  // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O1EG[0x7];                                     // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  DebrisSpawnBaseTransform;                                  // 0x0190(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FSDestructionDebrisCollisionSpawnImpulseProps DebrisDefaultsSpawnImpulseCollision;                       // 0x01C0(0x0048) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseOptionalCustomExplosionLocation_;                       // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZOX8[0x7];                                     // 0x0209(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             OptionalCustomExplosionLocation;                           // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountOfHits;                                               // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DamageLocation;                                            // 0x021C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TMP_OnGroundResult;                                        // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DoInstantExplodeWhenHitByFireExplosiveDamage_;             // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MeshVisibilityAffectsChildren;                             // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DebugVisualizeExplosionRadius;                             // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_898T[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            VisualizeOuterExplosiveRadius;                             // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ExplosionSound;                                            // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Hit_Component;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplodableComponent.BP_ExplodableComponent_C");
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
	void SetDebrisActorCollision(class AActor* Actor, class UPrimitiveComponent* StaticMeshComponent, bool EnableCollision, bool SetPawnToCollisionIgnore, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOn);
	void SetDebrisActorProperties(class AActor* Actor, class UStaticMeshComponent* StaticMeshComponent, class UStaticMesh* StaticMesh, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, const struct FVector& Impulse, float DeathTimer, bool bPhysicsEnabled, bool bCollisionEnabled, bool bCastShadows, bool SetPawnToCollisionIgnore, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOn);
	void SpawnDebrisActor(const struct FDestructionSystemDebrisActorProperties& DebrisProps, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpOnDebris);
	void ExplodableGotDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& DamageLocation, const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, class UPrimitiveComponent* HitComponent);
	void SetAllExplodableConstructSettings(float DamageToTriggerExplode, float DamageToTriggerGotPierced, float DamageExplosionRadialBaseDamage, float DamageExplosionRadialMinimalDamage, float DamageExplosionInnerRadius, float DamageExplosionOuterRadius, bool DoOptionalSprayShellFragmentsAsProjectiles_, class USoundBase* PunctureSound, class UParticleSystem* ExplosionEffect, float ExplosionEffectScale, float TimeAfterExplosiveGotPiercedTillExplosionStarts, float DelayWhenExplodeTriggersUntilExplosionStarts, TArray<struct FDestructionSystemDebrisActorProperties>* DebrisMeshesSpawnOnExplode, const struct FSDestructionDebrisCollisionSpawnImpulseProps& DebrisDefaultsSpawnImpulseCollision, TEnumAsByte<Engine_ECanBeCharacterBase> CanCharacterStepUpDebris, const struct FTransform& DebrisSpawnBaseTransform, bool UseOptionalCustomExplosionLocation_, class USceneComponent* OptionalCustomExplosionLocation, int MinHitsToExplodeRegardlessOfDamge, bool DebugVisualizeExplosionRadius);
	void ReceiveBeginPlay();
	void ExplodeNow();
	void Multicast_TriggerGotPierced(const struct FVector& DamageLocation);
	void Kill();
	void Multicast_StartExplosion(bool OnGround_, const struct FRotator& Rotation, const struct FVector& DamageLocation, const struct FVector& ImpactNormal, const struct FVector& ImpactPoint);
	void Multicast_PiercedVentFireStarts(const struct FVector& Location);
	void SetExplodeAndStart();
	void SetMeshComponentGetInfluencedByRadialImpulseOnOff(class UStaticMeshComponent* Mesh, bool IgnoreRedialImpule_, float Delay);
	void StartVentPierceFireParticleAndAddForce_CalledByMulticast();
	void ExecuteUbergraph_BP_ExplodableComponent(int EntryPoint);
	void DestroyedExplodeFired__DelegateSignature();
	void PiercedFired__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
