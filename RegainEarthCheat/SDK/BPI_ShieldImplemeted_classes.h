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

// BlueprintGeneratedClass BPI_ShieldImplemeted.BPI_ShieldImplemeted_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_ShieldImplemeted_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ShieldImplemeted.BPI_ShieldImplemeted_C");
		return ptr;
	}



	void GetShieldComponent(class UBP_Shield_C** ShieldComponent);
	void GetMeshForBodyShield(class UMeshComponent** MeshUsedForBodyShield);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
