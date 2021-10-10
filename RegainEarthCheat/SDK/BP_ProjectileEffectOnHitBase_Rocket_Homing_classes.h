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

// BlueprintGeneratedClass BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C
// 0x0044 (FullSize[0x0404] - InheritedSize[0x03C0])
class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C : public ABP_ProjectileEffectOnHitBase_Rocket_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ASmokeTrail_BP_C*                            SmokeTrail;                                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      HomingTarget;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToTargetToDetonateSelf;                            // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToTargetCheckFrequency;                            // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DestinationCheckTimer;                                     // 0x03E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      RendevousPoint;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RendevousPointUpdateFrequency;                             // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SZHR[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                RendevousPointReachedCheckTimer;                           // 0x03F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              ReachedRendevousPointDistance;                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileEffectOnHitBase_Rocket_Homing.BP_ProjectileEffectOnHitBase_Rocket_Homing_C");
		return ptr;
	}



	void IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar);
	void IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar);
	void ReceiveBeginPlay();
	void CheckDistonaceToTarget();
	void Server_DetonateSelfAndTarget();
	void UpdateRendevousPoint();
	void ReceiveDestroyed();
	void Multicast_StartHomingToTarget(class AActor* HomingTarget);
	void Server_OverrideValues(float DamageExplosionRadialBaseDamage, float DamageExplosionRadialMinimalDamage, float DamageExplosionInnerRadius, float DamageExplosionOuterRadius, float ForceMultiplier);
	void ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Rocket_Homing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
