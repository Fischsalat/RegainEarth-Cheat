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

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
struct UAdvancedExternalUILibrary_ShowWebURLUI_Params
{
	struct FString                                     URLToShow;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AllowedDomains;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bEmbedded;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowBackground;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCloseButton;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OffsetX;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OffsetY;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
struct UAdvancedExternalUILibrary_ShowProfileUI_Params
{
	struct FBPUniqueNetId                              PlayerViewingProfile;                                      // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              PlayerToViewProfileOf;                                     // (ConstParm, Parm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
struct UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params
{
	struct FString                                     LeaderboardName;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
struct UAdvancedExternalUILibrary_ShowInviteUI_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
struct UAdvancedExternalUILibrary_ShowFriendsUI_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
struct UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params
{
	struct FBPUniqueNetId                              PlayerRequestingAccountUpgradeUI;                          // (ConstParm, Parm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
struct UAdvancedExternalUILibrary_CloseWebURLUI_Params
{
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
struct UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params
{
	int                                                LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              PersonInviting;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FString                                     AppID;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SessionToJoin;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
struct UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params
{
	int                                                LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              PersonInvited;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SessionToJoin;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
struct UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params
{
	struct FBPUniqueNetId                              PlayerId;                                                  // (Parm, NativeAccessSpecifierPublic)
	bool                                               bIsTalking;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
struct UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params
{
	int                                                PlayerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPLoginStatus                    PreviousStatus;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPLoginStatus                    NewStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              NewPlayerUniqueNetID;                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
struct UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params
{
	int                                                PlayerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
struct UAdvancedFriendsInterface_OnSessionInviteReceived_Params
{
	struct FBPUniqueNetId                              PersonInviting;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
struct UAdvancedFriendsInterface_OnSessionInviteAccepted_Params
{
	struct FBPUniqueNetId                              PersonInvited;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
struct UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params
{
	struct FBPUniqueNetId                              PlayerId;                                                  // (Parm, NativeAccessSpecifierPublic)
	bool                                               bIsTalking;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
struct UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params
{
	AdvancedSessions_EBPLoginStatus                    PreviousStatus;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPLoginStatus                    NewStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              PlayerUniqueNetID;                                         // (Parm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
struct UAdvancedFriendsInterface_OnPlayerLoginChanged_Params
{
	int                                                PlayerNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
struct UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBPUniqueNetId>                      Friends;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
struct UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
struct UAdvancedFriendsLibrary_IsAFriend_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               IsFriend;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
struct UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FBPOnlineRecentPlayer>               PlayersList;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
struct UAdvancedFriendsLibrary_GetStoredFriendsList_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBPFriendInfo>                       FriendsList;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
struct UAdvancedFriendsLibrary_GetFriend_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              FriendUniqueNetId;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FBPFriendInfo                               Friend;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
struct UAdvancedIdentityLibrary_SetUserAccountAttribute_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     AttributeName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAttributeValue;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
struct UAdvancedIdentityLibrary_GetUserID_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
struct UAdvancedIdentityLibrary_GetUserAccountRealName_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     UserName;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
struct UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
struct UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     AttributeName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthAttribute;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
struct UAdvancedIdentityLibrary_GetUserAccountAttribute_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     AttributeName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttributeValue;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
struct UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params
{
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
struct UAdvancedIdentityLibrary_GetUserAccount_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUserOnlineAccount                        AccountInfo;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
struct UAdvancedIdentityLibrary_GetPlayerNickname_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     PlayerNickname;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
struct UAdvancedIdentityLibrary_GetPlayerAuthToken_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthToken;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
struct UAdvancedIdentityLibrary_GetLoginStatus_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPLoginStatus                    LoginStatus;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
struct UAdvancedIdentityLibrary_GetAllUserAccounts_Params
{
	TArray<struct FBPUserOnlineAccount>                AccountInfos;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
struct UAdvancedSessionsLibrary_UniqueNetIdToString_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
struct UAdvancedSessionsLibrary_SetPlayerName_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
struct UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params
{
	struct FSessionPropertyKeyPair                     SessionSearchProperty;                                     // (Parm, NativeAccessSpecifierPublic)
	AdvancedSessions_EOnlineComparisonOpRedux          ComparisonOp;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionsSearchSetting                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params
{
	struct FName                                       Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
struct UAdvancedSessionsLibrary_KickPlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerToKick;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KickReason;                                                // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
struct UAdvancedSessionsLibrary_IsValidUniqueNetID_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
struct UAdvancedSessionsLibrary_IsValidSession_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
struct UAdvancedSessionsLibrary_IsPlayerInSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              PlayerToCheck;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsInSession;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
struct UAdvancedSessionsLibrary_HasOnlineSubsystem_Params
{
	struct FName                                       SubSystemName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
struct UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
struct UAdvancedSessionsLibrary_GetUniqueNetID_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
struct UAdvancedSessionsLibrary_GetUniqueBuildID_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (Parm, NativeAccessSpecifierPublic)
	int                                                UniqueBuildId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
struct UAdvancedSessionsLibrary_GetSessionState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPOnlineSessionState             SessionState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
struct UAdvancedSessionsLibrary_GetSessionSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumConnections;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPrivateConnections;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLAN;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDedicated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinInProgress;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAnticheatEnabled;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildUniqueID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
struct UAdvancedSessionsLibrary_GetSessionPropertyString_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_ESessionSettingSearchResult       SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SettingValue;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
struct UAdvancedSessionsLibrary_GetSessionPropertyKey_Params
{
	struct FSessionPropertyKeyPair                     SessionProperty;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
struct UAdvancedSessionsLibrary_GetSessionPropertyInt_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_ESessionSettingSearchResult       SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
struct UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_ESessionSettingSearchResult       SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
struct UAdvancedSessionsLibrary_GetSessionPropertyByte_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_ESessionSettingSearchResult       SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
struct UAdvancedSessionsLibrary_GetSessionPropertyBool_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_ESessionSettingSearchResult       SearchResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SettingValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
struct UAdvancedSessionsLibrary_GetSessionID_AsString_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     SessionID;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
struct UAdvancedSessionsLibrary_GetPlayerName_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
struct UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumNetPlayers;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
struct UAdvancedSessionsLibrary_GetNetPlayerIndex_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetPlayerIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
struct UAdvancedSessionsLibrary_GetExtraSettings_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                             // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
struct UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params
{
	int                                                UniqueBuildId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
struct UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionID;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
struct UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutIndex;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
struct UAdvancedSessionsLibrary_FindSessionPropertyByName_Params
{
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       SettingsName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSessionPropertyKeyPair                     OutProperty;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
struct UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params
{
	struct FBPUniqueNetId                              A;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              B;                                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
struct UAdvancedSessionsLibrary_BanPlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerToBan;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       BanReason;                                                 // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
struct UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params
{
	TArray<struct FSessionPropertyKeyPair>             SettingsArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
struct UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
struct UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params
{
	unsigned char                                      LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
struct UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params
{
};

// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
struct UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsSystemWide;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
struct UAdvancedVoiceLibrary_StopNetworkedVoice_Params
{
	unsigned char                                      LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
struct UAdvancedVoiceLibrary_StartNetworkedVoice_Params
{
	unsigned char                                      LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
struct UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params
{
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
struct UAdvancedVoiceLibrary_RegisterRemoteTalker_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
struct UAdvancedVoiceLibrary_RegisterLocalTalker_Params
{
	unsigned char                                      LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
struct UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params
{
};

// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
struct UAdvancedVoiceLibrary_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsSystemWide;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
struct UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
struct UAdvancedVoiceLibrary_IsPlayerMuted_Params
{
	unsigned char                                      LocalUserNumChecking;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
struct UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
struct UAdvancedVoiceLibrary_IsHeadsetPresent_Params
{
	bool                                               bHasHeadset;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LocalPlayerNum;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
struct UAdvancedVoiceLibrary_GetNumLocalTalkers_Params
{
	int                                                NumLocalTalkers;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
struct UCancelFindSessionsCallbackProxy_CancelFindSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCancelFindSessionsCallbackProxy*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
struct UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrivateConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDedicatedServer;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePresence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinViaPresence;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinViaPresenceFriendsOnly;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAntiCheatProtected;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsesStats;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldAdvertise;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateSessionCallbackProxyAdvanced*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
struct UEndSessionCallbackProxy_EndSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEndSessionCallbackProxy*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
struct UFindFriendSessionCallbackProxy_FindFriendSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFindFriendSessionCallbackProxy*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
struct UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPServerPresenceSearchType       ServerTypeToSearch;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionsSearchSetting>              Filters;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bEmptyServersOnly;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNonEmptyServersOnly;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecureServersOnly;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinSlotsAvailable;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFindSessionsCallbackProxyAdvanced*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
struct UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params
{
	TArray<struct FBlueprintSessionResult>             SessionResults;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSessionsSearchSetting>              Filters;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBlueprintSessionResult>             FilteredResults;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
struct UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetFriendsCallbackProxy*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
struct UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetRecentPlayersCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
struct UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSessions_EBPUserPrivileges                 PrivilegeToCheck;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              PlayerUniqueNetID;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetUserPrivilegeCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
struct ULoginUserCallbackProxy_LoginUser_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserID;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserToken;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoginUserCallbackProxy*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
struct ULogoutUserCallbackProxy_LogoutUser_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULogoutUserCallbackProxy*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
struct USendFriendInviteCallbackProxy_SendFriendInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              UniqueNetIDInvited;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USendFriendInviteCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
struct UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSessionPropertyKeyPair>             ExtraSettings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrivateConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinInProgress;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRefreshOnlineData;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDedicatedServer;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpdateSessionCallbackProxyAdvanced*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
