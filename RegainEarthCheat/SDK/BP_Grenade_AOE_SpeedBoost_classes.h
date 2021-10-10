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

// BlueprintGeneratedClass BP_Grenade_AOE_SpeedBoost.BP_Grenade_AOE_SpeedBoost_C
// 0x0010 (FullSize[0x0398] - InheritedSize[0x0388])
class ABP_Grenade_AOE_SpeedBoost_C : public ABP_Grenade_StatusEffectBase_C
{
public:
	TArray<class ABP_PlayerCharacter_BPBase_C*>        HittedActors;                                              // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_AOE_SpeedBoost.BP_Grenade_AOE_SpeedBoost_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
