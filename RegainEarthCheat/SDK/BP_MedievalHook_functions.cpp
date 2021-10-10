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

// Function BP_MedievalHook.BP_MedievalHook_C.DetachActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MedievalHook_C::DetachActor(float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedievalHook.BP_MedievalHook_C.DetachActor");

	ABP_MedievalHook_C_DetachActor_Params params;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MedievalHook.BP_MedievalHook_C.RemoveFromHook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MedievalHook_C::RemoveFromHook(float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedievalHook.BP_MedievalHook_C.RemoveFromHook");

	ABP_MedievalHook_C_RemoveFromHook_Params params;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MedievalHook.BP_MedievalHook_C.HookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MedievalHook_C::HookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedievalHook.BP_MedievalHook_C.HookAction");

	ABP_MedievalHook_C_HookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MedievalHook.BP_MedievalHook_C.UnhookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MedievalHook_C::UnhookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedievalHook.BP_MedievalHook_C.UnhookAction");

	ABP_MedievalHook_C_UnhookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MedievalHook.BP_MedievalHook_C.ExecuteUbergraph_BP_MedievalHook
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MedievalHook_C::ExecuteUbergraph_BP_MedievalHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedievalHook.BP_MedievalHook_C.ExecuteUbergraph_BP_MedievalHook");

	ABP_MedievalHook_C_ExecuteUbergraph_BP_MedievalHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
