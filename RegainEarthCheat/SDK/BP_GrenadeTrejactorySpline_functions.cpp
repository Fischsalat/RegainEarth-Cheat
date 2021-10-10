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

// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.DestroyPredictionMeshes
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GrenadeTrejactorySpline_C::DestroyPredictionMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.DestroyPredictionMeshes");

	ABP_GrenadeTrejactorySpline_C_DestroyPredictionMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.RemoveAndRecreateSplineMeshes
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         NewLocations                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_GrenadeTrejactorySpline_C::RemoveAndRecreateSplineMeshes(TArray<struct FVector> NewLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.RemoveAndRecreateSplineMeshes");

	ABP_GrenadeTrejactorySpline_C_RemoveAndRecreateSplineMeshes_Params params;
	params.NewLocations = NewLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.AddMeshToSpline
// (BlueprintCallable, BlueprintEvent)
void ABP_GrenadeTrejactorySpline_C::AddMeshToSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.AddMeshToSpline");

	ABP_GrenadeTrejactorySpline_C_AddMeshToSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.ExecuteUbergraph_BP_GrenadeTrejactorySpline
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GrenadeTrejactorySpline_C::ExecuteUbergraph_BP_GrenadeTrejactorySpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.ExecuteUbergraph_BP_GrenadeTrejactorySpline");

	ABP_GrenadeTrejactorySpline_C_ExecuteUbergraph_BP_GrenadeTrejactorySpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
