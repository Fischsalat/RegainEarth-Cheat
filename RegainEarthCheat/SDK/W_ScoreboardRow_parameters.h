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

// Function W_ScoreboardRow.W_ScoreboardRow_C.SetPositionNumber
struct UW_ScoreboardRow_C_SetPositionNumber_Params
{
	int                                                Nr;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.Destruct
struct UW_ScoreboardRow_C_Destruct_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateScores
struct UW_ScoreboardRow_C_UpdateScores_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateUncons
struct UW_ScoreboardRow_C_UpdateUncons_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateAvatar
struct UW_ScoreboardRow_C_UpdateAvatar_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateName
struct UW_ScoreboardRow_C_UpdateName_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateKills
struct UW_ScoreboardRow_C_UpdateKills_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.Construct
struct UW_ScoreboardRow_C_Construct_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.GetPing
struct UW_ScoreboardRow_C_GetPing_Params
{
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.SetScoreboardBasedata
struct UW_ScoreboardRow_C_SetScoreboardBasedata_Params
{
	class APlayerState*                                PlayerStateRefOfThisStatsRow;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsControllerPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ScoreboardRow.W_ScoreboardRow_C.ExecuteUbergraph_W_ScoreboardRow
struct UW_ScoreboardRow_C_ExecuteUbergraph_W_ScoreboardRow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
