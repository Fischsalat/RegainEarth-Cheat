#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.DestroyPredictionMeshes
struct ABP_GrenadeTrejactorySpline_C_DestroyPredictionMeshes_Params
{
};

// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.RemoveAndRecreateSplineMeshes
struct ABP_GrenadeTrejactorySpline_C_RemoveAndRecreateSplineMeshes_Params
{
	TArray<struct FVector>                             NewLocations;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.AddMeshToSpline
struct ABP_GrenadeTrejactorySpline_C_AddMeshToSpline_Params
{
};

// Function BP_GrenadeTrejactorySpline.BP_GrenadeTrejactorySpline_C.ExecuteUbergraph_BP_GrenadeTrejactorySpline
struct ABP_GrenadeTrejactorySpline_C_ExecuteUbergraph_BP_GrenadeTrejactorySpline_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
