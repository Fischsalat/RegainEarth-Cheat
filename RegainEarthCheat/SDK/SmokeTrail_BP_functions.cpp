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

// Function SmokeTrail_BP.SmokeTrail_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASmokeTrail_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeTrail_BP.SmokeTrail_BP_C.ReceiveTick");

	ASmokeTrail_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmokeTrail_BP.SmokeTrail_BP_C.DestroySmokeTrail
// (BlueprintCallable, BlueprintEvent)
void ASmokeTrail_BP_C::DestroySmokeTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeTrail_BP.SmokeTrail_BP_C.DestroySmokeTrail");

	ASmokeTrail_BP_C_DestroySmokeTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmokeTrail_BP.SmokeTrail_BP_C.ExecuteUbergraph_SmokeTrail_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASmokeTrail_BP_C::ExecuteUbergraph_SmokeTrail_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeTrail_BP.SmokeTrail_BP_C.ExecuteUbergraph_SmokeTrail_BP");

	ASmokeTrail_BP_C_ExecuteUbergraph_SmokeTrail_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
