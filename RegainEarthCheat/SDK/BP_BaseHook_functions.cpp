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

// Function BP_BaseHook.BP_BaseHook_C.HookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseHook_C::HookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseHook.BP_BaseHook_C.HookAction");

	ABP_BaseHook_C_HookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseHook.BP_BaseHook_C.UnhookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseHook_C::UnhookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseHook.BP_BaseHook_C.UnhookAction");

	ABP_BaseHook_C_UnhookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseHook.BP_BaseHook_C.LadleClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseHook_C::LadleClose(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseHook.BP_BaseHook_C.LadleClose");

	ABP_BaseHook_C_LadleClose_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseHook.BP_BaseHook_C.LadleOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseHook_C::LadleOpen(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseHook.BP_BaseHook_C.LadleOpen");

	ABP_BaseHook_C_LadleOpen_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseHook.BP_BaseHook_C.ExecuteUbergraph_BP_BaseHook
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseHook_C::ExecuteUbergraph_BP_BaseHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseHook.BP_BaseHook_C.ExecuteUbergraph_BP_BaseHook");

	ABP_BaseHook_C_ExecuteUbergraph_BP_BaseHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
