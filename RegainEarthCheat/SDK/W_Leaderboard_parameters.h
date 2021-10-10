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

// Function W_Leaderboard.W_Leaderboard_C.PreConstruct
struct UW_Leaderboard_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Leaderboard.W_Leaderboard_C.Construct
struct UW_Leaderboard_C_Construct_Params
{
};

// Function W_Leaderboard.W_Leaderboard_C.ClearPlayersInLeaderboard
struct UW_Leaderboard_C_ClearPlayersInLeaderboard_Params
{
};

// Function W_Leaderboard.W_Leaderboard_C.AddPlayerToLeaderboard
struct UW_Leaderboard_C_AddPlayerToLeaderboard_Params
{
	struct FSLeaderboardRowData                        LeaderboardRowDataStruct;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes>   Leaderboardtype;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Leaderboard.W_Leaderboard_C.AddChildLeaderRowToPlayersList
struct UW_Leaderboard_C_AddChildLeaderRowToPlayersList_Params
{
	class UUserWidget*                                 ChildScoreRefToAdd;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Leaderboard.W_Leaderboard_C.UpdatePlayerAvatarAndNameOnSteamIDMatch
struct UW_Leaderboard_C_UpdatePlayerAvatarAndNameOnSteamIDMatch_Params
{
	struct FSteamID                                    SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  AvatarTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Leaderboard.W_Leaderboard_C.ExecuteUbergraph_W_Leaderboard
struct UW_Leaderboard_C_ExecuteUbergraph_W_Leaderboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
