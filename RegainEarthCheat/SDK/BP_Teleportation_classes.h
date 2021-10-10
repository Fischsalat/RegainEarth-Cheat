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

// BlueprintGeneratedClass BP_Teleportation.BP_Teleportation_C
// 0x00E3 (FullSize[0x0303] - InheritedSize[0x0220])
class ABP_Teleportation_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Spawn_Timeline_Spawn_F8B1AA384D338D4BD0359DB9EE0611F5;     // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Spawn_Timeline__Direction_F8B1AA384D338D4BD0359DB9EE0611F5; // 0x0234(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1AZ[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Spawn_Timeline;                                            // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DissolveMesh_Timeline_Dissolve_CE89E46F45D267A4C38F0194F4569CDE; // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DissolveMesh_Timeline__Direction_CE89E46F45D267A4C38F0194F4569CDE; // 0x0244(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0E20[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DissolveMesh_Timeline;                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                      TeleportingTarget;                                         // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FST_Meshes_References>               MeshesReferences;                                          // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bMakeNotHitableWhenInTeleportDissolve_;                    // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_FCTP[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Destination;                                               // 0x026C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UNiagaraComponent*                           Effect;                                                    // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TeleportToRelatedTargetInsteadDestinationLocation_;        // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_G1RI[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      OptionalRelatedTargetToTeleportTo;                         // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<ETeleportLocationsToRelatedTarget_ETeleportLocationsToRelatedTarget> RelatedTargetSpawnLocationEvaluation;                      // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UIF6[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EqsRadiusOfCircleToTest;                                   // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bEffectFollowActor_;                                       // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               bKeepSameRotation_;                                        // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               bRotateToRelatedTarget;                                    // 0x029A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_VW56[0x1];                                     // 0x029B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    NewRotation;                                               // 0x029C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                              DelayBetweenDissolveAndSpawnEffectsToHaveClientsInSync;    // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x02AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ColorBoost;                                                // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              SpeedFactorCircleParticle;                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              SpeedFactorDissolveAndSpawnEffects;                        // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Effect_Size;                                               // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Circle_Thickness;                                          // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                                    EffectRotation;                                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UNiagaraSystem*                              DissoveEffect_Choice;                                      // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UNiagaraSystem*                              SpawnEffect_Choice;                                        // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TeleportFinished;                                          // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               EffectActive_;                                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SelfDestroyAfterActorOneTeleport_;                         // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               BKP_CanNotAttackInitState;                                 // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Teleportation.BP_Teleportation_C");
		return ptr;
	}



	void DissolveMesh_Timeline__FinishedFunc();
	void DissolveMesh_Timeline__UpdateFunc();
	void Spawn_Timeline__FinishedFunc();
	void Spawn_Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void DoDissolve();
	void StartTeleportation();
	void DoSpawn();
	void ReceiveTick(float DeltaSeconds);
	void EQS_SearchBehindPlayer(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
	void ContinoueVisualsForSpawnTeleport(class AActor* TeleportingTarget);
	void StartDissolveAndTeleportaionWithAllSettings(class AActor* TeleportingTarget, bool bMakeNotHitableWhenInTeleportDissolve_, const struct FVector& Destination, bool TeleportToRelatedTargetInsteadDestinationLocation_, class AActor* OptionalRelatedTargetToTeleportTo, TEnumAsByte<ETeleportLocationsToRelatedTarget_ETeleportLocationsToRelatedTarget> RelatedTargetSpawnLocationEvaluation, float EqsRadiusOfCircleToTest, bool bEffectFollowActor_, bool bKeepSameRotation_, bool bRotateToRelatedTarget, const struct FRotator& NewRotation, const struct FLinearColor& Color, float ColorBoost, float SpeedFactorCircleParticle, float SpeedFactorDissolveEffects, float Height, float Effect_Size, float Circle_Thickness, const struct FRotator& EffectRotation, class UNiagaraSystem* DissoveEffect_Choice, class UNiagaraSystem* SpawnEffect_Choice);
	void Multicast_SetAllVisValuesSetNotHitableIfNeededAndStartDissolveEffect(class AActor* TeleportingTarget);
	void StartDissolveAndTeleportaion(class AActor* TeleportingTarget, class AActor* OptionalRelatedTargetToTeleportTo);
	void Multicast_DoTeleport(class AActor* TeleportingTarget, const struct FVector& Destination, const struct FRotator& NewRotation, bool bKeepSameRotation_);
	void EQS_SearchBehindPlayerAlternative(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
	void ExecuteUbergraph_BP_Teleportation(int EntryPoint);
	void TeleportFinished__DelegateSignature(bool FinishedFine_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
