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

// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetLobbyWidgetReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LobbyFrame_C*         LobbyWidgetLobyFrameRef        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::GetLobbyWidgetReference(class UW_LobbyFrame_C** LobbyWidgetLobyFrameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetLobbyWidgetReference");

	ABP_Wave_REHR_PlayerController_C_GetLobbyWidgetReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyWidgetLobyFrameRef != nullptr)
		*LobbyWidgetLobyFrameRef = params.LobbyWidgetLobyFrameRef;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::GetPlayerName(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetPlayerName");

	ABP_Wave_REHR_PlayerController_C_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetCurrentMenuRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             CurrentMenuWidget              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::GetCurrentMenuRef(class UUserWidget** CurrentMenuWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetCurrentMenuRef");

	ABP_Wave_REHR_PlayerController_C_GetCurrentMenuRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentMenuWidget != nullptr)
		*CurrentMenuWidget = params.CurrentMenuWidget;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.IsServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Wave_REHR_PlayerController_C::IsServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.IsServer");

	ABP_Wave_REHR_PlayerController_C_IsServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.LobbyCheckAllPlayersAreReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AController*>     PlayersList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Wave_REHR_PlayerController_C::LobbyCheckAllPlayersAreReady(TArray<class AController*>* PlayersList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.LobbyCheckAllPlayersAreReady");

	ABP_Wave_REHR_PlayerController_C_LobbyCheckAllPlayersAreReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayersList != nullptr)
		*PlayersList = params.PlayersList;


	return params.ReturnValue;
}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetCharacterCasted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_BPBase_C* ControlledCharacter            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::GetCharacterCasted(class ABP_PlayerCharacter_BPBase_C** ControlledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GetCharacterCasted");

	ABP_Wave_REHR_PlayerController_C_GetCharacterCasted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ControlledCharacter != nullptr)
		*ControlledCharacter = params.ControlledCharacter;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FCheckPlayerNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsHaveEqual                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::FCheckPlayerNames(const struct FString& PlayerName, bool* IsHaveEqual)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FCheckPlayerNames");

	ABP_Wave_REHR_PlayerController_C_FCheckPlayerNames_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHaveEqual != nullptr)
		*IsHaveEqual = params.IsHaveEqual;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSaveGameToSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::FSaveGameToSlot(const struct FString& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSaveGameToSlot");

	ABP_Wave_REHR_PlayerController_C_FSaveGameToSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FGetAllPlayerNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerNames                    (Parm, OutParm)
void ABP_Wave_REHR_PlayerController_C::FGetAllPlayerNames(TArray<struct FString>* PlayerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FGetAllPlayerNames");

	ABP_Wave_REHR_PlayerController_C_FGetAllPlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerNames != nullptr)
		*PlayerNames = params.PlayerNames;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSavePlayerPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::FSavePlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSavePlayerPosition");

	ABP_Wave_REHR_PlayerController_C_FSavePlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSaveAllBlocksPositions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::FSaveAllBlocksPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FSaveAllBlocksPositions");

	ABP_Wave_REHR_PlayerController_C_FSaveAllBlocksPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FLoadBlocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::FLoadBlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FLoadBlocks");

	ABP_Wave_REHR_PlayerController_C_FLoadBlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FLoadPlayerPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::FLoadPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FLoadPlayerPosition");

	ABP_Wave_REHR_PlayerController_C_FLoadPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_ShowScoreBoard_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnFailure_DDDF4FB4473050B2D1FE7DACD1330037
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnFailure_DDDF4FB4473050B2D1FE7DACD1330037()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnFailure_DDDF4FB4473050B2D1FE7DACD1330037");

	ABP_Wave_REHR_PlayerController_C_OnFailure_DDDF4FB4473050B2D1FE7DACD1330037_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037");

	ABP_Wave_REHR_PlayerController_C_OnSuccess_DDDF4FB4473050B2D1FE7DACD1330037_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_OpenGameMenu_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_24331F3C47986BC136060E9A9E3FB30C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFindOrCreateLeaderboardData Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_24331F3C47986BC136060E9A9E3FB30C(const struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_24331F3C47986BC136060E9A9E3FB30C");

	ABP_Wave_REHR_PlayerController_C_OnCallback_24331F3C47986BC136060E9A9E3FB30C_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_F8EEB47D4286818A0BB5C2A12138940C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_F8EEB47D4286818A0BB5C2A12138940C(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_F8EEB47D4286818A0BB5C2A12138940C");

	ABP_Wave_REHR_PlayerController_C_OnCallback_F8EEB47D4286818A0BB5C2A12138940C_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_F7800F474CDA912FFA876992BD66C8A2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_F7800F474CDA912FFA876992BD66C8A2(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_F7800F474CDA912FFA876992BD66C8A2");

	ABP_Wave_REHR_PlayerController_C_OnCallback_F7800F474CDA912FFA876992BD66C8A2_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF");

	ABP_Wave_REHR_PlayerController_C_OnCallback_9EF6A8B047AD585A7BC15E9C4BB684DF_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloadedForUsers Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638");

	ABP_Wave_REHR_PlayerController_C_OnCallback_97B2CF01411F4C1CE31C01AF8DF3A638_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoreUploaded Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4");

	ABP_Wave_REHR_PlayerController_C_OnCallback_CF1D4F5242EC257EB6DDFC8A030972D4_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloadedForUsers Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD");

	ABP_Wave_REHR_PlayerController_C_OnCallback_4BCEFCD9430C9834F88AB7AC26CF14CD_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_O_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_15");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_O_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_U_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_U_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_U_K2Node_InputKeyEvent_14");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_U_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_U_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_U_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_U_K2Node_InputKeyEvent_13");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_U_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_12");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_11");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_10");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_9");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_8");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_7");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_6");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_RightControl_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_RightControl_K2Node_InputKeyEvent_5");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_RightControl_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_4");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_J_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent_2");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_J_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_K_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::InpActEvt_K_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.InpActEvt_K_K2Node_InputKeyEvent_1");

	ABP_Wave_REHR_PlayerController_C_InpActEvt_K_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ExecuteTest
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ExecuteTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ExecuteTest");

	ABP_Wave_REHR_PlayerController_C_ExecuteTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerScores
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::UpdateAllPlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerScores");

	ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerUnconsciousStats
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::UpdateAllPlayerUnconsciousStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerUnconsciousStats");

	ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerUnconsciousStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerKills
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::UpdateAllPlayerKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerKills");

	ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerAvatar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::UpdateAllPlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerAvatar");

	ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerNames
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::UpdateAllPlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateAllPlayerNames");

	ABP_Wave_REHR_PlayerController_C_UpdateAllPlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetIsReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::SetIsReady(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetIsReady");

	ABP_Wave_REHR_PlayerController_C_SetIsReady_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SwitchToSpectatorCamOtherPlayersFollow
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_SwitchToSpectatorCamOtherPlayersFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SwitchToSpectatorCamOtherPlayersFollow");

	ABP_Wave_REHR_PlayerController_C_Server_SwitchToSpectatorCamOtherPlayersFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetCamToOtherPlayerView
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_SetCamToOtherPlayerView(class APawn* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetCamToOtherPlayerView");

	ABP_Wave_REHR_PlayerController_C_Client_SetCamToOtherPlayerView_Params params;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SwitchSpecCamBackToPawnCam
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_SwitchSpecCamBackToPawnCam(class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SwitchSpecCamBackToPawnCam");

	ABP_Wave_REHR_PlayerController_C_Client_SwitchSpecCamBackToPawnCam_Params params;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToggleSpectatorCamOtherPlayersFollow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetSpectatorCamOtherPlayersFollow_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::ToggleSpectatorCamOtherPlayersFollow(bool SetSpectatorCamOtherPlayersFollow_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToggleSpectatorCamOtherPlayersFollow");

	ABP_Wave_REHR_PlayerController_C_ToggleSpectatorCamOtherPlayersFollow_Params params;
	params.SetSpectatorCamOtherPlayersFollow_ = SetSpectatorCamOtherPlayersFollow_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SwitchBackToAlivePlayerCharacterCam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_SwitchBackToAlivePlayerCharacterCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SwitchBackToAlivePlayerCharacterCam");

	ABP_Wave_REHR_PlayerController_C_Server_SwitchBackToAlivePlayerCharacterCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToNextPlayerSpectating
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SwitchToNextPlayerSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToNextPlayerSpectating");

	ABP_Wave_REHR_PlayerController_C_SwitchToNextPlayerSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToPreviousPlayerSpectating
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SwitchToPreviousPlayerSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToPreviousPlayerSpectating");

	ABP_Wave_REHR_PlayerController_C_SwitchToPreviousPlayerSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToggleForceDancingPlContr
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDancing_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::ToggleForceDancingPlContr(bool SetDancing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToggleForceDancingPlContr");

	ABP_Wave_REHR_PlayerController_C_ToggleForceDancingPlContr_Params params;
	params.SetDancing_ = SetDancing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PlayAudio2D
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HowLongToPlaySec               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::PlayAudio2D(class USoundBase* Sound, float HowLongToPlaySec, float VolumeMultiplier, float StartTime, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PlayAudio2D");

	ABP_Wave_REHR_PlayerController_C_PlayAudio2D_Params params;
	params.Sound = Sound;
	params.HowLongToPlaySec = HowLongToPlaySec;
	params.VolumeMultiplier = VolumeMultiplier;
	params.StartTime = StartTime;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartNextRoundConditions
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNr                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::StartNextRoundConditions(int RoundNr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartNextRoundConditions");

	ABP_Wave_REHR_PlayerController_C_StartNextRoundConditions_Params params;
	params.RoundNr = RoundNr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowBigMiddleScreenTextMessageForSomeSeconds
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Wave_REHR_PlayerController_C::ShowBigMiddleScreenTextMessageForSomeSeconds(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowBigMiddleScreenTextMessageForSomeSeconds");

	ABP_Wave_REHR_PlayerController_C_ShowBigMiddleScreenTextMessageForSomeSeconds_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowNextRoundScreenMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNr                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::ShowNextRoundScreenMessage(int RoundNr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowNextRoundScreenMessage");

	ABP_Wave_REHR_PlayerController_C_ShowNextRoundScreenMessage_Params params;
	params.RoundNr = RoundNr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowBigMiddleScreenTextAndOnOff
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SetTextMessageOn_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::ShowBigMiddleScreenTextAndOnOff(const struct FText& Text, bool SetTextMessageOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ShowBigMiddleScreenTextAndOnOff");

	ABP_Wave_REHR_PlayerController_C_ShowBigMiddleScreenTextAndOnOff_Params params;
	params.Text = Text;
	params.SetTextMessageOn_ = SetTextMessageOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateTeamScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::UpdateTeamScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateTeamScore");

	ABP_Wave_REHR_PlayerController_C_UpdateTeamScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdatePlayerListedInScoreboard
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountOfPlayerController        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::UpdatePlayerListedInScoreboard(int CountOfPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdatePlayerListedInScoreboard");

	ABP_Wave_REHR_PlayerController_C_UpdatePlayerListedInScoreboard_Params params;
	params.CountOfPlayerController = CountOfPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateOwnStatsScore
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::UpdateOwnStatsScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdateOwnStatsScore");

	ABP_Wave_REHR_PlayerController_C_UpdateOwnStatsScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartDisplayLootOrScoreNotifyCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 NotificationIcon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NotificationValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ValuePositiveOrNegative        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DynamicBackground              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            DynamicBackgroundColor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::StartDisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartDisplayLootOrScoreNotifyCustom");

	ABP_Wave_REHR_PlayerController_C_StartDisplayLootOrScoreNotifyCustom_Params params;
	params.DisplayTime = DisplayTime;
	params.NotificationIcon = NotificationIcon;
	params.NotificationText = NotificationText;
	params.NotificationValue = NotificationValue;
	params.ValuePositiveOrNegative = ValuePositiveOrNegative;
	params.DynamicBackground = DynamicBackground;
	params.DynamicBackgroundColor = DynamicBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartDisplayLootOrScoreNotifyWithScoreEval
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  KilledByDamageType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  KilledActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::StartDisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.StartDisplayLootOrScoreNotifyWithScoreEval");

	ABP_Wave_REHR_PlayerController_C_StartDisplayLootOrScoreNotifyWithScoreEval_Params params;
	params.ScoreValue = ScoreValue;
	params.ScoreType = ScoreType;
	params.KilledByDamageType = KilledByDamageType;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_DisplayLootOrScoreNotifyWithScoreEval
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  KilledByDamageType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  KilledActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_DisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_DisplayLootOrScoreNotifyWithScoreEval");

	ABP_Wave_REHR_PlayerController_C_Client_DisplayLootOrScoreNotifyWithScoreEval_Params params;
	params.ScoreValue = ScoreValue;
	params.ScoreType = ScoreType;
	params.KilledByDamageType = KilledByDamageType;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_DisplayLootOrScoreNotifyCustom
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 NotificationIcon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NotificationValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ValuePositiveOrNegative        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DynamicBackground              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            DynamicBackgroundColor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_DisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_DisplayLootOrScoreNotifyCustom");

	ABP_Wave_REHR_PlayerController_C_Client_DisplayLootOrScoreNotifyCustom_Params params;
	params.DisplayTime = DisplayTime;
	params.NotificationIcon = NotificationIcon;
	params.NotificationText = NotificationText;
	params.NotificationValue = NotificationValue;
	params.ValuePositiveOrNegative = ValuePositiveOrNegative;
	params.DynamicBackground = DynamicBackground;
	params.DynamicBackgroundColor = DynamicBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNewWaveRoundNumbers
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentRound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxRounds                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetNewWaveRoundNumbers(int CurrentRound, int MaxRounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNewWaveRoundNumbers");

	ABP_Wave_REHR_PlayerController_C_SetNewWaveRoundNumbers_Params params;
	params.CurrentRound = CurrentRound;
	params.MaxRounds = MaxRounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForScannerEnergyToHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnergyPerc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetPercentForScannerEnergyToHUD(float EnergyPerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForScannerEnergyToHUD");

	ABP_Wave_REHR_PlayerController_C_SetPercentForScannerEnergyToHUD_Params params;
	params.EnergyPerc = EnergyPerc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForHealthToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPerc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetPercentForHealthToHud(float HealthPerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForHealthToHud");

	ABP_Wave_REHR_PlayerController_C_SetPercentForHealthToHud_Params params;
	params.HealthPerc = HealthPerc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetEnemiesLeftToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewEnemiesLeft                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetEnemiesLeftToHud(int NewEnemiesLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetEnemiesLeftToHud");

	ABP_Wave_REHR_PlayerController_C_SetEnemiesLeftToHud_Params params;
	params.NewEnemiesLeft = NewEnemiesLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetAmmoInClipToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoInClip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetAmmoInClipToHud(int NewAmmoInClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetAmmoInClipToHud");

	ABP_Wave_REHR_PlayerController_C_SetAmmoInClipToHud_Params params;
	params.NewAmmoInClip = NewAmmoInClip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayButtonToolTip_Side
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DisplayExtraLongAndRemoveOnUsage_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::DisplayButtonToolTip_Side(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, bool DisplayExtraLongAndRemoveOnUsage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayButtonToolTip_Side");

	ABP_Wave_REHR_PlayerController_C_DisplayButtonToolTip_Side_Params params;
	params.ActionKey = ActionKey;
	params.DisplayExtraLongAndRemoveOnUsage_ = DisplayExtraLongAndRemoveOnUsage_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayCustomMessageToolTip_Side
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::DisplayCustomMessageToolTip_Side(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayCustomMessageToolTip_Side");

	ABP_Wave_REHR_PlayerController_C_DisplayCustomMessageToolTip_Side_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RemoveToolTip_Side
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RemoveToolTip_Side()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RemoveToolTip_Side");

	ABP_Wave_REHR_PlayerController_C_RemoveToolTip_Side_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayCustomMessageTutorial_Bottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::DisplayCustomMessageTutorial_Bottom(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DisplayCustomMessageTutorial_Bottom");

	ABP_Wave_REHR_PlayerController_C_DisplayCustomMessageTutorial_Bottom_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RemoveTutorial_Bottom
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RemoveTutorial_Bottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RemoveTutorial_Bottom");

	ABP_Wave_REHR_PlayerController_C_RemoveTutorial_Bottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponReloaded_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::CurrentWeaponReloaded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponReloaded_Event");

	ABP_Wave_REHR_PlayerController_C_CurrentWeaponReloaded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanActivated_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RadialScanActivated_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanActivated_Event");

	ABP_Wave_REHR_PlayerController_C_RadialScanActivated_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetAmmoInClipToHud_grenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoInClip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFirstSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::SetAmmoInClipToHud_grenade(int NewAmmoInClip, class UTexture2D* Icon, bool IsFirstSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetAmmoInClipToHud_grenade");

	ABP_Wave_REHR_PlayerController_C_SetAmmoInClipToHud_grenade_Params params;
	params.NewAmmoInClip = NewAmmoInClip;
	params.Icon = Icon;
	params.IsFirstSlot = IsFirstSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNewOrActiveWeaponIconToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            NewEquippedWeapon              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SkipToShowPassedWeaponAsActiveWeapon (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::SetNewOrActiveWeaponIconToHud(class UBP_Weapon_C* NewEquippedWeapon, bool SkipToShowPassedWeaponAsActiveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNewOrActiveWeaponIconToHud");

	ABP_Wave_REHR_PlayerController_C_SetNewOrActiveWeaponIconToHud_Params params;
	params.NewEquippedWeapon = NewEquippedWeapon;
	params.SkipToShowPassedWeaponAsActiveWeapon = SkipToShowPassedWeaponAsActiveWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForShieldToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShieldPerc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetPercentForShieldToHud(float ShieldPerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPercentForShieldToHud");

	ABP_Wave_REHR_PlayerController_C_SetPercentForShieldToHud_Params params;
	params.ShieldPerc = ShieldPerc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchActiveGrenadeSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstSlotIsActive              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::SwitchActiveGrenadeSlot(bool FirstSlotIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchActiveGrenadeSlot");

	ABP_Wave_REHR_PlayerController_C_SwitchActiveGrenadeSlot_Params params;
	params.FirstSlotIsActive = FirstSlotIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_AddNewPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                   PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_AddNewPlayer(const struct FString& inString, int inInt, bool IsReady, class APawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_AddNewPlayer");

	ABP_Wave_REHR_PlayerController_C_Client_AddNewPlayer_Params params;
	params.inString = inString;
	params.inInt = inInt;
	params.IsReady = IsReady;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetReadyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewReadyState                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::SetReadyState(bool NewReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetReadyState");

	ABP_Wave_REHR_PlayerController_C_SetReadyState_Params params;
	params.NewReadyState = NewReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPlayerListAndUpdatePlayerListValuesCompletely
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APawn*>           PlayerPawnList                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Wave_REHR_PlayerController_C::SetPlayerListAndUpdatePlayerListValuesCompletely(TArray<class APawn*> PlayerPawnList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetPlayerListAndUpdatePlayerListValuesCompletely");

	ABP_Wave_REHR_PlayerController_C_SetPlayerListAndUpdatePlayerListValuesCompletely_Params params;
	params.PlayerPawnList = PlayerPawnList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RefreshPlayerListValuesCompletely
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RefreshPlayerListValuesCompletely()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RefreshPlayerListValuesCompletely");

	ABP_Wave_REHR_PlayerController_C_RefreshPlayerListValuesCompletely_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdatePlayerControllers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AController*>     PlayersControllerList_OnlyUseableOnServer (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Wave_REHR_PlayerController_C::UpdatePlayerControllers(TArray<class AController*> PlayersControllerList_OnlyUseableOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.UpdatePlayerControllers");

	ABP_Wave_REHR_PlayerController_C_UpdatePlayerControllers_Params params;
	params.PlayersControllerList_OnlyUseableOnServer = PlayersControllerList_OnlyUseableOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ClearPlayers
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Client_ClearPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ClearPlayers");

	ABP_Wave_REHR_PlayerController_C_Client_ClearPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_StartGame
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Client_StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_StartGame");

	ABP_Wave_REHR_PlayerController_C_Client_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_StartGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_StartGame");

	ABP_Wave_REHR_PlayerController_C_Server_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_KickDestroySession
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_KickDestroySession(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_KickDestroySession");

	ABP_Wave_REHR_PlayerController_C_Client_KickDestroySession_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithMessages
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::DestroySessionsWithMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithMessages");

	ABP_Wave_REHR_PlayerController_C_DestroySessionsWithMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithOUTMessages
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::DestroySessionsWithOUTMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithOUTMessages");

	ABP_Wave_REHR_PlayerController_C_DestroySessionsWithOUTMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SendChatMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToSend                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            PlayerStateRefOfSender         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SendChatMessage(const struct FText& TextToSend, class APlayerState* PlayerStateRefOfSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SendChatMessage");

	ABP_Wave_REHR_PlayerController_C_SendChatMessage_Params params;
	params.TextToSend = TextToSend;
	params.PlayerStateRefOfSender = PlayerStateRefOfSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SendChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToSend                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*            PlayerStateRefOfSender         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Server_SendChatMessage(const struct FText& TextToSend, class APlayerState* PlayerStateRefOfSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SendChatMessage");

	ABP_Wave_REHR_PlayerController_C_Server_SendChatMessage_Params params;
	params.TextToSend = TextToSend;
	params.PlayerStateRefOfSender = PlayerStateRefOfSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_UpdateChatWindowsWithNewMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Sender                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ChatText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*       OwnerPlayerControllerOfChatMessage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_UpdateChatWindowsWithNewMessage(const struct FText& Sender, const struct FText& ChatText, class APlayerController* OwnerPlayerControllerOfChatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_UpdateChatWindowsWithNewMessage");

	ABP_Wave_REHR_PlayerController_C_Client_UpdateChatWindowsWithNewMessage_Params params;
	params.Sender = Sender;
	params.ChatText = ChatText;
	params.OwnerPlayerControllerOfChatMessage = OwnerPlayerControllerOfChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_StartTimer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Client_StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_StartTimer");

	ABP_Wave_REHR_PlayerController_C_Client_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToClient_StartGameInterface
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ToClient_StartGameInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ToClient_StartGameInterface");

	ABP_Wave_REHR_PlayerController_C_ToClient_StartGameInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithMessagesInterface
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::DestroySessionsWithMessagesInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DestroySessionsWithMessagesInterface");

	ABP_Wave_REHR_PlayerController_C_DestroySessionsWithMessagesInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_KickDestroySessionInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_KickDestroySessionInterface(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_KickDestroySessionInterface");

	ABP_Wave_REHR_PlayerController_C_Client_KickDestroySessionInterface_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_StartMultiplayerMatchWithLastPlayedMatchsettings
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_StartMultiplayerMatchWithLastPlayedMatchsettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_StartMultiplayerMatchWithLastPlayedMatchsettings");

	ABP_Wave_REHR_PlayerController_C_Server_StartMultiplayerMatchWithLastPlayedMatchsettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_ServerTravelToLobbyWithAllKnownPlayers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_ServerTravelToLobbyWithAllKnownPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_ServerTravelToLobbyWithAllKnownPlayers");

	ABP_Wave_REHR_PlayerController_C_Server_ServerTravelToLobbyWithAllKnownPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetLastPlayedSettingsToClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LastPlayedMap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxPlayersCurrentOrLastPlayedMatch (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LastStartedMatchWasSingleplayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::Client_SetLastPlayedSettingsToClient(const struct FString& LastPlayedMap, TEnumAsByte<EDifficulties_EDifficulties> DifficultyCurrentOrLastPlayedMatch, int MaxPlayersCurrentOrLastPlayedMatch, bool LastStartedMatchWasSingleplayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetLastPlayedSettingsToClient");

	ABP_Wave_REHR_PlayerController_C_Client_SetLastPlayedSettingsToClient_Params params;
	params.LastPlayedMap = LastPlayedMap;
	params.DifficultyCurrentOrLastPlayedMatch = DifficultyCurrentOrLastPlayedMatch;
	params.MaxPlayersCurrentOrLastPlayedMatch = MaxPlayersCurrentOrLastPlayedMatch;
	params.LastStartedMatchWasSingleplayer = LastStartedMatchWasSingleplayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnChangePlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::OnChangePlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnChangePlayerName");

	ABP_Wave_REHR_PlayerController_C_OnChangePlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceiveBeginPlay");

	ABP_Wave_REHR_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetSteamIdToPlayerStateForRepNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Server_SetSteamIdToPlayerStateForRepNotify(const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetSteamIdToPlayerStateForRepNotify");

	ABP_Wave_REHR_PlayerController_C_Server_SetSteamIdToPlayerStateForRepNotify_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetFinishedBeginPlayFinePC
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedBeginPlayFine          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::Server_SetFinishedBeginPlayFinePC(bool FinishedBeginPlayFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetFinishedBeginPlayFinePC");

	ABP_Wave_REHR_PlayerController_C_Server_SetFinishedBeginPlayFinePC_Params params;
	params.FinishedBeginPlayFine = FinishedBeginPlayFine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.WaitForGameStart
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::WaitForGameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.WaitForGameStart");

	ABP_Wave_REHR_PlayerController_C_WaitForGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GenerateLobbyUI
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::GenerateLobbyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GenerateLobbyUI");

	ABP_Wave_REHR_PlayerController_C_GenerateLobbyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DeactivateLobbyUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AndStartShootingREWaveHUDAndWidgets_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::DeactivateLobbyUI(bool AndStartShootingREWaveHUDAndWidgets_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DeactivateLobbyUI");

	ABP_Wave_REHR_PlayerController_C_DeactivateLobbyUI_Params params;
	params.AndStartShootingREWaveHUDAndWidgets_ = AndStartShootingREWaveHUDAndWidgets_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ActivateLobbyUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ActivateLobbyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ActivateLobbyUI");

	ABP_Wave_REHR_PlayerController_C_ActivateLobbyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanFullyLoaded_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RadialScanFullyLoaded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanFullyLoaded_Event");

	ABP_Wave_REHR_PlayerController_C_RadialScanFullyLoaded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnOnlyFewEnemiesLeft_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnOnlyFewEnemiesLeft_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnOnlyFewEnemiesLeft_Event");

	ABP_Wave_REHR_PlayerController_C_OnOnlyFewEnemiesLeft_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponEmpty_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::CurrentWeaponEmpty_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponEmpty_Event");

	ABP_Wave_REHR_PlayerController_C_CurrentWeaponEmpty_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetPlayerName
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Server_SetPlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetPlayerName");

	ABP_Wave_REHR_PlayerController_C_Server_SetPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_LoadGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_LoadGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_LoadGame");

	ABP_Wave_REHR_PlayerController_C_Server_LoadGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.AddScore
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::AddScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.AddScore");

	ABP_Wave_REHR_PlayerController_C_AddScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.AddLevel
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::AddLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.AddLevel");

	ABP_Wave_REHR_PlayerController_C_AddLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CheckpointSaveGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRewriteExistSave             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::CheckpointSaveGame(bool IsRewriteExistSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CheckpointSaveGame");

	ABP_Wave_REHR_PlayerController_C_CheckpointSaveGame_Params params;
	params.IsRewriteExistSave = IsRewriteExistSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SaveGame
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRewriteSaveGame              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ESaveGameType_ESaveGameType> SaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_SaveGame(bool IsRewriteSaveGame, TEnumAsByte<ESaveGameType_ESaveGameType> SaveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SaveGame");

	ABP_Wave_REHR_PlayerController_C_Client_SaveGame_Params params;
	params.IsRewriteSaveGame = IsRewriteSaveGame;
	params.SaveType = SaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ServerSaveGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRewriteSaveGame              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ESaveGameType_ESaveGameType> SaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::ServerSaveGame(bool IsRewriteSaveGame, TEnumAsByte<ESaveGameType_ESaveGameType> SaveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ServerSaveGame");

	ABP_Wave_REHR_PlayerController_C_ServerSaveGame_Params params;
	params.IsRewriteSaveGame = IsRewriteSaveGame;
	params.SaveType = SaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceiveTick");

	ABP_Wave_REHR_PlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetControlRotation
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::Client_SetControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SetControlRotation");

	ABP_Wave_REHR_PlayerController_C_Client_SetControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SendNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotificationSender    Notify                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SendNotification(const struct FSNotificationSender& Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SendNotification");

	ABP_Wave_REHR_PlayerController_C_SendNotification_Params params;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SendNotification
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotificationSender    Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Client_SendNotification(const struct FSNotificationSender& Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_SendNotification");

	ABP_Wave_REHR_PlayerController_C_Client_SendNotification_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SendNotification
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotificationSender    Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Server_SendNotification(const struct FSNotificationSender& Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SendNotification");

	ABP_Wave_REHR_PlayerController_C_Server_SendNotification_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResumeGame
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ResumeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResumeGame");

	ABP_Wave_REHR_PlayerController_C_ResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReceivePossess");

	ABP_Wave_REHR_PlayerController_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnPlayerDeath_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnPlayerDeath_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnPlayerDeath_Event");

	ABP_Wave_REHR_PlayerController_C_OnPlayerDeath_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnPlayerUnconscious_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnPlayerUnconscious_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnPlayerUnconscious_Event");

	ABP_Wave_REHR_PlayerController_C_OnPlayerUnconscious_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverWin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::OnGameOverWin_Event(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverWin_Event");

	ABP_Wave_REHR_PlayerController_C_OnGameOverWin_Event_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverLoose_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::OnGameOverLoose_Event(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverLoose_Event");

	ABP_Wave_REHR_PlayerController_C_OnGameOverLoose_Event_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OneMoreLeaderBoardEntryIsSucssfull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamLeaderboardEntries leaderboardEntries             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            CountOfEntries                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 OptionalLogStringOfLeaderboardQueryType (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor            LogColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> LeaderboardtypeOnWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::OneMoreLeaderBoardEntryIsSucssfull(const struct FSteamLeaderboardEntries& leaderboardEntries, int CountOfEntries, const struct FString& OptionalLogStringOfLeaderboardQueryType, const struct FLinearColor& LogColor, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> LeaderboardtypeOnWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OneMoreLeaderBoardEntryIsSucssfull");

	ABP_Wave_REHR_PlayerController_C_OneMoreLeaderBoardEntryIsSucssfull_Params params;
	params.leaderboardEntries = leaderboardEntries;
	params.CountOfEntries = CountOfEntries;
	params.OptionalLogStringOfLeaderboardQueryType = OptionalLogStringOfLeaderboardQueryType;
	params.LogColor = LogColor;
	params.LeaderboardtypeOnWidget = LeaderboardtypeOnWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PersonaStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPersonaStateChange     Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Wave_REHR_PlayerController_C::PersonaStateChanged(const struct FPersonaStateChange& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PersonaStateChanged");

	ABP_Wave_REHR_PlayerController_C_PersonaStateChanged_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ActivateVisibleLeaderboardAndStartFadeToLeaderboardView
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ActivateVisibleLeaderboardAndStartFadeToLeaderboardView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ActivateVisibleLeaderboardAndStartFadeToLeaderboardView");

	ABP_Wave_REHR_PlayerController_C_ActivateVisibleLeaderboardAndStartFadeToLeaderboardView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetHudAndHudWidgetOn
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SetHudAndHudWidgetOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetHudAndHudWidgetOn");

	ABP_Wave_REHR_PlayerController_C_SetHudAndHudWidgetOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetHudAndHudWidgetOff
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SetHudAndHudWidgetOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetHudAndHudWidgetOff");

	ABP_Wave_REHR_PlayerController_C_SetHudAndHudWidgetOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCountingNumbersFinished_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnCountingNumbersFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnCountingNumbersFinished_Event_1");

	ABP_Wave_REHR_PlayerController_C_OnCountingNumbersFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchOffInGameMenuWithoutChangeInputMode
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SwitchOffInGameMenuWithoutChangeInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchOffInGameMenuWithoutChangeInputMode");

	ABP_Wave_REHR_PlayerController_C_SwitchOffInGameMenuWithoutChangeInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetLeaderBoardNewBasicInformationWithoutCleanPlayers
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SetLeaderBoardNewBasicInformationWithoutCleanPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetLeaderBoardNewBasicInformationWithoutCleanPlayers");

	ABP_Wave_REHR_PlayerController_C_SetLeaderBoardNewBasicInformationWithoutCleanPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TryFixWorkaroundMenuNotClickable
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::TryFixWorkaroundMenuNotClickable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TryFixWorkaroundMenuNotClickable");

	ABP_Wave_REHR_PlayerController_C_TryFixWorkaroundMenuNotClickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ToggleLoadingScreenPlControl
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowLoadingScreen_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::Client_ToggleLoadingScreenPlControl(bool ShowLoadingScreen_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ToggleLoadingScreenPlControl");

	ABP_Wave_REHR_PlayerController_C_Client_ToggleLoadingScreenPlControl_Params params;
	params.ShowLoadingScreen_ = ShowLoadingScreen_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FireOpenIngameMenu
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::FireOpenIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.FireOpenIngameMenu");

	ABP_Wave_REHR_PlayerController_C_FireOpenIngameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnDestroyed_ResumeFromPause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::OnDestroyed_ResumeFromPause(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnDestroyed_ResumeFromPause");

	ABP_Wave_REHR_PlayerController_C_OnDestroyed_ResumeFromPause_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PauseGameIfPossible
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::PauseGameIfPossible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.PauseGameIfPossible");

	ABP_Wave_REHR_PlayerController_C_PauseGameIfPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotOldScore_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fine_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::GotOldScore_Event(bool fine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotOldScore_Event");

	ABP_Wave_REHR_PlayerController_C_GotOldScore_Event_Params params;
	params.fine_ = fine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotNewScore_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fine_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::GotNewScore_Event(bool fine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotNewScore_Event");

	ABP_Wave_REHR_PlayerController_C_GotNewScore_Event_Params params;
	params.fine_ = fine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_PausePlayerControllerLocally
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPaused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::Client_PausePlayerControllerLocally(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_PausePlayerControllerLocally");

	ABP_Wave_REHR_PlayerController_C_Client_PausePlayerControllerLocally_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI");

	ABP_Wave_REHR_PlayerController_C_Client_ResetIngameMenuCloseMenuResetHUDRemoveAllUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SaveNewSteamStatsAndEvalAchievements
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SaveNewSteamStatsAndEvalAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SaveNewSteamStatsAndEvalAchievements");

	ABP_Wave_REHR_PlayerController_C_SaveNewSteamStatsAndEvalAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetFinalRoundToRoundX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LastRoundNumberToWin           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Server_SetFinalRoundToRoundX(int LastRoundNumberToWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetFinalRoundToRoundX");

	ABP_Wave_REHR_PlayerController_C_Server_SetFinalRoundToRoundX_Params params;
	params.LastRoundNumberToWin = LastRoundNumberToWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetFinalRoundToRoundX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Round                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetFinalRoundToRoundX(int Round)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetFinalRoundToRoundX");

	ABP_Wave_REHR_PlayerController_C_SetFinalRoundToRoundX_Params params;
	params.Round = Round;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundToX
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentRound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::Server_SetActualRoundToX(int CurrentRound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundToX");

	ABP_Wave_REHR_PlayerController_C_Server_SetActualRoundToX_Params params;
	params.CurrentRound = CurrentRound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundToRoundX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundWave                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::SetActualRoundToRoundX(int RoundWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundToRoundX");

	ABP_Wave_REHR_PlayerController_C_SetActualRoundToRoundX_Params params;
	params.RoundWave = RoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DropRandomGrenade
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_DropRandomGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DropRandomGrenade");

	ABP_Wave_REHR_PlayerController_C_Server_DropRandomGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DropRandomGrenade
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::DropRandomGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DropRandomGrenade");

	ABP_Wave_REHR_PlayerController_C_DropRandomGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetLeaderboardEntryOfRunningMatch
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ResetLeaderboardEntryOfRunningMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetLeaderboardEntryOfRunningMatch");

	ABP_Wave_REHR_PlayerController_C_ResetLeaderboardEntryOfRunningMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetAllOnlineSubStatsAndAchievements
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ResetAllOnlineSubStatsAndAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetAllOnlineSubStatsAndAchievements");

	ABP_Wave_REHR_PlayerController_C_ResetAllOnlineSubStatsAndAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetAllOnlineSubStats
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ResetAllOnlineSubStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ResetAllOnlineSubStats");

	ABP_Wave_REHR_PlayerController_C_ResetAllOnlineSubStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DropRandomWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_DropRandomWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DropRandomWeapon");

	ABP_Wave_REHR_PlayerController_C_Server_DropRandomWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_GrantExtremeHighHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_GrantExtremeHighHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_GrantExtremeHighHealth");

	ABP_Wave_REHR_PlayerController_C_Server_GrantExtremeHighHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DropRandomWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::DropRandomWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.DropRandomWeapon");

	ABP_Wave_REHR_PlayerController_C_DropRandomWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GrantExtremeHighHealth
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::GrantExtremeHighHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GrantExtremeHighHealth");

	ABP_Wave_REHR_PlayerController_C_GrantExtremeHighHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_KillAllEnemies
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_KillAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_KillAllEnemies");

	ABP_Wave_REHR_PlayerController_C_Server_KillAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_TeleportToLastRound
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_TeleportToLastRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_TeleportToLastRound");

	ABP_Wave_REHR_PlayerController_C_Server_TeleportToLastRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundToLastRound
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_SetActualRoundToLastRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundToLastRound");

	ABP_Wave_REHR_PlayerController_C_Server_SetActualRoundToLastRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundTo2
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_SetActualRoundTo2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetActualRoundTo2");

	ABP_Wave_REHR_PlayerController_C_Server_SetActualRoundTo2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ChangesToSpectatorPawn
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Client_ChangesToSpectatorPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Client_ChangesToSpectatorPawn");

	ABP_Wave_REHR_PlayerController_C_Client_ChangesToSpectatorPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DetachPlayerControllerAndSwitchToSpectatorCam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_DetachPlayerControllerAndSwitchToSpectatorCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_DetachPlayerControllerAndSwitchToSpectatorCam");

	ABP_Wave_REHR_PlayerController_C_Server_DetachPlayerControllerAndSwitchToSpectatorCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SpawnBoss
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_SpawnBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SpawnBoss");

	ABP_Wave_REHR_PlayerController_C_Server_SpawnBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SpawnBoss
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SpawnBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SpawnBoss");

	ABP_Wave_REHR_PlayerController_C_SpawnBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToFreeSpectatorCam
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SwitchToFreeSpectatorCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SwitchToFreeSpectatorCam");

	ABP_Wave_REHR_PlayerController_C_SwitchToFreeSpectatorCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundTotRound2
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SetActualRoundTotRound2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundTotRound2");

	ABP_Wave_REHR_PlayerController_C_SetActualRoundTotRound2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CloseAdminCheatMenu_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::CloseAdminCheatMenu_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CloseAdminCheatMenu_Event_1");

	ABP_Wave_REHR_PlayerController_C_CloseAdminCheatMenu_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetPlayerUsedCheatsToGS
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::Server_SetPlayerUsedCheatsToGS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.Server_SetPlayerUsedCheatsToGS");

	ABP_Wave_REHR_PlayerController_C_Server_SetPlayerUsedCheatsToGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNextRoundToLastRoundAndKillAllEnemies
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SetNextRoundToLastRoundAndKillAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetNextRoundToLastRoundAndKillAllEnemies");

	ABP_Wave_REHR_PlayerController_C_SetNextRoundToLastRoundAndKillAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TriggerLooseGame
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::TriggerLooseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TriggerLooseGame");

	ABP_Wave_REHR_PlayerController_C_TriggerLooseGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TriggerWinGame
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::TriggerWinGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TriggerWinGame");

	ABP_Wave_REHR_PlayerController_C_TriggerWinGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundToLastRound
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::SetActualRoundToLastRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.SetActualRoundToLastRound");

	ABP_Wave_REHR_PlayerController_C_SetActualRoundToLastRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.KillSelf
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::KillSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.KillSelf");

	ABP_Wave_REHR_PlayerController_C_KillSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TraceAllEnemies
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::TraceAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.TraceAllEnemies");

	ABP_Wave_REHR_PlayerController_C_TraceAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.KillAllEnemies
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::KillAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.KillAllEnemies");

	ABP_Wave_REHR_PlayerController_C_KillAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.HeallSelfJustSetFullHealth
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::HeallSelfJustSetFullHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.HeallSelfJustSetFullHealth");

	ABP_Wave_REHR_PlayerController_C_HeallSelfJustSetFullHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReviveSelf
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::ReviveSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ReviveSelf");

	ABP_Wave_REHR_PlayerController_C_ReviveSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ExecuteUbergraph_BP_Wave_REHR_PlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_REHR_PlayerController_C::ExecuteUbergraph_BP_Wave_REHR_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.ExecuteUbergraph_BP_Wave_REHR_PlayerController");

	ABP_Wave_REHR_PlayerController_C_ExecuteUbergraph_BP_Wave_REHR_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::CurrentWeaponEmpty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponEmpty__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_CurrentWeaponEmpty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanFullyLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RadialScanFullyLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanFullyLoaded__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_RadialScanFullyLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::RadialScanActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.RadialScanActivated__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_RadialScanActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponReloaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::CurrentWeaponReloaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.CurrentWeaponReloaded__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_CurrentWeaponReloaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotNewScore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fine_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::GotNewScore__DelegateSignature(bool fine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotNewScore__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_GotNewScore__DelegateSignature_Params params;
	params.fine_ = fine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotOldScore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fine_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_REHR_PlayerController_C::GotOldScore__DelegateSignature(bool fine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.GotOldScore__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_GotOldScore__DelegateSignature_Params params;
	params.fine_ = fine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverStartEndGameScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_REHR_PlayerController_C::OnGameOverStartEndGameScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_REHR_PlayerController.BP_Wave_REHR_PlayerController_C.OnGameOverStartEndGameScreen__DelegateSignature");

	ABP_Wave_REHR_PlayerController_C_OnGameOverStartEndGameScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
