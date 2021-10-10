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

// BlueprintGeneratedClass BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C
// 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
class ABP_Grenade_Spawn_Base_C : public ABP_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UClass*                                      ActorToSpawn;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     SpawnProjectileVisuals;                                    // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C");
		return ptr;
	}



	void TriggerEffect();
	void Server_SpawnActor();
	void Multicast_CreateSpawnVisuals();
	void ExecuteUbergraph_BP_Grenade_Spawn_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
