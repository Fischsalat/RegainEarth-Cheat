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

// BlueprintGeneratedClass BP_Save_InputKeys_Settings.BP_Save_InputKeys_Settings_C
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UBP_Save_InputKeys_Settings_C : public UBP_SaveSettings_Base_C
{
public:
	TArray<struct FSSettings_InputKeys>                Default_Settings_InputKeys;                                // 0x0038(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSSettings_InputKeys>                Settings_InputKeys;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Save_InputKeys_Settings.BP_Save_InputKeys_Settings_C");
		return ptr;
	}



	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
