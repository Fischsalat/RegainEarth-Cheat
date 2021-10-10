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

// Function BP_Clip.BP_Clip_C.TraceLengthHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Clip_C::TraceLengthHeight(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.TraceLengthHeight");

	ABP_Clip_C_TraceLengthHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_Clip.BP_Clip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Clip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.UserConstructionScript");

	ABP_Clip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Clip.BP_Clip_C.SmoothScale__FinishedFunc
// (BlueprintEvent)
void ABP_Clip_C::SmoothScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.SmoothScale__FinishedFunc");

	ABP_Clip_C_SmoothScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Clip.BP_Clip_C.SmoothScale__UpdateFunc
// (BlueprintEvent)
void ABP_Clip_C::SmoothScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.SmoothScale__UpdateFunc");

	ABP_Clip_C_SmoothScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Clip.BP_Clip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Clip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.ReceiveBeginPlay");

	ABP_Clip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Clip.BP_Clip_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_28_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Clip_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_28_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_28_ComponentHitSignature__DelegateSignature");

	ABP_Clip_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_28_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Clip.BP_Clip_C.ResetTimerForSound
// (BlueprintCallable, BlueprintEvent)
void ABP_Clip_C::ResetTimerForSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.ResetTimerForSound");

	ABP_Clip_C_ResetTimerForSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Clip.BP_Clip_C.ExecuteUbergraph_BP_Clip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Clip_C::ExecuteUbergraph_BP_Clip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clip.BP_Clip_C.ExecuteUbergraph_BP_Clip");

	ABP_Clip_C_ExecuteUbergraph_BP_Clip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
