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

// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_AOE_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.UserConstructionScript");

	ABP_Grenade_AOE_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.TriggerEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_AOE_Base_C::TriggerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.TriggerEffect");

	ABP_Grenade_AOE_Base_C_TriggerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.Server_OnActorAOEHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HittedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_AOE_Base_C::Server_OnActorAOEHit(class AActor* HittedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.Server_OnActorAOEHit");

	ABP_Grenade_AOE_Base_C_Server_OnActorAOEHit_Params params;
	params.HittedActor = HittedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.MulticastSpawnTriggerVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_AOE_Base_C::MulticastSpawnTriggerVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.MulticastSpawnTriggerVFX");

	ABP_Grenade_AOE_Base_C_MulticastSpawnTriggerVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.Server_ExplodeSphere
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_AOE_Base_C::Server_ExplodeSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.Server_ExplodeSphere");

	ABP_Grenade_AOE_Base_C_Server_ExplodeSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.DoSinglePulse
// (BlueprintCallable, BlueprintEvent)
void ABP_Grenade_AOE_Base_C::DoSinglePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.DoSinglePulse");

	ABP_Grenade_AOE_Base_C_DoSinglePulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.Multicast_SpawnHitVisuals
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HittedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_AOE_Base_C::Multicast_SpawnHitVisuals(class AActor* HittedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.Multicast_SpawnHitVisuals");

	ABP_Grenade_AOE_Base_C_Multicast_SpawnHitVisuals_Params params;
	params.HittedActor = HittedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_Grenade_AOE_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.ReceiveDestroyed");

	ABP_Grenade_AOE_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.ExecuteUbergraph_BP_Grenade_AOE_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_AOE_Base_C::ExecuteUbergraph_BP_Grenade_AOE_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_AOE_Base.BP_Grenade_AOE_Base_C.ExecuteUbergraph_BP_Grenade_AOE_Base");

	ABP_Grenade_AOE_Base_C_ExecuteUbergraph_BP_Grenade_AOE_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
