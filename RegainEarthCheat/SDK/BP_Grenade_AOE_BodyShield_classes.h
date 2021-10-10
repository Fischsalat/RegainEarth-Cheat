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

// BlueprintGeneratedClass BP_Grenade_AOE_BodyShield.BP_Grenade_AOE_BodyShield_C
// 0x001C (FullSize[0x0384] - InheritedSize[0x0368])
class ABP_Grenade_AOE_BodyShield_C : public ABP_Grenade_AOE_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              Shield_Health;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Shield_Duration;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Shield_Type_Color;                                         // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_AOE_BodyShield.BP_Grenade_AOE_BodyShield_C");
		return ptr;
	}



	void Server_OnActorAOEHit(class AActor* HittedActor);
	void ExecuteUbergraph_BP_Grenade_AOE_BodyShield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
