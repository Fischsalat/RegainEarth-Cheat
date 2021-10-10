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

// BlueprintGeneratedClass BP_Platform.BP_Platform_C
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class ABP_Platform_C : public ABP_BaseHook_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Platform.BP_Platform_C");
		return ptr;
	}



	void UnhookAction();
	void ExecuteUbergraph_BP_Platform(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
