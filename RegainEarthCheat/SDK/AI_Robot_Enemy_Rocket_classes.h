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

// BlueprintGeneratedClass AI_Robot_Enemy_Rocket.AI_Robot_Enemy_Rocket_C
// 0x0008 (FullSize[0x0A78] - InheritedSize[0x0A70])
class AAI_Robot_Enemy_Rocket_C : public AAI_Robot_Enemy_Pawn_C
{
public:
	class USkeletalMeshComponent*                      Cloak;                                                     // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_Robot_Enemy_Rocket.AI_Robot_Enemy_Rocket_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
