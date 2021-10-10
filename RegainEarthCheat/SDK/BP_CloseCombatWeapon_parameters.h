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

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer
struct UBP_CloseCombatWeapon_C_DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer_Params
{
	float                                              ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              AsMesh_Component;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.CheckWeaponReloadPossible
struct UBP_CloseCombatWeapon_C_CheckWeaponReloadPossible_Params
{
	bool                                               Possible_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Is Allowed to Throw Grenade
struct UBP_CloseCombatWeapon_C_Is_Allowed_to_Throw_Grenade_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F
struct UBP_CloseCombatWeapon_C_OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F
struct UBP_CloseCombatWeapon_C_OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F
struct UBP_CloseCombatWeapon_C_OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F
struct UBP_CloseCombatWeapon_C_OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F
struct UBP_CloseCombatWeapon_C_OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ReceiveBeginPlay
struct UBP_CloseCombatWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_OnChargeLevelUp
struct UBP_CloseCombatWeapon_C_Server_OnChargeLevelUp_Params
{
	int                                                ReachedChargeLevel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.CheckForHittedActors
struct UBP_CloseCombatWeapon_C_CheckForHittedActors_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_OnActorHitWithSwing
struct UBP_CloseCombatWeapon_C_Server_OnActorHitWithSwing_Params
{
	struct FHitResult                                  HitRef;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int                                                ChargedLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ShootPressed
struct UBP_CloseCombatWeapon_C_ShootPressed_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ShootReleased
struct UBP_CloseCombatWeapon_C_ShootReleased_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_ChargingStartEffects
struct UBP_CloseCombatWeapon_C_Multicast_ChargingStartEffects_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_OnChargeLevelUpEffects
struct UBP_CloseCombatWeapon_C_Multicast_OnChargeLevelUpEffects_Params
{
	int                                                ReachedChargeLevel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_ChargeReleaseEffects
struct UBP_CloseCombatWeapon_C_Multicast_ChargeReleaseEffects_Params
{
	int                                                CurrentChargedLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_ChargingStartEffects
struct UBP_CloseCombatWeapon_C_Server_ChargingStartEffects_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_ChargeRelease
struct UBP_CloseCombatWeapon_C_Server_ChargeRelease_Params
{
	int                                                CurrentChargedLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_DestroyChargeEffects
struct UBP_CloseCombatWeapon_C_Server_DestroyChargeEffects_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_DestroyChargeEffects
struct UBP_CloseCombatWeapon_C_Multicast_DestroyChargeEffects_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.RepeatChargingPose
struct UBP_CloseCombatWeapon_C_RepeatChargingPose_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StopChargingPoseAnimation
struct UBP_CloseCombatWeapon_C_StopChargingPoseAnimation_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.AddChargedTime
struct UBP_CloseCombatWeapon_C_AddChargedTime_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_DoHitVisual
struct UBP_CloseCombatWeapon_C_Multicast_DoHitVisual_Params
{
	class UClass*                                      DamageType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasFullChargedHit_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DissolveMesh
struct UBP_CloseCombatWeapon_C_DissolveMesh_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DissolveColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DriveDissolve
struct UBP_CloseCombatWeapon_C_DriveDissolve_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.SetCollsionOff
struct UBP_CloseCombatWeapon_C_SetCollsionOff_Params
{
	TArray<class UPrimitiveComponent*>                 TMP_SkelMeshAndMeshComponents;                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ResetDoOnceSetCollisionOff
struct UBP_CloseCombatWeapon_C_ResetDoOnceSetCollisionOff_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ForceReleaseChargedCloseCombat
struct UBP_CloseCombatWeapon_C_ForceReleaseChargedCloseCombat_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StartExpandToFullSize
struct UBP_CloseCombatWeapon_C_StartExpandToFullSize_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StartShrinkToSmallSize
struct UBP_CloseCombatWeapon_C_StartShrinkToSmallSize_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.SetIsNotFullChargeSwining
struct UBP_CloseCombatWeapon_C_SetIsNotFullChargeSwining_Params
{
};

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ExecuteUbergraph_BP_CloseCombatWeapon
struct UBP_CloseCombatWeapon_C_ExecuteUbergraph_BP_CloseCombatWeapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
