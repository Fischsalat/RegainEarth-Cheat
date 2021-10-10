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

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetLobbyWidgetReference
struct ABP_Wave_REHR_PlayerController_C_GetLobbyWidgetReference_Params
{
	class UW_LobbyFrame_C*                             LobbyWidgetLobyFrameRef;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetPlayerName
struct ABP_Wave_REHR_PlayerController_C_GetPlayerName_Params
{
	struct FString                                     PlayerName;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetCurrentMenuRef
struct ABP_Wave_REHR_PlayerController_C_GetCurrentMenuRef_Params
{
	class UUserWidget*                                 CurrentMenuWidget;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.IsServer
struct ABP_Wave_REHR_PlayerController_C_IsServer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.LobbyCheckAllPlayersAreReady
struct ABP_Wave_REHR_PlayerController_C_LobbyCheckAllPlayersAreReady_Params
{
	TArray<class AController*>                         PlayersList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetCharacterCasted
struct ABP_Wave_REHR_PlayerController_C_GetCharacterCasted_Params
{
	class ABP_PlayerCharacter_BPBase_C*                ControlledCharacter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FCheckPlayerNames
struct ABP_Wave_REHR_PlayerController_C_FCheckPlayerNames_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsHaveEqual;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSaveGameToSlot
struct ABP_Wave_REHR_PlayerController_C_FSaveGameToSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FGetAllPlayerNames
struct ABP_Wave_REHR_PlayerController_C_FGetAllPlayerNames_Params
{
	TArray<struct FString>                             PlayerNames;                                               // (Parm, OutParm)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSavePlayerPosition
struct ABP_Wave_REHR_PlayerController_C_FSavePlayerPosition_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSaveAllBlocksPositions
struct ABP_Wave_REHR_PlayerController_C_FSaveAllBlocksPositions_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FLoadBlocks
struct ABP_Wave_REHR_PlayerController_C_FLoadBlocks_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FLoadPlayerPosition
struct ABP_Wave_REHR_PlayerController_C_FLoadPlayerPosition_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnFailure_DDDF4FB4473050B2D1FE7DACD1330037
struct ABP_Wave_REHR_PlayerController_C_OnFailure_DDDF4FB4473050B2D1FE7DACD1330037_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037
struct ABP_Wave_REHR_PlayerController_C_OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_24331F3C47986BC136060E9A9E3FB30C
struct ABP_Wave_REHR_PlayerController_C_OnCallback_24331F3C47986BC136060E9A9E3FB30C_Params
{
	struct FFindOrCreateLeaderboardData                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_F8EEB47D4286818A0BB5C2A12138940C
struct ABP_Wave_REHR_PlayerController_C_OnCallback_F8EEB47D4286818A0BB5C2A12138940C_Params
{
	struct FLeaderboardScoresDownloaded                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_F7800F474CDA912FFA876992BD66C8A2
struct ABP_Wave_REHR_PlayerController_C_OnCallback_F7800F474CDA912FFA876992BD66C8A2_Params
{
	struct FLeaderboardScoresDownloaded                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF
struct ABP_Wave_REHR_PlayerController_C_OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF_Params
{
	struct FLeaderboardScoresDownloaded                Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638
struct ABP_Wave_REHR_PlayerController_C_OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638_Params
{
	struct FLeaderboardScoresDownloadedForUsers        Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4
struct ABP_Wave_REHR_PlayerController_C_OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4_Params
{
	struct FLeaderboardScoreUploaded                   Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD
struct ABP_Wave_REHR_PlayerController_C_OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD_Params
{
	struct FLeaderboardScoresDownloadedForUsers        Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bWasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_15
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_O_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_U_K2Node_InputKeyEvent_14
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_U_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_U_K2Node_InputKeyEvent_13
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_U_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_12
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_11
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_10
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_9
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_8
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_7
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_6
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_5
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_4
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent_2
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_J_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_K_K2Node_InputKeyEvent_1
struct ABP_Wave_REHR_PlayerController_C_InpActEvt_K_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ExecuteTest
struct ABP_Wave_REHR_PlayerController_C_ExecuteTest_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerScores
struct ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerScores_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerUnconsciousStats
struct ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerUnconsciousStats_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerKills
struct ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerKills_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerAvatar
struct ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerAvatar_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerNames
struct ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerNames_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetIsReady
struct ABP_Wave_REHR_PlayerController_C_SetIsReady_Params
{
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SwitchToSpectatorCamOtherPlayersFollow
struct ABP_Wave_REHR_PlayerController_C_Server_SwitchToSpectatorCamOtherPlayersFollow_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetCamToOtherPlayerView
struct ABP_Wave_REHR_PlayerController_C_Client_SetCamToOtherPlayerView_Params
{
	class APawn*                                       NewViewTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SwitchSpecCamBackToPawnCam
struct ABP_Wave_REHR_PlayerController_C_Client_SwitchSpecCamBackToPawnCam_Params
{
	class AActor*                                      NewViewTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToggleSpectatorCamOtherPlayersFollow
struct ABP_Wave_REHR_PlayerController_C_ToggleSpectatorCamOtherPlayersFollow_Params
{
	bool                                               SetSpectatorCamOtherPlayersFollow_;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SwitchBackToAlivePlayerCharacterCam
struct ABP_Wave_REHR_PlayerController_C_Server_SwitchBackToAlivePlayerCharacterCam_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToNextPlayerSpectating
struct ABP_Wave_REHR_PlayerController_C_SwitchToNextPlayerSpectating_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToPreviousPlayerSpectating
struct ABP_Wave_REHR_PlayerController_C_SwitchToPreviousPlayerSpectating_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToggleForceDancingPlContr
struct ABP_Wave_REHR_PlayerController_C_ToggleForceDancingPlContr_Params
{
	bool                                               SetDancing_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PlayAudio2D
struct ABP_Wave_REHR_PlayerController_C_PlayAudio2D_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HowLongToPlaySec;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartNextRoundConditions
struct ABP_Wave_REHR_PlayerController_C_StartNextRoundConditions_Params
{
	int                                                RoundNr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowBigMiddleScreenTextMessageForSomeSeconds
struct ABP_Wave_REHR_PlayerController_C_ShowBigMiddleScreenTextMessageForSomeSeconds_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowNextRoundScreenMessage
struct ABP_Wave_REHR_PlayerController_C_ShowNextRoundScreenMessage_Params
{
	int                                                RoundNr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowBigMiddleScreenTextAndOnOff
struct ABP_Wave_REHR_PlayerController_C_ShowBigMiddleScreenTextAndOnOff_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SetTextMessageOn_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateTeamScore
struct ABP_Wave_REHR_PlayerController_C_UpdateTeamScore_Params
{
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdatePlayerListedInScoreboard
struct ABP_Wave_REHR_PlayerController_C_UpdatePlayerListedInScoreboard_Params
{
	int                                                CountOfPlayerController;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateOwnStatsScore
struct ABP_Wave_REHR_PlayerController_C_UpdateOwnStatsScore_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartDisplayLootOrScoreNotifyCustom
struct ABP_Wave_REHR_PlayerController_C_StartDisplayLootOrScoreNotifyCustom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NotificationIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NotificationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NotificationValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ValuePositiveOrNegative;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DynamicBackground;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DynamicBackgroundColor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartDisplayLootOrScoreNotifyWithScoreEval
struct ABP_Wave_REHR_PlayerController_C_StartDisplayLootOrScoreNotifyWithScoreEval_Params
{
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KilledByDamageType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      KilledActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_DisplayLootOrScoreNotifyWithScoreEval
struct ABP_Wave_REHR_PlayerController_C_Client_DisplayLootOrScoreNotifyWithScoreEval_Params
{
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KilledByDamageType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      KilledActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_DisplayLootOrScoreNotifyCustom
struct ABP_Wave_REHR_PlayerController_C_Client_DisplayLootOrScoreNotifyCustom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NotificationIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NotificationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NotificationValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ValuePositiveOrNegative;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DynamicBackground;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DynamicBackgroundColor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNewWaveRoundNumbers
struct ABP_Wave_REHR_PlayerController_C_SetNewWaveRoundNumbers_Params
{
	int                                                CurrentRound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxRounds;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForScannerEnergyToHUD
struct ABP_Wave_REHR_PlayerController_C_SetPercentForScannerEnergyToHUD_Params
{
	float                                              EnergyPerc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForHealthToHud
struct ABP_Wave_REHR_PlayerController_C_SetPercentForHealthToHud_Params
{
	float                                              HealthPerc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetEnemiesLeftToHud
struct ABP_Wave_REHR_PlayerController_C_SetEnemiesLeftToHud_Params
{
	int                                                NewEnemiesLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetAmmoInClipToHud
struct ABP_Wave_REHR_PlayerController_C_SetAmmoInClipToHud_Params
{
	int                                                NewAmmoInClip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayButtonToolTip_Side
struct ABP_Wave_REHR_PlayerController_C_DisplayButtonToolTip_Side_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayExtraLongAndRemoveOnUsage_;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayCustomMessageToolTip_Side
struct ABP_Wave_REHR_PlayerController_C_DisplayCustomMessageToolTip_Side_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RemoveToolTip_Side
struct ABP_Wave_REHR_PlayerController_C_RemoveToolTip_Side_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayCustomMessageTutorial_Bottom
struct ABP_Wave_REHR_PlayerController_C_DisplayCustomMessageTutorial_Bottom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RemoveTutorial_Bottom
struct ABP_Wave_REHR_PlayerController_C_RemoveTutorial_Bottom_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponReloaded_Event
struct ABP_Wave_REHR_PlayerController_C_CurrentWeaponReloaded_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanActivated_Event
struct ABP_Wave_REHR_PlayerController_C_RadialScanActivated_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetAmmoInClipToHud_grenade
struct ABP_Wave_REHR_PlayerController_C_SetAmmoInClipToHud_grenade_Params
{
	int                                                NewAmmoInClip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFirstSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNewOrActiveWeaponIconToHud
struct ABP_Wave_REHR_PlayerController_C_SetNewOrActiveWeaponIconToHud_Params
{
	class UBP_Weapon_C*                                NewEquippedWeapon;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkipToShowPassedWeaponAsActiveWeapon;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForShieldToHud
struct ABP_Wave_REHR_PlayerController_C_SetPercentForShieldToHud_Params
{
	float                                              ShieldPerc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchActiveGrenadeSlot
struct ABP_Wave_REHR_PlayerController_C_SwitchActiveGrenadeSlot_Params
{
	bool                                               FirstSlotIsActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_AddNewPlayer
struct ABP_Wave_REHR_PlayerController_C_Client_AddNewPlayer_Params
{
	struct FString                                     inString;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                inInt;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       PlayerPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetReadyState
struct ABP_Wave_REHR_PlayerController_C_SetReadyState_Params
{
	bool                                               NewReadyState;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPlayerListAndUpdatePlayerListValuesCompletely
struct ABP_Wave_REHR_PlayerController_C_SetPlayerListAndUpdatePlayerListValuesCompletely_Params
{
	TArray<class APawn*>                               PlayerPawnList;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RefreshPlayerListValuesCompletely
struct ABP_Wave_REHR_PlayerController_C_RefreshPlayerListValuesCompletely_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdatePlayerControllers
struct ABP_Wave_REHR_PlayerController_C_UpdatePlayerControllers_Params
{
	TArray<class AController*>                         PlayersControllerList_OnlyUseableOnServer;                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ClearPlayers
struct ABP_Wave_REHR_PlayerController_C_Client_ClearPlayers_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_StartGame
struct ABP_Wave_REHR_PlayerController_C_Client_StartGame_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_StartGame
struct ABP_Wave_REHR_PlayerController_C_Server_StartGame_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_KickDestroySession
struct ABP_Wave_REHR_PlayerController_C_Client_KickDestroySession_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithMessages
struct ABP_Wave_REHR_PlayerController_C_DestroySessionsWithMessages_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithOUTMessages
struct ABP_Wave_REHR_PlayerController_C_DestroySessionsWithOUTMessages_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SendChatMessage
struct ABP_Wave_REHR_PlayerController_C_SendChatMessage_Params
{
	struct FText                                       TextToSend;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                PlayerStateRefOfSender;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SendChatMessage
struct ABP_Wave_REHR_PlayerController_C_Server_SendChatMessage_Params
{
	struct FText                                       TextToSend;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                PlayerStateRefOfSender;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_UpdateChatWindowsWithNewMessage
struct ABP_Wave_REHR_PlayerController_C_Client_UpdateChatWindowsWithNewMessage_Params
{
	struct FText                                       Sender;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ChatText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                           OwnerPlayerControllerOfChatMessage;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_StartTimer
struct ABP_Wave_REHR_PlayerController_C_Client_StartTimer_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToClient_StartGameInterface
struct ABP_Wave_REHR_PlayerController_C_ToClient_StartGameInterface_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithMessagesInterface
struct ABP_Wave_REHR_PlayerController_C_DestroySessionsWithMessagesInterface_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_KickDestroySessionInterface
struct ABP_Wave_REHR_PlayerController_C_Client_KickDestroySessionInterface_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_StartMultiplayerMatchWithLastPlayedMatchsettings
struct ABP_Wave_REHR_PlayerController_C_Server_StartMultiplayerMatchWithLastPlayedMatchsettings_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_ServerTravelToLobbyWithAllKnownPlayers
struct ABP_Wave_REHR_PlayerController_C_Server_ServerTravelToLobbyWithAllKnownPlayers_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetLastPlayedSettingsToClient
struct ABP_Wave_REHR_PlayerController_C_Client_SetLastPlayedSettingsToClient_Params
{
	struct FString                                     LastPlayedMap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<EDifficulties_EDifficulties>           DifficultyCurrentOrLastPlayedMatch;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayersCurrentOrLastPlayedMatch;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LastStartedMatchWasSingleplayer;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnChangePlayerName
struct ABP_Wave_REHR_PlayerController_C_OnChangePlayerName_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceiveBeginPlay
struct ABP_Wave_REHR_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetSteamIdToPlayerStateForRepNotify
struct ABP_Wave_REHR_PlayerController_C_Server_SetSteamIdToPlayerStateForRepNotify_Params
{
	struct FString                                     SteamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetFinishedBeginPlayFinePC
struct ABP_Wave_REHR_PlayerController_C_Server_SetFinishedBeginPlayFinePC_Params
{
	bool                                               FinishedBeginPlayFine;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.WaitForGameStart
struct ABP_Wave_REHR_PlayerController_C_WaitForGameStart_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GenerateLobbyUI
struct ABP_Wave_REHR_PlayerController_C_GenerateLobbyUI_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DeactivateLobbyUI
struct ABP_Wave_REHR_PlayerController_C_DeactivateLobbyUI_Params
{
	bool                                               AndStartShootingREWaveHUDAndWidgets_;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ActivateLobbyUI
struct ABP_Wave_REHR_PlayerController_C_ActivateLobbyUI_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanFullyLoaded_Event
struct ABP_Wave_REHR_PlayerController_C_RadialScanFullyLoaded_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnOnlyFewEnemiesLeft_Event
struct ABP_Wave_REHR_PlayerController_C_OnOnlyFewEnemiesLeft_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponEmpty_Event
struct ABP_Wave_REHR_PlayerController_C_CurrentWeaponEmpty_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetPlayerName
struct ABP_Wave_REHR_PlayerController_C_Server_SetPlayerName_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_LoadGame
struct ABP_Wave_REHR_PlayerController_C_Server_LoadGame_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.AddScore
struct ABP_Wave_REHR_PlayerController_C_AddScore_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.AddLevel
struct ABP_Wave_REHR_PlayerController_C_AddLevel_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CheckpointSaveGame
struct ABP_Wave_REHR_PlayerController_C_CheckpointSaveGame_Params
{
	bool                                               IsRewriteExistSave;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SaveGame
struct ABP_Wave_REHR_PlayerController_C_Client_SaveGame_Params
{
	bool                                               IsRewriteSaveGame;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ESaveGameType_ESaveGameType>           SaveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ServerSaveGame
struct ABP_Wave_REHR_PlayerController_C_ServerSaveGame_Params
{
	bool                                               IsRewriteSaveGame;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ESaveGameType_ESaveGameType>           SaveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceiveTick
struct ABP_Wave_REHR_PlayerController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetControlRotation
struct ABP_Wave_REHR_PlayerController_C_Client_SetControlRotation_Params
{
	struct FRotator                                    NewRotation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SendNotification
struct ABP_Wave_REHR_PlayerController_C_SendNotification_Params
{
	struct FSNotificationSender                        Notify;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SendNotification
struct ABP_Wave_REHR_PlayerController_C_Client_SendNotification_Params
{
	struct FSNotificationSender                        Notification;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SendNotification
struct ABP_Wave_REHR_PlayerController_C_Server_SendNotification_Params
{
	struct FSNotificationSender                        Notification;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResumeGame
struct ABP_Wave_REHR_PlayerController_C_ResumeGame_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceivePossess
struct ABP_Wave_REHR_PlayerController_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnPlayerDeath_Event
struct ABP_Wave_REHR_PlayerController_C_OnPlayerDeath_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnPlayerUnconscious_Event
struct ABP_Wave_REHR_PlayerController_C_OnPlayerUnconscious_Event_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverWin_Event
struct ABP_Wave_REHR_PlayerController_C_OnGameOverWin_Event_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverLoose_Event
struct ABP_Wave_REHR_PlayerController_C_OnGameOverLoose_Event_Params
{
	float                                              TimeUntilPauseStarts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OneMoreLeaderBoardEntryIsSucssfull
struct ABP_Wave_REHR_PlayerController_C_OneMoreLeaderBoardEntryIsSucssfull_Params
{
	struct FSteamLeaderboardEntries                    leaderboardEntries;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                CountOfEntries;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OptionalLogStringOfLeaderboardQueryType;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                                LogColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes>   LeaderboardtypeOnWidget;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PersonaStateChanged
struct ABP_Wave_REHR_PlayerController_C_PersonaStateChanged_Params
{
	struct FPersonaStateChange                         Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ActivateVisibleLeaderboardAndStartFadeToLeaderboardView
struct ABP_Wave_REHR_PlayerController_C_ActivateVisibleLeaderboardAndStartFadeToLeaderboardView_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetHudAndHudWidgetOn
struct ABP_Wave_REHR_PlayerController_C_SetHudAndHudWidgetOn_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetHudAndHudWidgetOff
struct ABP_Wave_REHR_PlayerController_C_SetHudAndHudWidgetOff_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCountingNumbersFinished_Event_1
struct ABP_Wave_REHR_PlayerController_C_OnCountingNumbersFinished_Event_1_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchOffInGameMenuWithoutChangeInputMode
struct ABP_Wave_REHR_PlayerController_C_SwitchOffInGameMenuWithoutChangeInputMode_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetLeaderBoardNewBasicInformationWithoutCleanPlayers
struct ABP_Wave_REHR_PlayerController_C_SetLeaderBoardNewBasicInformationWithoutCleanPlayers_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TryFixWorkaroundMenuNotClickable
struct ABP_Wave_REHR_PlayerController_C_TryFixWorkaroundMenuNotClickable_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ToggleLoadingScreenPlControl
struct ABP_Wave_REHR_PlayerController_C_Client_ToggleLoadingScreenPlControl_Params
{
	bool                                               ShowLoadingScreen_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FireOpenIngameMenu
struct ABP_Wave_REHR_PlayerController_C_FireOpenIngameMenu_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnDestroyed_ResumeFromPause
struct ABP_Wave_REHR_PlayerController_C_OnDestroyed_ResumeFromPause_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PauseGameIfPossible
struct ABP_Wave_REHR_PlayerController_C_PauseGameIfPossible_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotOldScore_Event
struct ABP_Wave_REHR_PlayerController_C_GotOldScore_Event_Params
{
	bool                                               fine_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotNewScore_Event
struct ABP_Wave_REHR_PlayerController_C_GotNewScore_Event_Params
{
	bool                                               fine_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_PausePlayerControllerLocally
struct ABP_Wave_REHR_PlayerController_C_Client_PausePlayerControllerLocally_Params
{
	bool                                               bPaused;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI
struct ABP_Wave_REHR_PlayerController_C_Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SaveNewSteamStatsAndEvalAchievements
struct ABP_Wave_REHR_PlayerController_C_SaveNewSteamStatsAndEvalAchievements_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetFinalRoundToRoundX
struct ABP_Wave_REHR_PlayerController_C_Server_SetFinalRoundToRoundX_Params
{
	int                                                LastRoundNumberToWin;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetFinalRoundToRoundX
struct ABP_Wave_REHR_PlayerController_C_SetFinalRoundToRoundX_Params
{
	int                                                Round;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundToX
struct ABP_Wave_REHR_PlayerController_C_Server_SetActualRoundToX_Params
{
	int                                                CurrentRound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundToRoundX
struct ABP_Wave_REHR_PlayerController_C_SetActualRoundToRoundX_Params
{
	int                                                RoundWave;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DropRandomGrenade
struct ABP_Wave_REHR_PlayerController_C_Server_DropRandomGrenade_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DropRandomGrenade
struct ABP_Wave_REHR_PlayerController_C_DropRandomGrenade_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetLeaderboardEntryOfRunningMatch
struct ABP_Wave_REHR_PlayerController_C_ResetLeaderboardEntryOfRunningMatch_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetAllOnlineSubStatsAndAchievements
struct ABP_Wave_REHR_PlayerController_C_ResetAllOnlineSubStatsAndAchievements_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetAllOnlineSubStats
struct ABP_Wave_REHR_PlayerController_C_ResetAllOnlineSubStats_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DropRandomWeapon
struct ABP_Wave_REHR_PlayerController_C_Server_DropRandomWeapon_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_GrantExtremeHighHealth
struct ABP_Wave_REHR_PlayerController_C_Server_GrantExtremeHighHealth_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DropRandomWeapon
struct ABP_Wave_REHR_PlayerController_C_DropRandomWeapon_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GrantExtremeHighHealth
struct ABP_Wave_REHR_PlayerController_C_GrantExtremeHighHealth_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_KillAllEnemies
struct ABP_Wave_REHR_PlayerController_C_Server_KillAllEnemies_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_TeleportToLastRound
struct ABP_Wave_REHR_PlayerController_C_Server_TeleportToLastRound_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundToLastRound
struct ABP_Wave_REHR_PlayerController_C_Server_SetActualRoundToLastRound_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundTo2
struct ABP_Wave_REHR_PlayerController_C_Server_SetActualRoundTo2_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ChangesToSpectatorPawn
struct ABP_Wave_REHR_PlayerController_C_Client_ChangesToSpectatorPawn_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DetachPlayerControllerAndSwitchToSpectatorCam
struct ABP_Wave_REHR_PlayerController_C_Server_DetachPlayerControllerAndSwitchToSpectatorCam_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SpawnBoss
struct ABP_Wave_REHR_PlayerController_C_Server_SpawnBoss_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SpawnBoss
struct ABP_Wave_REHR_PlayerController_C_SpawnBoss_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToFreeSpectatorCam
struct ABP_Wave_REHR_PlayerController_C_SwitchToFreeSpectatorCam_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundTotRound2
struct ABP_Wave_REHR_PlayerController_C_SetActualRoundTotRound2_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CloseAdminCheatMenu_Event_1
struct ABP_Wave_REHR_PlayerController_C_CloseAdminCheatMenu_Event_1_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetPlayerUsedCheatsToGS
struct ABP_Wave_REHR_PlayerController_C_Server_SetPlayerUsedCheatsToGS_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNextRoundToLastRoundAndKillAllEnemies
struct ABP_Wave_REHR_PlayerController_C_SetNextRoundToLastRoundAndKillAllEnemies_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TriggerLooseGame
struct ABP_Wave_REHR_PlayerController_C_TriggerLooseGame_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TriggerWinGame
struct ABP_Wave_REHR_PlayerController_C_TriggerWinGame_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundToLastRound
struct ABP_Wave_REHR_PlayerController_C_SetActualRoundToLastRound_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.KillSelf
struct ABP_Wave_REHR_PlayerController_C_KillSelf_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TraceAllEnemies
struct ABP_Wave_REHR_PlayerController_C_TraceAllEnemies_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.KillAllEnemies
struct ABP_Wave_REHR_PlayerController_C_KillAllEnemies_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.HeallSelfJustSetFullHealth
struct ABP_Wave_REHR_PlayerController_C_HeallSelfJustSetFullHealth_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReviveSelf
struct ABP_Wave_REHR_PlayerController_C_ReviveSelf_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ExecuteUbergraph_BP_Wave_REHR_PlayerController
struct ABP_Wave_REHR_PlayerController_C_ExecuteUbergraph_BP_Wave_REHR_PlayerController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponEmpty__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_CurrentWeaponEmpty__DelegateSignature_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanFullyLoaded__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_RadialScanFullyLoaded__DelegateSignature_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanActivated__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_RadialScanActivated__DelegateSignature_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponReloaded__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_CurrentWeaponReloaded__DelegateSignature_Params
{
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotNewScore__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_GotNewScore__DelegateSignature_Params
{
	bool                                               fine_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotOldScore__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_GotOldScore__DelegateSignature_Params
{
	bool                                               fine_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverStartEndGameScreen__DelegateSignature
struct ABP_Wave_REHR_PlayerController_C_OnGameOverStartEndGameScreen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
