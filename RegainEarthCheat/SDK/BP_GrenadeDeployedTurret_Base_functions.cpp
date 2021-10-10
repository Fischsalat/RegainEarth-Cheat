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

// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GrenadeDeployedTurret_Base_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.GetSelfName");

	ABP_GrenadeDeployedTurret_Base_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GrenadeDeployedTurret_Base_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.GetMeshAndBoneToAimFor");

	ABP_GrenadeDeployedTurret_Base_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.CheckIfDeploymentFinished
// (BlueprintCallable, BlueprintEvent)
void ABP_GrenadeDeployedTurret_Base_C::CheckIfDeploymentFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.CheckIfDeploymentFinished");

	ABP_GrenadeDeployedTurret_Base_C_CheckIfDeploymentFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GrenadeDeployedTurret_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.ReceiveBeginPlay");

	ABP_GrenadeDeployedTurret_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.ExecuteUbergraph_BP_GrenadeDeployedTurret_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GrenadeDeployedTurret_Base_C::ExecuteUbergraph_BP_GrenadeDeployedTurret_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.ExecuteUbergraph_BP_GrenadeDeployedTurret_Base");

	ABP_GrenadeDeployedTurret_Base_C_ExecuteUbergraph_BP_GrenadeDeployedTurret_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
