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

// Function BPI_ShieldImplemeted.BPI_ShieldImplemeted_C.GetShieldComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Shield_C*            ShieldComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ShieldImplemeted_C::GetShieldComponent(class UBP_Shield_C** ShieldComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ShieldImplemeted.BPI_ShieldImplemeted_C.GetShieldComponent");

	UBPI_ShieldImplemeted_C_GetShieldComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShieldComponent != nullptr)
		*ShieldComponent = params.ShieldComponent;

}


// Function BPI_ShieldImplemeted.BPI_ShieldImplemeted_C.GetMeshForBodyShield
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MeshUsedForBodyShield          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ShieldImplemeted_C::GetMeshForBodyShield(class UMeshComponent** MeshUsedForBodyShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ShieldImplemeted.BPI_ShieldImplemeted_C.GetMeshForBodyShield");

	UBPI_ShieldImplemeted_C_GetMeshForBodyShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MeshUsedForBodyShield != nullptr)
		*MeshUsedForBodyShield = params.MeshUsedForBodyShield;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
