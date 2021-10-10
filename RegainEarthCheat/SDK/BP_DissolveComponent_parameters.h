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

// Function BP_DissolveComponent.BP_DissolveComponent_C.Multicast_StartDissolvingMeshComponents
struct UBP_DissolveComponent_C_Multicast_StartDissolvingMeshComponents_Params
{
	TArray<class UMeshComponent*>                      MeshComponents;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_DissolveComponent.BP_DissolveComponent_C.StartAdditionalDissolveVisuals
struct UBP_DissolveComponent_C_StartAdditionalDissolveVisuals_Params
{
	class UStaticMeshComponent*                        AttachedStaticMeshComponent;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      AttachedSkeletalMeshComponent;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DissolveComponent.BP_DissolveComponent_C.Server_StartDissolvingOwner
struct UBP_DissolveComponent_C_Server_StartDissolvingOwner_Params
{
};

// Function BP_DissolveComponent.BP_DissolveComponent_C.DoDissolveDrive
struct UBP_DissolveComponent_C_DoDissolveDrive_Params
{
	TArray<class UMeshComponent*>                      MeshComponents;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_DissolveComponent.BP_DissolveComponent_C.ExecuteUbergraph_BP_DissolveComponent
struct UBP_DissolveComponent_C_ExecuteUbergraph_BP_DissolveComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DissolveComponent.BP_DissolveComponent_C.OnDissolveFinished__DelegateSignature
struct UBP_DissolveComponent_C_OnDissolveFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
