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

// BlueprintGeneratedClass BPI_DamageTypeInterface.BPI_DamageTypeInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_DamageTypeInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DamageTypeInterface.BPI_DamageTypeInterface_C");
		return ptr;
	}



	void GetDamageForceAndVisualEffectType(TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType>* DamageForceAndVisualEffectType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
