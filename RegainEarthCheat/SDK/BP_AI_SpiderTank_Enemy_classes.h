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

// BlueprintGeneratedClass BP_AI_SpiderTank_Enemy.BP_AI_SpiderTank_Enemy_C
// 0x000A (FullSize[0x0B20] - InheritedSize[0x0B16])
class ABP_AI_SpiderTank_Enemy_C : public ABP_AI_MechaBiped_Enemy_C
{
public:
	unsigned char                                      UnknownData_2OW2[0x2];                                     // 0x0B16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_SpiderTank_Enemy.BP_AI_SpiderTank_Enemy_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AI_SpiderTank_Enemy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
