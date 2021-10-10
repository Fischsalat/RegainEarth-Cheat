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

// BlueprintGeneratedClass BPI_Dissolvable.BPI_Dissolvable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Dissolvable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Dissolvable.BPI_Dissolvable_C");
		return ptr;
	}



	void HitByDissolveWeaponHit();
	void ForceFullDissolve();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
