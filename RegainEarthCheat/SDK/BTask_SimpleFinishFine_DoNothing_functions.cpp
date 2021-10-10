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

// Function BTask_SimpleFinishFine_DoNothing.BTask_SimpleFinishFine_DoNothing_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTask_SimpleFinishFine_DoNothing_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTask_SimpleFinishFine_DoNothing.BTask_SimpleFinishFine_DoNothing_C.ReceiveExecuteAI");

	UBTask_SimpleFinishFine_DoNothing_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTask_SimpleFinishFine_DoNothing.BTask_SimpleFinishFine_DoNothing_C.ExecuteUbergraph_BTask_SimpleFinishFine_DoNothing
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTask_SimpleFinishFine_DoNothing_C::ExecuteUbergraph_BTask_SimpleFinishFine_DoNothing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTask_SimpleFinishFine_DoNothing.BTask_SimpleFinishFine_DoNothing_C.ExecuteUbergraph_BTask_SimpleFinishFine_DoNothing");

	UBTask_SimpleFinishFine_DoNothing_C_ExecuteUbergraph_BTask_SimpleFinishFine_DoNothing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
