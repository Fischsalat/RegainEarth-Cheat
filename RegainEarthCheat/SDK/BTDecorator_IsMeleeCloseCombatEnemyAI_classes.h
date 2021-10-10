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

// BlueprintGeneratedClass BTDecorator_IsMeleeCloseCombatEnemyAI.BTDecorator_IsMeleeCloseCombatEnemyAI_C
// 0x0001 (FullSize[0x00A1] - InheritedSize[0x00A0])
class UBTDecorator_IsMeleeCloseCombatEnemyAI_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               TrueIfMeleeCloseCombatEnemy_;                              // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDecorator_IsMeleeCloseCombatEnemyAI.BTDecorator_IsMeleeCloseCombatEnemyAI_C");
		return ptr;
	}



	bool PerformConditionCheck(class AActor* OwnerActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
