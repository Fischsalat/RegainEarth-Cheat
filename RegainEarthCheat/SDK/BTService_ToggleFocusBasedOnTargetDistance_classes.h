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

// BlueprintGeneratedClass BTService_ToggleFocusBasedOnTargetDistance.BTService_ToggleFocusBasedOnTargetDistance_C
// 0x0034 (FullSize[0x00CC] - InheritedSize[0x0098])
class UBTService_ToggleFocusBasedOnTargetDistance_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                      TargetActor;                                               // 0x00A0(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceToFocus;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_ToggleFocusBasedOnTargetDistance.BTService_ToggleFocusBasedOnTargetDistance_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_ToggleFocusBasedOnTargetDistance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
