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

// BlueprintGeneratedClass BP_MedievalHook.BP_MedievalHook_C
// 0x0014 (FullSize[0x0264] - InheritedSize[0x0250])
class ABP_MedievalHook_C : public ABP_BaseHook_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bSnapToCargo;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ENPM[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HookRadiusAction;                                          // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YawOffsetCargo;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MedievalHook.BP_MedievalHook_C");
		return ptr;
	}



	void DetachActor(float Z);
	void RemoveFromHook(float Z);
	void HookAction();
	void UnhookAction();
	void ExecuteUbergraph_BP_MedievalHook(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
