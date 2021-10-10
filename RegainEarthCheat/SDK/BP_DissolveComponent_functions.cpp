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

// Function BP_DissolveComponent.BP_DissolveComponent_C.Multicast_StartDissolvingMeshComponents
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>  MeshComponents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UBP_DissolveComponent_C::Multicast_StartDissolvingMeshComponents(TArray<class UMeshComponent*> MeshComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveComponent.BP_DissolveComponent_C.Multicast_StartDissolvingMeshComponents");

	UBP_DissolveComponent_C_Multicast_StartDissolvingMeshComponents_Params params;
	params.MeshComponents = MeshComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveComponent.BP_DissolveComponent_C.StartAdditionalDissolveVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    AttachedStaticMeshComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  AttachedSkeletalMeshComponent  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DissolveComponent_C::StartAdditionalDissolveVisuals(class UStaticMeshComponent* AttachedStaticMeshComponent, class USkeletalMeshComponent* AttachedSkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveComponent.BP_DissolveComponent_C.StartAdditionalDissolveVisuals");

	UBP_DissolveComponent_C_StartAdditionalDissolveVisuals_Params params;
	params.AttachedStaticMeshComponent = AttachedStaticMeshComponent;
	params.AttachedSkeletalMeshComponent = AttachedSkeletalMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveComponent.BP_DissolveComponent_C.Server_StartDissolvingOwner
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_DissolveComponent_C::Server_StartDissolvingOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveComponent.BP_DissolveComponent_C.Server_StartDissolvingOwner");

	UBP_DissolveComponent_C_Server_StartDissolvingOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveComponent.BP_DissolveComponent_C.DoDissolveDrive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>  MeshComponents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UBP_DissolveComponent_C::DoDissolveDrive(TArray<class UMeshComponent*> MeshComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveComponent.BP_DissolveComponent_C.DoDissolveDrive");

	UBP_DissolveComponent_C_DoDissolveDrive_Params params;
	params.MeshComponents = MeshComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveComponent.BP_DissolveComponent_C.ExecuteUbergraph_BP_DissolveComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DissolveComponent_C::ExecuteUbergraph_BP_DissolveComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveComponent.BP_DissolveComponent_C.ExecuteUbergraph_BP_DissolveComponent");

	UBP_DissolveComponent_C_ExecuteUbergraph_BP_DissolveComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveComponent.BP_DissolveComponent_C.OnDissolveFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_DissolveComponent_C::OnDissolveFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveComponent.BP_DissolveComponent_C.OnDissolveFinished__DelegateSignature");

	UBP_DissolveComponent_C_OnDissolveFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
