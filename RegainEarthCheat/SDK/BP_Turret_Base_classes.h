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

// BlueprintGeneratedClass BP_Turret_Base.BP_Turret_Base_C
// 0x0069 (FullSize[0x0451] - InheritedSize[0x03E8])
class ABP_Turret_Base_C : public ABP_PhysicsExplodable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCapsuleComponent*                           TurretGlobalCollision;                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LOSTraceStartLocation;                                     // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            SphereRange;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldAttackPlayers;                                       // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldAttackFoes;                                          // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETraceTypeQuery>                LineOfSightTraceChannel;                                   // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A8J5[0x1];                                     // 0x040B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireRateDelayBetweenShots;                                 // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                              FilteredOverlappingActors;                                 // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                SphereDetectionLoopTimer;                                  // 0x0420(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              SphereDetectionLoopFrequency;                              // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DetectionAndRangeSphereRadius;                             // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldPrintDebugMessages;                                  // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6467[0x7];                                     // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              UncheckedActualOverlappingActors;                          // 0x0438(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              MaxHealth;                                                 // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmountPerGivenHit;                                   // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsOnPause_;                                                // 0x0450(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Turret_Base.BP_Turret_Base_C");
		return ptr;
	}



	void IsProjectile(bool* IsProjectile);
	void IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar);
	void IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar);
	void GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim);
	void GetSelfName(struct FName* Name);
	void OnRep_IsOnPause_();
	void GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_);
	void UserConstructionScript();
	void StartSphereDetectionLoop();
	void CheckForOverlappingActors();
	void BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CheckIsDetectedActorAttackable(class AActor* ActorToCheck, bool WasDetectedViaOverlapBeginEvent);
	void OnActorDetectedAndAttackableAndInLOS(class AActor* DetectedActor);
	void CheckIsDetectedActorInLOS(class AActor* ActorToCheck);
	void OnActorLeftRange(class AActor* LeftActor);
	void BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SynchonizeOverlappedActors();
	void StopEventTickGateAndShutDownCompletly();
	void StartEventTickGateAndStartFullFunctionsAgain();
	void Server_StopEventTickGateAndShutDownCompletlyAndReplicate();
	void Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate();
	void ExecuteUbergraph_BP_Turret_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
