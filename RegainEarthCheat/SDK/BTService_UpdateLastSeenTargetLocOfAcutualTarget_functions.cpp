// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BTService_UpdateLastSeenTargetLocOfAcutualTarget.BTService_UpdateLastSeenTargetLocOfAcutualTarget_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_UpdateLastSeenTargetLocOfAcutualTarget_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_UpdateLastSeenTargetLocOfAcutualTarget.BTService_UpdateLastSeenTargetLocOfAcutualTarget_C.ReceiveTickAI");

	UBTService_UpdateLastSeenTargetLocOfAcutualTarget_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_UpdateLastSeenTargetLocOfAcutualTarget.BTService_UpdateLastSeenTargetLocOfAcutualTarget_C.ExecuteUbergraph_BTService_UpdateLastSeenTargetLocOfAcutualTarget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_UpdateLastSeenTargetLocOfAcutualTarget_C::ExecuteUbergraph_BTService_UpdateLastSeenTargetLocOfAcutualTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_UpdateLastSeenTargetLocOfAcutualTarget.BTService_UpdateLastSeenTargetLocOfAcutualTarget_C.ExecuteUbergraph_BTService_UpdateLastSeenTargetLocOfAcutualTarget");

	UBTService_UpdateLastSeenTargetLocOfAcutualTarget_C_ExecuteUbergraph_BTService_UpdateLastSeenTargetLocOfAcutualTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
