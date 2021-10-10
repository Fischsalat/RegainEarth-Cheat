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

// BlueprintGeneratedClass BP_Grenade_AOE_HealPuls.BP_Grenade_AOE_HealPuls_C
// 0x000C (FullSize[0x0374] - InheritedSize[0x0368])
class ABP_Grenade_AOE_HealPuls_C : public ABP_Grenade_AOE_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              HealAmount;                                                // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_AOE_HealPuls.BP_Grenade_AOE_HealPuls_C");
		return ptr;
	}



	void Server_OnActorAOEHit(class AActor* HittedActor);
	void ExecuteUbergraph_BP_Grenade_AOE_HealPuls(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
