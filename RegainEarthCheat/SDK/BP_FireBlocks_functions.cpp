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

// Function BP_FireBlocks.BP_FireBlocks_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FireBlocks_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBlocks.BP_FireBlocks_C.ReceiveBeginPlay");

	ABP_FireBlocks_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FireBlocks.BP_FireBlocks_C.ExecuteUbergraph_BP_FireBlocks
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireBlocks_C::ExecuteUbergraph_BP_FireBlocks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBlocks.BP_FireBlocks_C.ExecuteUbergraph_BP_FireBlocks");

	ABP_FireBlocks_C_ExecuteUbergraph_BP_FireBlocks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
