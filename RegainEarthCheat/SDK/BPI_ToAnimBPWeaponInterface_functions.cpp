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

// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetGrenadeThrowing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGreandeThrowing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBPWeaponInterface_C::SetGrenadeThrowing(bool IsGreandeThrowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetGrenadeThrowing");

	UBPI_ToAnimBPWeaponInterface_C_SetGrenadeThrowing_Params params;
	params.IsGreandeThrowing = IsGreandeThrowing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetAimingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EStateOfAiming  AimState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBPWeaponInterface_C::SetAimingState(RegainEarth_FS_EStateOfAiming AimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetAimingState");

	UBPI_ToAnimBPWeaponInterface_C_SetAimingState_Params params;
	params.AimState = AimState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetWeaponPawnAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBPWeaponInterface_C::SetWeaponPawnAnimations(RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetWeaponPawnAnimations");

	UBPI_ToAnimBPWeaponInterface_C_SetWeaponPawnAnimations_Params params;
	params.WeaponPawnAnimationGroup = WeaponPawnAnimationGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetWeaponType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// RegainEarth_FS_EWeaponTypes    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBPWeaponInterface_C::SetWeaponType(RegainEarth_FS_EWeaponTypes WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C.SetWeaponType");

	UBPI_ToAnimBPWeaponInterface_C_SetWeaponType_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
