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

// BlueprintGeneratedClass BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C
// 0x000A (FullSize[0x0B20] - InheritedSize[0x0B16])
class ABP_AI_MechaLightBiped_Enemy_Child_C : public ABP_AI_MechaBiped_Enemy_C
{
public:
	unsigned char                                      UnknownData_KUED[0x2];                                     // 0x0B16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AI_MechaLightBiped_Enemy_Child(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
