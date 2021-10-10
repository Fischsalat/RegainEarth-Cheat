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

// WidgetBlueprintGeneratedClass W_LeaderboardFrame.W_LeaderboardFrame_C
// 0x024B (FullSize[0x04DB] - InheritedSize[0x0290])
class UW_LeaderboardFrame_C : public UW_ParentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_EndGameGoToLobby;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_EndGameRetryStartGameAgain_2;                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_EndGameShowStatsBackToMenu;                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_EndGameSwitchToShowStats;                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_MenuLeaderBoardBack;                                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_MenuShowStatsBackToMenu;                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_MenuSwitchToLeaderboard;                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        Bt_MenuSwitchToShowStats;                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        BtEndGameSwitchToLeaderboard_2;                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CongratulationsYouWinTB;                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CongratulationsYouWinTB_2;                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Line1;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Line1_OnlineSumStats;                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Line2;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Line2_OnlineSumStats;                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_Background;                                            // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             LeaderWidgetSwitcherWinLooseTitle;                         // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainMenuTitle;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MapTB;                                                     // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OldBestRank_TB;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OldBestScore_TB;                                           // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OldBestScoreEnd_TB;                                        // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OldBestScoreRank_TB;                                       // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OldBestScoreSeperator_TB;                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    OldBestSizeBox;                                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OldBestTitle_TextBlock;                                    // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBoxCurrentPlayer;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatsTitleRight;                                           // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SwitcherContentLeaderOrMatchStats;                         // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Tb_BoxTiitleOnlineSumStats;                                // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  tb_BoxTitle;                                               // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TeamScoreTB;                                               // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBoxOnlineSumStats;                                 // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                            W_Leaderboard_ArroundRank;                                 // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                            W_Leaderboard_CurrentPlayer;                               // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                            W_Leaderboard_Friends;                                     // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                            W_Leaderboard_HighScores;                                  // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsDeath;                                         // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsDeath_OnlineSumStats;                          // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsExplosives;                                    // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsExplosives_OnlineSumStats;                     // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsHeadshots;                                     // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsHeadshots_OnlineSumStats;                      // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsKillInAir;                                     // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsKillInAir_OnlineSumStats;                      // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsKills;                                         // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsKills_OnlineSumStats;                          // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsMatchesLost_OnlineSumStats_2;                  // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsMatchesWon_OnlineSumStats_2;                   // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsPlaytime;                                      // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsPlaytime_OnlineSumStats;                       // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsRevived;                                       // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsRevived_OnlineSumStats;                        // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsUnconscious;                                   // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MatchStatsRow_C*                          W_MatchStatsUnconscious_OnlineSumStats;                    // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_SwitchButtonDifficulties;                                // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_SwitchButtonMap;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_SwitchButtonPlayersCount;                                // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WarningNoOnlineSubsystemFrame_C*          W_WarningNoOnlineSubsystemFrame;                           // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Background_C*                            WB_Background;                                             // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Foreground_C*                            WB_Foreground;                                             // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcherMainFrameButtonLeader;                       // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcherMainFrameButtonShowStats;                    // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               PlayersWin_;                                               // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T56T[0x7];                                     // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             AudioComponentWinLoose;                                    // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  _1stSoundWinLoose;                                         // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  _2ndSoundWinLoose;                                         // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BackupTeamScoreForCountnummers;                            // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TeamScoreInt;                                              // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaCountNumbers;                                         // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RENQ[0x4];                                     // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCountingNumbersFinished;                                 // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               MainMenuNotEndGame_;                                       // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowStatsInsteadLeader_;                                   // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceShowStatsAndGoBackOnly;                               // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LeaderboardFrame.W_LeaderboardFrame_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2();
	void SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SequenceEvent_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddPlayerToOneOfTheLeaderboards(const struct FSLeaderboardRowData& LeaderboardRowDataStruct, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype);
	void ClearPlayersInAllLeaderboards();
	void SetTeamScoreToLeaderboard(int Score);
	void SetBaseLeaderboardFrameData(bool PlayersWin_, bool UseCustomizeTextAndColorInputs_, const struct FText& CustomTitleCongratulationsYouWinText, const struct FLinearColor& CustomTitleCongratulationsYouWinTextColor, class USoundBase* Sound1, class USoundBase* Sound2);
	void UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture);
	void Construct();
	void Play2ndSound();
	void StartAudio();
	void StartCountingNumbers();
	void OnInitialized();
	void OnCountingNumbersFinished_Event();
	void ActiveWidget(bool IsActive);
	void OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
	void StartInitAndLeaderBoardAnimations();
	void SetOldBestScoreAndRank(bool SetVisible_, int OldBestScore, int OldBestRank, TEnumAsByte<EHigherLowerSame_EHigherLowerSame> WasNewHighscore_);
	void BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void SwitchStatsOrLeaderAndRefresh(bool ShowStatsInsteadLeader_);
	void BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void UpdateAllSteamStatsValues(const struct FText& Kills, const struct FText& KillsHead, const struct FText& KillsExplosive, const struct FText& KillsInAir, const struct FText& Revived, const struct FText& Uncons, const struct FText& Death, const struct FText& Playtime, const struct FText& MatchesWon, const struct FText& MatchesLost);
	void BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void ExecuteUbergraph_W_LeaderboardFrame(int EntryPoint);
	void OnCountingNumbersFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
