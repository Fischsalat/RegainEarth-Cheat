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

// Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.TriggerEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Spawn_Base_C::TriggerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.TriggerEffect");

	ABP_Grenade_Spawn_Base_C_TriggerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.Server_SpawnActor
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Spawn_Base_C::Server_SpawnActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.Server_SpawnActor");

	ABP_Grenade_Spawn_Base_C_Server_SpawnActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.Multicast_CreateSpawnVisuals
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Spawn_Base_C::Multicast_CreateSpawnVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.Multicast_CreateSpawnVisuals");

	ABP_Grenade_Spawn_Base_C_Multicast_CreateSpawnVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.ExecuteUbergraph_BP_Grenade_Spawn_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Spawn_Base_C::ExecuteUbergraph_BP_Grenade_Spawn_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Spawn_Base.BP_Grenade_Spawn_Base_C.ExecuteUbergraph_BP_Grenade_Spawn_Base");

	ABP_Grenade_Spawn_Base_C_ExecuteUbergraph_BP_Grenade_Spawn_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
