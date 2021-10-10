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

// Function W_LeaderboardRow.W_LeaderboardRow_C.SetPositionNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Nr                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardRow_C::SetPositionNumber(int Nr)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardRow.W_LeaderboardRow_C.SetPositionNumber");

	UW_LeaderboardRow_C_SetPositionNumber_Params params;
	params.Nr = Nr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardRow.W_LeaderboardRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_LeaderboardRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardRow.W_LeaderboardRow_C.Construct");

	UW_LeaderboardRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardRow.W_LeaderboardRow_C.SetLeaderboardBasedata
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSLeaderboardRowData    LeaderboardRowDataStruct       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardRow_C::SetLeaderboardBasedata(const struct FSLeaderboardRowData& LeaderboardRowDataStruct, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardRow.W_LeaderboardRow_C.SetLeaderboardBasedata");

	UW_LeaderboardRow_C_SetLeaderboardBasedata_Params params;
	params.LeaderboardRowDataStruct = LeaderboardRowDataStruct;
	params.Leaderboardtype = Leaderboardtype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardRow.W_LeaderboardRow_C.UpdatePlayerAvatarAndNameOnSteamIDMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*              AvatarTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardRow_C::UpdatePlayerAvatarAndNameOnSteamIDMatch(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardRow.W_LeaderboardRow_C.UpdatePlayerAvatarAndNameOnSteamIDMatch");

	UW_LeaderboardRow_C_UpdatePlayerAvatarAndNameOnSteamIDMatch_Params params;
	params.SteamID = SteamID;
	params.PlayerName = PlayerName;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardRow.W_LeaderboardRow_C.RunUpdateVisualData
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardRow_C::RunUpdateVisualData()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardRow.W_LeaderboardRow_C.RunUpdateVisualData");

	UW_LeaderboardRow_C_RunUpdateVisualData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardRow.W_LeaderboardRow_C.ExecuteUbergraph_W_LeaderboardRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardRow_C::ExecuteUbergraph_W_LeaderboardRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardRow.W_LeaderboardRow_C.ExecuteUbergraph_W_LeaderboardRow");

	UW_LeaderboardRow_C_ExecuteUbergraph_W_LeaderboardRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
