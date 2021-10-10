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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_ToPawnWeaponInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ToPawnWeaponInterface.BPI_ToPawnWeaponInterface_C");
		return ptr;
	}



	void PickupGrenade(class UClass* PickupGrenadeType, int AddedAmount);
	void ThrowGrenade();
	void GetLaserDotRef(class UBP_LaserDotMarker_Component_C** LaserDotRef);
	void SetNewColor(const struct FLinearColor& NewLightColor);
	void SetNewIntensity(float NewIntensity);
	void GetLaserDotLocation(struct FVector* Location);
	void SetLaserDotLocation(const struct FVector& Location);
	void DropCurrentWeapon();
	void GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh);
	void AttachCurrentWeaponToHandsAndStartAimingState();
	void AttachCurrentWeaponStopAimingState();
	void WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef);
	void PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID);
	void ShootCharEffectsAutofireStop();
	void ShootCharEffectsAutofireStart();
	void GetPlayerShootingCondition(bool* CharCanShoot);
	void GetBulletDirection(const struct FVector& BulletDirection, const struct FName& Bone);
	void GetHit(const struct FHitResult& Hit);
	void ShootCharEffectsSingleShot();
	void SetWeapon(class USkeletalMesh* WeaponMesh, class UBP_Weapon_C* WeaponComponent, bool Primary);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
