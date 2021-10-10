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

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCheckIfDlcIsInstalled
struct UBP_GameInstance_RE_C_GetCheckIfDlcIsInstalled_Params
{
	bool                                               IsInstalled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.IsAchievementUnlockedPassed
struct UBP_GameInstance_RE_C_IsAchievementUnlockedPassed_Params
{
	TEnumAsByte<EAchievementIDs_EAchievementIDs>       AchievemntToCheck;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileSound
struct UBP_GameInstance_RE_C_SaveSettingsToFileSound_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileQualityUe4Scalability
struct UBP_GameInstance_RE_C_SaveSettingsToFileQualityUe4Scalability_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileQualityCustom
struct UBP_GameInstance_RE_C_SaveSettingsToFileQualityCustom_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFilePlayer
struct UBP_GameInstance_RE_C_SaveSettingsToFilePlayer_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileLanguage
struct UBP_GameInstance_RE_C_SaveSettingsToFileLanguage_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileInputKeys
struct UBP_GameInstance_RE_C_SaveSettingsToFileInputKeys_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileGameplay
struct UBP_GameInstance_RE_C_SaveSettingsToFileGameplay_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileBrightness
struct UBP_GameInstance_RE_C_SaveSettingsToFileBrightness_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileDisplayImportant
struct UBP_GameInstance_RE_C_SaveSettingsToFileDisplayImportant_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsToFileControls
struct UBP_GameInstance_RE_C_SaveSettingsToFileControls_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SaveSettingsBase
struct UBP_GameInstance_RE_C_SaveSettingsBase_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsSound
struct UBP_GameInstance_RE_C_GetGameSettingsSound_Params
{
	class UBP_Save_Sound_Settings_C*                   Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsQualityUe4Scalability
struct UBP_GameInstance_RE_C_GetGameSettingsQualityUe4Scalability_Params
{
	class UBP_Save_QualityUe4Scalability_Settings_C*   Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsQualityCustom
struct UBP_GameInstance_RE_C_GetGameSettingsQualityCustom_Params
{
	class UBP_Save_QualityCustom_Settings_C*           Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsPlayer
struct UBP_GameInstance_RE_C_GetGameSettingsPlayer_Params
{
	class UBP_Save_Player_Settings_C*                  Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsLanguage
struct UBP_GameInstance_RE_C_GetGameSettingsLanguage_Params
{
	class UBP_Save_Language_Settings_C*                Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsInputKeys
struct UBP_GameInstance_RE_C_GetGameSettingsInputKeys_Params
{
	class UBP_Save_InputKeys_Settings_C*               Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsGameplay
struct UBP_GameInstance_RE_C_GetGameSettingsGameplay_Params
{
	class UBP_Save_Gameplay_Settings_C*                Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsBrightness
struct UBP_GameInstance_RE_C_GetGameSettingsBrightness_Params
{
	class UBP_Save_Brightness_Settings_C*              Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsDisplayImportant
struct UBP_GameInstance_RE_C_GetGameSettingsDisplayImportant_Params
{
	class UBP_Save_DisplayImportant_Settings_C*        Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsControls
struct UBP_GameInstance_RE_C_GetGameSettingsControls_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_Save_Controls_Settings_C*                Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetLastPlayedValuesToGameInstance
struct UBP_GameInstance_RE_C_GetLastPlayedValuesToGameInstance_Params
{
	struct FString                                     CurrentOrLastPlayedMap;                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastPlayedMatch;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayersCurrentOrLastPlayedMatch;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LastStartedMatchWasSingleplayer;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Reset All Last Match Stats
struct UBP_GameInstance_RE_C_Reset_All_Last_Match_Stats_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentOrLatestMatchStats
struct UBP_GameInstance_RE_C_GetCurrentOrLatestMatchStats_Params
{
	int                                                PlayerGotUnconscious;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerGotDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKills;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsHeadshots;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsExplosives;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsInAir;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerRevivedOtherPlayer;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElapsedRoundtime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElapsedMatchtime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetElapsedMatchtime
struct UBP_GameInstance_RE_C_SetElapsedMatchtime_Params
{
	int                                                ElapsedMatchtime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetElapsedRoundtime
struct UBP_GameInstance_RE_C_SetElapsedRoundtime_Params
{
	int                                                ElapsedRoundtime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerRevivedOtherPlayer
struct UBP_GameInstance_RE_C_SetPlayerRevivedOtherPlayer_Params
{
	int                                                PlayerRevivedOtherPlayer;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsInAir
struct UBP_GameInstance_RE_C_SetPlayerKillsInAir_Params
{
	int                                                PlayerKillsInAir;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsExplosives
struct UBP_GameInstance_RE_C_SetPlayerKillsExplosives_Params
{
	int                                                PlayerKillsExplosives;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKillsHeadshots
struct UBP_GameInstance_RE_C_SetPlayerKillsHeadshots_Params
{
	int                                                PlayerKillsHeadshots;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerKills
struct UBP_GameInstance_RE_C_SetPlayerKills_Params
{
	int                                                PlayerKills;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerGotDeath
struct UBP_GameInstance_RE_C_SetPlayerGotDeath_Params
{
	int                                                PlayerGotDeath;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetPlayerGotUnconscious
struct UBP_GameInstance_RE_C_SetPlayerGotUnconscious_Params
{
	int                                                PlayerGotUnconscious;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.IsDeveloperAndStandAloneBuild
struct UBP_GameInstance_RE_C_IsDeveloperAndStandAloneBuild_Params
{
	bool                                               IsStandAloneAndNotDevBuild;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsStandAloneBuild;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsDeveloperBuild;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ChangeSelectedMapInGInstanceAndCallDisp
struct UBP_GameInstance_RE_C_ChangeSelectedMapInGInstanceAndCallDisp_Params
{
	struct FString                                     SelectedMapKey_Local;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetDifficultyCurrentOrLastHOSTEDMatch
struct UBP_GameInstance_RE_C_GetDifficultyCurrentOrLastHOSTEDMatch_Params
{
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastHostedMatchEnum;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      asByte;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NameAsString;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentOrLastHostedGameMode
struct UBP_GameInstance_RE_C_GetCurrentOrLastHostedGameMode_Params
{
	TEnumAsByte<EGameMode_EGameMode>                   CurrentOrLastHostedGameMode;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      asByte;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     asString;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetCurrentMultiplayerSessionResult
struct UBP_GameInstance_RE_C_GetCurrentMultiplayerSessionResult_Params
{
	bool                                               RetrievedValuesFine_1;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumConnections;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPrivateConnections;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsLAN;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsDedicated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowInvites;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAllowJoinInProgress;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsAnticheatEnabled;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                BuildUniqueID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (Parm, OutParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.DEPR_SetCurrentMultiplayerSessionResult
struct UBP_GameInstance_RE_C_DEPR_SetCurrentMultiplayerSessionResult_Params
{
	struct FBlueprintSessionResult                     CurrentMultiplayerSessionResult;                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetAssignButtonFirstInputKeyData
struct UBP_GameInstance_RE_C_GetAssignButtonFirstInputKeyData_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ActionText;                                                // (Parm, OutParm)
	struct FSInputKey_ConfigAndGraphics                KeyConfigAndGraphics;                                      // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetAssignButtonKeyForActionInput
struct UBP_GameInstance_RE_C_GetAssignButtonKeyForActionInput_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_ActionAndKeysBind                        PossibleActionsAndTheirKeyBinds;                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FWriteSaveGame
struct UBP_GameInstance_RE_C_FWriteSaveGame_Params
{
	bool                                               IsRewriteSaveGame;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ESaveGameType_ESaveGameType>           SaveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FRewriteSaveGame
struct UBP_GameInstance_RE_C_FRewriteSaveGame_Params
{
	TEnumAsByte<ESaveGameType_ESaveGameType>           SaveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FLoadSave
struct UBP_GameInstance_RE_C_FLoadSave_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_SaveGame_C*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FAddServerMessage
struct UBP_GameInstance_RE_C_FAddServerMessage_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GetGameSettingsBase
struct UBP_GameInstance_RE_C_GetGameSettingsBase_Params
{
	class UBP_SaveSettings_Base_C*                     Settings;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FRemoveSaveGame
struct UBP_GameInstance_RE_C_FRemoveSaveGame_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FindLastSaveWithType
struct UBP_GameInstance_RE_C_FindLastSaveWithType_Params
{
	TEnumAsByte<ESaveGameType_ESaveGameType>           SaveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SaveSlot;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FSaveGameToNewSlot
struct UBP_GameInstance_RE_C_FSaveGameToNewSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_1200CBE9428A08FFF0E017805007AB11
struct UBP_GameInstance_RE_C_OnCallback_1200CBE9428A08FFF0E017805007AB11_Params
{
	struct FLeaderboardFindResult                      Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_1200CBE9428A08FFF0E0178030A01554
struct UBP_GameInstance_RE_C_OnCallback_1200CBE9428A08FFF0E0178030A01554_Params
{
	struct FLeaderboardFindResult                      Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_7FD356454B867959130A9680CF558725
struct UBP_GameInstance_RE_C_OnFailure_7FD356454B867959130A9680CF558725_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_7FD356454B867959130A9680CF558725
struct UBP_GameInstance_RE_C_OnSuccess_7FD356454B867959130A9680CF558725_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_7FD356454B867959130A96805F6E920B
struct UBP_GameInstance_RE_C_OnFailure_7FD356454B867959130A96805F6E920B_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_7FD356454B867959130A96805F6E920B
struct UBP_GameInstance_RE_C_OnSuccess_7FD356454B867959130A96805F6E920B_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD
struct UBP_GameInstance_RE_C_OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD_Params
{
	struct FLeaderboardScoresDownloaded                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_35001BE44DBC2F304055849B6D318A25
struct UBP_GameInstance_RE_C_OnCallback_35001BE44DBC2F304055849B6D318A25_Params
{
	struct FLeaderboardScoresDownloaded                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_5BE5D0884D8CF38111FA328329FF2D88
struct UBP_GameInstance_RE_C_OnCallback_5BE5D0884D8CF38111FA328329FF2D88_Params
{
	struct FLeaderboardScoresDownloaded                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnCallback_180F93B6415BCF2D8C33BA9090D6B190
struct UBP_GameInstance_RE_C_OnCallback_180F93B6415BCF2D8C33BA9090D6B190_Params
{
	struct FLeaderboardScoreUploaded                   Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18
struct UBP_GameInstance_RE_C_OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18
struct UBP_GameInstance_RE_C_OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037
struct UBP_GameInstance_RE_C_OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037
struct UBP_GameInstance_RE_C_OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFailure_C27A7648436C9F9FEC1F8C90D262AC73
struct UBP_GameInstance_RE_C_OnFailure_C27A7648436C9F9FEC1F8C90D262AC73_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73
struct UBP_GameInstance_RE_C_OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Test
struct UBP_GameInstance_RE_C_Test_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CustomEvent_2
struct UBP_GameInstance_RE_C_CustomEvent_2_Params
{
	struct FUserStatsStored                            Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CustomEvent_3
struct UBP_GameInstance_RE_C_CustomEvent_3_Params
{
	struct FUserStatsUnloaded                          Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamUserDataOfLocalUserForStatsAndAchievements
struct UBP_GameInstance_RE_C_RequestSteamUserDataOfLocalUserForStatsAndAchievements_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserDataGameStart
struct UBP_GameInstance_RE_C_CallbackUserDataGameStart_Params
{
	struct FUserStatsReceived                          Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndAchievements
struct UBP_GameInstance_RE_C_UpdateSteamUserDataOfLocalUserForStatsAndAchievements_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef
struct UBP_GameInstance_RE_C_UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef_Params
{
	class UW_AchievementsFrame_C*                      AchievementFrameRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef
struct UBP_GameInstance_RE_C_UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef_Params
{
	class UW_LeaderboardFrame_C*                       SteamStatsWidgetRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI
struct UBP_GameInstance_RE_C_SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI_Params
{
	class UW_LeaderboardFrame_C*                       SteamStatsWidgetRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine_SetStats
struct UBP_GameInstance_RE_C_RequestSteamStatsCallbackFiredFine_SetStats_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserDataUpdate
struct UBP_GameInstance_RE_C_CallbackUserDataUpdate_Params
{
	struct FUserStatsReceived                          Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserAchievements
struct UBP_GameInstance_RE_C_CallbackUserAchievements_Params
{
	struct FUserStatsReceived                          Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackUserStats
struct UBP_GameInstance_RE_C_CallbackUserStats_Params
{
	struct FUserStatsReceived                          Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CallbackStoreStats
struct UBP_GameInstance_RE_C_CallbackStoreStats_Params
{
	struct FUserStatsStored                            Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal
struct UBP_GameInstance_RE_C_UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal_Params
{
	class UW_LeaderboardFrame_C*                       SteamStatsWidgetRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetAchievementPassed
struct UBP_GameInstance_RE_C_SetAchievementPassed_Params
{
	TEnumAsByte<EAchievementIDs_EAchievementIDs>       AchievementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine_Achievment
struct UBP_GameInstance_RE_C_RequestSteamStatsCallbackFiredFine_Achievment_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.DoSteamStoreStats
struct UBP_GameInstance_RE_C_DoSteamStoreStats_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain
struct UBP_GameInstance_RE_C_UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvalutateSteamAchievementsWithAfterMatchStats
struct UBP_GameInstance_RE_C_EvalutateSteamAchievementsWithAfterMatchStats_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvalutateSteamAchievementsWithAfterRoundStats
struct UBP_GameInstance_RE_C_EvalutateSteamAchievementsWithAfterRoundStats_Params
{
	bool                                               CheckedOnStartOfNextRound_IfFalseItsAnEndgameCheck;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.EvaluateScoreUpdateForAchievements
struct UBP_GameInstance_RE_C_EvaluateScoreUpdateForAchievements_Params
{
	TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> AchievementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetAllOnineSubStatsOfCurrentUser
struct UBP_GameInstance_RE_C_Danger_ResetAllOnineSubStatsOfCurrentUser_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser
struct UBP_GameInstance_RE_C_Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.PlayerSettingsSaveFileLoaded_Event
struct UBP_GameInstance_RE_C_PlayerSettingsSaveFileLoaded_Event_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CollectLeaderBoardDataAndAssignToLeaderBoard
struct UBP_GameInstance_RE_C_CollectLeaderBoardDataAndAssignToLeaderBoard_Params
{
	int                                                PlayerCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Map;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ControlsAndPlattform;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EGameMode_EGameMode>                   GameMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EDifficulties_EDifficulties>           Difficulty;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OneMoreLeaderBoardEntryIsSucssfull
struct UBP_GameInstance_RE_C_OneMoreLeaderBoardEntryIsSucssfull_Params
{
	struct FSteamLeaderboardEntries                    leaderboardEntries;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                CountOfEntries;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OptionalLogStringOfLeaderboardQueryType;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                                LogColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes>   LeaderboardtypeOnWidget;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.PersonaStateChanged
struct UBP_GameInstance_RE_C_PersonaStateChanged_Params
{
	struct FPersonaStateChange                         Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch
struct UBP_GameInstance_RE_C_CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.Danger_ResetLeaderboardEntryOfRunningMatch
struct UBP_GameInstance_RE_C_Danger_ResetLeaderboardEntryOfRunningMatch_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.NewSinglePlayerGame
struct UBP_GameInstance_RE_C_NewSinglePlayerGame_Params
{
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastHostedMatch;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnKeysBindingChanged
struct UBP_GameInstance_RE_C_OnKeysBindingChanged_Params
{
	TArray<struct FSSettings_InputKeys>                Settings_InputKeys;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.CreateSession
struct UBP_GameInstance_RE_C_CreateSession_Params
{
	int                                                PublicConnections;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseLAN;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSServerSettings                            ServerSettings;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.FindSession
struct UBP_GameInstance_RE_C_FindSession_Params
{
	bool                                               bUseLAN;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.JoinSession
struct UBP_GameInstance_RE_C_JoinSession_Params
{
	struct FBlueprintSessionResult                     Session;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetNewPlayerName
struct UBP_GameInstance_RE_C_SetNewPlayerName_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ServerTravelToSelectedMap
struct UBP_GameInstance_RE_C_ServerTravelToSelectedMap_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OpenLobby
struct UBP_GameInstance_RE_C_OpenLobby_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ReceiveInit
struct UBP_GameInstance_RE_C_ReceiveInit_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ToggleGobalLoadingScreen
struct UBP_GameInstance_RE_C_ToggleGobalLoadingScreen_Params
{
	bool                                               ShowLoadingScreen_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WithFadeInOrFadeOut_;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WithCustomOptionalFadeOutTimer_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OptionalCustomFadeTimer;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnGameInstanceInitForTestingPurpose
struct UBP_GameInstance_RE_C_OnGameInstanceInitForTestingPurpose_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ServerTravelToLobby
struct UBP_GameInstance_RE_C_ServerTravelToLobby_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SetLastPlayedValuesToGameInstance
struct UBP_GameInstance_RE_C_SetLastPlayedValuesToGameInstance_Params
{
	struct FString                                     LastPlayedMap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastPlayedMatch;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayersCurrentOrLastPlayedMatch;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LastStartedMatchWasSingleplayer;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.ExecuteUbergraph_BP_GameInstance_RE
struct UBP_GameInstance_RE_C_ExecuteUbergraph_BP_GameInstance_RE_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.PlayerSettingsSaveFileLoaded__DelegateSignature
struct UBP_GameInstance_RE_C_PlayerSettingsSaveFileLoaded__DelegateSignature_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.RequestSteamStatsCallbackFiredFine__DelegateSignature
struct UBP_GameInstance_RE_C_RequestSteamStatsCallbackFiredFine__DelegateSignature_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.SelectedMapChanged__DelegateSignature
struct UBP_GameInstance_RE_C_SelectedMapChanged__DelegateSignature_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.GameStarts__DelegateSignature
struct UBP_GameInstance_RE_C_GameStarts__DelegateSignature_Params
{
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnChangePlayerName__DelegateSignature
struct UBP_GameInstance_RE_C_OnChangePlayerName__DelegateSignature_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnFindSessionCompleted__DelegateSignature
struct UBP_GameInstance_RE_C_OnFindSessionCompleted__DelegateSignature_Params
{
	TArray<struct FBlueprintSessionResult>             sessions;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GameInstance_RE.BP_GameInstance_RE_C.OnKeysBindingChanded__DelegateSignature
struct UBP_GameInstance_RE_C_OnKeysBindingChanded__DelegateSignature_Params
{
	TArray<struct FSSettings_InputKeys>                Settings_InputKeys;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
