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

// Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UABP_Mecha_Biped_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.AnimGraph");

	UABP_Mecha_Biped_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.AnimNotify_footstep
// (BlueprintCallable, BlueprintEvent)
void UABP_Mecha_Biped_AnimBP_C::AnimNotify_footstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.AnimNotify_footstep");

	UABP_Mecha_Biped_AnimBP_C_AnimNotify_footstep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Mecha_Biped_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.BlueprintUpdateAnimation");

	UABP_Mecha_Biped_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.ExecuteUbergraph_ABP_Mecha_Biped_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Mecha_Biped_AnimBP_C::ExecuteUbergraph_ABP_Mecha_Biped_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Mecha_Biped_AnimBP.ABP_Mecha_Biped_AnimBP_C.ExecuteUbergraph_ABP_Mecha_Biped_AnimBP");

	UABP_Mecha_Biped_AnimBP_C_ExecuteUbergraph_ABP_Mecha_Biped_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
