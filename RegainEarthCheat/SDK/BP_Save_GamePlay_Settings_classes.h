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

// BlueprintGeneratedClass BP_Save_GamePlay_Settings.BP_Save_Gameplay_Settings_C
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UBP_Save_Gameplay_Settings_C : public UBP_SaveSettings_Base_C
{
public:
	struct FSSettings_Gameplay                         Default_Settings_Gameplay;                                 // 0x0038(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Gameplay                         Settings_Gameplay;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Save_GamePlay_Settings.BP_Save_Gameplay_Settings_C");
		return ptr;
	}



	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
