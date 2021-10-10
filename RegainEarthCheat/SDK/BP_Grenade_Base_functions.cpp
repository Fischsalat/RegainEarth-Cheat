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

// Function BP_Grenade_Base.BP_Grenade_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.UserConstructionScript");

	ABP_Grenade_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Base_C::TriggerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEffect");

	ABP_Grenade_Base_C_TriggerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Base.BP_Grenade_Base_C.Multicast_HideSelfAndDestroyAfterDelay
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Base_C::Multicast_HideSelfAndDestroyAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.Multicast_HideSelfAndDestroyAfterDelay");

	ABP_Grenade_Base_C_Multicast_HideSelfAndDestroyAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Grenade_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveBeginPlay");

	ABP_Grenade_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Base.BP_Grenade_Base_C.DecreaseCountdown
// (BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Base_C::DecreaseCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.DecreaseCountdown");

	ABP_Grenade_Base_C_DecreaseCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Base_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveAnyDamage");

	ABP_Grenade_Base_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Grenade_Base.BP_Grenade_Base_C.ExecuteUbergraph_BP_Grenade_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Grenade_Base_C::ExecuteUbergraph_BP_Grenade_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Base.BP_Grenade_Base_C.ExecuteUbergraph_BP_Grenade_Base");

	ABP_Grenade_Base_C_ExecuteUbergraph_BP_Grenade_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
