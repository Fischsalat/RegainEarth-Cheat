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

// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2
// (Public, BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2");

	UW_LeaderboardFrame_C_SequenceEvent__ENTRYPOINTW_LeaderboardFrame_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1
// (Public, BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1");

	UW_LeaderboardFrame_C_SequenceEvent__ENTRYPOINTW_LeaderboardFrame_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_LeaderboardFrame_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnMouseButtonDown");

	UW_LeaderboardFrame_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SequenceEvent_1");

	UW_LeaderboardFrame_C_SequenceEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.Tick");

	UW_LeaderboardFrame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.AddPlayerToOneOfTheLeaderboards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSLeaderboardRowData    LeaderboardRowDataStruct       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::AddPlayerToOneOfTheLeaderboards(const struct FSLeaderboardRowData& LeaderboardRowDataStruct, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.AddPlayerToOneOfTheLeaderboards");

	UW_LeaderboardFrame_C_AddPlayerToOneOfTheLeaderboards_Params params;
	params.LeaderboardRowDataStruct = LeaderboardRowDataStruct;
	params.Leaderboardtype = Leaderboardtype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.ClearPlayersInAllLeaderboards
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::ClearPlayersInAllLeaderboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.ClearPlayersInAllLeaderboards");

	UW_LeaderboardFrame_C_ClearPlayersInAllLeaderboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetTeamScoreToLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::SetTeamScoreToLeaderboard(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetTeamScoreToLeaderboard");

	UW_LeaderboardFrame_C_SetTeamScoreToLeaderboard_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetBaseLeaderboardFrameData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayersWin_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseCustomizeTextAndColorInputs_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   CustomTitleCongratulationsYouWinText (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            CustomTitleCongratulationsYouWinTextColor (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Sound1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Sound2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::SetBaseLeaderboardFrameData(bool PlayersWin_, bool UseCustomizeTextAndColorInputs_, const struct FText& CustomTitleCongratulationsYouWinText, const struct FLinearColor& CustomTitleCongratulationsYouWinTextColor, class USoundBase* Sound1, class USoundBase* Sound2)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetBaseLeaderboardFrameData");

	UW_LeaderboardFrame_C_SetBaseLeaderboardFrameData_Params params;
	params.PlayersWin_ = PlayersWin_;
	params.UseCustomizeTextAndColorInputs_ = UseCustomizeTextAndColorInputs_;
	params.CustomTitleCongratulationsYouWinText = CustomTitleCongratulationsYouWinText;
	params.CustomTitleCongratulationsYouWinTextColor = CustomTitleCongratulationsYouWinTextColor;
	params.Sound1 = Sound1;
	params.Sound2 = Sound2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*              AvatarTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed");

	UW_LeaderboardFrame_C_UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed_Params params;
	params.SteamID = SteamID;
	params.PlayerName = PlayerName;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_LeaderboardFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.Construct");

	UW_LeaderboardFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.Play2ndSound
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::Play2ndSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.Play2ndSound");

	UW_LeaderboardFrame_C_Play2ndSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartAudio
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::StartAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartAudio");

	UW_LeaderboardFrame_C_StartAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartCountingNumbers
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::StartCountingNumbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartCountingNumbers");

	UW_LeaderboardFrame_C_StartCountingNumbers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_LeaderboardFrame_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnInitialized");

	UW_LeaderboardFrame_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnCountingNumbersFinished_Event
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::OnCountingNumbersFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnCountingNumbersFinished_Event");

	UW_LeaderboardFrame_C_OnCountingNumbersFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LeaderboardFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.ActiveWidget");

	UW_LeaderboardFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnHovered");

	UW_LeaderboardFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartInitAndLeaderBoardAnimations
// (BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::StartInitAndLeaderBoardAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.StartInitAndLeaderBoardAnimations");

	UW_LeaderboardFrame_C_StartInitAndLeaderBoardAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetOldBestScoreAndRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetVisible_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OldBestScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OldBestRank                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EHigherLowerSame_EHigherLowerSame> WasNewHighscore_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::SetOldBestScoreAndRank(bool SetVisible_, int OldBestScore, int OldBestRank, TEnumAsByte<EHigherLowerSame_EHigherLowerSame> WasNewHighscore_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SetOldBestScoreAndRank");

	UW_LeaderboardFrame_C_SetOldBestScoreAndRank_Params params;
	params.SetVisible_ = SetVisible_;
	params.OldBestScore = OldBestScore;
	params.OldBestRank = OldBestRank;
	params.WasNewHighscore_ = WasNewHighscore_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__Bt_RetryStartGameAgain_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__Bt_GoToLobby_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__Bt_EndGameBackToMenu_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LeaderboardFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.PreConstruct");

	UW_LeaderboardFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__Bt_MenuSwitchToShowStats_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.SwitchStatsOrLeaderAndRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowStatsInsteadLeader_        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_LeaderboardFrame_C::SwitchStatsOrLeaderAndRefresh(bool ShowStatsInsteadLeader_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.SwitchStatsOrLeaderAndRefresh");

	UW_LeaderboardFrame_C_SwitchStatsOrLeaderAndRefresh_Params params;
	params.ShowStatsInsteadLeader_ = ShowStatsInsteadLeader_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__Bt_EndGameSwitchToShowStats_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__Bt_MenuSwitchToLeaderboard_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__BtEndGameSwitchToLeaderboard_1_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.UpdateAllSteamStatsValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Kills                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KillsHead                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KillsExplosive                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KillsInAir                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Revived                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Uncons                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Death                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Playtime                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MatchesWon                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MatchesLost                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_LeaderboardFrame_C::UpdateAllSteamStatsValues(const struct FText& Kills, const struct FText& KillsHead, const struct FText& KillsExplosive, const struct FText& KillsInAir, const struct FText& Revived, const struct FText& Uncons, const struct FText& Death, const struct FText& Playtime, const struct FText& MatchesWon, const struct FText& MatchesLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.UpdateAllSteamStatsValues");

	UW_LeaderboardFrame_C_UpdateAllSteamStatsValues_Params params;
	params.Kills = Kills;
	params.KillsHead = KillsHead;
	params.KillsExplosive = KillsExplosive;
	params.KillsInAir = KillsInAir;
	params.Revived = Revived;
	params.Uncons = Uncons;
	params.Death = Death;
	params.Playtime = Playtime;
	params.MatchesWon = MatchesWon;
	params.MatchesLost = MatchesLost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__W_LeaderboardFrame_W_SwitchButtonMap_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__W_LeaderboardFrame_W_SwitchButtonPlayersCount_K2Node_ComponentBoundEvent_8_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature");

	UW_LeaderboardFrame_C_BndEvt__W_LeaderboardFrame_W_SwitchButtonDifficulties_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.ExecuteUbergraph_W_LeaderboardFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LeaderboardFrame_C::ExecuteUbergraph_W_LeaderboardFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.ExecuteUbergraph_W_LeaderboardFrame");

	UW_LeaderboardFrame_C_ExecuteUbergraph_W_LeaderboardFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnCountingNumbersFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_LeaderboardFrame_C::OnCountingNumbersFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LeaderboardFrame.W_LeaderboardFrame_C.OnCountingNumbersFinished__DelegateSignature");

	UW_LeaderboardFrame_C_OnCountingNumbersFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
