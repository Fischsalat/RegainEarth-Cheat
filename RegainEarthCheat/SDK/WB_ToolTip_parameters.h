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

// Function WB_ToolTip.WB_ToolTip_C.CheckRowsAndAdjustHeight
struct UWB_ToolTip_C_CheckRowsAndAdjustHeight_Params
{
	struct FS_IngameTutorial                           In_Row_1;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           In_Row_2;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WB_ToolTip.WB_ToolTip_C.SetIconsOnOff
struct UWB_ToolTip_C_SetIconsOnOff_Params
{
	struct FS_IngameTutorial                           Row1;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1out;                                                   // (ConstParm, Parm, OutParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2out;                                                   // (ConstParm, Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_ToolTip.WB_ToolTip_C.GetDataForTextAndIcons
struct UWB_ToolTip_C_GetDataForTextAndIcons_Params
{
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1out;                                                   // (Parm, OutParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2out;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_ToolTip.WB_ToolTip_C.DisplayToolTip
struct UWB_ToolTip_C_DisplayToolTip_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_ToolTip.WB_ToolTip_C.Construct
struct UWB_ToolTip_C_Construct_Params
{
};

// Function WB_ToolTip.WB_ToolTip_C.RemoveToolTip
struct UWB_ToolTip_C_RemoveToolTip_Params
{
};

// Function WB_ToolTip.WB_ToolTip_C.OnInitialized
struct UWB_ToolTip_C_OnInitialized_Params
{
};

// Function WB_ToolTip.WB_ToolTip_C.ExecuteUbergraph_WB_ToolTip
struct UWB_ToolTip_C_ExecuteUbergraph_WB_ToolTip_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
