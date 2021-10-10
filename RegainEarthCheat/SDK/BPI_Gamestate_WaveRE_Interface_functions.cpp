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

// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.UpdateTeamScoreBySumPlayerScores
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Gamestate_WaveRE_Interface_C::UpdateTeamScoreBySumPlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.UpdateTeamScoreBySumPlayerScores");

	UBPI_Gamestate_WaveRE_Interface_C_UpdateTeamScoreBySumPlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.GetSteamIDPlayerArrayAsSteamIdObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamID>        SteamIdArray                   (Parm, OutParm)
void UBPI_Gamestate_WaveRE_Interface_C::GetSteamIDPlayerArrayAsSteamIdObject(TArray<struct FSteamID>* SteamIdArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.GetSteamIDPlayerArrayAsSteamIdObject");

	UBPI_Gamestate_WaveRE_Interface_C_GetSteamIDPlayerArrayAsSteamIdObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIdArray != nullptr)
		*SteamIdArray = params.SteamIdArray;

}


// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.AddSteamIdToPlayerSteamIdList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewSteamId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_Gamestate_WaveRE_Interface_C::AddSteamIdToPlayerSteamIdList(const struct FString& NewSteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.AddSteamIdToPlayerSteamIdList");

	UBPI_Gamestate_WaveRE_Interface_C_AddSteamIdToPlayerSteamIdList_Params params;
	params.NewSteamId = NewSteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.GetTeamScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Gamestate_WaveRE_Interface_C::GetTeamScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.GetTeamScore");

	UBPI_Gamestate_WaveRE_Interface_C_GetTeamScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
