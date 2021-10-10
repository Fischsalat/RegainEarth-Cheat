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

// BlueprintGeneratedClass Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C
// 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
class AFactory_AISpawnerAndAILogic_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Wave_Gamemode_C*                         WaveGModeRef;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    DispatcherFoundOnePawnWithTargetInSight;                   // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                TimerCheckTargetOnSight;                                   // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpecialAiSpawner_C*>              AllLevel3MechSpawnPoints;                                  // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SpecialAiSpawner_C*>              GenericEmptySpawnPointContainerArray;                      // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C");
		return ptr;
	}



	void NextWaveRoundIsStarted(int RoundNumber);
	void CheckIfOnePlayerHasTargetOnSight();
	void SetTimerCheckIfOnePlayerHasTargetOnSight();
	void TriggerFoundOnePlayerHasTargetOnSight(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* SpawnMarker);
	void FoundOnePawnWithTargetInSight_Event(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker);
	void CustomEvent(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker);
	void CustomEvent_2(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Factory_AISpawnerAndAILogic(int EntryPoint);
	void DispatcherFoundOnePawnWithTargetInSight__DelegateSignature(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
