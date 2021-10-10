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

// BlueprintGeneratedClass BP_Save_Player_Settings.BP_Save_Player_Settings_C
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UBP_Save_Player_Settings_C : public UBP_SaveSettings_Base_C
{
public:
	struct FSSettings_Player                           Default_Settings_Player;                                   // 0x0038(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSSettings_Player                           Settings_Player;                                           // 0x0050(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Save_Player_Settings.BP_Save_Player_Settings_C");
		return ptr;
	}



	void SetValuesToDefaultValues();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
