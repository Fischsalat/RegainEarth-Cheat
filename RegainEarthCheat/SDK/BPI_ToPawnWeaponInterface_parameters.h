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

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.PickupGrenade
struct UBPI_ToPawnWeaponInterface_C_PickupGrenade_Params
{
	class UClass*                                      PickupGrenadeType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ThrowGrenade
struct UBPI_ToPawnWeaponInterface_C_ThrowGrenade_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetLaserDotRef
struct UBPI_ToPawnWeaponInterface_C_GetLaserDotRef_Params
{
	class UBP_LaserDotMarker_Component_C*              LaserDotRef;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetNewColor
struct UBPI_ToPawnWeaponInterface_C_SetNewColor_Params
{
	struct FLinearColor                                NewLightColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetNewIntensity
struct UBPI_ToPawnWeaponInterface_C_SetNewIntensity_Params
{
	float                                              NewIntensity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetLaserDotLocation
struct UBPI_ToPawnWeaponInterface_C_GetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetLaserDotLocation
struct UBPI_ToPawnWeaponInterface_C_SetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.DropCurrentWeapon
struct UBPI_ToPawnWeaponInterface_C_DropCurrentWeapon_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetCurrentWeaponSkelMesh
struct UBPI_ToPawnWeaponInterface_C_GetCurrentWeaponSkelMesh_Params
{
	class USceneComponent*                             CurrentWeaponSkelMesh;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.AttachCurrentWeaponToHandsAndStartAimingState
struct UBPI_ToPawnWeaponInterface_C_AttachCurrentWeaponToHandsAndStartAimingState_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.AttachCurrentWeaponStopAimingState
struct UBPI_ToPawnWeaponInterface_C_AttachCurrentWeaponStopAimingState_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.WeaponMeshAndPropertiesHaveChanged
struct UBPI_ToPawnWeaponInterface_C_WeaponMeshAndPropertiesHaveChanged_Params
{
	class UBP_Weapon_C*                                BPWeaponComponentRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.PickupWeapon
struct UBPI_ToPawnWeaponInterface_C_PickupWeapon_Params
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 WeaponID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsAutofireStop
struct UBPI_ToPawnWeaponInterface_C_ShootCharEffectsAutofireStop_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsAutofireStart
struct UBPI_ToPawnWeaponInterface_C_ShootCharEffectsAutofireStart_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetPlayerShootingCondition
struct UBPI_ToPawnWeaponInterface_C_GetPlayerShootingCondition_Params
{
	bool                                               CharCanShoot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetBulletDirection
struct UBPI_ToPawnWeaponInterface_C_GetBulletDirection_Params
{
	struct FVector                                     BulletDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetHit
struct UBPI_ToPawnWeaponInterface_C_GetHit_Params
{
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsSingleShot
struct UBPI_ToPawnWeaponInterface_C_ShootCharEffectsSingleShot_Params
{
};

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetWeapon
struct UBPI_ToPawnWeaponInterface_C_SetWeapon_Params
{
	class USkeletalMesh*                               WeaponMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                WeaponComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Primary;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
