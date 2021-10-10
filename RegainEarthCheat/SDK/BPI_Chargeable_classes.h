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

// BlueprintGeneratedClass BPI_Chargeable.BPI_Chargeable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Chargeable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Chargeable.BPI_Chargeable_C");
		return ptr;
	}



	void OnElExpCreation();
	void IsElExpReady(bool* WasCharged);
	void ShouldTakeChargeDamage(bool* ShouldTakeDamage, bool* OnlyAllowFullChargeHits);
	void OnChargeHit(float ChargeAmount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
