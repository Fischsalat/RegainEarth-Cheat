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

// Function WB_LootNotify.WB_LootNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_LootNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotify.WB_LootNotify_C.Construct");

	UWB_LootNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotify.WB_LootNotify_C.StartDownAnim
// (BlueprintCallable, BlueprintEvent)
void UWB_LootNotify_C::StartDownAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotify.WB_LootNotify_C.StartDownAnim");

	UWB_LootNotify_C_StartDownAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotify.WB_LootNotify_C.ExecuteUbergraph_WB_LootNotify
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LootNotify_C::ExecuteUbergraph_WB_LootNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotify.WB_LootNotify_C.ExecuteUbergraph_WB_LootNotify");

	UWB_LootNotify_C_ExecuteUbergraph_WB_LootNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
