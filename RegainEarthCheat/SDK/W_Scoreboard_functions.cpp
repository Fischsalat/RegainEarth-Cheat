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

// Function W_Scoreboard.W_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Scoreboard.W_Scoreboard_C.Construct");

	UW_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Scoreboard.W_Scoreboard_C.ClearPlayersInScoreboard
// (BlueprintCallable, BlueprintEvent)
void UW_Scoreboard_C::ClearPlayersInScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Scoreboard.W_Scoreboard_C.ClearPlayersInScoreboard");

	UW_Scoreboard_C_ClearPlayersInScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Scoreboard.W_Scoreboard_C.AddPlayerToScoreboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerStateRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsControlledPlayer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Scoreboard_C::AddPlayerToScoreboard(class APlayerState* PlayerStateRef, int position, bool IsControlledPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Scoreboard.W_Scoreboard_C.AddPlayerToScoreboard");

	UW_Scoreboard_C_AddPlayerToScoreboard_Params params;
	params.PlayerStateRef = PlayerStateRef;
	params.position = position;
	params.IsControlledPlayer = IsControlledPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Scoreboard.W_Scoreboard_C.AddChildScoreRowToPlayersList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ChildScoreRefToAdd             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Scoreboard_C::AddChildScoreRowToPlayersList(class UUserWidget* ChildScoreRefToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Scoreboard.W_Scoreboard_C.AddChildScoreRowToPlayersList");

	UW_Scoreboard_C_AddChildScoreRowToPlayersList_Params params;
	params.ChildScoreRefToAdd = ChildScoreRefToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Scoreboard.W_Scoreboard_C.ExecuteUbergraph_W_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Scoreboard_C::ExecuteUbergraph_W_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Scoreboard.W_Scoreboard_C.ExecuteUbergraph_W_Scoreboard");

	UW_Scoreboard_C_ExecuteUbergraph_W_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
