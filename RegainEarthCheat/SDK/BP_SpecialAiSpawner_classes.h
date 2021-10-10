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

// BlueprintGeneratedClass BP_SpecialAiSpawner.BP_SpecialAiSpawner_C
// 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
class ABP_SpecialAiSpawner_C : public ABP_SpawnMarker_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              ParticleGrow_alpha_54E0F9C84669019343196B9D0F9D10C8;       // 0x0258(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ParticleGrow__Direction_54E0F9C84669019343196B9D0F9D10C8;  // 0x025C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M7HK[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ParticleGrow;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimelineMechWayDown_Alpha01_7AE2135749542A26A7C179A46ECB56EB; // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineMechWayDown__Direction_7AE2135749542A26A7C179A46ECB56EB; // 0x026C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SOCJ[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineMechWayDown;                                       // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_AI_MechaBiped_Enemy_C*                   SpawnedAI;                                                 // 0x0278(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpecialAiSpawner.BP_SpecialAiSpawner_C");
		return ptr;
	}



	void OnRep_SpawnedAI();
	void TimelineMechWayDown__FinishedFunc();
	void TimelineMechWayDown__UpdateFunc();
	void ParticleGrow__FinishedFunc();
	void ParticleGrow__UpdateFunc();
	void ReceiveBeginPlay();
	void ReverseParticleScale();
	void SpawnMechAiFlyDownInShield(float AttackDamage, float Max_Health, float Run_Speed, const struct FVector& ActorSizeScale, bool MissleRocketsUsable_, float RocketMissleDelayMin, float RocketMissleDelayMax, class UClass* AiBossClassToSpawn);
	void FlyMechDownToSpawnPoint();
	void DestroyParticles();
	void Multicast_SpawnMechAiFlyDownInShield(float AttackDamage, float Max_Health, float Run_Speed, const struct FVector& Spawn_Transform_Scale, bool MissleRocketsUsable_, float RocketMissleDelayMin, float RocketMissleDelayMax, class UClass* AiBossClassToSpawn);
	void ExecuteUbergraph_BP_SpecialAiSpawner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
