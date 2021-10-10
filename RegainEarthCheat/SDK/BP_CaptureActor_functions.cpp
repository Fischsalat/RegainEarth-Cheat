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

// Function BP_CaptureActor.BP_CaptureActor_C.FOV_Anim__FinishedFunc
// (BlueprintEvent)
void ABP_CaptureActor_C::FOV_Anim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureActor.BP_CaptureActor_C.FOV_Anim__FinishedFunc");

	ABP_CaptureActor_C_FOV_Anim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CaptureActor.BP_CaptureActor_C.FOV_Anim__UpdateFunc
// (BlueprintEvent)
void ABP_CaptureActor_C::FOV_Anim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureActor.BP_CaptureActor_C.FOV_Anim__UpdateFunc");

	ABP_CaptureActor_C_FOV_Anim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CaptureActor.BP_CaptureActor_C.UpdateCaptureCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CaptureActor_C::UpdateCaptureCharacter(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureActor.BP_CaptureActor_C.UpdateCaptureCharacter");

	ABP_CaptureActor_C_UpdateCaptureCharacter_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CaptureActor.BP_CaptureActor_C.ExecuteUbergraph_BP_CaptureActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CaptureActor_C::ExecuteUbergraph_BP_CaptureActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureActor.BP_CaptureActor_C.ExecuteUbergraph_BP_CaptureActor");

	ABP_CaptureActor_C_ExecuteUbergraph_BP_CaptureActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
