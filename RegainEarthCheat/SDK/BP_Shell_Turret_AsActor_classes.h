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

// BlueprintGeneratedClass BP_Shell_Turret_AsActor.BP_Shell_Turret_AsActor_C
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class ABP_Shell_Turret_AsActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_Shell_Turret_C*                          BP_Shell_Turret;                                           // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shell_Turret_AsActor.BP_Shell_Turret_AsActor_C");
		return ptr;
	}



	void SpawnShell(const struct FTransform& Transform, float LifeTime, class UParticleSystem* Shell_Particle, float DelayToStartSpawn, class USoundBase* SoundHit, class USoundBase* SundHitEnd);
	void ExecuteUbergraph_BP_Shell_Turret_AsActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
