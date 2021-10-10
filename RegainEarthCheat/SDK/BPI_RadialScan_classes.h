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

// BlueprintGeneratedClass BPI_RadialScan.BPI_RadialScan_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_RadialScan_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RadialScan.BPI_RadialScan_C");
		return ptr;
	}



	void ScanWaveFoundPawnOrImportantActor(class AActor* Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
