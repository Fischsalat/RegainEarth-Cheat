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

// Function W_ScoreboardRow.W_ScoreboardRow_C.SetPositionNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Nr                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ScoreboardRow_C::SetPositionNumber(int Nr)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.SetPositionNumber");

	UW_ScoreboardRow_C_SetPositionNumber_Params params;
	params.Nr = Nr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ScoreboardRow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.Destruct");

	UW_ScoreboardRow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateScores
// (BlueprintCallable, BlueprintEvent)
void UW_ScoreboardRow_C::UpdateScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateScores");

	UW_ScoreboardRow_C_UpdateScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateUncons
// (BlueprintCallable, BlueprintEvent)
void UW_ScoreboardRow_C::UpdateUncons()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateUncons");

	UW_ScoreboardRow_C_UpdateUncons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateAvatar
// (BlueprintCallable, BlueprintEvent)
void UW_ScoreboardRow_C::UpdateAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateAvatar");

	UW_ScoreboardRow_C_UpdateAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateName
// (BlueprintCallable, BlueprintEvent)
void UW_ScoreboardRow_C::UpdateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateName");

	UW_ScoreboardRow_C_UpdateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateKills
// (BlueprintCallable, BlueprintEvent)
void UW_ScoreboardRow_C::UpdateKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.UpdateKills");

	UW_ScoreboardRow_C_UpdateKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ScoreboardRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.Construct");

	UW_ScoreboardRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.GetPing
// (BlueprintCallable, BlueprintEvent)
void UW_ScoreboardRow_C::GetPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.GetPing");

	UW_ScoreboardRow_C_GetPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.SetScoreboardBasedata
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerStateRefOfThisStatsRow   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsControllerPlayer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ScoreboardRow_C::SetScoreboardBasedata(class APlayerState* PlayerStateRefOfThisStatsRow, int position, bool IsControllerPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.SetScoreboardBasedata");

	UW_ScoreboardRow_C_SetScoreboardBasedata_Params params;
	params.PlayerStateRefOfThisStatsRow = PlayerStateRefOfThisStatsRow;
	params.position = position;
	params.IsControllerPlayer = IsControllerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ScoreboardRow.W_ScoreboardRow_C.ExecuteUbergraph_W_ScoreboardRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ScoreboardRow_C::ExecuteUbergraph_W_ScoreboardRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ScoreboardRow.W_ScoreboardRow_C.ExecuteUbergraph_W_ScoreboardRow");

	UW_ScoreboardRow_C_ExecuteUbergraph_W_ScoreboardRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
