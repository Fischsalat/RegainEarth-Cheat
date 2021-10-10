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

// BlueprintGeneratedClass BP_JumpNavLinkTwoWay_BaseClass.BP_JumpNavLinkTwoWay_BaseClass_C
// 0x000D (FullSize[0x027D] - InheritedSize[0x0270])
class ABP_JumpNavLinkTwoWay_BaseClass_C : public ANavLinkProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              JumpDurationMultiplier;                                    // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoShortDropJumpAtDrop;                                     // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JumpNavLinkTwoWay_BaseClass.BP_JumpNavLinkTwoWay_BaseClass_C");
		return ptr;
	}



	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	void ExecuteUbergraph_BP_JumpNavLinkTwoWay_BaseClass(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
