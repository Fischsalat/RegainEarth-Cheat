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

// Function WB_Background.WB_Background_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Background_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Background.WB_Background_C.Construct");

	UWB_Background_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Background.WB_Background_C.ExecuteUbergraph_WB_Background
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Background_C::ExecuteUbergraph_WB_Background(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Background.WB_Background_C.ExecuteUbergraph_WB_Background");

	UWB_Background_C_ExecuteUbergraph_WB_Background_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
