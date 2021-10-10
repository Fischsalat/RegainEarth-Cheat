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

// BlueprintGeneratedClass BTTask_SetLastTargetLocationToEqsLocationInBb.BTTask_SetLastTargetLocationToEqsLocationInBb_C
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UBTTask_SetLastTargetLocationToEqsLocationInBb_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_SetLastTargetLocationToEqsLocationInBb.BTTask_SetLastTargetLocationToEqsLocationInBb_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SetLastTargetLocationToEqsLocationInBb(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
