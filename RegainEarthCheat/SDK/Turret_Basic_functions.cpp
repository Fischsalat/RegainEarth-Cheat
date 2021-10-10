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

// Function Turret_Basic.Turret_Basic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATurret_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.UserConstructionScript");

	ATurret_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Turret_Basic.Turret_Basic_C.UpdateRotation
// (BlueprintCallable, BlueprintEvent)
void ATurret_Basic_C::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.UpdateRotation");

	ATurret_Basic_C_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Turret_Basic.Turret_Basic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATurret_Basic_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.ReceiveTick");

	ATurret_Basic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Turret_Basic.Turret_Basic_C.Fire
// (BlueprintCallable, BlueprintEvent)
void ATurret_Basic_C::Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.Fire");

	ATurret_Basic_C_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Turret_Basic.Turret_Basic_C.Range
// (BlueprintCallable, BlueprintEvent)
void ATurret_Basic_C::Range()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.Range");

	ATurret_Basic_C_Range_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Turret_Basic.Turret_Basic_C.DebugVisuals
// (BlueprintCallable, BlueprintEvent)
void ATurret_Basic_C::DebugVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.DebugVisuals");

	ATurret_Basic_C_DebugVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Turret_Basic.Turret_Basic_C.ExecuteUbergraph_Turret_Basic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATurret_Basic_C::ExecuteUbergraph_Turret_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turret_Basic.Turret_Basic_C.ExecuteUbergraph_Turret_Basic");

	ATurret_Basic_C_ExecuteUbergraph_Turret_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
