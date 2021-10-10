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

// BlueprintGeneratedClass BP_Save_Brightness_Settings.BP_Save_Brightness_Settings_C
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UBP_Save_Brightness_Settings_C : public UBP_SaveSettings_Base_C
{
public:
	struct FSSettings_Brightness                       Default_Settings_Brightness;                               // 0x0038(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Brightness                       Settings_Brightness;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Save_Brightness_Settings.BP_Save_Brightness_Settings_C");
		return ptr;
	}



	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
