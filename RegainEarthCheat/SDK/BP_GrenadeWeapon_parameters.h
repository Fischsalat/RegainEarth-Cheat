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

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.CheckWeaponReloadPossible
struct UBP_GrenadeWeapon_C_CheckWeaponReloadPossible_Params
{
	bool                                               Possible_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Is Allowed to Throw Grenade
struct UBP_GrenadeWeapon_C_Is_Allowed_to_Throw_Grenade_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartExpandToFullSize
struct UBP_GrenadeWeapon_C_StartExpandToFullSize_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartShrinkToSmallSize
struct UBP_GrenadeWeapon_C_StartShrinkToSmallSize_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.GrenadeThrow_Pressed
struct UBP_GrenadeWeapon_C_GrenadeThrow_Pressed_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Server_SpawnGrenadeProjectile_Replicated
struct UBP_GrenadeWeapon_C_Server_SpawnGrenadeProjectile_Replicated_Params
{
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	int                                                EquipedGrenadeAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartTrajectoryBeam
struct UBP_GrenadeWeapon_C_StartTrajectoryBeam_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StopTrajectoryBeam
struct UBP_GrenadeWeapon_C_StopTrajectoryBeam_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.UpdateTrajectoryBeam
struct UBP_GrenadeWeapon_C_UpdateTrajectoryBeam_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Finished_SetClipFull
struct UBP_GrenadeWeapon_C_Reload_Finished_SetClipFull_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Clip_Drop
struct UBP_GrenadeWeapon_C_Clip_Drop_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.GrenadeConstructionScriptManual
struct UBP_GrenadeWeapon_C_GrenadeConstructionScriptManual_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Change_ShootingMode
struct UBP_GrenadeWeapon_C_Change_ShootingMode_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Shoot_Released
struct UBP_GrenadeWeapon_C_Shoot_Released_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Shoot_Presssed
struct UBP_GrenadeWeapon_C_Shoot_Presssed_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Interrupt
struct UBP_GrenadeWeapon_C_Reload_Interrupt_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Start
struct UBP_GrenadeWeapon_C_Reload_Start_Params
{
};

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.ExecuteUbergraph_BP_GrenadeWeapon
struct UBP_GrenadeWeapon_C_ExecuteUbergraph_BP_GrenadeWeapon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
