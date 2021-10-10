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

// Function W_Scoreboard.W_Scoreboard_C.Construct
struct UW_Scoreboard_C_Construct_Params
{
};

// Function W_Scoreboard.W_Scoreboard_C.ClearPlayersInScoreboard
struct UW_Scoreboard_C_ClearPlayersInScoreboard_Params
{
};

// Function W_Scoreboard.W_Scoreboard_C.AddPlayerToScoreboard
struct UW_Scoreboard_C_AddPlayerToScoreboard_Params
{
	class APlayerState*                                PlayerStateRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsControlledPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Scoreboard.W_Scoreboard_C.AddChildScoreRowToPlayersList
struct UW_Scoreboard_C_AddChildScoreRowToPlayersList_Params
{
	class UUserWidget*                                 ChildScoreRefToAdd;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Scoreboard.W_Scoreboard_C.ExecuteUbergraph_W_Scoreboard
struct UW_Scoreboard_C_ExecuteUbergraph_W_Scoreboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
