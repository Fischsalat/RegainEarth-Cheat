﻿#pragma once

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

// BlueprintGeneratedClass BP_Save_DisplayImportant_Settings.BP_Save_DisplayImportant_Settings_C
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UBP_Save_DisplayImportant_Settings_C : public UBP_SaveSettings_Base_C
{
public:
	struct FSSettings_Display                          Default_Settings_Display;                                  // 0x0038(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Display                          Settings_Display;                                          // 0x005C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Save_DisplayImportant_Settings.BP_Save_DisplayImportant_Settings_C");
		return ptr;
	}



	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
