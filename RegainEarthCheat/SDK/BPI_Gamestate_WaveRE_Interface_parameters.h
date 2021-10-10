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

// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.UpdateTeamScoreBySumPlayerScores
struct UBPI_Gamestate_WaveRE_Interface_C_UpdateTeamScoreBySumPlayerScores_Params
{
};

// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.GetSteamIDPlayerArrayAsSteamIdObject
struct UBPI_Gamestate_WaveRE_Interface_C_GetSteamIDPlayerArrayAsSteamIdObject_Params
{
	TArray<struct FSteamID>                            SteamIdArray;                                              // (Parm, OutParm)
};

// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.AddSteamIdToPlayerSteamIdList
struct UBPI_Gamestate_WaveRE_Interface_C_AddSteamIdToPlayerSteamIdList_Params
{
	struct FString                                     NewSteamId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C.GetTeamScore
struct UBPI_Gamestate_WaveRE_Interface_C_GetTeamScore_Params
{
	int                                                Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
