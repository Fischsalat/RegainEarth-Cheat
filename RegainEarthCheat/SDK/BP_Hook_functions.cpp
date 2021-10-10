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

// Function BP_Hook.BP_Hook_C.DetachActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Hook_C::DetachActor(float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hook.BP_Hook_C.DetachActor");

	ABP_Hook_C_DetachActor_Params params;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hook.BP_Hook_C.RemoveFromHook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Hook_C::RemoveFromHook(float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hook.BP_Hook_C.RemoveFromHook");

	ABP_Hook_C_RemoveFromHook_Params params;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hook.BP_Hook_C.HookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Hook_C::HookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hook.BP_Hook_C.HookAction");

	ABP_Hook_C_HookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hook.BP_Hook_C.UnhookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Hook_C::UnhookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hook.BP_Hook_C.UnhookAction");

	ABP_Hook_C_UnhookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hook.BP_Hook_C.ExecuteUbergraph_BP_Hook
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Hook_C::ExecuteUbergraph_BP_Hook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hook.BP_Hook_C.ExecuteUbergraph_BP_Hook");

	ABP_Hook_C_ExecuteUbergraph_BP_Hook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
