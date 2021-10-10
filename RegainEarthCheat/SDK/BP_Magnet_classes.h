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

// BlueprintGeneratedClass BP_Magnet.BP_Magnet_C
// 0x0011 (FullSize[0x0261] - InheritedSize[0x0250])
class ABP_Magnet_C : public ABP_BaseHook_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               bAttached;                                                 // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Magnet.BP_Magnet_C");
		return ptr;
	}



	void UnhookAction();
	void HookAction();
	void ExecuteUbergraph_BP_Magnet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
