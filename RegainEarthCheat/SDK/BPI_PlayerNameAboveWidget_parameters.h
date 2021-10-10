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

// Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetBleedOutValues
struct UBPI_PlayerNameAboveWidget_C_SetBleedOutValues_Params
{
	float                                              MaxBleetOutTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActualBleetOutTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetPlayerName
struct UBPI_PlayerNameAboveWidget_C_SetPlayerName_Params
{
	struct FText                                       NewName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetReviveSignActive
struct UBPI_PlayerNameAboveWidget_C_SetReviveSignActive_Params
{
	bool                                               SetActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
