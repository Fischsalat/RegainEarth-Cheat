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

// BlueprintGeneratedClass BTask_MoveToActorOrToSpot.BTask_MoveToActorOrToSpot_C
// 0x0084 (FullSize[0x012C] - InheritedSize[0x00A8])
class UBTask_MoveToActorOrToSpot_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TEnumAsByte<PossibleTargetSpots_EPossibleTargetSpots> TargetLocationOrTargetActor;                               // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TNIY[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       AI_Pawn;                                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopOnOverlap;                                             // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AFIK[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AcceptanceRadiusIfNotFromAIPawn;                           // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastSeenRadiusVar;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseCustomBbKeyInsteadReadLastKnownLocationOrTargetActorFromBB; // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0EGE[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      OptionalCustomBlackBoardKeyTargetOrLocation;               // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     ActualTargetActorLoc;                                      // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VN7S[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerKeepShootingRange;                                    // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAITask_MoveTo*                              AIMoveToRef;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               AIController;                                              // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TmpCalcedTargetLocation;                                   // 0x0120(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTask_MoveToActorOrToSpot.BTask_MoveToActorOrToSpot_C");
		return ptr;
	}



	void OnMoveFinished_D0CE811F4519F02A5BA199A13B9A788E(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_D0CE811F4519F02A5BA199A13B9A788E();
	void OnMoveFinished_D389A6164133656BA45987A1B2E77685(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_D389A6164133656BA45987A1B2E77685();
	void OnMoveFinished_6E4C896C4CA8A4F980B8078E3DFCC88C(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_6E4C896C4CA8A4F980B8078E3DFCC88C();
	void OnMoveFinished_C7D657934C602478669289AE434E2ABE(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_C7D657934C602478669289AE434E2ABE();
	void OnMoveFinished_6B3DE54E4DC9D88AC4AE2992BD8990A4(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_6B3DE54E4DC9D88AC4AE2992BD8990A4();
	void OnMoveFinished_5BD6E2574B2E4095DCADB9AAECB0E733(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_5BD6E2574B2E4095DCADB9AAECB0E733();
	void OnMoveFinished_338080DF4C6DBC2E43CBB590C39F1024(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_338080DF4C6DBC2E43CBB590C39F1024();
	void OnMoveFinished_582D081D4139C3262D8A42B7698CCA1C(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_582D081D4139C3262D8A42B7698CCA1C();
	void OnMoveFinished_FA4F63524FB8B9C8A559B4AC09461BC7(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_FA4F63524FB8B9C8A559B4AC09461BC7();
	void CheckNewLocationInShootingRangeAndMoveTo();
	void ReceiveAbort(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTask_MoveToActorOrToSpot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
