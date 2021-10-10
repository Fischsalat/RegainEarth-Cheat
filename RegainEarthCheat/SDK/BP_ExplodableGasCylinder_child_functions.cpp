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

// Function BP_ExplodableGasCylinder_child.BP_ExplodableGasCylinder_child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ExplodableGasCylinder_child_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableGasCylinder_child.BP_ExplodableGasCylinder_child_C.ReceiveBeginPlay");

	ABP_ExplodableGasCylinder_child_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ExplodableGasCylinder_child.BP_ExplodableGasCylinder_child_C.ExecuteUbergraph_BP_ExplodableGasCylinder_child
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ExplodableGasCylinder_child_C::ExecuteUbergraph_BP_ExplodableGasCylinder_child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodableGasCylinder_child.BP_ExplodableGasCylinder_child_C.ExecuteUbergraph_BP_ExplodableGasCylinder_child");

	ABP_ExplodableGasCylinder_child_C_ExecuteUbergraph_BP_ExplodableGasCylinder_child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
