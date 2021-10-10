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
// Parameters
//---------------------------------------------------------------------------

// Function BTTask_TriggerSeeTargetSpecialEvent.BTTask_TriggerSeeTargetSpecialEvent_C.ReceiveExecuteAI
struct UBTTask_TriggerSeeTargetSpecialEvent_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_TriggerSeeTargetSpecialEvent.BTTask_TriggerSeeTargetSpecialEvent_C.SeeTargetSpecialEventFinished_Event
struct UBTTask_TriggerSeeTargetSpecialEvent_C_SeeTargetSpecialEventFinished_Event_Params
{
	bool                                               FinishedFine_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_TriggerSeeTargetSpecialEvent.BTTask_TriggerSeeTargetSpecialEvent_C.ExecuteUbergraph_BTTask_TriggerSeeTargetSpecialEvent
struct UBTTask_TriggerSeeTargetSpecialEvent_C_ExecuteUbergraph_BTTask_TriggerSeeTargetSpecialEvent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
