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

// BlueprintGeneratedClass BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C
// 0x0214 (FullSize[0x0784] - InheritedSize[0x0570])
class ABP_Wave_REHR_PlayerController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UW_InGameMenu_C*                             W_InGameMenu;                                              // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_HUD_Shooting_RE_HR_C*                     PlayerHUD;                                                 // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_SaveGame_C*                              SaveGame;                                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_BPBase_C*                ControlledCharacter;                                       // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBlockMovement;                                           // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A154[0x7];                                     // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TMP_OriginalPlayername;                                    // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_PawnAdminAndCheatMenu_C*                  PawnAdminCheatWidgetRef;                                   // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TMP_CountEnemies;                                          // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1KP[0x4];                                     // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_Scoreboard_C*                             Scoreboard;                                                // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamLeaderboard                           Leaderboard;                                               // 0x05E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               OwnNewHighScore_;                                          // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZRNX[0x3];                                     // 0x05E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NewRank;                                                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldRank;                                                   // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldHighScore;                                              // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LeaderboardFrame_C*                       LeaderboardWidInIngameMenu;                                // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FSteamID, struct FSLeaderboardRowData> KnownSteamUserData;                                        // 0x0600(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxLeaderboardEntriesPerBoardTemp;                         // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameWin_;                                                  // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GameIsOver;                                                // 0x0655(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZHGA[0x2];                                     // 0x0656(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameOverStartEndGameScreen;                              // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                HighestPlayerScoreInThisMatch;                             // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TeamScoreForUpload;                                        // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FinishedBeginPlayFinePC;                                   // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LobbyCheckAllPlayerReadyResult;                            // 0x0671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I5GJ[0x6];                                     // 0x0672(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_LobbyParent_C*                            LobbyWidgetRef;                                            // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APawn*>                               PlayerPawnsList;                                           // 0x0680(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AController*>                         PlayersControllerList_OnlyUseableOnServer;                 // 0x0690(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, Deprecated)
	struct FText                                       SenderChatText;                                            // 0x06A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SenderName;                                                // 0x06B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LobbyActive;                                               // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X4II[0x7];                                     // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    GotOldScore;                                               // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    GotNewScore;                                               // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<EHigherLowerSame_EHigherLowerSame>     NewHighScore;                                              // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QFFK[0x7];                                     // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    CurrentWeaponReloaded;                                     // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    RadialScanActivated;                                       // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    RadialScanFullyLoaded;                                     // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    CurrentWeaponEmpty;                                        // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DidNotFindLeaderboard;                                     // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UJG3[0x7];                                     // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       BKP_LastControlledPawnBeforeUncons;                        // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerCharacter01_C*>             AllCurrentPlayerCharacter;                                 // 0x0750(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class APawn*                                       CurrentSpectatedPawn_OnlyLocalKnown;                       // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndGamePauseTimeBeforeStartToBlendLeaderboardIn;           // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexOfSpectatedPlayerInPlayerArray;                       // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>         CachedWeaponIDsInHud;                                      // 0x0770(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                OldActiveIndex;                                            // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C");
		return ptr;
	}



	void GetLobbyWidgetReference(class UW_LobbyFrame_C** LobbyWidgetLobyFrameRef);
	void GetPlayerName(struct FString* PlayerName);
	void GetCurrentMenuRef(class UUserWidget** CurrentMenuWidget);
	bool IsServer();
	bool LobbyCheckAllPlayersAreReady(TArray<class AController*>* PlayersList);
	void GetCharacterCasted(class ABP_PlayerCharacter_BPBase_C** ControlledCharacter);
	void FCheckPlayerNames(const struct FString& PlayerName, bool* IsHaveEqual);
	void FSaveGameToSlot(const struct FString& SlotName);
	void FGetAllPlayerNames(TArray<struct FString>* PlayerNames);
	void FSavePlayerPosition();
	void FSaveAllBlocksPositions();
	void FLoadBlocks();
	void FLoadPlayerPosition();
	void InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2(const struct FKey& Key);
	void OnFailure_DDDF4FB4473050B2D1FE7DACD1330037();
	void OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037();
	void InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnCallback_24331F3C47986BC136060E9A9E3FB30C(const struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
	void OnCallback_F8EEB47D4286818A0BB5C2A12138940C(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_F7800F474CDA912FFA876992BD66C8A2(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
	void OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
	void OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
	void InpActEvt_O_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_U_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_U_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_J_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ExecuteTest();
	void UpdateAllPlayerScores();
	void UpdateAllPlayerUnconsciousStats();
	void UpdateAllPlayerKills();
	void UpdateAllPlayerAvatar();
	void UpdateAllPlayerNames();
	void SetIsReady(bool IsReady);
	void Server_SwitchToSpectatorCamOtherPlayersFollow();
	void Client_SetCamToOtherPlayerView(class APawn* NewViewTarget);
	void Client_SwitchSpecCamBackToPawnCam(class AActor* NewViewTarget);
	void ToggleSpectatorCamOtherPlayersFollow(bool SetSpectatorCamOtherPlayersFollow_);
	void Server_SwitchBackToAlivePlayerCharacterCam();
	void SwitchToNextPlayerSpectating();
	void SwitchToPreviousPlayerSpectating();
	void ToggleForceDancingPlContr(bool SetDancing_);
	void PlayAudio2D(class USoundBase* Sound, float HowLongToPlaySec, float VolumeMultiplier, float StartTime, float FadeOutTime);
	void StartNextRoundConditions(int RoundNr);
	void ShowBigMiddleScreenTextMessageForSomeSeconds(const struct FText& Text);
	void ShowNextRoundScreenMessage(int RoundNr);
	void ShowBigMiddleScreenTextAndOnOff(const struct FText& Text, bool SetTextMessageOn_);
	void UpdateTeamScore(int Score);
	void UpdatePlayerListedInScoreboard(int CountOfPlayerController);
	void UpdateOwnStatsScore();
	void StartDisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor);
	void StartDisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor);
	void Client_DisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor);
	void Client_DisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor);
	void SetNewWaveRoundNumbers(int CurrentRound, int MaxRounds);
	void SetPercentForScannerEnergyToHUD(float EnergyPerc);
	void SetPercentForHealthToHud(float HealthPerc);
	void SetEnemiesLeftToHud(int NewEnemiesLeft);
	void SetAmmoInClipToHud(int NewAmmoInClip);
	void DisplayButtonToolTip_Side(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, bool DisplayExtraLongAndRemoveOnUsage_);
	void DisplayCustomMessageToolTip_Side(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void RemoveToolTip_Side();
	void DisplayCustomMessageTutorial_Bottom(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void RemoveTutorial_Bottom();
	void CurrentWeaponReloaded_Event();
	void RadialScanActivated_Event();
	void SetAmmoInClipToHud_grenade(int NewAmmoInClip, class UTexture2D* Icon, bool IsFirstSlot);
	void SetNewOrActiveWeaponIconToHud(class UBP_Weapon_C* NewEquippedWeapon, bool SkipToShowPassedWeaponAsActiveWeapon);
	void SetPercentForShieldToHud(float ShieldPerc);
	void SwitchActiveGrenadeSlot(bool FirstSlotIsActive);
	void Client_AddNewPlayer(const struct FString& inString, int inInt, bool IsReady, class APawn* PlayerPawn);
	void SetReadyState(bool NewReadyState);
	void SetPlayerListAndUpdatePlayerListValuesCompletely(TArray<class APawn*> PlayerPawnList);
	void RefreshPlayerListValuesCompletely();
	void UpdatePlayerControllers(TArray<class AController*> PlayersControllerList_OnlyUseableOnServer);
	void Client_ClearPlayers();
	void Client_StartGame();
	void Server_StartGame();
	void Client_KickDestroySession(const struct FString& Message);
	void DestroySessionsWithMessages();
	void DestroySessionsWithOUTMessages();
	void SendChatMessage(const struct FText& TextToSend, class APlayerState* PlayerStateRefOfSender);
	void Server_SendChatMessage(const struct FText& TextToSend, class APlayerState* PlayerStateRefOfSender);
	void Client_UpdateChatWindowsWithNewMessage(const struct FText& Sender, const struct FText& ChatText, class APlayerController* OwnerPlayerControllerOfChatMessage);
	void Client_StartTimer();
	void ToClient_StartGameInterface();
	void DestroySessionsWithMessagesInterface();
	void Client_KickDestroySessionInterface(const struct FString& Message);
	void Server_StartMultiplayerMatchWithLastPlayedMatchsettings();
	void Server_ServerTravelToLobbyWithAllKnownPlayers();
	void Client_SetLastPlayedSettingsToClient(const struct FString& LastPlayedMap, TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch, int MaxPlayersCurrentOrLastPlayedMatch, bool LastStartedMatchWasSingleplayer);
	void OnChangePlayerName(const struct FString& PlayerName);
	void ReceiveBeginPlay();
	void Server_SetSteamIdToPlayerStateForRepNotify(const struct FString& SteamID);
	void Server_SetFinishedBeginPlayFinePC(bool FinishedBeginPlayFine);
	void WaitForGameStart();
	void GenerateLobbyUI();
	void DeactivateLobbyUI(bool AndStartShootingREWaveHUDAndWidgets_);
	void ActivateLobbyUI();
	void RadialScanFullyLoaded_Event();
	void OnOnlyFewEnemiesLeft_Event();
	void CurrentWeaponEmpty_Event();
	void Server_SetPlayerName(const struct FString& PlayerName);
	void Server_LoadGame();
	void AddScore();
	void AddLevel();
	void CheckpointSaveGame(bool IsRewriteExistSave);
	void Client_SaveGame(bool IsRewriteSaveGame, TEnumAsByte<ESaveGameType_ESaveGameType> SaveType);
	void ServerSaveGame(bool IsRewriteSaveGame, TEnumAsByte<ESaveGameType_ESaveGameType> SaveType);
	void ReceiveTick(float DeltaSeconds);
	void Client_SetControlRotation(const struct FRotator& NewRotation);
	void SendNotification(const struct FSNotificationSender& Notify);
	void Client_SendNotification(const struct FSNotificationSender& Notification);
	void Server_SendNotification(const struct FSNotificationSender& Notification);
	void ResumeGame();
	void ReceivePossess(class APawn* PossessedPawn);
	void OnPlayerDeath_Event();
	void OnPlayerUnconscious_Event();
	void OnGameOverWin_Event(float TimeUntilPauseStarts);
	void OnGameOverLoose_Event(float TimeUntilPauseStarts);
	void OneMoreLeaderBoardEntryIsSucssfull(const struct FSteamLeaderboardEntries& leaderboardEntries, int CountOfEntries, const struct FString& OptionalLogStringOfLeaderboardQueryType, const struct FLinearColor& LogColor, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> LeaderboardtypeOnWidget);
	void PersonaStateChanged(const struct FPersonaStateChange& Data);
	void ActivateVisibleLeaderboardAndStartFadeToLeaderboardView();
	void SetHudAndHudWidgetOn();
	void SetHudAndHudWidgetOff();
	void OnCountingNumbersFinished_Event_1();
	void SwitchOffInGameMenuWithoutChangeInputMode();
	void SetLeaderBoardNewBasicInformationWithoutCleanPlayers();
	void TryFixWorkaroundMenuNotClickable();
	void Client_ToggleLoadingScreenPlControl(bool ShowLoadingScreen_);
	void FireOpenIngameMenu();
	void OnDestroyed_ResumeFromPause(class AActor* DestroyedActor);
	void PauseGameIfPossible();
	void GotOldScore_Event(bool fine_);
	void GotNewScore_Event(bool fine_);
	void Client_PausePlayerControllerLocally(bool bPaused);
	void Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI();
	void SaveNewSteamStatsAndEvalAchievements();
	void Server_SetFinalRoundToRoundX(int LastRoundNumberToWin);
	void SetFinalRoundToRoundX(int Round);
	void Server_SetActualRoundToX(int CurrentRound);
	void SetActualRoundToRoundX(int RoundWave);
	void Server_DropRandomGrenade();
	void DropRandomGrenade();
	void ResetLeaderboardEntryOfRunningMatch();
	void ResetAllOnlineSubStatsAndAchievements();
	void ResetAllOnlineSubStats();
	void Server_DropRandomWeapon();
	void Server_GrantExtremeHighHealth();
	void DropRandomWeapon();
	void GrantExtremeHighHealth();
	void Server_KillAllEnemies();
	void Server_TeleportToLastRound();
	void Server_SetActualRoundToLastRound();
	void Server_SetActualRoundTo2();
	void Client_ChangesToSpectatorPawn();
	void Server_DetachPlayerControllerAndSwitchToSpectatorCam();
	void Server_SpawnBoss();
	void SpawnBoss();
	void SwitchToFreeSpectatorCam();
	void SetActualRoundTotRound2();
	void CloseAdminCheatMenu_Event_1();
	void Server_SetPlayerUsedCheatsToGS();
	void SetNextRoundToLastRoundAndKillAllEnemies();
	void TriggerLooseGame();
	void TriggerWinGame();
	void SetActualRoundToLastRound();
	void KillSelf();
	void TraceAllEnemies();
	void KillAllEnemies();
	void HeallSelfJustSetFullHealth();
	void ReviveSelf();
	void ExecuteUbergraph_BP_Wave_REHR_PlayerController(int EntryPoint);
	void CurrentWeaponEmpty__DelegateSignature();
	void RadialScanFullyLoaded__DelegateSignature();
	void RadialScanActivated__DelegateSignature();
	void CurrentWeaponReloaded__DelegateSignature();
	void GotNewScore__DelegateSignature(bool fine_);
	void GotOldScore__DelegateSignature(bool fine_);
	void OnGameOverStartEndGameScreen__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
