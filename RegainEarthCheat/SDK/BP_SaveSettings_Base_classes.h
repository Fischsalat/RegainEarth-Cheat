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

// BlueprintGeneratedClass BP_SaveSettings_Base.BP_SaveSettings_Base_C
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UBP_SaveSettings_Base_C : public USaveGame
{
public:
	TArray<struct FString>                             SavedGames;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SaveSettings_Base.BP_SaveSettings_Base_C");
		return ptr;
	}



	void GetSavedSettings();
	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
