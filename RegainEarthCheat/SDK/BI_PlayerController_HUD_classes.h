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

// BlueprintGeneratedClass BI_PlayerController_HUD.BI_PlayerController_HUD_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBI_PlayerController_HUD_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BI_PlayerController_HUD.BI_PlayerController_HUD_C");
		return ptr;
	}



	void RemoveTutorial_Bottom();
	void DisplayCustomMessageTutorial_Bottom(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void DisplayCustomMessageToolTip_Side(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void RemoveToolTip_Side();
	void DisplayButtonToolTip_Side(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, bool DisplayExtraLongAndRemoveOnUsage_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
