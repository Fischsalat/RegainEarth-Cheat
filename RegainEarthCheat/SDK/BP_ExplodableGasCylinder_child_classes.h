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

// BlueprintGeneratedClass BP_ExplodableGasCylinder_child.BP_ExplodableGasCylinder_child_C
// 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
class ABP_ExplodableGasCylinder_child_C : public ABP_PhysicsExplodable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplodableGasCylinder_child.BP_ExplodableGasCylinder_child_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ExplodableGasCylinder_child(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
