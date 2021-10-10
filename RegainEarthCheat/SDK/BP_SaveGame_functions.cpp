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

// Function BP_SaveGame.BP_SaveGame_C.FSetPlayerLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SaveGame_C::FSetPlayerLevel(int PlayerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveGame.BP_SaveGame_C.FSetPlayerLevel");

	UBP_SaveGame_C_FSetPlayerLevel_Params params;
	params.PlayerLevel = PlayerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SaveGame.BP_SaveGame_C.FSetPlayerScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SaveGame_C::FSetPlayerScore(int PlayerScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveGame.BP_SaveGame_C.FSetPlayerScore");

	UBP_SaveGame_C_FSetPlayerScore_Params params;
	params.PlayerScore = PlayerScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SaveGame.BP_SaveGame_C.FSetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_SaveGame_C::FSetPlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveGame.BP_SaveGame_C.FSetPlayerName");

	UBP_SaveGame_C_FSetPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
