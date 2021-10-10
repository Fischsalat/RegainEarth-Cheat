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

// Function BP_ElExp.BP_ElExp_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElExp_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.GetMesh");

	ABP_ElExp_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_ElExp.BP_ElExp_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElExp_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.GetPiercedFireDirectionOfOwner");

	ABP_ElExp_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BP_ElExp.BP_ElExp_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElExp_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.GetAudioComponentForVentFireSound");

	ABP_ElExp_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BP_ElExp.BP_ElExp_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElExp_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.GetExplodableComponent");

	ABP_ElExp_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BP_ElExp.BP_ElExp_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElExp_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	ABP_ElExp_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BP_ElExp.BP_ElExp_C.EMP_FX_Alpha_Drive__FinishedFunc
// (BlueprintEvent)
void ABP_ElExp_C::EMP_FX_Alpha_Drive__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.EMP_FX_Alpha_Drive__FinishedFunc");

	ABP_ElExp_C_EMP_FX_Alpha_Drive__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElExp.BP_ElExp_C.EMP_FX_Alpha_Drive__UpdateFunc
// (BlueprintEvent)
void ABP_ElExp_C::EMP_FX_Alpha_Drive__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.EMP_FX_Alpha_Drive__UpdateFunc");

	ABP_ElExp_C_EMP_FX_Alpha_Drive__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElExp.BP_ElExp_C.FireRadialImpulse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ElExp_C::FireRadialImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.FireRadialImpulse");

	ABP_ElExp_C_FireRadialImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElExp.BP_ElExp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ElExp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.ReceiveBeginPlay");

	ABP_ElExp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElExp.BP_ElExp_C.BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_ElExp_C::BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ElExp_C_BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElExp.BP_ElExp_C.ExecuteUbergraph_BP_ElExp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElExp_C::ExecuteUbergraph_BP_ElExp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElExp.BP_ElExp_C.ExecuteUbergraph_BP_ElExp");

	ABP_ElExp_C_ExecuteUbergraph_BP_ElExp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
