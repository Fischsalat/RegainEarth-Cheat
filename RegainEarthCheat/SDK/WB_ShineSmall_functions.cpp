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

// Function WB_ShineSmall.WB_ShineSmall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ShineSmall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineSmall.WB_ShineSmall_C.Construct");

	UWB_ShineSmall_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShineSmall.WB_ShineSmall_C.ExecuteUbergraph_WB_ShineSmall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShineSmall_C::ExecuteUbergraph_WB_ShineSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineSmall.WB_ShineSmall_C.ExecuteUbergraph_WB_ShineSmall");

	UWB_ShineSmall_C_ExecuteUbergraph_WB_ShineSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
