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

// Function BP_ElExp.BP_ElExp_C.GetMesh
struct ABP_ElExp_C_GetMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ElExp.BP_ElExp_C.GetPiercedFireDirectionOfOwner
struct ABP_ElExp_C_GetPiercedFireDirectionOfOwner_Params
{
	class UArrowComponent*                             ArrowDirection;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ElExp.BP_ElExp_C.GetAudioComponentForVentFireSound
struct ABP_ElExp_C_GetAudioComponentForVentFireSound_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ElExp.BP_ElExp_C.GetExplodableComponent
struct ABP_ElExp_C_GetExplodableComponent_Params
{
	class UBP_ExplodableComponent_C*                   ExplodableCompRef;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ElExp.BP_ElExp_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
struct ABP_ElExp_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params
{
	class USphereComponent*                            CreatedSphere;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ElExp.BP_ElExp_C.EMP_FX_Alpha_Drive__FinishedFunc
struct ABP_ElExp_C_EMP_FX_Alpha_Drive__FinishedFunc_Params
{
};

// Function BP_ElExp.BP_ElExp_C.EMP_FX_Alpha_Drive__UpdateFunc
struct ABP_ElExp_C_EMP_FX_Alpha_Drive__UpdateFunc_Params
{
};

// Function BP_ElExp.BP_ElExp_C.FireRadialImpulse
struct ABP_ElExp_C_FireRadialImpulse_Params
{
};

// Function BP_ElExp.BP_ElExp_C.ReceiveBeginPlay
struct ABP_ElExp_C_ReceiveBeginPlay_Params
{
};

// Function BP_ElExp.BP_ElExp_C.BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ElExp_C_BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_ElExp.BP_ElExp_C.ExecuteUbergraph_BP_ElExp
struct ABP_ElExp_C_ExecuteUbergraph_BP_ElExp_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
