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

// Function BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C.GetLeaderBoardFrame
struct UBPI_MenusLeaderboardInterface_C_GetLeaderBoardFrame_Params
{
	class UW_LeaderboardFrame_C*                       LeaderBoardFrame;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C.UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed
struct UBPI_MenusLeaderboardInterface_C_UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed_Params
{
	struct FSteamID                                    SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  AvatarTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
