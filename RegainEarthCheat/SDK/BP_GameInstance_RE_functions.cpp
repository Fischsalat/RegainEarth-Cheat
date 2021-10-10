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

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCheckIfDlcIsInstalled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInstalled                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetCheckIfDlcIsInstalled(bool* IsInstalled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCheckIfDlcIsInstalled");

	UBP_GameInstance_RE_C_GetCheckIfDlcIsInstalled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInstalled != nullptr)
		*IsInstalled = params.IsInstalled;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.IsAchievementUnlockedPassed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievemntToCheck              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_GameInstance_RE_C::IsAchievementUnlockedPassed(TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievemntToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.IsAchievementUnlockedPassed");

	UBP_GameInstance_RE_C_IsAchievementUnlockedPassed_Params params;
	params.AchievemntToCheck = AchievemntToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileSound
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileSound");

	UBP_GameInstance_RE_C_SaveSettingsToFileSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileQualityUe4Scalability
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileQualityUe4Scalability()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileQualityUe4Scalability");

	UBP_GameInstance_RE_C_SaveSettingsToFileQualityUe4Scalability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileQualityCustom
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileQualityCustom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileQualityCustom");

	UBP_GameInstance_RE_C_SaveSettingsToFileQualityCustom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFilePlayer
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFilePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFilePlayer");

	UBP_GameInstance_RE_C_SaveSettingsToFilePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileLanguage
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileLanguage");

	UBP_GameInstance_RE_C_SaveSettingsToFileLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileInputKeys
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileInputKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileInputKeys");

	UBP_GameInstance_RE_C_SaveSettingsToFileInputKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileGameplay
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileGameplay");

	UBP_GameInstance_RE_C_SaveSettingsToFileGameplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileBrightness
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileBrightness");

	UBP_GameInstance_RE_C_SaveSettingsToFileBrightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileDisplayImportant
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileDisplayImportant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileDisplayImportant");

	UBP_GameInstance_RE_C_SaveSettingsToFileDisplayImportant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileControls
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsToFileControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileControls");

	UBP_GameInstance_RE_C_SaveSettingsToFileControls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsBase
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SaveSettingsBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsBase");

	UBP_GameInstance_RE_C_SaveSettingsBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_Sound_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsSound(class UBP_Save_Sound_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsSound");

	UBP_GameInstance_RE_C_GetGameSettingsSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsQualityUe4Scalability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_QualityUe4Scalability_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsQualityUe4Scalability(class UBP_Save_QualityUe4Scalability_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsQualityUe4Scalability");

	UBP_GameInstance_RE_C_GetGameSettingsQualityUe4Scalability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsQualityCustom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_QualityCustom_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsQualityCustom(class UBP_Save_QualityCustom_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsQualityCustom");

	UBP_GameInstance_RE_C_GetGameSettingsQualityCustom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_Player_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsPlayer(class UBP_Save_Player_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsPlayer");

	UBP_GameInstance_RE_C_GetGameSettingsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsLanguage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_Language_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsLanguage(class UBP_Save_Language_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsLanguage");

	UBP_GameInstance_RE_C_GetGameSettingsLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsInputKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_InputKeys_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsInputKeys(class UBP_Save_InputKeys_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsInputKeys");

	UBP_GameInstance_RE_C_GetGameSettingsInputKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsGameplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_Gameplay_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsGameplay(class UBP_Save_Gameplay_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsGameplay");

	UBP_GameInstance_RE_C_GetGameSettingsGameplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsBrightness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_Brightness_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsBrightness(class UBP_Save_Brightness_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsBrightness");

	UBP_GameInstance_RE_C_GetGameSettingsBrightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsDisplayImportant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Save_DisplayImportant_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsDisplayImportant(class UBP_Save_DisplayImportant_Settings_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsDisplayImportant");

	UBP_GameInstance_RE_C_GetGameSettingsDisplayImportant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsControls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_Save_Controls_Settings_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::GetGameSettingsControls(bool* IsSuccess, class UBP_Save_Controls_Settings_C** Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsControls");

	UBP_GameInstance_RE_C_GetGameSettingsControls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (Settings != nullptr)
		*Settings = params.Settings;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetLastPlayedValuesToGameInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CurrentOrLastPlayedMap         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxPlayersCurrentOrLastPlayedMatch (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LastStartedMatchWasSingleplayer (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetLastPlayedValuesToGameInstance(struct FString* CurrentOrLastPlayedMap, TEnumAsByte<EDifficulties_EDifficulties>* DifficultyCurrentOrLastPlayedMatch, int* MaxPlayersCurrentOrLastPlayedMatch, bool* LastStartedMatchWasSingleplayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetLastPlayedValuesToGameInstance");

	UBP_GameInstance_RE_C_GetLastPlayedValuesToGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentOrLastPlayedMap != nullptr)
		*CurrentOrLastPlayedMap = params.CurrentOrLastPlayedMap;
	if (DifficultyCurrentOrLastPlayedMatch != nullptr)
		*DifficultyCurrentOrLastPlayedMatch = params.DifficultyCurrentOrLastPlayedMatch;
	if (MaxPlayersCurrentOrLastPlayedMatch != nullptr)
		*MaxPlayersCurrentOrLastPlayedMatch = params.MaxPlayersCurrentOrLastPlayedMatch;
	if (LastStartedMatchWasSingleplayer != nullptr)
		*LastStartedMatchWasSingleplayer = params.LastStartedMatchWasSingleplayer;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Reset All Last Match Stats
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::Reset_All_Last_Match_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.Reset All Last Match Stats");

	UBP_GameInstance_RE_C_Reset_All_Last_Match_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentOrLatestMatchStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerGotUnconscious           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerGotDeath                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerKills                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerKillsHeadshots           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerKillsExplosives          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerKillsInAir               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerRevivedOtherPlayer       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ElapsedRoundtime               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ElapsedMatchtime               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::GetCurrentOrLatestMatchStats(int* PlayerGotUnconscious, int* PlayerGotDeath, int* PlayerKills, int* PlayerKillsHeadshots, int* PlayerKillsExplosives, int* PlayerKillsInAir, int* PlayerRevivedOtherPlayer, int* ElapsedRoundtime, int* ElapsedMatchtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentOrLatestMatchStats");

	UBP_GameInstance_RE_C_GetCurrentOrLatestMatchStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerGotUnconscious != nullptr)
		*PlayerGotUnconscious = params.PlayerGotUnconscious;
	if (PlayerGotDeath != nullptr)
		*PlayerGotDeath = params.PlayerGotDeath;
	if (PlayerKills != nullptr)
		*PlayerKills = params.PlayerKills;
	if (PlayerKillsHeadshots != nullptr)
		*PlayerKillsHeadshots = params.PlayerKillsHeadshots;
	if (PlayerKillsExplosives != nullptr)
		*PlayerKillsExplosives = params.PlayerKillsExplosives;
	if (PlayerKillsInAir != nullptr)
		*PlayerKillsInAir = params.PlayerKillsInAir;
	if (PlayerRevivedOtherPlayer != nullptr)
		*PlayerRevivedOtherPlayer = params.PlayerRevivedOtherPlayer;
	if (ElapsedRoundtime != nullptr)
		*ElapsedRoundtime = params.ElapsedRoundtime;
	if (ElapsedMatchtime != nullptr)
		*ElapsedMatchtime = params.ElapsedMatchtime;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetElapsedMatchtime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ElapsedMatchtime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetElapsedMatchtime(int ElapsedMatchtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetElapsedMatchtime");

	UBP_GameInstance_RE_C_SetElapsedMatchtime_Params params;
	params.ElapsedMatchtime = ElapsedMatchtime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetElapsedRoundtime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ElapsedRoundtime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetElapsedRoundtime(int ElapsedRoundtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetElapsedRoundtime");

	UBP_GameInstance_RE_C_SetElapsedRoundtime_Params params;
	params.ElapsedRoundtime = ElapsedRoundtime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerRevivedOtherPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerRevivedOtherPlayer       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerRevivedOtherPlayer(int PlayerRevivedOtherPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerRevivedOtherPlayer");

	UBP_GameInstance_RE_C_SetPlayerRevivedOtherPlayer_Params params;
	params.PlayerRevivedOtherPlayer = PlayerRevivedOtherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsInAir
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerKillsInAir               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerKillsInAir(int PlayerKillsInAir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsInAir");

	UBP_GameInstance_RE_C_SetPlayerKillsInAir_Params params;
	params.PlayerKillsInAir = PlayerKillsInAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsExplosives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerKillsExplosives          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerKillsExplosives(int PlayerKillsExplosives)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsExplosives");

	UBP_GameInstance_RE_C_SetPlayerKillsExplosives_Params params;
	params.PlayerKillsExplosives = PlayerKillsExplosives;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsHeadshots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerKillsHeadshots           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerKillsHeadshots(int PlayerKillsHeadshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsHeadshots");

	UBP_GameInstance_RE_C_SetPlayerKillsHeadshots_Params params;
	params.PlayerKillsHeadshots = PlayerKillsHeadshots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerKills                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerKills(int PlayerKills)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKills");

	UBP_GameInstance_RE_C_SetPlayerKills_Params params;
	params.PlayerKills = PlayerKills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerGotDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerGotDeath                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerGotDeath(int PlayerGotDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerGotDeath");

	UBP_GameInstance_RE_C_SetPlayerGotDeath_Params params;
	params.PlayerGotDeath = PlayerGotDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerGotUnconscious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerGotUnconscious           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetPlayerGotUnconscious(int PlayerGotUnconscious)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerGotUnconscious");

	UBP_GameInstance_RE_C_SetPlayerGotUnconscious_Params params;
	params.PlayerGotUnconscious = PlayerGotUnconscious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.IsDeveloperAndStandAloneBuild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsStandAloneAndNotDevBuild     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsStandAloneBuild              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsDeveloperBuild               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::IsDeveloperAndStandAloneBuild(bool* IsStandAloneAndNotDevBuild, bool* IsStandAloneBuild, bool* IsDeveloperBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.IsDeveloperAndStandAloneBuild");

	UBP_GameInstance_RE_C_IsDeveloperAndStandAloneBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsStandAloneAndNotDevBuild != nullptr)
		*IsStandAloneAndNotDevBuild = params.IsStandAloneAndNotDevBuild;
	if (IsStandAloneBuild != nullptr)
		*IsStandAloneBuild = params.IsStandAloneBuild;
	if (IsDeveloperBuild != nullptr)
		*IsDeveloperBuild = params.IsDeveloperBuild;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ChangeSelectedMapInGInstanceAndCallDisp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedMapKey_Local           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::ChangeSelectedMapInGInstanceAndCallDisp(const struct FString& SelectedMapKey_Local)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.ChangeSelectedMapInGInstanceAndCallDisp");

	UBP_GameInstance_RE_C_ChangeSelectedMapInGInstanceAndCallDisp_Params params;
	params.SelectedMapKey_Local = SelectedMapKey_Local;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetDifficultyCurrentOrLastHOSTEDMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastHostedMatchEnum (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  asByte                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 NameAsString                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::GetDifficultyCurrentOrLastHOSTEDMatch(TEnumAsByte<EDifficulties_EDifficulties>* DifficultyCurrentOrLastHostedMatchEnum, unsigned char* asByte, struct FString* NameAsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetDifficultyCurrentOrLastHOSTEDMatch");

	UBP_GameInstance_RE_C_GetDifficultyCurrentOrLastHOSTEDMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DifficultyCurrentOrLastHostedMatchEnum != nullptr)
		*DifficultyCurrentOrLastHostedMatchEnum = params.DifficultyCurrentOrLastHostedMatchEnum;
	if (asByte != nullptr)
		*asByte = params.asByte;
	if (NameAsString != nullptr)
		*NameAsString = params.NameAsString;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentOrLastHostedGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EGameMode_EGameMode> CurrentOrLastHostedGameMode    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  asByte                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 asString                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::GetCurrentOrLastHostedGameMode(TEnumAsByte<EGameMode_EGameMode>* CurrentOrLastHostedGameMode, unsigned char* asByte, struct FString* asString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentOrLastHostedGameMode");

	UBP_GameInstance_RE_C_GetCurrentOrLastHostedGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentOrLastHostedGameMode != nullptr)
		*CurrentOrLastHostedGameMode = params.CurrentOrLastHostedGameMode;
	if (asByte != nullptr)
		*asByte = params.asByte;
	if (asString != nullptr)
		*asString = params.asString;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentMultiplayerSessionResult
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RetrievedValuesFine_1          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NumConnections                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPrivateConnections          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsLAN                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsDedicated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bAllowInvites                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bAllowJoinInProgress           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsAnticheatEnabled            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            BuildUniqueID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm)
void UBP_GameInstance_RE_C::GetCurrentMultiplayerSessionResult(bool* RetrievedValuesFine_1, int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentMultiplayerSessionResult");

	UBP_GameInstance_RE_C_GetCurrentMultiplayerSessionResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RetrievedValuesFine_1 != nullptr)
		*RetrievedValuesFine_1 = params.RetrievedValuesFine_1;
	if (NumConnections != nullptr)
		*NumConnections = params.NumConnections;
	if (NumPrivateConnections != nullptr)
		*NumPrivateConnections = params.NumPrivateConnections;
	if (bIsLAN != nullptr)
		*bIsLAN = params.bIsLAN;
	if (bIsDedicated != nullptr)
		*bIsDedicated = params.bIsDedicated;
	if (bAllowInvites != nullptr)
		*bAllowInvites = params.bAllowInvites;
	if (bAllowJoinInProgress != nullptr)
		*bAllowJoinInProgress = params.bAllowJoinInProgress;
	if (bIsAnticheatEnabled != nullptr)
		*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
	if (BuildUniqueID != nullptr)
		*BuildUniqueID = params.BuildUniqueID;
	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.DEPR_SetCurrentMultiplayerSessionResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult CurrentMultiplayerSessionResult (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_GameInstance_RE_C::DEPR_SetCurrentMultiplayerSessionResult(const struct FBlueprintSessionResult& CurrentMultiplayerSessionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.DEPR_SetCurrentMultiplayerSessionResult");

	UBP_GameInstance_RE_C_DEPR_SetCurrentMultiplayerSessionResult_Params params;
	params.CurrentMultiplayerSessionResult = CurrentMultiplayerSessionResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetAssignButtonFirstInputKeyData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ActionText                     (Parm, OutParm)
// struct FSInputKey_ConfigAndGraphics KeyConfigAndGraphics           (Parm, OutParm, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::GetAssignButtonFirstInputKeyData(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, struct FText* ActionText, struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetAssignButtonFirstInputKeyData");

	UBP_GameInstance_RE_C_GetAssignButtonFirstInputKeyData_Params params;
	params.ActionKey = ActionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionText != nullptr)
		*ActionText = params.ActionText;
	if (KeyConfigAndGraphics != nullptr)
		*KeyConfigAndGraphics = params.KeyConfigAndGraphics;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetAssignButtonKeyForActionInput
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ActionAndKeysBind    PossibleActionsAndTheirKeyBinds (Parm, OutParm, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::GetAssignButtonKeyForActionInput(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, bool* Return_Value, struct FS_ActionAndKeysBind* PossibleActionsAndTheirKeyBinds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetAssignButtonKeyForActionInput");

	UBP_GameInstance_RE_C_GetAssignButtonKeyForActionInput_Params params;
	params.ActionKey = ActionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (PossibleActionsAndTheirKeyBinds != nullptr)
		*PossibleActionsAndTheirKeyBinds = params.PossibleActionsAndTheirKeyBinds;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FWriteSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRewriteSaveGame              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ESaveGameType_ESaveGameType> SaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::FWriteSaveGame(bool IsRewriteSaveGame, TEnumAsByte<ESaveGameType_ESaveGameType> SaveType, const struct FString& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FWriteSaveGame");

	UBP_GameInstance_RE_C_FWriteSaveGame_Params params;
	params.IsRewriteSaveGame = IsRewriteSaveGame;
	params.SaveType = SaveType;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FRewriteSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveGameType_ESaveGameType> SaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::FRewriteSaveGame(TEnumAsByte<ESaveGameType_ESaveGameType> SaveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FRewriteSaveGame");

	UBP_GameInstance_RE_C_FRewriteSaveGame_Params params;
	params.SaveType = SaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FLoadSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SaveGame_C*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UBP_SaveGame_C* UBP_GameInstance_RE_C::FLoadSave(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FLoadSave");

	UBP_GameInstance_RE_C_FLoadSave_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FAddServerMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::FAddServerMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FAddServerMessage");

	UBP_GameInstance_RE_C_FAddServerMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsBase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SaveSettings_Base_C* Settings                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::GetGameSettingsBase(class UBP_SaveSettings_Base_C** Settings, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsBase");

	UBP_GameInstance_RE_C_GetGameSettingsBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FRemoveSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::FRemoveSaveGame(const struct FString& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FRemoveSaveGame");

	UBP_GameInstance_RE_C_FRemoveSaveGame_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FindLastSaveWithType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveGameType_ESaveGameType> SaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 SaveSlot                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::FindLastSaveWithType(TEnumAsByte<ESaveGameType_ESaveGameType> SaveType, bool* IsSuccess, struct FString* SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FindLastSaveWithType");

	UBP_GameInstance_RE_C_FindLastSaveWithType_Params params;
	params.SaveType = SaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (SaveSlot != nullptr)
		*SaveSlot = params.SaveSlot;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FSaveGameToNewSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::FSaveGameToNewSlot(const struct FString& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FSaveGameToNewSlot");

	UBP_GameInstance_RE_C_FSaveGameToNewSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_1200CBE9428A08FFF0E017805007AB11
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardFindResult  Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::OnCallback_1200CBE9428A08FFF0E017805007AB11(const struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_1200CBE9428A08FFF0E017805007AB11");

	UBP_GameInstance_RE_C_OnCallback_1200CBE9428A08FFF0E017805007AB11_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_1200CBE9428A08FFF0E0178030A01554
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardFindResult  Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::OnCallback_1200CBE9428A08FFF0E0178030A01554(const struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_1200CBE9428A08FFF0E0178030A01554");

	UBP_GameInstance_RE_C_OnCallback_1200CBE9428A08FFF0E0178030A01554_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_7FD356454B867959130A9680CF558725
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnFailure_7FD356454B867959130A9680CF558725()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_7FD356454B867959130A9680CF558725");

	UBP_GameInstance_RE_C_OnFailure_7FD356454B867959130A9680CF558725_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_7FD356454B867959130A9680CF558725
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnSuccess_7FD356454B867959130A9680CF558725()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_7FD356454B867959130A9680CF558725");

	UBP_GameInstance_RE_C_OnSuccess_7FD356454B867959130A9680CF558725_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_7FD356454B867959130A96805F6E920B
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnFailure_7FD356454B867959130A96805F6E920B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_7FD356454B867959130A96805F6E920B");

	UBP_GameInstance_RE_C_OnFailure_7FD356454B867959130A96805F6E920B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_7FD356454B867959130A96805F6E920B
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnSuccess_7FD356454B867959130A96805F6E920B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_7FD356454B867959130A96805F6E920B");

	UBP_GameInstance_RE_C_OnSuccess_7FD356454B867959130A96805F6E920B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD");

	UBP_GameInstance_RE_C_OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_35001BE44DBC2F304055849B6D318A25
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::OnCallback_35001BE44DBC2F304055849B6D318A25(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_35001BE44DBC2F304055849B6D318A25");

	UBP_GameInstance_RE_C_OnCallback_35001BE44DBC2F304055849B6D318A25_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_5BE5D0884D8CF38111FA328329FF2D88
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::OnCallback_5BE5D0884D8CF38111FA328329FF2D88(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_5BE5D0884D8CF38111FA328329FF2D88");

	UBP_GameInstance_RE_C_OnCallback_5BE5D0884D8CF38111FA328329FF2D88_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_180F93B6415BCF2D8C33BA9090D6B190
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoreUploaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::OnCallback_180F93B6415BCF2D8C33BA9090D6B190(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_180F93B6415BCF2D8C33BA9090D6B190");

	UBP_GameInstance_RE_C_OnCallback_180F93B6415BCF2D8C33BA9090D6B190_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18");

	UBP_GameInstance_RE_C_OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18");

	UBP_GameInstance_RE_C_OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037");

	UBP_GameInstance_RE_C_OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037");

	UBP_GameInstance_RE_C_OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_C27A7648436C9F9FEC1F8C90D262AC73
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::OnFailure_C27A7648436C9F9FEC1F8C90D262AC73(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_C27A7648436C9F9FEC1F8C90D262AC73");

	UBP_GameInstance_RE_C_OnFailure_C27A7648436C9F9FEC1F8C90D262AC73_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73");

	UBP_GameInstance_RE_C_OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Test
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.Test");

	UBP_GameInstance_RE_C_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CustomEvent_2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsStored        Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CustomEvent_2(const struct FUserStatsStored& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CustomEvent_2");

	UBP_GameInstance_RE_C_CustomEvent_2_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CustomEvent_3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsUnloaded      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CustomEvent_3(const struct FUserStatsUnloaded& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CustomEvent_3");

	UBP_GameInstance_RE_C_CustomEvent_3_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamUserDataOfLocalUserForStatsAndAchievements
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::RequestSteamUserDataOfLocalUserForStatsAndAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamUserDataOfLocalUserForStatsAndAchievements");

	UBP_GameInstance_RE_C_RequestSteamUserDataOfLocalUserForStatsAndAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserDataGameStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsReceived      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CallbackUserDataGameStart(const struct FUserStatsReceived& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserDataGameStart");

	UBP_GameInstance_RE_C_CallbackUserDataGameStart_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndAchievements
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::UpdateSteamUserDataOfLocalUserForStatsAndAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndAchievements");

	UBP_GameInstance_RE_C_UpdateSteamUserDataOfLocalUserForStatsAndAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AchievementsFrame_C*  AchievementFrameRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef(class UW_AchievementsFrame_C* AchievementFrameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef");

	UBP_GameInstance_RE_C_UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef_Params params;
	params.AchievementFrameRef = AchievementFrameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LeaderboardFrame_C*   SteamStatsWidgetRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef(class UW_LeaderboardFrame_C* SteamStatsWidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef");

	UBP_GameInstance_RE_C_UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef_Params params;
	params.SteamStatsWidgetRef = SteamStatsWidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LeaderboardFrame_C*   SteamStatsWidgetRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI(class UW_LeaderboardFrame_C* SteamStatsWidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI");

	UBP_GameInstance_RE_C_SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI_Params params;
	params.SteamStatsWidgetRef = SteamStatsWidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine_SetStats
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::RequestSteamStatsCallbackFiredFine_SetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine_SetStats");

	UBP_GameInstance_RE_C_RequestSteamStatsCallbackFiredFine_SetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserDataUpdate
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsReceived      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CallbackUserDataUpdate(const struct FUserStatsReceived& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserDataUpdate");

	UBP_GameInstance_RE_C_CallbackUserDataUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserAchievements
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsReceived      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CallbackUserAchievements(const struct FUserStatsReceived& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserAchievements");

	UBP_GameInstance_RE_C_CallbackUserAchievements_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserStats
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsReceived      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CallbackUserStats(const struct FUserStatsReceived& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserStats");

	UBP_GameInstance_RE_C_CallbackUserStats_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackStoreStats
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserStatsStored        Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_GameInstance_RE_C::CallbackStoreStats(const struct FUserStatsStored& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackStoreStats");

	UBP_GameInstance_RE_C_CallbackStoreStats_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LeaderboardFrame_C*   SteamStatsWidgetRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal(class UW_LeaderboardFrame_C* SteamStatsWidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal");

	UBP_GameInstance_RE_C_UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal_Params params;
	params.SteamStatsWidgetRef = SteamStatsWidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetAchievementPassed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievementID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetAchievementPassed(TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievementID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetAchievementPassed");

	UBP_GameInstance_RE_C_SetAchievementPassed_Params params;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine_Achievment
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::RequestSteamStatsCallbackFiredFine_Achievment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine_Achievment");

	UBP_GameInstance_RE_C_RequestSteamStatsCallbackFiredFine_Achievment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.DoSteamStoreStats
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::DoSteamStoreStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.DoSteamStoreStats");

	UBP_GameInstance_RE_C_DoSteamStoreStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain");

	UBP_GameInstance_RE_C_UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvalutateSteamAchievementsWithAfterMatchStats
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::EvalutateSteamAchievementsWithAfterMatchStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvalutateSteamAchievementsWithAfterMatchStats");

	UBP_GameInstance_RE_C_EvalutateSteamAchievementsWithAfterMatchStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvalutateSteamAchievementsWithAfterRoundStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckedOnStartOfNextRound_IfFalseItsAnEndgameCheck (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::EvalutateSteamAchievementsWithAfterRoundStats(bool CheckedOnStartOfNextRound_IfFalseItsAnEndgameCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvalutateSteamAchievementsWithAfterRoundStats");

	UBP_GameInstance_RE_C_EvalutateSteamAchievementsWithAfterRoundStats_Params params;
	params.CheckedOnStartOfNextRound_IfFalseItsAnEndgameCheck = CheckedOnStartOfNextRound_IfFalseItsAnEndgameCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvaluateScoreUpdateForAchievements
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> AchievementID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::EvaluateScoreUpdateForAchievements(TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> AchievementID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvaluateScoreUpdateForAchievements");

	UBP_GameInstance_RE_C_EvaluateScoreUpdateForAchievements_Params params;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetAllOnineSubStatsOfCurrentUser
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::Danger_ResetAllOnineSubStatsOfCurrentUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetAllOnineSubStatsOfCurrentUser");

	UBP_GameInstance_RE_C_Danger_ResetAllOnineSubStatsOfCurrentUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser");

	UBP_GameInstance_RE_C_Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.PlayerSettingsSaveFileLoaded_Event
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::PlayerSettingsSaveFileLoaded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.PlayerSettingsSaveFileLoaded_Event");

	UBP_GameInstance_RE_C_PlayerSettingsSaveFileLoaded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CollectLeaderBoardDataAndAssignToLeaderBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ControlsAndPlattform           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<EGameMode_EGameMode> GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EDifficulties_EDifficulties> Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::CollectLeaderBoardDataAndAssignToLeaderBoard(int PlayerCount, const struct FString& Map, const struct FString& ControlsAndPlattform, TEnumAsByte<EGameMode_EGameMode> GameMode, TEnumAsByte<EDifficulties_EDifficulties> Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CollectLeaderBoardDataAndAssignToLeaderBoard");

	UBP_GameInstance_RE_C_CollectLeaderBoardDataAndAssignToLeaderBoard_Params params;
	params.PlayerCount = PlayerCount;
	params.Map = Map;
	params.ControlsAndPlattform = ControlsAndPlattform;
	params.GameMode = GameMode;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OneMoreLeaderBoardEntryIsSucssfull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamLeaderboardEntries leaderboardEntries             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            CountOfEntries                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 OptionalLogStringOfLeaderboardQueryType (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor            LogColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> LeaderboardtypeOnWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::OneMoreLeaderBoardEntryIsSucssfull(const struct FSteamLeaderboardEntries& leaderboardEntries, int CountOfEntries, const struct FString& OptionalLogStringOfLeaderboardQueryType, const struct FLinearColor& LogColor, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> LeaderboardtypeOnWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OneMoreLeaderBoardEntryIsSucssfull");

	UBP_GameInstance_RE_C_OneMoreLeaderBoardEntryIsSucssfull_Params params;
	params.leaderboardEntries = leaderboardEntries;
	params.CountOfEntries = CountOfEntries;
	params.OptionalLogStringOfLeaderboardQueryType = OptionalLogStringOfLeaderboardQueryType;
	params.LogColor = LogColor;
	params.LeaderboardtypeOnWidget = LeaderboardtypeOnWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.PersonaStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPersonaStateChange     Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::PersonaStateChanged(const struct FPersonaStateChange& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.PersonaStateChanged");

	UBP_GameInstance_RE_C_PersonaStateChanged_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch");

	UBP_GameInstance_RE_C_CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetLeaderboardEntryOfRunningMatch
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::Danger_ResetLeaderboardEntryOfRunningMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetLeaderboardEntryOfRunningMatch");

	UBP_GameInstance_RE_C_Danger_ResetLeaderboardEntryOfRunningMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.NewSinglePlayerGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastHostedMatch (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::NewSinglePlayerGame(TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastHostedMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.NewSinglePlayerGame");

	UBP_GameInstance_RE_C_NewSinglePlayerGame_Params params;
	params.DifficultyCurrentOrLastHostedMatch = DifficultyCurrentOrLastHostedMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnKeysBindingChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSSettings_InputKeys> Settings_InputKeys             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::OnKeysBindingChanged(TArray<struct FSSettings_InputKeys> Settings_InputKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnKeysBindingChanged");

	UBP_GameInstance_RE_C_OnKeysBindingChanged_Params params;
	params.Settings_InputKeys = Settings_InputKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CreateSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PublicConnections              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bUseLAN                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSServerSettings        ServerSettings                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::CreateSession(int PublicConnections, bool bUseLAN, const struct FSServerSettings& ServerSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.CreateSession");

	UBP_GameInstance_RE_C_CreateSession_Params params;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FindSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseLAN                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::FindSession(bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.FindSession");

	UBP_GameInstance_RE_C_FindSession_Params params;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.JoinSession
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::JoinSession(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.JoinSession");

	UBP_GameInstance_RE_C_JoinSession_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetNewPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::SetNewPlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetNewPlayerName");

	UBP_GameInstance_RE_C_SetNewPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ServerTravelToSelectedMap
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::ServerTravelToSelectedMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.ServerTravelToSelectedMap");

	UBP_GameInstance_RE_C_ServerTravelToSelectedMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OpenLobby
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OpenLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OpenLobby");

	UBP_GameInstance_RE_C_OpenLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UBP_GameInstance_RE_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.ReceiveInit");

	UBP_GameInstance_RE_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ToggleGobalLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowLoadingScreen_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WithFadeInOrFadeOut_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WithCustomOptionalFadeOutTimer_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OptionalCustomFadeTimer        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::ToggleGobalLoadingScreen(bool ShowLoadingScreen_, bool WithFadeInOrFadeOut_, bool WithCustomOptionalFadeOutTimer_, float OptionalCustomFadeTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.ToggleGobalLoadingScreen");

	UBP_GameInstance_RE_C_ToggleGobalLoadingScreen_Params params;
	params.ShowLoadingScreen_ = ShowLoadingScreen_;
	params.WithFadeInOrFadeOut_ = WithFadeInOrFadeOut_;
	params.WithCustomOptionalFadeOutTimer_ = WithCustomOptionalFadeOutTimer_;
	params.OptionalCustomFadeTimer = OptionalCustomFadeTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnGameInstanceInitForTestingPurpose
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::OnGameInstanceInitForTestingPurpose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnGameInstanceInitForTestingPurpose");

	UBP_GameInstance_RE_C_OnGameInstanceInitForTestingPurpose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ServerTravelToLobby
// (BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::ServerTravelToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.ServerTravelToLobby");

	UBP_GameInstance_RE_C_ServerTravelToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetLastPlayedValuesToGameInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LastPlayedMap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxPlayersCurrentOrLastPlayedMatch (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LastStartedMatchWasSingleplayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameInstance_RE_C::SetLastPlayedValuesToGameInstance(const struct FString& LastPlayedMap, TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch, int MaxPlayersCurrentOrLastPlayedMatch, bool LastStartedMatchWasSingleplayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetLastPlayedValuesToGameInstance");

	UBP_GameInstance_RE_C_SetLastPlayedValuesToGameInstance_Params params;
	params.LastPlayedMap = LastPlayedMap;
	params.DifficultyCurrentOrLastPlayedMatch = DifficultyCurrentOrLastPlayedMatch;
	params.MaxPlayersCurrentOrLastPlayedMatch = MaxPlayersCurrentOrLastPlayedMatch;
	params.LastStartedMatchWasSingleplayer = LastStartedMatchWasSingleplayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ExecuteUbergraph_BP_GameInstance_RE
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::ExecuteUbergraph_BP_GameInstance_RE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.ExecuteUbergraph_BP_GameInstance_RE");

	UBP_GameInstance_RE_C_ExecuteUbergraph_BP_GameInstance_RE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.PlayerSettingsSaveFileLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::PlayerSettingsSaveFileLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.PlayerSettingsSaveFileLoaded__DelegateSignature");

	UBP_GameInstance_RE_C_PlayerSettingsSaveFileLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::RequestSteamStatsCallbackFiredFine__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine__DelegateSignature");

	UBP_GameInstance_RE_C_RequestSteamStatsCallbackFiredFine__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SelectedMapChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::SelectedMapChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.SelectedMapChanged__DelegateSignature");

	UBP_GameInstance_RE_C_SelectedMapChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GameStarts__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_GameInstance_RE_C::GameStarts__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.GameStarts__DelegateSignature");

	UBP_GameInstance_RE_C_GameStarts__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnChangePlayerName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_RE_C::OnChangePlayerName__DelegateSignature(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnChangePlayerName__DelegateSignature");

	UBP_GameInstance_RE_C_OnChangePlayerName__DelegateSignature_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFindSessionCompleted__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::OnFindSessionCompleted__DelegateSignature(TArray<struct FBlueprintSessionResult>* sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFindSessionCompleted__DelegateSignature");

	UBP_GameInstance_RE_C_OnFindSessionCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (sessions != nullptr)
		*sessions = params.sessions;

}


// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnKeysBindingChanded__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSSettings_InputKeys> Settings_InputKeys             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_GameInstance_RE_C::OnKeysBindingChanded__DelegateSignature(TArray<struct FSSettings_InputKeys>* Settings_InputKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnKeysBindingChanded__DelegateSignature");

	UBP_GameInstance_RE_C_OnKeysBindingChanded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings_InputKeys != nullptr)
		*Settings_InputKeys = params.Settings_InputKeys;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
