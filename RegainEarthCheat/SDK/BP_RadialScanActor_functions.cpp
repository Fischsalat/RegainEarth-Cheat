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

// Function BP_RadialScanActor.BP_RadialScanActor_C.SetRadialVisualSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_RadialScanSettings   Settings                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseVisualsForLocalControlledPlayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_RadialScanActor_C::SetRadialVisualSettings(const struct FS_RadialScanSettings& Settings, bool UseVisualsForLocalControlledPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.SetRadialVisualSettings");

	ABP_RadialScanActor_C_SetRadialVisualSettings_Params params;
	params.Settings = Settings;
	params.UseVisualsForLocalControlledPlayer = UseVisualsForLocalControlledPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.TestScan
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_RadialScanActor_C::TestScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.TestScan");

	ABP_RadialScanActor_C_TestScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.UpdateRadialScan
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_RadialScanActor_C::UpdateRadialScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.UpdateRadialScan");

	ABP_RadialScanActor_C_UpdateRadialScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.BeginRadialScan
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_RadialScanActor_C::BeginRadialScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.BeginRadialScan");

	ABP_RadialScanActor_C_BeginRadialScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.UpdateSourceDirection
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_RadialScanActor_C::UpdateSourceDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.UpdateSourceDirection");

	ABP_RadialScanActor_C_UpdateSourceDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.SetupReference
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_RadialScanActor_C::SetupReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.SetupReference");

	ABP_RadialScanActor_C_SetupReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.SetTargetComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RadialScanActor_C::SetTargetComponent(class USceneComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.SetTargetComponent");

	ABP_RadialScanActor_C_SetTargetComponent_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.SetTargetActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RadialScanActor_C::SetTargetActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.SetTargetActor");

	ABP_RadialScanActor_C_SetTargetActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.SetScanMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RadialScanActor_C::SetScanMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.SetScanMaterial");

	ABP_RadialScanActor_C_SetScanMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_RadialScanActor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveDestroyed");

	ABP_RadialScanActor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_RadialScanActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveBeginPlay");

	ABP_RadialScanActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RadialScanActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveTick");

	ABP_RadialScanActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RadialScanActor.BP_RadialScanActor_C.BndEvt__SV_DistortionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_RadialScanActor_C::BndEvt__SV_DistortionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.BndEvt__SV_DistortionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_RadialScanActor_C_BndEvt__SV_DistortionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_RadialScanActor.BP_RadialScanActor_C.ExecuteUbergraph_BP_RadialScanActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RadialScanActor_C::ExecuteUbergraph_BP_RadialScanActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialScanActor.BP_RadialScanActor_C.ExecuteUbergraph_BP_RadialScanActor");

	ABP_RadialScanActor_C_ExecuteUbergraph_BP_RadialScanActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
