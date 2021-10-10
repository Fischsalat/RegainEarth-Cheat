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

// Function BP_RendevousPoint.BP_RendevousPoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RendevousPoint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RendevousPoint.BP_RendevousPoint_C.ReceiveTick");

	ABP_RendevousPoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RendevousPoint.BP_RendevousPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_RendevousPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RendevousPoint.BP_RendevousPoint_C.ReceiveBeginPlay");

	ABP_RendevousPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RendevousPoint.BP_RendevousPoint_C.ExecuteUbergraph_BP_RendevousPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RendevousPoint_C::ExecuteUbergraph_BP_RendevousPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RendevousPoint.BP_RendevousPoint_C.ExecuteUbergraph_BP_RendevousPoint");

	ABP_RendevousPoint_C_ExecuteUbergraph_BP_RendevousPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
