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

// Function BP_DoubleLadle.BP_DoubleLadle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoubleLadle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleLadle.BP_DoubleLadle_C.ReceiveTick");

	ABP_DoubleLadle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DoubleLadle.BP_DoubleLadle_C.LadleOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoubleLadle_C::LadleOpen(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleLadle.BP_DoubleLadle_C.LadleOpen");

	ABP_DoubleLadle_C_LadleOpen_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DoubleLadle.BP_DoubleLadle_C.LadleClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoubleLadle_C::LadleClose(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleLadle.BP_DoubleLadle_C.LadleClose");

	ABP_DoubleLadle_C_LadleClose_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DoubleLadle.BP_DoubleLadle_C.ExecuteUbergraph_BP_DoubleLadle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoubleLadle_C::ExecuteUbergraph_BP_DoubleLadle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleLadle.BP_DoubleLadle_C.ExecuteUbergraph_BP_DoubleLadle");

	ABP_DoubleLadle_C_ExecuteUbergraph_BP_DoubleLadle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
