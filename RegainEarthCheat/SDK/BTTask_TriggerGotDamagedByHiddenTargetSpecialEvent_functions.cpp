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

// Function BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent.BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent.BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C.ReceiveExecuteAI");

	UBTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent.BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C.GotDamagedByHiddenTargetSpecialEventFinished_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedFine_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C::GotDamagedByHiddenTargetSpecialEventFinished_Event_1(bool FinishedFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent.BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C.GotDamagedByHiddenTargetSpecialEventFinished_Event_1");

	UBTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C_GotDamagedByHiddenTargetSpecialEventFinished_Event_1_Params params;
	params.FinishedFine_ = FinishedFine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent.BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C.ExecuteUbergraph_BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C::ExecuteUbergraph_BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent.BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C.ExecuteUbergraph_BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent");

	UBTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_C_ExecuteUbergraph_BTTask_TriggerGotDamagedByHiddenTargetSpecialEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
