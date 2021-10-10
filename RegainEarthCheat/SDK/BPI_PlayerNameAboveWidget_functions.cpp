// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetBleedOutValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxBleetOutTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ActualBleetOutTime             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerNameAboveWidget_C::SetBleedOutValues(float MaxBleetOutTime, float ActualBleetOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetBleedOutValues");

	UBPI_PlayerNameAboveWidget_C_SetBleedOutValues_Params params;
	params.MaxBleetOutTime = MaxBleetOutTime;
	params.ActualBleetOutTime = ActualBleetOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UBPI_PlayerNameAboveWidget_C::SetPlayerName(const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetPlayerName");

	UBPI_PlayerNameAboveWidget_C_SetPlayerName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetReviveSignActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerNameAboveWidget_C::SetReviveSignActive(bool SetActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerNameAboveWidget.BPI_PlayerNameAboveWidget_C.SetReviveSignActive");

	UBPI_PlayerNameAboveWidget_C_SetReviveSignActive_Params params;
	params.SetActive = SetActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
