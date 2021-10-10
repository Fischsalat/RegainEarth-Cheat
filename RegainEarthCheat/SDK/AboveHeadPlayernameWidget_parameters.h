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

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetBleedOutColorDEPR
struct UAboveHeadPlayernameWidget_C_SetBleedOutColorDEPR_Params
{
	float                                              BleedOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedOutCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.HideSelf
struct UAboveHeadPlayernameWidget_C_HideSelf_Params
{
};

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.Construct
struct UAboveHeadPlayernameWidget_C_Construct_Params
{
};

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetReviveSignActive
struct UAboveHeadPlayernameWidget_C_SetReviveSignActive_Params
{
	bool                                               SetActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetPlayerName
struct UAboveHeadPlayernameWidget_C_SetPlayerName_Params
{
	struct FText                                       NewName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetBleedOutValues
struct UAboveHeadPlayernameWidget_C_SetBleedOutValues_Params
{
	float                                              MaxBleetOutTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActualBleetOutTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.ExecuteUbergraph_AboveHeadPlayernameWidget
struct UAboveHeadPlayernameWidget_C_ExecuteUbergraph_AboveHeadPlayernameWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
