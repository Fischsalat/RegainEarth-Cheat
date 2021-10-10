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

// BlueprintGeneratedClass BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_ToAnimBPWeaponInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ToAnimBPWeaponInterface.BPI_ToAnimBPWeaponInterface_C");
		return ptr;
	}



	void SetGrenadeThrowing(bool IsGreandeThrowing);
	void SetAimingState(RegainEarth_FS_EStateOfAiming AimState);
	void SetWeaponPawnAnimations(RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup);
	void SetWeaponType(RegainEarth_FS_EWeaponTypes WeaponType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
