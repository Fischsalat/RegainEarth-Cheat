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

// Function BP_Magnet.BP_Magnet_C.UnhookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Magnet_C::UnhookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Magnet.BP_Magnet_C.UnhookAction");

	ABP_Magnet_C_UnhookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Magnet.BP_Magnet_C.HookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Magnet_C::HookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Magnet.BP_Magnet_C.HookAction");

	ABP_Magnet_C_HookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Magnet.BP_Magnet_C.ExecuteUbergraph_BP_Magnet
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Magnet_C::ExecuteUbergraph_BP_Magnet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Magnet.BP_Magnet_C.ExecuteUbergraph_BP_Magnet");

	ABP_Magnet_C_ExecuteUbergraph_BP_Magnet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
