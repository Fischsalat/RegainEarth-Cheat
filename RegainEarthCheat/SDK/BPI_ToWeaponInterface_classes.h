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

// BlueprintGeneratedClass BPI_ToWeaponInterface.BPI_ToWeaponInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_ToWeaponInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ToWeaponInterface.BPI_ToWeaponInterface_C");
		return ptr;
	}



	void StartShrinkToSmallSize();
	void StartExpandToFullSize();
	void GrenadeThrow_Pressed();
	void CheckWeaponReloadPossible(bool* Possible_);
	void Reload_Finished_SetClipFull();
	void Clip_Drop();
	void Change_ShootingMode();
	void Shoot_Released();
	void Shoot_Presssed();
	void Reload_Interrupt();
	void Reload_Start();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
