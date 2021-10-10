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

// Function W_Leaderboard.W_Leaderboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Leaderboard_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.PreConstruct");

	UW_Leaderboard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Leaderboard.W_Leaderboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Leaderboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.Construct");

	UW_Leaderboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Leaderboard.W_Leaderboard_C.ClearPlayersInLeaderboard
// (BlueprintCallable, BlueprintEvent)
void UW_Leaderboard_C::ClearPlayersInLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.ClearPlayersInLeaderboard");

	UW_Leaderboard_C_ClearPlayersInLeaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Leaderboard.W_Leaderboard_C.AddPlayerToLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSLeaderboardRowData    LeaderboardRowDataStruct       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Leaderboard_C::AddPlayerToLeaderboard(const struct FSLeaderboardRowData& LeaderboardRowDataStruct, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.AddPlayerToLeaderboard");

	UW_Leaderboard_C_AddPlayerToLeaderboard_Params params;
	params.LeaderboardRowDataStruct = LeaderboardRowDataStruct;
	params.Leaderboardtype = Leaderboardtype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Leaderboard.W_Leaderboard_C.AddChildLeaderRowToPlayersList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ChildScoreRefToAdd             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Leaderboard_C::AddChildLeaderRowToPlayersList(class UUserWidget* ChildScoreRefToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.AddChildLeaderRowToPlayersList");

	UW_Leaderboard_C_AddChildLeaderRowToPlayersList_Params params;
	params.ChildScoreRefToAdd = ChildScoreRefToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Leaderboard.W_Leaderboard_C.UpdatePlayerAvatarAndNameOnSteamIDMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*              AvatarTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Leaderboard_C::UpdatePlayerAvatarAndNameOnSteamIDMatch(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.UpdatePlayerAvatarAndNameOnSteamIDMatch");

	UW_Leaderboard_C_UpdatePlayerAvatarAndNameOnSteamIDMatch_Params params;
	params.SteamID = SteamID;
	params.PlayerName = PlayerName;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Leaderboard.W_Leaderboard_C.ExecuteUbergraph_W_Leaderboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Leaderboard_C::ExecuteUbergraph_W_Leaderboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Leaderboard.W_Leaderboard_C.ExecuteUbergraph_W_Leaderboard");

	UW_Leaderboard_C_ExecuteUbergraph_W_Leaderboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
