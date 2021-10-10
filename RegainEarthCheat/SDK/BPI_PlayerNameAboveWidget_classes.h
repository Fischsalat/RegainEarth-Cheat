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

// BlueprintGeneratedClass BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerNameAboveWidget_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C");
		return ptr;
	}



	void SetBleedOutValues(float MaxBleetOutTime, float ActualBleetOutTime);
	void SetPlayerName(const struct FText& NewName);
	void SetReviveSignActive(bool SetActive);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
