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

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 URLToShow                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         AllowedDomains                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bEmbedded                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShowBackground                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShowCloseButton               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OffsetX                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OffsetY                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowWebURLUI(const struct FString& URLToShow, AdvancedSessions_EBlueprintResultSwitch* Result, TArray<struct FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int OffsetX, int OffsetY, int SizeX, int SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI");

	UAdvancedExternalUILibrary_ShowWebURLUI_Params params;
	params.URLToShow = URLToShow;
	params.bEmbedded = bEmbedded;
	params.bShowBackground = bShowBackground;
	params.bShowCloseButton = bShowCloseButton;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (AllowedDomains != nullptr)
		*AllowedDomains = params.AllowedDomains;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          PlayerViewingProfile           (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerToViewProfileOf          (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI");

	UAdvancedExternalUILibrary_ShowProfileUI_Params params;
	params.PlayerViewingProfile = PlayerViewingProfile;
	params.PlayerToViewProfileOf = PlayerToViewProfileOf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowLeaderBoardUI(const struct FString& LeaderboardName, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI");

	UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params params;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowInviteUI(class APlayerController* PlayerController, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI");

	UAdvancedExternalUILibrary_ShowInviteUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowFriendsUI(class APlayerController* PlayerController, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI");

	UAdvancedExternalUILibrary_ShowFriendsUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          PlayerRequestingAccountUpgradeUI (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedExternalUILibrary::STATIC_ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI");

	UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params params;
	params.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
// (Final, Native, Static, Public, BlueprintCallable)
void UAdvancedExternalUILibrary::STATIC_CloseWebURLUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI");

	UAdvancedExternalUILibrary_CloseWebURLUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PersonInviting                 (Parm, NativeAccessSpecifierPublic)
// struct FString                 AppID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SessionToJoin                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const struct FString& AppID, const struct FBlueprintSessionResult& SessionToJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived");

	UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInviting = PersonInviting;
	params.AppID = AppID;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PersonInvited                  (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SessionToJoin                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted");

	UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.PersonInvited = PersonInvited;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PlayerId                       (Parm, NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged");

	UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params params;
	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus PreviousStatus                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus NewStatus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          NewPlayerUniqueNetID           (Parm, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int PlayerNum, AdvancedSessions_EBPLoginStatus PreviousStatus, AdvancedSessions_EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged");

	UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params params;
	params.PlayerNum = PlayerNum;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.NewPlayerUniqueNetID = NewPlayerUniqueNetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int PlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged");

	UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PersonInviting                 (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived");

	UAdvancedFriendsInterface_OnSessionInviteReceived_Params params;
	params.PersonInviting = PersonInviting;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PersonInvited                  (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted");

	UAdvancedFriendsInterface_OnSessionInviteAccepted_Params params;
	params.PersonInvited = PersonInvited;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId          PlayerId                       (Parm, NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged");

	UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params params;
	params.PlayerId = PlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// AdvancedSessions_EBPLoginStatus PreviousStatus                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus NewStatus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerUniqueNetID              (Parm, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::OnPlayerLoginStatusChanged(AdvancedSessions_EBPLoginStatus PreviousStatus, AdvancedSessions_EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged");

	UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params params;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PlayerNum                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsInterface::OnPlayerLoginChanged(int PlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged");

	UAdvancedFriendsInterface_OnPlayerLoginChanged_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPUniqueNetId>  Friends                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends");

	UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params params;
	params.PlayerController = PlayerController;
	params.Friends = Friends;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend");

	UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           IsFriend                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend");

	UAdvancedFriendsLibrary_IsAFriend_Params params;
	params.PlayerController = PlayerController;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFriend != nullptr)
		*IsFriend = params.IsFriend;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (Parm, NativeAccessSpecifierPublic)
// TArray<struct FBPOnlineRecentPlayer> PlayersList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList");

	UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayersList != nullptr)
		*PlayersList = params.PlayersList;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPFriendInfo>   FriendsList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList");

	UAdvancedFriendsLibrary_GetStoredFriendsList_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FriendsList != nullptr)
		*FriendsList = params.FriendsList;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FBPFriendInfo           Friend                         (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedFriendsLibrary::STATIC_GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend");

	UAdvancedFriendsLibrary_GetFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NewAttributeValue              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, const struct FString& NewAttributeValue, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute");

	UAdvancedIdentityLibrary_SetUserAccountAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;
	params.NewAttributeValue = NewAttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID");

	UAdvancedIdentityLibrary_GetUserID_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 UserName                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName");

	UAdvancedIdentityLibrary_GetUserAccountRealName_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserName != nullptr)
		*UserName = params.UserName;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, struct FString* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName");

	UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthAttribute                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AuthAttribute, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute");

	UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AuthAttribute != nullptr)
		*AuthAttribute = params.AuthAttribute;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const struct FString& AttributeName, struct FString* AttributeValue, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute");

	UAdvancedIdentityLibrary_GetUserAccountAttribute_Params params;
	params.AccountInfo = AccountInfo;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AttributeValue != nullptr)
		*AttributeValue = params.AttributeValue;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount    AccountInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, struct FString* AccessToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken");

	UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccessToken != nullptr)
		*AccessToken = params.AccessToken;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUserOnlineAccount    AccountInfo                    (Parm, OutParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount");

	UAdvancedIdentityLibrary_GetUserAccount_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountInfo != nullptr)
		*AccountInfo = params.AccountInfo;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 PlayerNickname                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, struct FString* PlayerNickname)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname");

	UAdvancedIdentityLibrary_GetPlayerNickname_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerNickname != nullptr)
		*PlayerNickname = params.PlayerNickname;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthToken                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetPlayerAuthToken(class APlayerController* PlayerController, struct FString* AuthToken, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken");

	UAdvancedIdentityLibrary_GetPlayerAuthToken_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AuthToken != nullptr)
		*AuthToken = params.AuthToken;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPLoginStatus LoginStatus                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBPLoginStatus* LoginStatus, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus");

	UAdvancedIdentityLibrary_GetLoginStatus_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoginStatus != nullptr)
		*LoginStatus = params.LoginStatus;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBPUserOnlineAccount> AccountInfos                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedIdentityLibrary::STATIC_GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts");

	UAdvancedIdentityLibrary_GetAllUserAccounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountInfos != nullptr)
		*AccountInfos = params.AccountInfos;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString");

	UAdvancedSessionsLibrary_UniqueNetIdToString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_SetPlayerName(class APlayerController* PlayerController, const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName");

	UAdvancedSessionsLibrary_SetPlayerName_Params params;
	params.PlayerController = PlayerController;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSessionPropertyKeyPair SessionSearchProperty          (Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EOnlineComparisonOpRedux ComparisonOp                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionsSearchSetting  ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionsSearchSetting UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, AdvancedSessions_EOnlineComparisonOpRedux ComparisonOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty");

	UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params params;
	params.SessionSearchProperty = SessionSearchProperty;
	params.ComparisonOp = ComparisonOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyString(const struct FName& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyInt(const struct FName& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyFloat(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyByte(const struct FName& Key, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::STATIC_MakeLiteralSessionPropertyBool(const struct FName& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool");

	UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerToKick                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   KickReason                     (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const struct FText& KickReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer");

	UAdvancedSessionsLibrary_KickPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerToKick = PlayerToKick;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID");

	UAdvancedSessionsLibrary_IsValidUniqueNetID_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_IsValidSession(const struct FBlueprintSessionResult& SessionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession");

	UAdvancedSessionsLibrary_IsValidSession_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerToCheck                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsInSession                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession");

	UAdvancedSessionsLibrary_IsPlayerInSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerToCheck = PlayerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInSession != nullptr)
		*bIsInSession = params.bIsInSession;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SubSystemName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_HasOnlineSubsystem(const struct FName& SubSystemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem");

	UAdvancedSessionsLibrary_HasOnlineSubsystem_Params params;
	params.SubSystemName = SubSystemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState");

	UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID");

	UAdvancedSessionsLibrary_GetUniqueNetID_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (Parm, NativeAccessSpecifierPublic)
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int* UniqueBuildId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID");

	UAdvancedSessionsLibrary_GetUniqueBuildID_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPOnlineSessionState SessionState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionState(class UObject* WorldContextObject, AdvancedSessions_EBPOnlineSessionState* SessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState");

	UAdvancedSessionsLibrary_GetSessionState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionState != nullptr)
		*SessionState = params.SessionState;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumConnections                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPrivateConnections          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsLAN                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsAnticheatEnabled            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BuildUniqueID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionSettings(class UObject* WorldContextObject, int* NumConnections, int* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, AdvancedSessions_EBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings");

	UAdvancedSessionsLibrary_GetSessionSettings_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

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
	if (Result != nullptr)
		*Result = params.Result;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SettingValue                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, struct FString* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString");

	UAdvancedSessionsLibrary_GetSessionPropertyString_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSessionPropertyKeyPair SessionProperty                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UAdvancedSessionsLibrary::STATIC_GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey");

	UAdvancedSessionsLibrary_GetSessionPropertyKey_Params params;
	params.SessionProperty = SessionProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, int* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt");

	UAdvancedSessionsLibrary_GetSessionPropertyInt_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, float* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat");

	UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte");

	UAdvancedSessionsLibrary_GetSessionPropertyByte_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_ESessionSettingSearchResult SearchResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SettingValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_ESessionSettingSearchResult* SearchResult, bool* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool");

	UAdvancedSessionsLibrary_GetSessionPropertyBool_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SearchResult != nullptr)
		*SearchResult = params.SearchResult;
	if (SettingValue != nullptr)
		*SettingValue = params.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, struct FString* SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString");

	UAdvancedSessionsLibrary_GetSessionID_AsString_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionID != nullptr)
		*SessionID = params.SessionID;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetPlayerName(class APlayerController* PlayerController, struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName");

	UAdvancedSessionsLibrary_GetPlayerName_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumNetPlayers                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int* NumNetPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers");

	UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumNetPlayers != nullptr)
		*NumNetPlayers = params.NumNetPlayers;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NetPlayerIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int* NetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex");

	UAdvancedSessionsLibrary_GetNetPlayerIndex_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NetPlayerIndex != nullptr)
		*NetPlayerIndex = params.NetPlayerIndex;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (Parm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings");

	UAdvancedSessionsLibrary_GetExtraSettings_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExtraSettings != nullptr)
		*ExtraSettings = params.ExtraSettings;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            UniqueBuildId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetCurrentUniqueBuildID(int* UniqueBuildId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID");

	UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = params.UniqueBuildId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_GetCurrentSessionID_AsString(class UObject* WorldContextObject, struct FString* SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString");

	UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SessionID != nullptr)
		*SessionID = params.SessionID;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingName, AdvancedSessions_EBlueprintResultSwitch* Result, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName");

	UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   SettingsName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair OutProperty                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const struct FName& SettingsName, AdvancedSessions_EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName");

	UAdvancedSessionsLibrary_FindSessionPropertyByName_Params params;
	params.ExtraSettings = ExtraSettings;
	params.SettingsName = SettingsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (OutProperty != nullptr)
		*OutProperty = params.OutProperty;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          A                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          B                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID");

	UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerToBan                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   BanReason                      (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSessionsLibrary::STATIC_BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const struct FText& BanReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer");

	UAdvancedSessionsLibrary_BanPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerToBan = PlayerToBan;
	params.BanReason = BanReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair> SettingsArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings           (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSessionsLibrary::STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings");

	UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsArray != nullptr)
		*SettingsArray = params.SettingsArray;
	if (NewOrChangedSettings != nullptr)
		*NewOrChangedSettings = params.NewOrChangedSettings;
	if (ModifiedSettingsArray != nullptr)
		*ModifiedSettingsArray = params.ModifiedSettingsArray;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker");

	UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_UnRegisterLocalTalker(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker");

	UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
// (Final, Native, Static, Public, BlueprintCallable)
void UAdvancedVoiceLibrary::STATIC_UnRegisterAllLocalTalkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers");

	UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsSystemWide                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker");

	UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_StopNetworkedVoice(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice");

	UAdvancedVoiceLibrary_StopNetworkedVoice_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_StartNetworkedVoice(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice");

	UAdvancedVoiceLibrary_StartNetworkedVoice_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
// (Final, Native, Static, Public, BlueprintCallable)
void UAdvancedVoiceLibrary::STATIC_RemoveAllRemoteTalkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers");

	UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker");

	UAdvancedVoiceLibrary_RegisterRemoteTalker_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_RegisterLocalTalker(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker");

	UAdvancedVoiceLibrary_RegisterLocalTalker_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
// (Final, Native, Static, Public, BlueprintCallable)
void UAdvancedVoiceLibrary::STATIC_RegisterAllLocalTalkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers");

	UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsSystemWide                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker");

	UAdvancedVoiceLibrary_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueNetId = UniqueNetId;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking");

	UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  LocalUserNumChecking           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted");

	UAdvancedVoiceLibrary_IsPlayerMuted_Params params;
	params.LocalUserNumChecking = LocalUserNumChecking;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedVoiceLibrary::STATIC_IsLocalPlayerTalking(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking");

	UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bHasHeadset                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  LocalPlayerNum                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_IsHeadsetPresent(bool* bHasHeadset, unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent");

	UAdvancedVoiceLibrary_IsHeadsetPresent_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasHeadset != nullptr)
		*bHasHeadset = params.bHasHeadset;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            NumLocalTalkers                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedVoiceLibrary::STATIC_GetNumLocalTalkers(int* NumLocalTalkers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers");

	UAdvancedVoiceLibrary_GetNumLocalTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumLocalTalkers != nullptr)
		*NumLocalTalkers = params.NumLocalTalkers;

}


// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCancelFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::STATIC_CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions");

	UCancelFindSessionsCallbackProxy_CancelFindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePresence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresence          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresenceFriendsOnly (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiCheatProtected            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsesStats                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldAdvertise               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::STATIC_CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession");

	UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bIsDedicatedServer = bIsDedicatedServer;
	params.bUsePresence = bUsePresence;
	params.bAllowJoinViaPresence = bAllowJoinViaPresence;
	params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	params.bAntiCheatProtected = bAntiCheatProtected;
	params.bUsesStats = bUsesStats;
	params.bShouldAdvertise = bShouldAdvertise;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndSessionCallbackProxy* UEndSessionCallbackProxy::STATIC_EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.EndSessionCallbackProxy.EndSession");

	UEndSessionCallbackProxy_EndSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFindFriendSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::STATIC_FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession");

	UFindFriendSessionCallbackProxy_FindFriendSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPServerPresenceSearchType ServerTypeToSearch             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting> Filters                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bEmptyServersOnly              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNonEmptyServersOnly           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSecureServersOnly             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MinSlotsAvailable              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::STATIC_FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, AdvancedSessions_EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int MinSlotsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced");

	UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.ServerTypeToSearch = ServerTypeToSearch;
	params.Filters = Filters;
	params.bEmptyServersOnly = bEmptyServersOnly;
	params.bNonEmptyServersOnly = bNonEmptyServersOnly;
	params.bSecureServersOnly = bSecureServersOnly;
	params.MinSlotsAvailable = MinSlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBlueprintSessionResult> SessionResults                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting> Filters                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FBlueprintSessionResult> FilteredResults                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFindSessionsCallbackProxyAdvanced::STATIC_FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults");

	UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params params;
	params.SessionResults = SessionResults;
	params.Filters = Filters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FilteredResults != nullptr)
		*FilteredResults = params.FilteredResults;

}


// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::STATIC_GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList");

	UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetRecentPlayersCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::STATIC_GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList");

	UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSessions_EBPUserPrivileges PrivilegeToCheck               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          PlayerUniqueNetID              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetUserPrivilegeCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::STATIC_GetUserPrivilege(class UObject* WorldContextObject, AdvancedSessions_EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege");

	UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrivilegeToCheck = PrivilegeToCheck;
	params.PlayerUniqueNetID = PlayerUniqueNetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UserID                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UserToken                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoginUserCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULoginUserCallbackProxy* ULoginUserCallbackProxy::STATIC_LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserID, const struct FString& UserToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.LoginUserCallbackProxy.LoginUser");

	ULoginUserCallbackProxy_LoginUser_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UserID = UserID;
	params.UserToken = UserToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutUserCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::STATIC_LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser");

	ULogoutUserCallbackProxy_LogoutUser_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          UniqueNetIDInvited             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USendFriendInviteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::STATIC_SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite");

	USendFriendInviteCallbackProxy_SendFriendInvite_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UniqueNetIDInvited = UniqueNetIDInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair> ExtraSettings                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PrivateConnections             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinInProgress           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRefreshOnlineData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsDedicatedServer             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionCallbackProxyAdvanced* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::STATIC_UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int PublicConnections, int PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession");

	UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExtraSettings = ExtraSettings;
	params.PublicConnections = PublicConnections;
	params.PrivateConnections = PrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bAllowJoinInProgress = bAllowJoinInProgress;
	params.bRefreshOnlineData = bRefreshOnlineData;
	params.bIsDedicatedServer = bIsDedicatedServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
