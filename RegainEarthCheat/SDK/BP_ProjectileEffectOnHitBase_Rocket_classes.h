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

// BlueprintGeneratedClass BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C
// 0x00E7 (FullSize[0x03C0] - InheritedSize[0x02D9])
class ABP_ProjectileEffectOnHitBase_Rocket_C : public ABP_ProjectileEffectOnHitBase_C
{
public:
	unsigned char                                      UnknownData_S47C[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_ExplodableComponent_C*                   BP_ExplodableComponent;                                    // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Missile;                                                   // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                       RadialForceComponent;                                      // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlastRadialImpulseOnExplosion;                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ND2L[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PhysImpulseRadius;                                         // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysImpulseStrength;                                       // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToTriggerExplode;                                    // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToGetPierced;                                        // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionOuterRadius;                                // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionInnerRadius;                                // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialMinimalDamage;                        // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageExplosionRadialBaseDamage;                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAfterExplosiveGotPiercedTillExplosionStarts;           // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayWhenExplodeTriggersUntilExplosionStarts;              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplosionEffectScale;                                      // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseOptionalCustomExplosionLocation;                        // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DoOptionalSprayShellFragmentsAsProjectiles_;               // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E7OR[0x6];                                     // 0x0332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  PiercedStateSound;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ExplosionDeathEffect;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDestructionSystemDebrisActorProperties> DebrisMeshesSpawnOnExplode;                                // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSDestructionDebrisCollisionSpawnImpulseProps DebrisDefaultsSpawnImpulseCollision;                       // 0x0358(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECanBeCharacterBase>            CanCharacterStepUpDebris;                                  // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RR3F[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             NewVar_3;                                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinHitsToExplodeRegardlessOfDamge;                         // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Debug_Visualize_Explosion_Radius;                          // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GNN8[0x3];                                     // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 InstigatedByTemp;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileEffectOnHitBase_Rocket.BP_ProjectileEffectOnHitBase_Rocket_C");
		return ptr;
	}



	void OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere);
	void GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef);
	void GetMesh(class UMeshComponent** Mesh);
	void GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection);
	void GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent);
	void IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar);
	void IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar);
	void UserConstructionScript();
	void TriggerProjectileCustomHitEvent(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void FireRadialImpulse();
	void Multicast_EndVisualizeToAll();
	void DestroyedExplodeFired_Event();
	void ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
