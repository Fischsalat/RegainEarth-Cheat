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

// BlueprintGeneratedClass BP_Save_Sound_Settings.BP_Save_Sound_Settings_C
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UBP_Save_Sound_Settings_C : public UBP_SaveSettings_Base_C
{
public:
	struct FSSettings_Sounds                           Default_Settings_Sound;                                    // 0x0038(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Sounds                           Settings_Sound;                                            // 0x0054(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Save_Sound_Settings.BP_Save_Sound_Settings_C");
		return ptr;
	}



	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
