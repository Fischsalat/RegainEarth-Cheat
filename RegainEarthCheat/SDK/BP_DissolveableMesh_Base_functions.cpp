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

// Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.ForceFullDissolve
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DissolveableMesh_Base_C::ForceFullDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.ForceFullDissolve");

	ABP_DissolveableMesh_Base_C_ForceFullDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_DissolveableMesh_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.ReceiveBeginPlay");

	ABP_DissolveableMesh_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.HitByDissolveWeaponHit
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DissolveableMesh_Base_C::HitByDissolveWeaponHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.HitByDissolveWeaponHit");

	ABP_DissolveableMesh_Base_C_HitByDissolveWeaponHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.ExecuteUbergraph_BP_DissolveableMesh_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DissolveableMesh_Base_C::ExecuteUbergraph_BP_DissolveableMesh_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DissolveableMesh_Base.BP_DissolveableMesh_Base_C.ExecuteUbergraph_BP_DissolveableMesh_Base");

	ABP_DissolveableMesh_Base_C_ExecuteUbergraph_BP_DissolveableMesh_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
