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

// Function BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C.GetLeaderBoardFrame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LeaderboardFrame_C*   LeaderBoardFrame               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MenusLeaderboardInterface_C::GetLeaderBoardFrame(class UW_LeaderboardFrame_C** LeaderBoardFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C.GetLeaderBoardFrame");

	UBPI_MenusLeaderboardInterface_C_GetLeaderBoardFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeaderBoardFrame != nullptr)
		*LeaderBoardFrame = params.LeaderBoardFrame;

}


// Function BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C.UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*              AvatarTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MenusLeaderboardInterface_C::UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C.UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed");

	UBPI_MenusLeaderboardInterface_C_UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed_Params params;
	params.SteamID = SteamID;
	params.PlayerName = PlayerName;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
