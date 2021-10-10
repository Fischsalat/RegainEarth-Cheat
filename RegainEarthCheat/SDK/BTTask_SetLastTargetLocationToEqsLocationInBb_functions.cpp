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

// Function BTTask_SetLastTargetLocationToEqsLocationInBb.BTTask_SetLastTargetLocationToEqsLocationInBb_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SetLastTargetLocationToEqsLocationInBb_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_SetLastTargetLocationToEqsLocationInBb.BTTask_SetLastTargetLocationToEqsLocationInBb_C.ReceiveExecuteAI");

	UBTTask_SetLastTargetLocationToEqsLocationInBb_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SetLastTargetLocationToEqsLocationInBb.BTTask_SetLastTargetLocationToEqsLocationInBb_C.ExecuteUbergraph_BTTask_SetLastTargetLocationToEqsLocationInBb
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SetLastTargetLocationToEqsLocationInBb_C::ExecuteUbergraph_BTTask_SetLastTargetLocationToEqsLocationInBb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_SetLastTargetLocationToEqsLocationInBb.BTTask_SetLastTargetLocationToEqsLocationInBb_C.ExecuteUbergraph_BTTask_SetLastTargetLocationToEqsLocationInBb");

	UBTTask_SetLastTargetLocationToEqsLocationInBb_C_ExecuteUbergraph_BTTask_SetLastTargetLocationToEqsLocationInBb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
