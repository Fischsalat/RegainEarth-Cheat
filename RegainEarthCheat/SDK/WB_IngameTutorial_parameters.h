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

// Function WB_IngameTutorial.WB_IngameTutorial_C.CheckRows
struct UWB_IngameTutorial_C_CheckRows_Params
{
	struct FS_IngameTutorial                           In_Row_1;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           In_Row_2;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.SetIconsOnOff
struct UWB_IngameTutorial_C_SetIconsOnOff_Params
{
	struct FS_IngameTutorial                           Row1;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1out;                                                   // (ConstParm, Parm, OutParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2out;                                                   // (ConstParm, Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.GetDataForTextAndIcons
struct UWB_IngameTutorial_C_GetDataForTextAndIcons_Params
{
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1out;                                                   // (Parm, OutParm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2out;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.DisplayIngameTutorial
struct UWB_IngameTutorial_C_DisplayIngameTutorial_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.Construct
struct UWB_IngameTutorial_C_Construct_Params
{
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.RemoveTutorial
struct UWB_IngameTutorial_C_RemoveTutorial_Params
{
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.OnInitialized
struct UWB_IngameTutorial_C_OnInitialized_Params
{
};

// Function WB_IngameTutorial.WB_IngameTutorial_C.ExecuteUbergraph_WB_IngameTutorial
struct UWB_IngameTutorial_C_ExecuteUbergraph_WB_IngameTutorial_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
