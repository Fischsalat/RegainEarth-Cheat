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

// BlueprintGeneratedClass BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C
// 0x0044 (FullSize[0x0A10] - InheritedSize[0x09CC])
class ABP_TwigPeople_AI_Enemy_C : public AAI_Character_Base_Enemy_Pawn_C
{
public:
	unsigned char                                      UnknownData_FKAA[0x4];                                     // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                        ChildActorTeleportationBP_DEPR;                            // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            SphereColAIPredictPlayerRadius;                            // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpawnedSlowDownParticleEffect;                             // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             WhisperingLoopSound;                                       // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TeleportedShortTimeBefore;                                 // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VU20[0x7];                                     // 0x09F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Teleportation_C*                         ChildActorBpTeleporterReplicated;                          // 0x0A00(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayerSlowDownEffectTime;                                  // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayerSlowDownSpeedDecreaseAsFactor;                       // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C");
		return ptr;
	}



	void TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_);
	void TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine);
	void TriggerSeeTargetSpecialEvent(bool* DoneFine);
	void ReceiveBeginPlay();
	void AiOnDeath_Event();
	void TriggeredTeleportedNowTimer();
	void BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Multicast_AiSuccessfulHitPlayer(class ABP_PlayerCharacter_BPBase_C* PlayerPawn);
	void Multicast_StartAIFirstSeePlayerAnim();
	void TeleportFinishedCallback(bool FinishedFine_);
	void ExecuteUbergraph_BP_TwigPeople_AI_Enemy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
