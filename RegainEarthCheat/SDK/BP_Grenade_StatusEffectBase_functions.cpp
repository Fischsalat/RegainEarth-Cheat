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

// Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_StatusEffectBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.UserConstructionScript");

	ABP_Grenade_StatusEffectBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.Server_OnActorAOEHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HittedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_StatusEffectBase_C::Server_OnActorAOEHit(class AActor* HittedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.Server_OnActorAOEHit");

	ABP_Grenade_StatusEffectBase_C_Server_OnActorAOEHit_Params params;
	params.HittedActor = HittedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.Server_SlowEntityAndSpawnHitEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HittedActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_StatusEffectBase_C::Server_SlowEntityAndSpawnHitEffect(class AActor* HittedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.Server_SlowEntityAndSpawnHitEffect");

	ABP_Grenade_StatusEffectBase_C_Server_SlowEntityAndSpawnHitEffect_Params params;
	params.HittedActor = HittedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.ExecuteUbergraph_BP_Grenade_StatusEffectBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_StatusEffectBase_C::ExecuteUbergraph_BP_Grenade_StatusEffectBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_StatusEffectBase.BP_Grenade_StatusEffectBase_C.ExecuteUbergraph_BP_Grenade_StatusEffectBase");

	ABP_Grenade_StatusEffectBase_C_ExecuteUbergraph_BP_Grenade_StatusEffectBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
