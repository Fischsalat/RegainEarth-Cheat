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

// Function BP_Grenade_Base.BP_Grenade_Base_C.UserConstructionScript
struct ABP_Grenade_Base_C_UserConstructionScript_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEffect
struct ABP_Grenade_Base_C_TriggerEffect_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.Multicast_HideSelfAndDestroyAfterDelay
struct ABP_Grenade_Base_C_Multicast_HideSelfAndDestroyAfterDelay_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveBeginPlay
struct ABP_Grenade_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.DecreaseCountdown
struct ABP_Grenade_Base_C_DecreaseCountdown_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveAnyDamage
struct ABP_Grenade_Base_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ExecuteUbergraph_BP_Grenade_Base
struct ABP_Grenade_Base_C_ExecuteUbergraph_BP_Grenade_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
