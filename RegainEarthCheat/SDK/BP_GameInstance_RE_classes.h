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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameInstance_RE.BP_GameInstance_RE_C
// 0x0628 (FullSize[0x07D0] - InheritedSize[0x01A8])
class UBP_GameInstance_RE_C : public UGameInstance_RE_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FScriptMulticastDelegate                    OnKeysBindingChanded;                                      // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFindSessionCompleted;                                    // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnChangePlayerName;                                        // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                MaxPlayersCurrentOrLastHostedMatch;                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F3JB[0x4];                                     // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_SaveSettings_Base_C*                     SavedSettingsBase;                                         // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_InputKeys_Settings_C*               SavedSettingsInputKeys;                                    // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ServerAnswers;                                             // 0x01F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     LoadedSlot;                                                // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FString, struct FString>               Maps_ForMultiplayerWaveGame;                               // 0x0218(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FString, struct FString>               Maps_DEMO_ForMultiplayerWaveGame;                          // 0x0268(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FString, struct FString>               Maps_DEV_Append_ForMultiplayerWaveGame;                    // 0x02B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxPlayersCurrentOrLastPlayedMatch;                        // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LastStartedMatchWasSingleplayer;                           // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XV8E[0x3];                                     // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SelectedMapKey_Local;                                      // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<TEnumAsByte<EWeaponIDs_EWeaponIDs>, struct FName> WeaponIdRowNameMap;                                        // 0x0320(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSWeaponsPropertiesStruct>           AllWeaponsDataAsArray;                                     // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_LoadingScreen_C*                          LoadingScreenWidgetRef;                                    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultLoadingScreenFadeInTimer;                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultLoadingScreenFadeOutTimer;                          // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TEMPCurrentFadeLoadingScreenTimer;                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S5NM[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    GameStarts;                                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ShowLoadingScreen;                                         // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CamIsFadeToBlack;                                          // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_813O[0x2];                                     // 0x03AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MouseSensitivity;                                          // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MouseUpDownInvert_;                                        // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TGC4[0x7];                                     // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamLeaderboard                           Leaderboard;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLeaderboardEntriesPerBoardTemp;                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7WNU[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_LeaderboardFrame_C*                       ActiveLeaderboardWidge;                                    // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FSteamID, struct FSLeaderboardRowData> KnownSteamUserData;                                        // 0x03D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDemoBuild;                                               // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ETargetBuildConfiguration_ETargetBuildConfiguration> TargetBuildConfiguration;                                  // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4R8R[0x6];                                     // 0x0422(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentOrLastPlayedMap;                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastHostedMatch;                        // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastPlayedMatch;                        // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TSW0[0x6];                                     // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlueprintSessionResult                     DEPR_CurrentMultiplayerSessionResult;                      // 0x0440(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EGameMode_EGameMode>                   CurrentOrLastHostedGameMode;                               // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_26NP[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSessionPropertyKeyPair>             LastCreatedSessionPropsExtraSettingsArray;                 // 0x0550(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LastCreatedUseLan;                                         // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5TNG[0x7];                                     // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSServerSettings                            LastCreatedServerSettingsStruct;                           // 0x0568(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                LastCreatedConnectionsCount;                               // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XXOC[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SelectedMapChanged;                                        // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                PlayerGotUnconscious;                                      // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerGotDeath;                                            // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKills;                                               // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsHeadshots;                                      // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsExplosives;                                     // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsInAir;                                          // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerRevivedOtherPlayer;                                  // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElapsedRoundtime;                                          // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElapsedMatchtime;                                          // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3RGX[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_AchievementsFrame_C*                      AchievementWidgetRef;                                      // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsPlayerGotUnconscious;                           // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlineSubsystemAchievement;                                // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C298[0x3];                                     // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_LeaderboardFrame_C*                       SteamStatsWidgetRef;                                       // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    RequestSteamStatsCallbackFiredFine;                        // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUserStatsReceived                          CallbackResult;                                            // 0x0610(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<TEnumAsByte<EAchievementIDs_EAchievementIDs>> QueueAchievementsSetToPassed;                              // 0x0628(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EAchievementIDs_EAchievementIDs>> ActiveAchievementsAndOrdering;                             // 0x0638(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      AchievementsWhichAreUnlockedPassed[0x50];                  // 0x0648(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                OnlineStatsPlayerGotDeath;                                 // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsPlayerKills;                                    // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsPlayerKillsHeadshots;                           // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsPlayerKillsExplosives;                          // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsPlayerRevivedOtherPlayer;                       // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsMatchPlaytime;                                  // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsMatchesWon;                                     // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OnlineStatsMatchesLost;                                    // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GamepadAxisSensitivityMultiplier;                          // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GamePadUpDownInvert_;                                      // 0x06BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5NMG[0x3];                                     // 0x06BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Save_DisplayImportant_Settings_C*        SavedSettingsDisplayImportant;                             // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_Controls_Settings_C*                SavedSettingsControls;                                     // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_Brightness_Settings_C*              SavedSettingsBrightness;                                   // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_Gameplay_Settings_C*                SavedSettingsGameplay;                                     // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_Language_Settings_C*                SavedSettingsLanguage;                                     // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_Player_Settings_C*                  SavedSettingsPlayer;                                       // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_QualityCustom_Settings_C*           SavedSettingsQualityCustom;                                // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_QualityUe4Scalability_Settings_C*   SavedSettingsQualityUe4Scalability;                        // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_Sound_Settings_C*                   SavedSettingsSound;                                        // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsBase;                                     // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsInputKeys;                                // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsControls;                                 // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsDisplayImportant;                         // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsBrightness;                               // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsGameplay;                                 // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsLanguage;                                 // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsPlayer;                                   // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsQualityCustom;                            // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsQualityUe4Scalability;                    // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     NameSavedSettingsSound;                                    // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                SelectedCustomFOV;                                         // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowBlood;                                                 // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1PB0[0x3];                                     // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    PlayerSettingsSaveFileLoaded;                              // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance_RE.BP_GameInstance_RE_C");
		return ptr;
	}



	void GetCheckIfDlcIsInstalled(bool* IsInstalled);
	bool IsAchievementUnlockedPassed(TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievemntToCheck);
	void SaveSettingsToFileSound();
	void SaveSettingsToFileQualityUe4Scalability();
	void SaveSettingsToFileQualityCustom();
	void SaveSettingsToFilePlayer();
	void SaveSettingsToFileLanguage();
	void SaveSettingsToFileInputKeys();
	void SaveSettingsToFileGameplay();
	void SaveSettingsToFileBrightness();
	void SaveSettingsToFileDisplayImportant();
	void SaveSettingsToFileControls();
	void SaveSettingsBase();
	void GetGameSettingsSound(class UBP_Save_Sound_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsQualityUe4Scalability(class UBP_Save_QualityUe4Scalability_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsQualityCustom(class UBP_Save_QualityCustom_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsPlayer(class UBP_Save_Player_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsLanguage(class UBP_Save_Language_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsInputKeys(class UBP_Save_InputKeys_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsGameplay(class UBP_Save_Gameplay_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsBrightness(class UBP_Save_Brightness_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsDisplayImportant(class UBP_Save_DisplayImportant_Settings_C** Settings, bool* IsSuccess);
	void GetGameSettingsControls(bool* IsSuccess, class UBP_Save_Controls_Settings_C** Settings);
	void GetLastPlayedValuesToGameInstance(struct FString* CurrentOrLastPlayedMap, TEnumAsByte<EDifficulties_EDifficulties>* DifficultyCurrentOrLastPlayedMatch, int* MaxPlayersCurrentOrLastPlayedMatch, bool* LastStartedMatchWasSingleplayer);
	void Reset_All_Last_Match_Stats();
	void GetCurrentOrLatestMatchStats(int* PlayerGotUnconscious, int* PlayerGotDeath, int* PlayerKills, int* PlayerKillsHeadshots, int* PlayerKillsExplosives, int* PlayerKillsInAir, int* PlayerRevivedOtherPlayer, int* ElapsedRoundtime, int* ElapsedMatchtime);
	void SetElapsedMatchtime(int ElapsedMatchtime);
	void SetElapsedRoundtime(int ElapsedRoundtime);
	void SetPlayerRevivedOtherPlayer(int PlayerRevivedOtherPlayer);
	void SetPlayerKillsInAir(int PlayerKillsInAir);
	void SetPlayerKillsExplosives(int PlayerKillsExplosives);
	void SetPlayerKillsHeadshots(int PlayerKillsHeadshots);
	void SetPlayerKills(int PlayerKills);
	void SetPlayerGotDeath(int PlayerGotDeath);
	void SetPlayerGotUnconscious(int PlayerGotUnconscious);
	void IsDeveloperAndStandAloneBuild(bool* IsStandAloneAndNotDevBuild, bool* IsStandAloneBuild, bool* IsDeveloperBuild);
	void ChangeSelectedMapInGInstanceAndCallDisp(const struct FString& SelectedMapKey_Local);
	void GetDifficultyCurrentOrLastHOSTEDMatch(TEnumAsByte<EDifficulties_EDifficulties>* DifficultyCurrentOrLastHostedMatchEnum, unsigned char* asByte, struct FString* NameAsString);
	void GetCurrentOrLastHostedGameMode(TEnumAsByte<EGameMode_EGameMode>* CurrentOrLastHostedGameMode, unsigned char* asByte, struct FString* asString);
	void GetCurrentMultiplayerSessionResult(bool* RetrievedValuesFine_1, int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
	void DEPR_SetCurrentMultiplayerSessionResult(const struct FBlueprintSessionResult& CurrentMultiplayerSessionResult);
	void GetAssignButtonFirstInputKeyData(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, struct FText* ActionText, struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics);
	void GetAssignButtonKeyForActionInput(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, bool* Return_Value, struct FS_ActionAndKeysBind* PossibleActionsAndTheirKeyBinds);
	void FWriteSaveGame(bool IsRewriteSaveGame, TEnumAsByte<ESaveGameType_ESaveGameType> SaveType, const struct FString& SlotName);
	void FRewriteSaveGame(TEnumAsByte<ESaveGameType_ESaveGameType> SaveType);
	class UBP_SaveGame_C* FLoadSave(const struct FString& PlayerName);
	void FAddServerMessage(const struct FString& Message);
	void GetGameSettingsBase(class UBP_SaveSettings_Base_C** Settings, bool* IsSuccess);
	void FRemoveSaveGame(const struct FString& SlotName);
	void FindLastSaveWithType(TEnumAsByte<ESaveGameType_ESaveGameType> SaveType, bool* IsSuccess, struct FString* SaveSlot);
	void FSaveGameToNewSlot(const struct FString& SlotName);
	void OnCallback_1200CBE9428A08FFF0E017805007AB11(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	void OnCallback_1200CBE9428A08FFF0E0178030A01554(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	void OnFailure_7FD356454B867959130A9680CF558725();
	void OnSuccess_7FD356454B867959130A9680CF558725();
	void OnFailure_7FD356454B867959130A96805F6E920B();
	void OnSuccess_7FD356454B867959130A96805F6E920B();
	void OnCallback_5A6E493443FBCF8B8FD0148F9BF271FD(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_35001BE44DBC2F304055849B6D318A25(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_5BE5D0884D8CF38111FA328329FF2D88(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_180F93B6415BCF2D8C33BA9090D6B190(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
	void OnFailure_1006B0AE4F44B8E2F7D8D0A66CC35E18();
	void OnSuccess_1006B0AE4F44B8E2F7D8D0A66CC35E18();
	void OnFailure_8B6ECC9144E145E5DF1DA1BE40AB9037();
	void OnSuccess_8B6ECC9144E145E5DF1DA1BE40AB9037();
	void OnFailure_C27A7648436C9F9FEC1F8C90D262AC73(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_C27A7648436C9F9FEC1F8C90D262AC73(TArray<struct FBlueprintSessionResult> Results);
	void Test();
	void CustomEvent_2(const struct FUserStatsStored& Data);
	void CustomEvent_3(const struct FUserStatsUnloaded& Data);
	void RequestSteamUserDataOfLocalUserForStatsAndAchievements();
	void CallbackUserDataGameStart(const struct FUserStatsReceived& Data);
	void UpdateSteamUserDataOfLocalUserForStatsAndAchievements();
	void UpdateSteamUserDataOfLocalUserForStatsAndAchievementsWithWidgetRef(class UW_AchievementsFrame_C* AchievementFrameRef);
	void UpdateSteamUserDataOfLocalUserForStatsAndSteamStatsWithWidgetRef(class UW_LeaderboardFrame_C* SteamStatsWidgetRef);
	void SetAllSteamAfterMatchStatsAndWhenFinishedSetStatsUI(class UW_LeaderboardFrame_C* SteamStatsWidgetRef);
	void RequestSteamStatsCallbackFiredFine_SetStats();
	void CallbackUserDataUpdate(const struct FUserStatsReceived& Data);
	void CallbackUserAchievements(const struct FUserStatsReceived& Data);
	void CallbackUserStats(const struct FUserStatsReceived& Data);
	void CallbackStoreStats(const struct FUserStatsStored& Data);
	void UpdateAllSteamStatsDirectlyToWidgetWithoutRequestDataAgainAndUpdateStatsToLocal(class UW_LeaderboardFrame_C* SteamStatsWidgetRef);
	void SetAchievementPassed(TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievementID);
	void RequestSteamStatsCallbackFiredFine_Achievment();
	void DoSteamStoreStats();
	void UpdateAllSteamStatsToLocalVarsWithoutRequestUserDataAgain();
	void EvalutateSteamAchievementsWithAfterMatchStats();
	void EvalutateSteamAchievementsWithAfterRoundStats(bool CheckedOnStartOfNextRound_IfFalseItsAnEndgameCheck);
	void EvaluateScoreUpdateForAchievements(TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> AchievementID);
	void Danger_ResetAllOnineSubStatsOfCurrentUser();
	void Danger_ResetAllOnineSubStatsAndAchievementsOfCurrentUser();
	void PlayerSettingsSaveFileLoaded_Event();
	void CollectLeaderBoardDataAndAssignToLeaderBoard(int PlayerCount, const struct FString& Map, const struct FString& ControlsAndPlattform, TEnumAsByte<EGameMode_EGameMode> GameMode, TEnumAsByte<EDifficulties_EDifficulties> Difficulty);
	void OneMoreLeaderBoardEntryIsSucssfull(const struct FSteamLeaderboardEntries& leaderboardEntries, int CountOfEntries, const struct FString& OptionalLogStringOfLeaderboardQueryType, const struct FLinearColor& LogColor, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> LeaderboardtypeOnWidget);
	void PersonaStateChanged(const struct FPersonaStateChange& Data);
	void CollectLeaderBoardDataAndAssignToLeaderBoardOfCurrentRunningMatch();
	void Danger_ResetLeaderboardEntryOfRunningMatch();
	void NewSinglePlayerGame(TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastHostedMatch);
	void OnKeysBindingChanged(TArray<struct FSSettings_InputKeys> Settings_InputKeys);
	void CreateSession(int PublicConnections, bool bUseLAN, const struct FSServerSettings& ServerSettings);
	void FindSession(bool bUseLAN);
	void JoinSession(const struct FBlueprintSessionResult& Session);
	void SetNewPlayerName(const struct FString& PlayerName);
	void ServerTravelToSelectedMap();
	void OpenLobby();
	void ReceiveInit();
	void ToggleGobalLoadingScreen(bool ShowLoadingScreen_, bool WithFadeInOrFadeOut_, bool WithCustomOptionalFadeOutTimer_, float OptionalCustomFadeTimer);
	void OnGameInstanceInitForTestingPurpose();
	void ServerTravelToLobby();
	void SetLastPlayedValuesToGameInstance(const struct FString& LastPlayedMap, TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch, int MaxPlayersCurrentOrLastPlayedMatch, bool LastStartedMatchWasSingleplayer);
	void ExecuteUbergraph_BP_GameInstance_RE(int EntryPoint);
	void PlayerSettingsSaveFileLoaded__DelegateSignature();
	void RequestSteamStatsCallbackFiredFine__DelegateSignature();
	void SelectedMapChanged__DelegateSignature();
	void GameStarts__DelegateSignature();
	void OnChangePlayerName__DelegateSignature(const struct FString& PlayerName);
	void OnFindSessionCompleted__DelegateSignature(TArray<struct FBlueprintSessionResult>* sessions);
	void OnKeysBindingChanded__DelegateSignature(TArray<struct FSSettings_InputKeys>* Settings_InputKeys);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
