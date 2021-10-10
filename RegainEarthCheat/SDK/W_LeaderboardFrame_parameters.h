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

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2
struct UW_LeaderboardFrame_C_SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1
struct UW_LeaderboardFrame_C_SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnMouseButtonDown
struct UW_LeaderboardFrame_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent_1
struct UW_LeaderboardFrame_C_SequenceEvent_1_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.Tick
struct UW_LeaderboardFrame_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.AddPlayerToOneOfTheLeaderboards
struct UW_LeaderboardFrame_C_AddPlayerToOneOfTheLeaderboards_Params
{
	struct FSLeaderboardRowData                        LeaderboardRowDataStruct;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes>   Leaderboardtype;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.ClearPlayersInAllLeaderboards
struct UW_LeaderboardFrame_C_ClearPlayersInAllLeaderboards_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetTeamScoreToLeaderboard
struct UW_LeaderboardFrame_C_SetTeamScoreToLeaderboard_Params
{
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetBaseLeaderboardFrameData
struct UW_LeaderboardFrame_C_SetBaseLeaderboardFrameData_Params
{
	bool                                               PlayersWin_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseCustomizeTextAndColorInputs_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       CustomTitleCongratulationsYouWinText;                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                CustomTitleCongratulationsYouWinTextColor;                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed
struct UW_LeaderboardFrame_C_UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed_Params
{
	struct FSteamID                                    SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  AvatarTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.Construct
struct UW_LeaderboardFrame_C_Construct_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.Play2ndSound
struct UW_LeaderboardFrame_C_Play2ndSound_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartAudio
struct UW_LeaderboardFrame_C_StartAudio_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartCountingNumbers
struct UW_LeaderboardFrame_C_StartCountingNumbers_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnInitialized
struct UW_LeaderboardFrame_C_OnInitialized_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnCountingNumbersFinished_Event
struct UW_LeaderboardFrame_C_OnCountingNumbersFinished_Event_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.ActiveWidget
struct UW_LeaderboardFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnHovered
struct UW_LeaderboardFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartInitAndLeaderBoardAnimations
struct UW_LeaderboardFrame_C_StartInitAndLeaderBoardAnimations_Params
{
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetOldBestScoreAndRank
struct UW_LeaderboardFrame_C_SetOldBestScoreAndRank_Params
{
	bool                                               SetVisible_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OldBestScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldBestRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EHigherLowerSame_EHigherLowerSame>     WasNewHighscore_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.PreConstruct
struct UW_LeaderboardFrame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SwitchStatsOrLeaderAndRefresh
struct UW_LeaderboardFrame_C_SwitchStatsOrLeaderAndRefresh_Params
{
	bool                                               ShowStatsInsteadLeader_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.UpdateAllSteamStatsValues
struct UW_LeaderboardFrame_C_UpdateAllSteamStatsValues_Params
{
	struct FText                                       Kills;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KillsHead;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KillsExplosive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KillsInAir;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Revived;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Uncons;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Death;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Playtime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MatchesWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MatchesLost;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature
struct UW_LeaderboardFrame_C_BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.ExecuteUbergraph_W_LeaderboardFrame
struct UW_LeaderboardFrame_C_ExecuteUbergraph_W_LeaderboardFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnCountingNumbersFinished__DelegateSignature
struct UW_LeaderboardFrame_C_OnCountingNumbersFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
