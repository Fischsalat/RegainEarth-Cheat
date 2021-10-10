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
// Parameters
//---------------------------------------------------------------------------

// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.RemoveTutorial_Bottom
struct UBI_PlayerController_HUD_C_RemoveTutorial_Bottom_Params
{
};

// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayCustomMessageTutorial_Bottom
struct UBI_PlayerController_HUD_C_DisplayCustomMessageTutorial_Bottom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayCustomMessageToolTip_Side
struct UBI_PlayerController_HUD_C_DisplayCustomMessageToolTip_Side_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.RemoveToolTip_Side
struct UBI_PlayerController_HUD_C_RemoveToolTip_Side_Params
{
};

// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayButtonToolTip_Side
struct UBI_PlayerController_HUD_C_DisplayButtonToolTip_Side_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayExtraLongAndRemoveOnUsage_;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
