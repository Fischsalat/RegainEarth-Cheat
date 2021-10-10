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

// Function BP_Platform.BP_Platform_C.UnhookAction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Platform_C::UnhookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Platform.BP_Platform_C.UnhookAction");

	ABP_Platform_C_UnhookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Platform.BP_Platform_C.ExecuteUbergraph_BP_Platform
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Platform_C::ExecuteUbergraph_BP_Platform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Platform.BP_Platform_C.ExecuteUbergraph_BP_Platform");

	ABP_Platform_C_ExecuteUbergraph_BP_Platform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
