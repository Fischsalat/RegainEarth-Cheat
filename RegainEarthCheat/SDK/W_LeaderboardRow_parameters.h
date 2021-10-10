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

// Function W_LeaderboardRow.W_LeaderboardRow_C.SetPositionNumber
struct UW_LeaderboardRow_C_SetPositionNumber_Params
{
	int                                                Nr;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardRow.W_LeaderboardRow_C.Construct
struct UW_LeaderboardRow_C_Construct_Params
{
};

// Function W_LeaderboardRow.W_LeaderboardRow_C.SetLeaderboardBasedata
struct UW_LeaderboardRow_C_SetLeaderboardBasedata_Params
{
	struct FSLeaderboardRowData                        LeaderboardRowDataStruct;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes>   Leaderboardtype;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardRow.W_LeaderboardRow_C.UpdatePlayerAvatarAndNameOnSteamIDMatch
struct UW_LeaderboardRow_C_UpdatePlayerAvatarAndNameOnSteamIDMatch_Params
{
	struct FSteamID                                    SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  AvatarTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardRow.W_LeaderboardRow_C.RunUpdateVisualData
struct UW_LeaderboardRow_C_RunUpdateVisualData_Params
{
};

// Function W_LeaderboardRow.W_LeaderboardRow_C.ExecuteUbergraph_W_LeaderboardRow
struct UW_LeaderboardRow_C_ExecuteUbergraph_W_LeaderboardRow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
