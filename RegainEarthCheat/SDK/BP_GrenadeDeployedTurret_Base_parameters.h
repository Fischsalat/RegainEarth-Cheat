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

// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.GetSelfName
struct ABP_GrenadeDeployedTurret_Base_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.GetMeshAndBoneToAimFor
struct ABP_GrenadeDeployedTurret_Base_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.CheckIfDeploymentFinished
struct ABP_GrenadeDeployedTurret_Base_C_CheckIfDeploymentFinished_Params
{
};

// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.ReceiveBeginPlay
struct ABP_GrenadeDeployedTurret_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_GrenadeDeployedTurret_Base.BP_GrenadeDeployedTurret_Base_C.ExecuteUbergraph_BP_GrenadeDeployedTurret_Base
struct ABP_GrenadeDeployedTurret_Base_C_ExecuteUbergraph_BP_GrenadeDeployedTurret_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
