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

// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetGrenadeThrowing
struct UBPI_ToAnimBPWeaponInterface_C_SetGrenadeThrowing_Params
{
	bool                                               IsGreandeThrowing;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetAimingState
struct UBPI_ToAnimBPWeaponInterface_C_SetAimingState_Params
{
	RegainEarth_FS_EStateOfAiming                      AimState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetWeaponPawnAnimations
struct UBPI_ToAnimBPWeaponInterface_C_SetWeaponPawnAnimations_Params
{
	RegainEarth_FS_EWeaponPawnAnimationGroups          WeaponPawnAnimationGroup;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetWeaponType
struct UBPI_ToAnimBPWeaponInterface_C_SetWeaponType_Params
{
	RegainEarth_FS_EWeaponTypes                        WeaponType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
