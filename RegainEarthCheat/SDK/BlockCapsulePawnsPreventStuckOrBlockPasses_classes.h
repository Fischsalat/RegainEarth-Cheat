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

// BlueprintGeneratedClass BlockCapsulePawnsPreventStuckOrBlockPasses.BlockCapsulePawnsPreventStuckOrBlockPasses_C
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class ABlockCapsulePawnsPreventStuckOrBlockPasses_C : public AActor
{
public:
	class UCapsuleComponent*                           CapsuleCollision;                                          // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlockCapsulePawnsPreventStuckOrBlockPasses.BlockCapsulePawnsPreventStuckOrBlockPasses_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
