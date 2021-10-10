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

// Function BP_Shield.BP_Shield_C.OnRep_ShieldTypeColor
struct UBP_Shield_C_OnRep_ShieldTypeColor_Params
{
};

// Function BP_Shield.BP_Shield_C.AdjustShieldVisualsToCurrentShieldAmount
struct UBP_Shield_C_AdjustShieldVisualsToCurrentShieldAmount_Params
{
};

// Function BP_Shield.BP_Shield_C.OnRep_CurrentShieldAmount
struct UBP_Shield_C_OnRep_CurrentShieldAmount_Params
{
};

// Function BP_Shield.BP_Shield_C.ApplyDamageToShield_CallOnServer
struct UBP_Shield_C_ApplyDamageToShield_CallOnServer_Params
{
	float                                              TakenDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkipShowingHitEffect;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RestDamageNotShieldAbsorbed;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Shield.BP_Shield_C.Server_CreateBodyShieldOnSelf
struct UBP_Shield_C_Server_CreateBodyShieldOnSelf_Params
{
	float                                              MaxShieldAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DestroyShieldAfterDuration;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ShieldTypeColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Shield.BP_Shield_C.DoShieldStartAnimation
struct UBP_Shield_C_DoShieldStartAnimation_Params
{
};

// Function BP_Shield.BP_Shield_C.Multicast_DoHitAnimation
struct UBP_Shield_C_Multicast_DoHitAnimation_Params
{
};

// Function BP_Shield.BP_Shield_C.SpawnShieldVisuals
struct UBP_Shield_C_SpawnShieldVisuals_Params
{
};

// Function BP_Shield.BP_Shield_C.RemoveShieldAnimation
struct UBP_Shield_C_RemoveShieldAnimation_Params
{
};

// Function BP_Shield.BP_Shield_C.StopDoHitAnimationVisuals
struct UBP_Shield_C_StopDoHitAnimationVisuals_Params
{
};

// Function BP_Shield.BP_Shield_C.DestoryShieldMesh
struct UBP_Shield_C_DestoryShieldMesh_Params
{
};

// Function BP_Shield.BP_Shield_C.StopDoRemoveAnimationVisuals
struct UBP_Shield_C_StopDoRemoveAnimationVisuals_Params
{
};

// Function BP_Shield.BP_Shield_C.ReceiveBeginPlay
struct UBP_Shield_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shield.BP_Shield_C.ShieldVisualAnimState_Event
struct UBP_Shield_C_ShieldVisualAnimState_Event_Params
{
	TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Shield.BP_Shield_C.StopSpawnShieldAnimationVisuals
struct UBP_Shield_C_StopSpawnShieldAnimationVisuals_Params
{
};

// Function BP_Shield.BP_Shield_C.ExecuteUbergraph_BP_Shield
struct UBP_Shield_C_ExecuteUbergraph_BP_Shield_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Shield.BP_Shield_C.ShieldVisualAnimStateChange__DelegateSignature
struct UBP_Shield_C_ShieldVisualAnimStateChange__DelegateSignature_Params
{
	TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
