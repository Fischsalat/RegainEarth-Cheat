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

// Function BP_RadialScanActor.BP_RadialScanActor_C.SetRadialVisualSettings
struct ABP_RadialScanActor_C_SetRadialVisualSettings_Params
{
	struct FS_RadialScanSettings                       Settings;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseVisualsForLocalControlledPlayer;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.TestScan
struct ABP_RadialScanActor_C_TestScan_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.UpdateRadialScan
struct ABP_RadialScanActor_C_UpdateRadialScan_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.BeginRadialScan
struct ABP_RadialScanActor_C_BeginRadialScan_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.UpdateSourceDirection
struct ABP_RadialScanActor_C_UpdateSourceDirection_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.SetupReference
struct ABP_RadialScanActor_C_SetupReference_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.SetTargetComponent
struct ABP_RadialScanActor_C_SetTargetComponent_Params
{
	class USceneComponent*                             Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.SetTargetActor
struct ABP_RadialScanActor_C_SetTargetActor_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.SetScanMaterial
struct ABP_RadialScanActor_C_SetScanMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveDestroyed
struct ABP_RadialScanActor_C_ReceiveDestroyed_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveBeginPlay
struct ABP_RadialScanActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.ReceiveTick
struct ABP_RadialScanActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.BndEvt__SV_DistortionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_RadialScanActor_C_BndEvt__SV_DistortionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_RadialScanActor.BP_RadialScanActor_C.ExecuteUbergraph_BP_RadialScanActor
struct ABP_RadialScanActor_C_ExecuteUbergraph_BP_RadialScanActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
