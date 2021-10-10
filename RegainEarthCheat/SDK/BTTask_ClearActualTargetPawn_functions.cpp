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

// Function BTTask_ClearActualTargetPawn.BTTask_ClearActualTargetPawn_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_ClearActualTargetPawn_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ClearActualTargetPawn.BTTask_ClearActualTargetPawn_C.ReceiveExecuteAI");

	UBTTask_ClearActualTargetPawn_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_ClearActualTargetPawn.BTTask_ClearActualTargetPawn_C.ExecuteUbergraph_BTTask_ClearActualTargetPawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_ClearActualTargetPawn_C::ExecuteUbergraph_BTTask_ClearActualTargetPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ClearActualTargetPawn.BTTask_ClearActualTargetPawn_C.ExecuteUbergraph_BTTask_ClearActualTargetPawn");

	UBTTask_ClearActualTargetPawn_C_ExecuteUbergraph_BTTask_ClearActualTargetPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
