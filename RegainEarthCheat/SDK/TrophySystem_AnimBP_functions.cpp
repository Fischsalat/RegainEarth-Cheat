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

// Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UTrophySystem_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.AnimGraph");

	UTrophySystem_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TrophySystem_AnimBP_AnimGraphNode_TransitionResult_5422F28B467DBDB332BFB09A1FEB8710
// (BlueprintEvent)
void UTrophySystem_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TrophySystem_AnimBP_AnimGraphNode_TransitionResult_5422F28B467DBDB332BFB09A1FEB8710()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TrophySystem_AnimBP_AnimGraphNode_TransitionResult_5422F28B467DBDB332BFB09A1FEB8710");

	UTrophySystem_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TrophySystem_AnimBP_AnimGraphNode_TransitionResult_5422F28B467DBDB332BFB09A1FEB8710_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrophySystem_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.BlueprintUpdateAnimation");

	UTrophySystem_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.ExecuteUbergraph_TrophySystem_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrophySystem_AnimBP_C::ExecuteUbergraph_TrophySystem_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophySystem_AnimBP.TrophySystem_AnimBP_C.ExecuteUbergraph_TrophySystem_AnimBP");

	UTrophySystem_AnimBP_C_ExecuteUbergraph_TrophySystem_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
