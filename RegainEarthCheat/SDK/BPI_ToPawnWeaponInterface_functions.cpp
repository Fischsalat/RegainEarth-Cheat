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

// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.PickupGrenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PickupGrenadeType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AddedAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::PickupGrenade(class UClass* PickupGrenadeType, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.PickupGrenade");

	UBPI_ToPawnWeaponInterface_C_PickupGrenade_Params params;
	params.PickupGrenadeType = PickupGrenadeType;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ThrowGrenade
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::ThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ThrowGrenade");

	UBPI_ToPawnWeaponInterface_C_ThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetLaserDotRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LaserDotMarker_Component_C* LaserDotRef                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::GetLaserDotRef(class UBP_LaserDotMarker_Component_C** LaserDotRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetLaserDotRef");

	UBPI_ToPawnWeaponInterface_C_GetLaserDotRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LaserDotRef != nullptr)
		*LaserDotRef = params.LaserDotRef;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetNewColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewLightColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::SetNewColor(const struct FLinearColor& NewLightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetNewColor");

	UBPI_ToPawnWeaponInterface_C_SetNewColor_Params params;
	params.NewLightColor = NewLightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetNewIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::SetNewIntensity(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetNewIntensity");

	UBPI_ToPawnWeaponInterface_C_SetNewIntensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetLaserDotLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::GetLaserDotLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetLaserDotLocation");

	UBPI_ToPawnWeaponInterface_C_GetLaserDotLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetLaserDotLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::SetLaserDotLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetLaserDotLocation");

	UBPI_ToPawnWeaponInterface_C_SetLaserDotLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.DropCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::DropCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.DropCurrentWeapon");

	UBPI_ToPawnWeaponInterface_C_DropCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetCurrentWeaponSkelMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CurrentWeaponSkelMesh          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetCurrentWeaponSkelMesh");

	UBPI_ToPawnWeaponInterface_C_GetCurrentWeaponSkelMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWeaponSkelMesh != nullptr)
		*CurrentWeaponSkelMesh = params.CurrentWeaponSkelMesh;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.AttachCurrentWeaponToHandsAndStartAimingState
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::AttachCurrentWeaponToHandsAndStartAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.AttachCurrentWeaponToHandsAndStartAimingState");

	UBPI_ToPawnWeaponInterface_C_AttachCurrentWeaponToHandsAndStartAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.AttachCurrentWeaponStopAimingState
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::AttachCurrentWeaponStopAimingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.AttachCurrentWeaponStopAimingState");

	UBPI_ToPawnWeaponInterface_C_AttachCurrentWeaponStopAimingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.WeaponMeshAndPropertiesHaveChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            BPWeaponComponentRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.WeaponMeshAndPropertiesHaveChanged");

	UBPI_ToPawnWeaponInterface_C_WeaponMeshAndPropertiesHaveChanged_Params params;
	params.BPWeaponComponentRef = BPWeaponComponentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.PickupWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.PickupWeapon");

	UBPI_ToPawnWeaponInterface_C_PickupWeapon_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsAutofireStop
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::ShootCharEffectsAutofireStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsAutofireStop");

	UBPI_ToPawnWeaponInterface_C_ShootCharEffectsAutofireStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsAutofireStart
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::ShootCharEffectsAutofireStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsAutofireStart");

	UBPI_ToPawnWeaponInterface_C_ShootCharEffectsAutofireStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetPlayerShootingCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CharCanShoot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToPawnWeaponInterface_C::GetPlayerShootingCondition(bool* CharCanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetPlayerShootingCondition");

	UBPI_ToPawnWeaponInterface_C_GetPlayerShootingCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharCanShoot != nullptr)
		*CharCanShoot = params.CharCanShoot;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetBulletDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BulletDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToPawnWeaponInterface_C::GetBulletDirection(const struct FVector& BulletDirection, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetBulletDirection");

	UBPI_ToPawnWeaponInterface_C_GetBulletDirection_Params params;
	params.BulletDirection = BulletDirection;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UBPI_ToPawnWeaponInterface_C::GetHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.GetHit");

	UBPI_ToPawnWeaponInterface_C_GetHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsSingleShot
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ToPawnWeaponInterface_C::ShootCharEffectsSingleShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.ShootCharEffectsSingleShot");

	UBPI_ToPawnWeaponInterface_C_ShootCharEffectsSingleShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           WeaponMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Weapon_C*            WeaponComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToPawnWeaponInterface_C::SetWeapon(class USkeletalMesh* WeaponMesh, class UBP_Weapon_C* WeaponComponent, bool Primary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C.SetWeapon");

	UBPI_ToPawnWeaponInterface_C_SetWeapon_Params params;
	params.WeaponMesh = WeaponMesh;
	params.WeaponComponent = WeaponComponent;
	params.Primary = Primary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
