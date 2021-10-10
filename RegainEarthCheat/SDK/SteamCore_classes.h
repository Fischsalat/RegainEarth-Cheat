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

// Class SteamCore.SteamCoreSubsystem
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class USteamCoreSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_I33Q[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreSubsystem");
		return ptr;
	}



};

// Class SteamCore.AppList
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UAppList : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    SteamAppInstalled;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamAppUninstalled;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUWX[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.AppList");
		return ptr;
	}



	int GetNumInstalledApps();
	int GetInstalledApps(TArray<int>* AppIDs, int maxAppIDs);
	int GetAppName(int AppID, struct FString* Name);
	int GetAppInstallDir(int AppID, struct FString* Directory);
	int GetAppBuildId(int AppID);
};

// Class SteamCore.Apps
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UApps : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    DLCInstalled;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FileDetailsResultDelegate;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUFK[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Apps");
		return ptr;
	}



	void STATIC_UninstallDLC(int AppID);
	bool STATIC_MarkContentCorrupt(bool bMissingFilesOnly);
	void STATIC_InstallDLC(int AppID);
	struct FString STATIC_GetLaunchQueryParam(const struct FString& Key);
	int STATIC_GetLaunchCommandLine(struct FString* commandLine);
	int STATIC_GetInstalledDepots(int AppID, int maxDepots, TArray<int>* depots);
	void GetFileDetails(const struct FScriptDelegate& callback, const struct FString& Filename);
	int STATIC_GetEarliestPurchaseUnixTime(int AppID);
	bool STATIC_GetDlcDownloadProgress(int AppID, int* bytesDownloaded, int* bytesTotal);
	int STATIC_GetDLCCount();
	struct FString STATIC_GetCurrentGameLanguage();
	bool STATIC_GetCurrentBetaName(struct FString* Name);
	struct FString STATIC_GetAvailableGameLanguages();
	struct FSteamID STATIC_GetAppOwner();
	int STATIC_GetAppInstallDir(int AppID, struct FString* folder);
	int STATIC_GetAppBuildId();
	bool STATIC_BIsVACBanned();
	bool STATIC_BIsSubscribedFromFreeWeekend();
	bool STATIC_BIsSubscribedFromFamilySharing();
	bool STATIC_BIsSubscribedApp(int AppID);
	bool STATIC_BIsSubscribed();
	bool STATIC_BIsLowViolence();
	bool STATIC_BIsDlcInstalled(int AppID);
	bool STATIC_BIsCybercafe();
	bool STATIC_BIsAppInstalled(int AppID);
	bool STATIC_BGetDLCDataByIndex(int dlc, int* AppID, bool* bAvailable, struct FString* Name);
};

// Class SteamCore.SteamCoreAsyncAction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreAsyncAction");
		return ptr;
	}



};

// Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails");
		return ptr;
	}



	void HandleCallback(const struct FFileDetailsResult& Data, bool bWasSuccessful);
	class USteamCoreAppsAsyncActionGetFileDetails* STATIC_GetFileDetailsAsync(class UObject* WorldContextObject, const struct FString& Filename);
};

// Class SteamCore.SteamCoreGameMode
// 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
class ASteamCoreGameMode : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreGameMode");
		return ptr;
	}



};

// Class SteamCore.SteamCore
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamCore : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCore");
		return ptr;
	}



};

// Class SteamCore.SteamCoreSettings
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class USteamCoreSettings : public UDeveloperSettings
{
public:
	int                                                DisabledSubsystems;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugging;                                                // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XUB[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AsyncTaskTimeout;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelaunchInSteam;                                          // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVACEnabled;                                               // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowP2PPacketRelay;                                      // 0x0047(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                P2PConnectionTimeout;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SteamAppID;                                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SteamDevAppId;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameServerQueryPort;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4TDL[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameVersion;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreSettings");
		return ptr;
	}



};

// Class SteamCore.Friends
// 0x02D0 (FullSize[0x0318] - InheritedSize[0x0048])
class UFriends : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    AvatarImageLoaded;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FriendRichPresenceUpdate;                                  // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedChatJoin;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedChatLeave;                                    // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedClanChatMsg;                                  // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameConnectedFriendChatMsg;                                // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameLobbyJoinRequested;                                    // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameOverlayActivated;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameRichPresenceJoinRequested;                             // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameServerChangeRequested;                                 // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PersonaStateChange;                                        // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SetPersonaNameResponse;                                    // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    JoinClanChatRoomCompletionResult;                          // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ClanOfficerListResponse;                                   // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DownloadClanActivityCountsResult;                          // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6HPZ[0x1E0];                                   // 0x0138(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Friends");
		return ptr;
	}



	bool STATIC_SetRichPresence(const struct FString& Key, const struct FString& Value);
	void STATIC_SetPlayedWith(const struct FSteamID& steamIDUserPlayedWith);
	void SetPersonaName(const struct FScriptDelegate& callback, const struct FString& Name);
	bool STATIC_SetListenForFriendsMessages(bool bInterceptEnabled);
	void STATIC_SetInGameVoiceSpeaking(const struct FSteamID& SteamIDUser, bool bSpeaking);
	bool STATIC_SendClanChatMessage(const struct FSteamID& SteamIDClanChat, const struct FString& Text);
	bool STATIC_RequestUserInformation(const struct FSteamID& SteamIDUser, bool bRequireNameOnly);
	void STATIC_RequestFriendRichPresence(const struct FSteamID& SteamIDFriend);
	void RequestClanOfficerList(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDClan);
	bool STATIC_ReplyToFriendMessage(const struct FSteamID& SteamIDFriend, const struct FString& msgToSend);
	bool STATIC_OpenClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat);
	bool STATIC_LeaveClanChatRoom(const struct FSteamID& SteamIDClan);
	void JoinClanChatRoom(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDClan);
	bool STATIC_IsUserInSource(const struct FSteamID& SteamIDUser, const struct FSteamID& steamIDSource);
	void IsFollowing(const struct FScriptDelegate& callback, const struct FSteamID& SteamID);
	bool STATIC_IsClanPublic(const struct FSteamID& SteamIDClan);
	bool STATIC_IsClanOfficialGameGroup(const struct FSteamID& SteamIDClan);
	bool STATIC_IsClanChatWindowOpenInSteam(const struct FSteamID& SteamIDClanChat);
	bool STATIC_IsClanChatAdmin(const struct FSteamID& SteamIDClanChat, const struct FSteamID& SteamIDUser);
	bool STATIC_InviteUserToGame(const struct FSteamID& SteamIDFriend, const struct FString& ConnectString);
	bool STATIC_HasFriend(const struct FSteamID& SteamIDFriend, TArray<SteamCore_ESteamFriendFlags> Flags);
	TArray<SteamCore_ESteamUserRestriction> STATIC_GetUserRestrictions();
	class UTexture2D* STATIC_GetSmallFriendAvatar(const struct FSteamID& SteamIDFriend);
	struct FString STATIC_GetPlayerNickname_Pure(const struct FSteamID& SteamIDPlayer);
	struct FString STATIC_GetPlayerNickname(const struct FSteamID& SteamIDPlayer);
	SteamCore_ESteamPersonaState STATIC_GetPersonaState_Pure();
	SteamCore_ESteamPersonaState STATIC_GetPersonaState();
	struct FString STATIC_GetPersonaName_Pure();
	struct FString STATIC_GetPersonaName();
	class UTexture2D* STATIC_GetMediumFriendAvatar(const struct FSteamID& SteamIDFriend);
	class UTexture2D* STATIC_GetLargeFriendAvatar(const struct FSteamID& SteamIDFriend);
	int STATIC_GetFriendSteamLevel(const struct FSteamID& SteamIDFriend);
	struct FString STATIC_GetFriendsGroupName(const struct FSteamFriendsGroupID& friendsGroupID);
	void STATIC_GetFriendsGroupMembersList(const struct FSteamFriendsGroupID& friendsGroupID, TArray<struct FSteamID>* steamIDMembers, int membersCount);
	int STATIC_GetFriendsGroupMembersCount(const struct FSteamFriendsGroupID& friendsGroupID);
	struct FSteamFriendsGroupID STATIC_GetFriendsGroupIDByIndex(int friendGroup);
	int STATIC_GetFriendsGroupCount();
	int STATIC_GetFriendRichPresenceKeyCount(const struct FSteamID& SteamIDFriend);
	struct FString STATIC_GetFriendRichPresenceKeyByIndex(const struct FSteamID& SteamIDFriend, int Key);
	struct FString STATIC_GetFriendRichPresence(const struct FSteamID& SteamIDFriend, const struct FString& Key);
	SteamCore_ESteamFriendRelationship STATIC_GetFriendRelationship(const struct FSteamID& SteamIDFriend);
	SteamCore_ESteamPersonaState STATIC_GetFriendPersonaState(const struct FSteamID& SteamIDFriend);
	struct FString STATIC_GetFriendPersonaNameHistory(const struct FSteamID& SteamIDFriend, int personaName);
	struct FString STATIC_GetFriendPersonaName(const struct FSteamID& SteamIDFriend);
	int STATIC_GetFriendMessage(const struct FSteamID& SteamIDFriend, int MessageID, struct FString* Text, SteamCore_ESteamChatEntryType* ChatEntryType);
	bool STATIC_GetFriendGamePlayed(const struct FSteamID& SteamIDFriend, struct FSteamGameID* GameID, struct FString* gameIP, int* ConnectionPort, int* QueryPort, struct FSteamID* SteamIDLobby);
	struct FSteamID STATIC_GetFriendFromSourceByIndex(const struct FSteamID& steamIDSource, int ifriend);
	int STATIC_GetFriendCountFromSource(const struct FSteamID& steamIDSource);
	int STATIC_GetFriendCount(TArray<SteamCore_ESteamFriendFlags> Flags);
	int STATIC_GetFriendCoplayTime(const struct FSteamID& SteamIDFriend);
	int STATIC_GetFriendCoplayGame(const struct FSteamID& SteamIDFriend);
	struct FSteamID STATIC_GetFriendByIndex(int ifriend, TArray<SteamCore_ESteamFriendFlags> Flags);
	void GetFollowerCount(const struct FScriptDelegate& callback, const struct FSteamID& SteamID);
	int STATIC_GetCoplayFriendCount();
	struct FSteamID STATIC_GetCoplayFriend(int coplayFriend);
	struct FString STATIC_GetClanTag(const struct FSteamID& SteamIDClan);
	struct FSteamID STATIC_GetClanOwner(const struct FSteamID& SteamIDClan);
	int STATIC_GetClanOfficerCount(const struct FSteamID& SteamIDClan);
	struct FSteamID STATIC_GetClanOfficerByIndex(const struct FSteamID& SteamIDClan, int officer);
	struct FString STATIC_GetClanName(const struct FSteamID& SteamIDClan);
	int STATIC_GetClanCount();
	int STATIC_GetClanChatMessage(const struct FSteamID& SteamIDClanChat, int MessageID, struct FString* Text, SteamCore_ESteamChatEntryType* ChatEntryType, struct FSteamID* steamIDChatter);
	int STATIC_GetClanChatMemberCount(const struct FSteamID& SteamIDClan);
	struct FSteamID STATIC_GetClanByIndex(int clan);
	bool STATIC_GetClanActivityCounts(const struct FSteamID& SteamIDClan, int* online, int* inGame, int* chatting);
	struct FSteamID STATIC_GetChatMemberByIndex(const struct FSteamID& SteamIDClan, int User);
	void EnumerateFollowingList(const struct FScriptDelegate& callback, int startIndex);
	void DownloadClanActivityCounts(const struct FScriptDelegate& callback, TArray<struct FSteamID> steamIDClans);
	bool STATIC_CloseClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat);
	void STATIC_ClearRichPresence();
	void STATIC_ActivateGameOverlayToWebPage(const struct FString& URL, SteamCore_ESteamActivateGameOverlayToWebPageMode Mode);
	void STATIC_ActivateGameOverlayToUser(const struct FString& dialog, const struct FSteamID& SteamID);
	void STATIC_ActivateGameOverlayToStore(int AppID, SteamCore_ESteamOverlayToStoreFlag flag);
	void STATIC_ActivateGameOverlayInvitedialog(const struct FSteamID& SteamIDLobby);
	void STATIC_ActivateGameOverlay(const struct FString& dialog);
};

// Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName");
		return ptr;
	}



	class USteamCoreFriendsAsyncActionSetPersonaName* STATIC_SetPersonaNameAsync(class UObject* WorldContextObject, const struct FString& Name);
	void HandleCallback(const struct FSetPersonaNameResponse& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts");
		return ptr;
	}



	void HandleCallback(const struct FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
	class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* STATIC_DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<struct FSteamID> steamIDClans);
};

// Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList");
		return ptr;
	}



	class USteamCoreFriendsAsyncActionRequestClanOfficerList* STATIC_RequestClanOfficerListAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan);
	void HandleCallback(const struct FClanOfficerListResponse& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom");
		return ptr;
	}



	class USteamCoreFriendsAsyncActionJoinClanChatRoom* STATIC_JoinClanChatRoomAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan);
	void HandleCallback(const struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList");
		return ptr;
	}



	void HandleCallback(const struct FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
	class USteamCoreFriendsAsyncActionEnumerateFollowingList* STATIC_EnumerateFollowingListAsync(class UObject* WorldContextObject, int startIndex);
};

// Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing");
		return ptr;
	}



	class USteamCoreFriendsAsyncActionIsFollowing* STATIC_IsFollowingAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID);
	void HandleCallback(const struct FFriendsIsFollowing& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount");
		return ptr;
	}



	void HandleCallback(const struct FFriendsGetFollowerCount& Data, bool bWasSuccessful);
	class USteamCoreFriendsAsyncActionGetFollowerCount* STATIC_GetFollowerCountAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID);
};

// Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZLE[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation");
		return ptr;
	}



	class USteamCoreFriendsAsyncActionRequestUserInformation* STATIC_RequestUserInformationAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDUser, bool bRequireNameOnly);
	void HandleCallback();
};

// Class SteamCore.GameSearch
// 0x0150 (FullSize[0x0198] - InheritedSize[0x0048])
class UGameSearch : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    SearchForGameProgressDelegate;                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SearchForGameResultDelegate;                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    RequestPlayersForGameProgressDelegate;                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    RequestPlayersForGameResultDelegate;                       // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    RequestPlayersForGameFinalResultDelegate;                  // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SubmitPlayerResultResultDelegate;                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EndGameResultDelegate;                                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMQW[0xE0];                                    // 0x00B8(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.GameSearch");
		return ptr;
	}



	SteamCore_ESteamGameSearchErrorCode SubmitPlayerResult(const struct FString& UniqueGameID, const struct FSteamID& SteamIDPlayer, SteamCore_ESteamPlayerResult playerResult);
	SteamCore_ESteamGameSearchErrorCode SetGameHostParams(const struct FString& Key, TArray<struct FString> Values);
	SteamCore_ESteamGameSearchErrorCode SetConnectionDetails(const struct FString& connectionDetails);
	SteamCore_ESteamGameSearchErrorCode SearchForGameWithLobby(const struct FSteamID& SteamIDLobby, int playerMin, int playerMax);
	SteamCore_ESteamGameSearchErrorCode SearchForGameSolo(int playerMin, int playerMax);
	SteamCore_ESteamGameSearchErrorCode RetrieveConnectionDetails(const struct FSteamID& SteamIDHost, struct FString* connectionDetails, int numConnectionDetails);
	SteamCore_ESteamGameSearchErrorCode RequestPlayersForGame(int playerMin, int playerMax, int maxTeamSize);
	SteamCore_ESteamGameSearchErrorCode HostConfirmGameStart(const struct FString& UniqueGameID);
	SteamCore_ESteamGameSearchErrorCode EndGameSearch();
	SteamCore_ESteamGameSearchErrorCode EndGame(const struct FString& UniqueGameID);
	SteamCore_ESteamGameSearchErrorCode DeclineGame();
	SteamCore_ESteamGameSearchErrorCode CancelRequestPlayersForGame();
	SteamCore_ESteamGameSearchErrorCode AddGameSearchParams(const struct FString& keyToFind, TArray<struct FString> valuesToFind);
	SteamCore_ESteamGameSearchErrorCode AcceptGame();
};

// Class SteamCore.GameServer
// 0x00F0 (FullSize[0x0138] - InheritedSize[0x0048])
class UGameServer : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    GSPolicyResponse;                                          // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GSClientGroupStatus;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GSValidateAuthTicketResponse;                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GSClientApprove;                                           // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GSClientDeny;                                              // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7X05[0xA0];                                    // 0x0098(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.GameServer");
		return ptr;
	}



	bool WasRestartRequested();
	SteamCore_ESteamUserHasLicenseForAppResult UserHasLicenseForApp(const struct FSteamID& SteamID, int AppID);
	void SetSpectatorServerName(const struct FString& spectatorServerName);
	void SetSpectatorPort(int spectatorPort);
	void SetServerName(const struct FString& ServerName);
	void SetRegion(const struct FString& region);
	void SetProduct(const struct FString& product);
	void SetPasswordProtected(bool bPasswordProtected);
	void SetModDir(const struct FString& modDir);
	void SetMaxPlayerCount(int playersMax);
	void SetMapName(const struct FString& MapName);
	void SetKeyValue(const struct FString& Key, const struct FString& Value);
	void SetHeartbeatInterval(int heartbeatInterval);
	void SetGameTags(const struct FString& GameTags);
	void SetGameDescription(const struct FString& GameDescription);
	void SetGameData(const struct FString& gameData);
	void SetDedicatedServer(bool bDedicated);
	void SetBotPlayerCount(int BotPlayers);
	bool RequestUserGroupStatus(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDGroup);
	void LogOnAnonymous();
	void LogOn(const struct FString& Token);
	void LogOff();
	struct FSteamID GetServerSteamID_PureCompact();
	struct FSteamID GetServerSteamID_Pure();
	struct FSteamID GetServerSteamID();
	struct FString GetServerPublicIP_PureCompact();
	struct FString GetServerPublicIP_Pure();
	struct FString GetServerPublicIP();
	struct FSteamTicketHandle GetAuthSessionTicket(TArray<unsigned char>* ticket);
	void ForceHeartbeat();
	void EndAuthSession(const struct FSteamID& SteamID);
	void EnableHeartbeats(bool bActive);
	struct FSteamID CreateUnauthenticatedUserConnection();
	void ComputeNewPlayerCompatibility(const struct FScriptDelegate& callback, const struct FSteamID& steamIDNewPlayer);
	void ClearAllKeyValues();
	void CancelAuthTicket(const struct FSteamTicketHandle& ticketHandle);
	bool BUpdateUserData(const struct FSteamID& SteamIDUser, const struct FString& PlayerName, int Score);
	bool BSecure();
	bool BLoggedOn();
	SteamCore_ESteamBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> ticket, const struct FSteamID& SteamID);
	void AssociateWithClan(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDClan);
};

// Class SteamCore.GameServerStats
// 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
class UGameServerStats : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    GSStatsUnloaded;                                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OF0W[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.GameServerStats");
		return ptr;
	}



	bool UpdateUserAvgRateStat(const struct FSteamID& SteamIDUser, const struct FString& Name, float countThisSession, float sessionLength);
	bool SetUserStatInt(const struct FSteamID& SteamIDUser, const struct FString& Name, int Data);
	bool SetUserStatFloat(const struct FSteamID& SteamIDUser, const struct FString& Name, float Data);
	bool SetUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name);
	void ServerStoreUserStats(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDUser);
	void ServerRequestUserStats(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDUser);
	bool GetUserStatInt(const struct FSteamID& SteamIDUser, const struct FString& Name, int* Data);
	bool GetUserStatFloat(const struct FSteamID& SteamIDUser, const struct FString& Name, float* Data);
	bool GetUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved);
	bool ClearUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name);
};

// Class SteamCore.Input
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UInput : public USteamCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Input");
		return ptr;
	}



	void TriggerVibration(const struct FInputHandle& Handle, unsigned char leftSpeed, unsigned char rightSpeed);
	void TriggerRepeatedHapticPulse(const struct FInputHandle& Handle, SteamCore_ESteamCoreControllerPad targetPad, unsigned char durationMicroSec, unsigned char offMicroSec, unsigned char repeat, unsigned char Flags);
	void TriggerHapticPulse(const struct FInputHandle& Handle, SteamCore_ESteamCoreControllerPad targetPad, unsigned char durationMicroSec);
	SteamCore_ESteamCoreInputActionOrigin TranslateActionOrigin(SteamCore_ESteamCoreInputType destinationInputType, SteamCore_ESteamCoreInputActionOrigin sourceOrigin);
	void StopAnalogActionMomentum(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& eAction);
	bool ShowBindingPanel(const struct FInputHandle& Handle);
	void SetLEDColor(const struct FInputHandle& Handle, unsigned char colorR, unsigned char colorG, unsigned char colorB, SteamCore_ESteamCoreInputLEDFlag Flags);
	struct FString GetStringForXboxOrigin(SteamCore_ESteamCoreXboxOrigin Origin);
	struct FString GetStringForActionOrigin(SteamCore_ESteamCoreInputActionOrigin Origin);
	int GetRemotePlaySessionID(const struct FInputHandle& Handle);
	struct FInputMotionData GetMotionData(const struct FInputHandle& Handle);
	SteamCore_ESteamCoreInputType GetInputTypeForHandle(const struct FInputHandle& Handle);
	struct FString GetGlyphForXboxOrigin(SteamCore_ESteamCoreXboxOrigin Origin);
	struct FString GetGlyphForActionOrigin(SteamCore_ESteamCoreInputActionOrigin Origin);
	int GetGamepadIndexForController(const struct FInputHandle& Handle);
	int GetDigitalActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetHandle, const struct FInputDigitalActionHandle& digitalActionHandle, TArray<SteamCore_ESteamCoreInputActionOrigin>* originsOut);
	struct FInputDigitalActionHandle GetDigitalActionHandle(const struct FString& pszActionName);
	struct FInputDigitalActionData GetDigitalActionData(const struct FInputHandle& Handle, const struct FInputDigitalActionHandle& digitalActionHandle);
	bool GetDeviceBindingRevision(const struct FInputHandle& Handle, int* major, int* minor);
	struct FInputActionSetHandle GetCurrentActionSet(const struct FInputHandle& Handle);
	struct FInputHandle GetControllerForGamepadIndex(int Index);
	int GetAnalogActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetHandle, const struct FInputAnalogActionHandle& analogActionHandle, TArray<SteamCore_ESteamCoreInputActionOrigin>* originsOut);
	struct FInputAnalogActionHandle GetAnalogActionHandle(const struct FString& pszActionName);
	struct FInputAnalogActionData GetAnalogActionData(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& analogActionHandle);
	int GetActiveActionSetLayers(const struct FInputHandle& Handle, TArray<struct FInputActionSetHandle>* Data);
	struct FInputActionSetHandle GetActionSetHandle(const struct FString& actionSetName);
	SteamCore_ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(const struct FInputHandle& Handle, SteamCore_ESteamCoreXboxOrigin Origin);
	void DeactivateAllActionSetLayers(const struct FInputHandle& Handle);
	void DeactivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetLayerHandle);
	void ActivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetLayerHandle);
	void ActivateActionSet(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetHandle);
};

// Class SteamCore.Inventory
// 0x0120 (FullSize[0x0168] - InheritedSize[0x0048])
class UInventory : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    SteamInventoryResultReady;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryDefinitionUpdate;                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryFullUpdate;                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryStartPurchaseResult;                         // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryRequestPricesResultDelegate;                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamInventoryEligiblePromoItemDefIDs;                     // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BB1D[0xC0];                                    // 0x00A8(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Inventory");
		return ptr;
	}



	bool STATIC_TriggerItemDrop(struct FSteamInventoryResult* Result, const struct FSteamItemDef& listDefinition);
	bool STATIC_TransferItemQuantity(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& itemIDSource, int Quantity, const struct FSteamItemInstanceID& itemIDDest);
	bool STATIC_SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* resultHandle);
	struct FSteamInventoryUpdateHandle STATIC_StartUpdateProperties();
	void StartPurchase(const struct FScriptDelegate& callback, TArray<struct FSteamItemDef> itemDefs, TArray<int> Quantity);
	bool STATIC_SetPropertyString(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, const struct FString& Value);
	bool STATIC_SetPropertyInt(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, int Value);
	bool STATIC_SetPropertyFloat(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, float Value);
	bool STATIC_SetPropertyBool(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, bool Value);
	bool STATIC_SerializeResult(const struct FSteamInventoryResult& Handle, TArray<unsigned char>* buffer);
	void RequestPrices(const struct FScriptDelegate& callback);
	void RequestEligiblePromoItemDefinitionsIDs(const struct FScriptDelegate& callback, const struct FSteamID& SteamID);
	bool STATIC_RemoveProperty(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName);
	bool STATIC_LoadItemDefinitions();
	bool STATIC_GrantPromoItems(struct FSteamInventoryResult* Result);
	int STATIC_GetResultTimestamp(const struct FSteamInventoryResult& Handle);
	SteamCore_ESteamResult STATIC_GetResultStatus(const struct FSteamInventoryResult& Handle);
	bool STATIC_GetResultItems(const struct FSteamInventoryResult& Handle, TArray<struct FSteamItemDetails>* items);
	bool STATIC_GetResultItemProperty(const struct FSteamInventoryResult& Handle, int ItemIndex, const struct FString& PropertyName, struct FString* Value);
	int STATIC_GetNumItemsWithPrices();
	bool STATIC_GetItemsWithPrices(TArray<struct FSteamItemDef>* itemDefs, TArray<int>* prices, TArray<int>* basePrices);
	bool STATIC_GetItemsByID(struct FSteamInventoryResult* inventoryResult, TArray<struct FSteamItemInstanceID> instanceIDs);
	bool STATIC_GetItemPrice(const struct FSteamItemDef& itemDef, int* Price, int* basePrice);
	bool STATIC_GetItemDefinitionProperty(const struct FSteamItemDef& itemDef, const struct FString& PropertyName, struct FString* Value);
	bool STATIC_GetItemDefinitionIDs(TArray<struct FSteamItemDef>* itemDefs);
	bool STATIC_GetEligiblePromoItemDefinitionIDs(const struct FSteamID& SteamID, TArray<struct FSteamItemDef>* itemDefs);
	bool STATIC_GetAllItems(struct FSteamInventoryResult* Handle);
	bool STATIC_GenerateItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> itemDefs, TArray<int> Quantity);
	bool STATIC_ExchangeItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> arrayGenerate, TArray<int> arrayGenerateQuantity, TArray<struct FSteamItemInstanceID> arrayDestroy, TArray<int> arrayDestroyQuantity);
	void STATIC_DestroyResult(const struct FSteamInventoryResult& Handle);
	bool STATIC_DeserializeResult(struct FSteamInventoryResult* Result, TArray<unsigned char> buffer, bool bReservedMustBeFalse);
	bool STATIC_ConsumeItem(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& itemConsume, int Quantity);
	bool STATIC_CheckResultSteamID(const struct FSteamInventoryResult& Handle, const struct FSteamID& steamIDExpected);
	bool STATIC_AddPromoItems(struct FSteamInventoryResult* outResult, TArray<struct FSteamItemDef> itemDefs);
	bool STATIC_AddPromoItem(struct FSteamInventoryResult* Result, const struct FSteamItemDef& itemDef);
};

// Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs");
		return ptr;
	}



	class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* STATIC_RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID);
	void HandleCallback(const struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult");
		return ptr;
	}



	class USteamCoreInventoryAsyncActionRequestPricesResult* STATIC_RequestPricesAsync(class UObject* WorldContextObject);
	void HandleCallback(const struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult");
		return ptr;
	}



	class USteamCoreInventoryAsyncActionStartPurchaseResult* STATIC_StartPurchaseAsync(class UObject* WorldContextObject, TArray<struct FSteamItemDef> itemDefs, TArray<int> Quantity);
	void HandleCallback(const struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
};

// Class SteamCore.Matchmaking
// 0x01B0 (FullSize[0x01F8] - InheritedSize[0x0048])
class UMatchmaking : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    FavoritesListAccountsUpdated;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FavoritesListChanged;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyChatMsg;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyChatUpdate;                                           // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyDataUpdate;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyEnter;                                                // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyGameCreated;                                          // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyInvite;                                               // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyKicked;                                               // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SYO5[0x120];                                   // 0x00D8(0x0120) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Matchmaking");
		return ptr;
	}



	bool STATIC_SetLobbyType(const struct FSteamID& SteamIDLobby, SteamCore_ESteamLobbyType lobbyType);
	bool STATIC_SetLobbyOwner(const struct FSteamID& SteamIDLobby, const struct FSteamID& steamIDNewOwner);
	bool STATIC_SetLobbyMemberLimit(const struct FSteamID& SteamIDLobby, int maxMembers);
	void STATIC_SetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value);
	bool STATIC_SetLobbyJoinable(const struct FSteamID& SteamIDLobby, bool bLobbyJoinable);
	void STATIC_SetLobbyGameServer(const struct FSteamID& SteamIDLobby, const struct FString& GameServerIP, int GameServerPort, const struct FSteamID& SteamIDGameServer);
	bool STATIC_SetLobbyData(const struct FSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value);
	bool STATIC_SetLinkedLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& steamIDLobbyDependent);
	bool STATIC_SendLobbyChatMsg(const struct FSteamID& SteamIDLobby, const struct FString& Message);
	void RequestLobbyList(const struct FScriptDelegate& callback);
	bool STATIC_RequestLobbyData(const struct FSteamID& SteamIDLobby);
	bool STATIC_RemoveFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<SteamCore_ESteamFavoriteFlags> Flags);
	void STATIC_LeaveLobby(const struct FSteamID& SteamIDLobby);
	void JoinLobby(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDLobby);
	bool STATIC_InviteUserToLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& steamIDInvitee);
	int STATIC_GetNumLobbyMembers(const struct FSteamID& SteamIDLobby);
	struct FSteamID STATIC_GetLobbyOwner(const struct FSteamID& SteamIDLobby);
	int STATIC_GetLobbyMemberLimit(const struct FSteamID& SteamIDLobby);
	struct FString STATIC_GetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDUser, const struct FString& Key);
	struct FSteamID STATIC_GetLobbyMemberByIndex(const struct FSteamID& SteamIDLobby, int member);
	bool STATIC_GetLobbyGameServer(const struct FSteamID& SteamIDLobby, struct FString* GameServerIP, int* GameServerPort, struct FSteamID* SteamIDGameServer);
	int STATIC_GetLobbyDataCount(const struct FSteamID& SteamIDLobby);
	bool STATIC_GetLobbyDataByIndex(const struct FSteamID& SteamIDLobby, int lobbyData, struct FString* Key, struct FString* Value);
	struct FString STATIC_GetLobbyData(const struct FSteamID& SteamIDLobby, const struct FString& Key);
	int STATIC_GetLobbyChatEntry(const struct FSteamID& SteamIDLobby, int MessageID, struct FSteamID* SteamIDUser, struct FString* Message, SteamCore_ESteamChatEntryType* ChatEntryType);
	struct FSteamID STATIC_GetLobbyByIndex(int Lobby);
	int STATIC_GetFavoriteGameCount();
	bool STATIC_GetFavoriteGame(int Game, int* AppID, struct FString* IP, int* ConnectionPort, int* QueryPort, TArray<SteamCore_ESteamFavoriteFlags>* Flags, int* timeLastPlayedOnServer);
	bool STATIC_DeleteLobbyData(const struct FSteamID& SteamIDLobby, const struct FString& Key);
	void CreateLobby(const struct FScriptDelegate& callback, SteamCore_ESteamLobbyType lobbyType, int maxMembers);
	void STATIC_AddRequestLobbyListStringFilter(const struct FString& keyToMatch, const struct FString& valueToMatch, SteamCore_ESteamLobbyComparison comparisonType);
	void STATIC_AddRequestLobbyListResultCountFilter(int MaxResults);
	void STATIC_AddRequestLobbyListNumericalFilter(const struct FString& keyToMatch, int valueToMatch, SteamCore_ESteamLobbyComparison comparisonType);
	void STATIC_AddRequestLobbyListNearValueFilter(const struct FString& keyToMatch, int valueToBeCloseTo);
	void STATIC_AddRequestLobbyListFilterSlotsAvailable(int slotsAvailable);
	void STATIC_AddRequestLobbyListDistanceFilter(SteamCore_ESteamLobbyDistanceFilter lobbyDistanceFilter);
	void STATIC_AddRequestLobbyListCompatibleMembersFilter(const struct FSteamID& SteamIDLobby);
	int STATIC_AddFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<SteamCore_ESteamFavoriteFlags> Flags, int timeLastPlayedOnServer);
};

// Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby");
		return ptr;
	}



	void HandleCallback(const struct FCreateLobbyData& Data, bool bWasSuccessful);
	class USteamCoreMatchmakingAsyncActionCreateLobby* STATIC_CreateLobbyAsync(class UObject* WorldContextObject, SteamCore_ESteamLobbyType lobbyType, int maxMembers);
};

// Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList");
		return ptr;
	}



	class USteamCoreMatchmakingAsyncActionRequestLobbyList* STATIC_RequestLobbyListAsync(class UObject* WorldContextObject);
	void HandleCallback(const struct FLobbyMatchList& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby");
		return ptr;
	}



	class USteamCoreMatchmakingAsyncActionJoinLobby* STATIC_JoinLobbyAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDLobby);
	void HandleCallback(const struct FJoinLobbyData& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreCreateSession
// 0x0108 (FullSize[0x0138] - InheritedSize[0x0030])
class USteamCoreCreateSession : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWJE[0xE8];                                    // 0x0050(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreCreateSession");
		return ptr;
	}



	class USteamCoreCreateSession* STATIC_CreateSteamCoreSession(class UObject* WorldContextObject, TMap<struct FString, struct FSteamSessionSetting> SessionSettings, const struct FString& SessionName, int numPublicConnections, int NumPrivateConnections, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
};

// Class SteamCore.SteamCoreFindSession
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class USteamCoreFindSession : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IC6[0x90];                                    // 0x0040(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreFindSession");
		return ptr;
	}



	void OnCompleted(bool bSuccessful);
	class USteamCoreFindSession* STATIC_FindSteamCoreSessions(class UObject* WorldContextObject, TMap<struct FString, struct FSteamSessionSearchSetting> searchSettings, int MaxResults, bool bUseLAN, SteamCore_ESteamSessionFindType serverType, bool bEmptyServersOnly, bool bSecureServersOnly);
};

// Class SteamCore.SteamCoreDestroySession
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class USteamCoreDestroySession : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5KGW[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreDestroySession");
		return ptr;
	}



	void OnCompleted(const struct FName& SessionName, bool bWasSuccessful);
	class USteamCoreDestroySession* STATIC_DestroySteamCoreSession(class UObject* WorldContextObject);
};

// Class SteamCore.MatchmakingServers
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UMatchmakingServers : public USteamCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.MatchmakingServers");
		return ptr;
	}



	void ServerRules(const struct FScriptDelegate& callback, const struct FString& IP, int QueryPort);
	void RequestSpectatorServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestLANServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestInternetServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestHistoryServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestFriendsServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestFavoritesServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void PingServer(const struct FScriptDelegate& callback, const struct FString& IP, int QueryPort);
};

// Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer");
		return ptr;
	}



	class USteamCoreMatchmakingServersAsyncActionPingServer* STATIC_PingServerAsync(class UObject* WorldContextObject, const struct FString& IP, int Port);
	void HandleCallback(const struct FGameServerItem& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList");
		return ptr;
	}



	class USteamCoreMatchmakingServersAsyncActionRequestServerList* STATIC_RequestSpectatorServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* STATIC_RequestLANServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* STATIC_RequestInternetServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* STATIC_RequestHistoryServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* STATIC_RequestFriendsServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* STATIC_RequestFavoritesServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void HandleServerListFinished();
	void HandleCallback(TArray<struct FGameServerItem> Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules");
		return ptr;
	}



	class USteamCoreMatchmakingServersAsyncActionServerRules* STATIC_ServerRulesAsync(class UObject* WorldContextObject, const struct FString& IP, int QueryPort);
	void HandleCallback(TArray<struct FGameServerRule> Data, bool bWasSuccessful);
};

// Class SteamCore.ServerFilter
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UServerFilter : public UObject
{
public:
	unsigned char                                      UnknownData_WA5M[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.ServerFilter");
		return ptr;
	}



	TMap<struct FString, struct FString> GetFilters();
	void AddFilterSecure();
	void AddFilterOr(const struct FString& Value);
	void AddFilterNotFull();
	void AddFilterNor(const struct FString& Value);
	void AddFilterNoPlayers();
	void AddFilterNand(const struct FString& Value);
	void AddFilterMap(const struct FString& Value);
	void AddFilterLinux();
	void AddFilterHasPlayers();
	void AddFilterGameTagsNor(const struct FString& Value);
	void AddFilterGameTagsAnd(const struct FString& Value);
	void AddFilterGameDataOr(const struct FString& Value);
	void AddFilterGameDataNor(const struct FString& Value);
	void AddFilterGameDataAnd(const struct FString& Value);
	void AddFilterGameAddr(const struct FString& Value);
	void AddFilterDedicated();
	void AddFilterAnd(const struct FString& Value);
};

// Class SteamCore.Music
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UMusic : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    PlaybackStatusHasChanged;                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    VolumeHasChanged;                                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RETB[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Music");
		return ptr;
	}



	void SetVolume(float flVolume);
	void PlayPrevious();
	void PlayNext();
	void Play();
	void Pause();
	float GetVolume();
	SteamCore_ESteamAudioPlaybackStatus GetPlaybackStatus();
	bool BIsPlaying();
	bool BIsEnabled();
};

// Class SteamCore.Networking
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UNetworking : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnP2PSessionRequestDelegate;                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnP2PSessionConnectFailDelegate;                           // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U56L[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Networking");
		return ptr;
	}



	bool SendP2PPacket(const struct FSteamID& SteamIDRemote, TArray<unsigned char> Data, SteamCore_ESteamP2PSend p2pSendType, int Channel);
	bool ReadP2PPacket(TArray<unsigned char>* Data, struct FSteamID* SteamIDRemote, int Channel);
	bool IsP2PPacketAvailable(int* messageSize, int Channel);
	bool GetP2PSessionState(const struct FSteamID& SteamIDRemote, struct FSteamP2PSessionState* ConnectionState);
	bool CloseP2PSessionWithUser(const struct FSteamID& SteamIDRemote);
	bool CloseP2PchannelWithUser(const struct FSteamID& SteamIDRemote, int Channel);
	bool AllowP2PPacketRelay(bool bAllow);
	bool AcceptP2PSessionWithUser(const struct FSteamID& SteamIDRemote);
};

// Class SteamCore.NetworkingUtils
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNetworkingUtils : public USteamCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.NetworkingUtils");
		return ptr;
	}



	bool STATIC_ParsePingLocationString(const struct FString& String, struct FSteamNetworkPingLocation* Result);
	void InitRelayNetworkAccess();
	float GetLocalPingLocation(struct FSteamNetworkPingLocation* Result);
	int EstimatePingTimeFromLocalHost(const struct FSteamNetworkPingLocation& remoteLocation);
	int EstimatePingTimeBetweenTwoLocations(const struct FSteamNetworkPingLocation& location1, const struct FSteamNetworkPingLocation& location2);
	void STATIC_ConvertPingLocationToString(const struct FSteamNetworkPingLocation& Location, struct FString* String);
	bool CheckPingDataUpToDate(float maxAgeSeconds);
};

// Class SteamCore.ParentalSettings
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UParentalSettings : public USteamCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.ParentalSettings");
		return ptr;
	}



	bool BIsParentalLockLocked();
	bool BIsParentalLockEnabled();
	bool BIsFeatureInBlockList(SteamCore_ESteamParentalFeature feature);
	bool BIsFeatureBlocked(SteamCore_ESteamParentalFeature feature);
	bool BIsAppInBlockList(int AppID);
	bool BIsAppBlocked(int AppID);
};

// Class SteamCore.SteamParties
// 0x0120 (FullSize[0x0168] - InheritedSize[0x0048])
class USteamParties : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    JoinPartyDelegate;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    CreateBeaconDelegate;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ReservationNotificationDelegate;                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ChangeNumOpenSlotsDelegate;                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AvailableBeaconLocationsDelegate;                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ActiveBeaconsDelegate;                                     // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LGEY[0xC0];                                    // 0x00A8(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamParties");
		return ptr;
	}



	void STATIC_OnReservationCompleted(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser);
	void JoinParty(const struct FScriptDelegate& callback, const struct FPartyBeaconID& BeaconID);
	bool STATIC_GetNumAvailableBeaconLocations(int* numLocations);
	int STATIC_GetNumActiveBeacons();
	bool STATIC_GetBeaconLocationData(const struct FSteamPartyBeaconLocation& beaconLocation, SteamCore_ESteamPartiesBeaconLocationData eData, struct FString* pchDataStringOut);
	bool STATIC_GetBeaconDetails(const struct FPartyBeaconID& BeaconID, struct FSteamID* SteamIDBeaconOwner, struct FSteamPartyBeaconLocation* Location, struct FString* outMetadata);
	struct FPartyBeaconID STATIC_GetBeaconByIndex(int Index);
	bool STATIC_GetAvailableBeaconLocations(TArray<struct FSteamPartyBeaconLocation>* locationList, int maxNumLocations);
	bool STATIC_DestroyBeacon(const struct FPartyBeaconID& BeaconID);
	void CreateBeacon(const struct FScriptDelegate& callback, int openSlots, const struct FSteamPartyBeaconLocation& beaconLocation, const struct FString& ConnectString, const struct FString& MetaData);
	void ChangeNumOpenSlots(const struct FScriptDelegate& callback, const struct FPartyBeaconID& BeaconID, int openSlots);
	void STATIC_CancelReservation(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser);
};

// Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty");
		return ptr;
	}



	class USteamCoreSteamPartiesAsyncActionJoinParty* STATIC_JoinPartyAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID);
	void HandleCallback(const struct FJoinPartyData& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon");
		return ptr;
	}



	void HandleCallback(const struct FCreateBeaconData& Data, bool bWasSuccessful);
	class USteamCoreSteamPartiesAsyncActionCreateBeacon* STATIC_CreateBeaconAsync(class UObject* WorldContextObject, int openSlots, const struct FSteamPartyBeaconLocation& beaconLocation, const struct FString& ConnectString, const struct FString& MetaData);
};

// Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots");
		return ptr;
	}



	void HandleCallback(const struct FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
	class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* STATIC_ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, int openSlots);
};

// Class SteamCore.RemotePlay
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class URemotePlay : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    SteamRemotePlaySessionConnected;                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamRemotePlaySessionDisconnected;                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P6DC[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.RemotePlay");
		return ptr;
	}



	struct FSteamID GetSessionSteamID(int SessionID);
	int GetSessionID(int sessionIndex);
	int GetSessionCount();
	struct FString GetSessionClientName(int SessionID);
	SteamCore_ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int SessionID);
	bool BSendRemotePlayTogetherInvite(const struct FSteamID& SteamIDFriend);
	bool BGetSessionClientResolution(int SessionID, int* resolutionX, int* resolutionY);
};

// Class SteamCore.RemoteStorage
// 0x00C0 (FullSize[0x0108] - InheritedSize[0x0048])
class URemoteStorage : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    RemoteStorageUnsubscribePublishedFileResult;               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    RemoteStorageSubscribePublishedFileResult;                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    RemoteStoragePublishedFileUnsubscribed;                    // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    RemoteStoragePublishedFileSubscribed;                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13GA[0x80];                                    // 0x0088(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.RemoteStorage");
		return ptr;
	}



	bool STATIC_SetSyncPlatforms(const struct FString& File, SteamCore_ESteamRemoteStoragePlatform remoteStoragePlatform);
	void STATIC_SetCloudEnabledForApp(bool bEnabled);
	bool STATIC_IsCloudEnabledForApp();
	bool STATIC_IsCloudEnabledForAccount();
	bool STATIC_GetUGCDownloadProgress(const struct FSteamUGCHandle& Handle, int* bytesDownloaded, int* bytesExpected);
	bool STATIC_GetUGCDetails(const struct FSteamUGCHandle& Handle, int* AppID, struct FString* Name, int* fileSizeInBytes, struct FSteamID* SteamIDOwner);
	SteamCore_ESteamRemoteStoragePlatform STATIC_GetSyncPlatforms(const struct FString& File);
	bool STATIC_GetQuota(int* totalBytes, int* availableBytes);
	int STATIC_GetFileTimestamp(const struct FString& File);
	int STATIC_GetFileSize(const struct FString& File);
	struct FString STATIC_GetFileNameAndSize(int File, int* fileSizeInBytes);
	int STATIC_GetFileCount();
	struct FSteamUGCHandle STATIC_GetCachedUGCHandle(int iCachedContent);
	int STATIC_GetCachedUGCCount();
	bool STATIC_FileWriteStreamWriteChunk(const struct FUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Data);
	struct FUGCFileWriteStreamHandle STATIC_FileWriteStreamOpen(const struct FString& File);
	bool STATIC_FileWriteStreamClose(const struct FUGCFileWriteStreamHandle& Handle);
	bool STATIC_FileWriteStreamCancel(const struct FUGCFileWriteStreamHandle& Handle);
	void FileWriteAsync(const struct FScriptDelegate& callback, const struct FString& File, TArray<unsigned char> Data);
	bool STATIC_FileWrite(const struct FString& File, TArray<unsigned char> Data);
	void FileShare(const struct FScriptDelegate& callback, const struct FString& File);
	bool STATIC_FileReadAsyncComplete(const struct FRemoteStorageFileReadAsyncComplete& readCall, TArray<unsigned char>* buffer, int bytesToRead);
	void FileReadAsync(const struct FScriptDelegate& callback, const struct FString& File, int Offset, int bytesToRead);
	int STATIC_FileRead(const struct FString& File, TArray<unsigned char>* buffer, int dataToRead);
	bool STATIC_FilePersisted(const struct FString& File);
	bool STATIC_FileForget(const struct FString& File);
	bool STATIC_FileExists(const struct FString& File);
	bool STATIC_FileDelete(const struct FString& File);
};

// Class SteamCore.Screenshots
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UScreenshots : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    ScreenshotReady;                                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ScreenshotRequested;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I8US[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Screenshots");
		return ptr;
	}



	struct FScreenshotHandle STATIC_WriteScreenshot(TArray<unsigned char> pubRGB, int Width, int Height);
	void STATIC_TriggerScreenshot();
	bool STATIC_TagUser(const struct FScreenshotHandle& Handle, const struct FSteamID& SteamID);
	bool STATIC_TagPublishedFile(const struct FScreenshotHandle& Handle, const struct FPublishedFileID& PublishedFileID);
	bool STATIC_SetLocation(const struct FScreenshotHandle& Handle, const struct FString& Location);
	bool STATIC_IsScreenshotsHooked();
	void STATIC_HookScreenshots(bool bHook);
	struct FScreenshotHandle STATIC_AddVRScreenshotToLibrary(SteamCore_ESteamVRScreenshotType eType, const struct FString& Filename, const struct FString& vrFileName);
	struct FScreenshotHandle STATIC_AddScreenshotToLibrary(const struct FString& Filename, const struct FString& thumbnailFilename, int Width, int Height);
};

// Class SteamCore.UGC
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UUGC : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    ItemInstalled;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DownloadItemResult;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_78KL[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.UGC");
		return ptr;
	}



	bool STATIC_UpdateItemPreviewVideo(const struct FUGCUpdateHandle& Handle, int Index, const struct FString& previewVideo);
	bool STATIC_UpdateItemPreviewFile(const struct FUGCUpdateHandle& Handle, int Index, const struct FString& PreviewFile);
	void UnsubscribeItem(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID);
	void STATIC_SuspendDownloads(bool bSuspend);
	void SubscribeItem(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID);
	void SubmitItemUpdate(const struct FScriptDelegate& callback, const struct FUGCUpdateHandle& Handle, const struct FString& changeNote);
	void StopPlaytimeTrackingForAllItems(const struct FScriptDelegate& callback);
	void StopPlaytimeTracking(const struct FScriptDelegate& callback, TArray<struct FPublishedFileID> publishedFileIDs);
	void StartPlaytimeTracking(const struct FScriptDelegate& callback, TArray<struct FPublishedFileID> PublishedFileID);
	struct FUGCUpdateHandle STATIC_StartItemUpdate(int ConsumerAppID, const struct FPublishedFileID& PublishedFileID);
	void SetUserItemVote(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, bool bVoteUp);
	bool STATIC_SetSearchText(const struct FUGCQueryHandle& Handle, const struct FString& SearchText);
	bool STATIC_SetReturnTotalOnly(const struct FUGCQueryHandle& Handle, bool bReturnTotalOnly);
	bool STATIC_SetReturnPlaytimeStats(const struct FUGCQueryHandle& Handle, int days);
	bool STATIC_SetReturnOnlyIDs(const struct FUGCQueryHandle& Handle, bool bReturnOnlyIDs);
	bool STATIC_SetReturnMetadata(const struct FUGCQueryHandle& Handle, bool bReturnMetadata);
	bool STATIC_SetReturnLongDescription(const struct FUGCQueryHandle& Handle, bool bReturnLongDescription);
	bool STATIC_SetReturnKeyValueTags(const struct FUGCQueryHandle& Handle, bool bReturnKeyValueTags);
	bool STATIC_SetReturnChildren(const struct FUGCQueryHandle& Handle, bool bReturnChildren);
	bool STATIC_SetReturnAdditionalPreviews(const struct FUGCQueryHandle& Handle, bool bReturnAdditionalPreviews);
	bool STATIC_SetRankedByTrendDays(const struct FUGCQueryHandle& Handle, int days);
	bool STATIC_SetMatchAnyTag(const struct FUGCQueryHandle& Handle, bool bMatchAnyTag);
	bool STATIC_SetLanguage(const struct FUGCQueryHandle& Handle, const struct FString& Language);
	bool STATIC_SetItemVisibility(const struct FUGCUpdateHandle& Handle, SteamCore_ESteamRemoteStoragePublishedFileVisibility Visibility);
	bool STATIC_SetItemUpdateLanguage(const struct FUGCUpdateHandle& Handle, const struct FString& Language);
	bool STATIC_SetItemTitle(const struct FUGCUpdateHandle& Handle, const struct FString& Title);
	bool STATIC_SetItemTags(const struct FUGCUpdateHandle& Handle, TArray<struct FString> Tags);
	bool STATIC_SetItemPreview(const struct FUGCUpdateHandle& Handle, const struct FString& PreviewFile);
	bool STATIC_SetItemMetadata(const struct FUGCUpdateHandle& Handle, const struct FString& MetaData);
	bool STATIC_SetItemDescription(const struct FUGCUpdateHandle& Handle, const struct FString& Description);
	bool STATIC_SetItemContent(const struct FUGCUpdateHandle& Handle, const struct FString& contentFolder);
	bool STATIC_SetCloudFileNameFilter(const struct FUGCQueryHandle& Handle, const struct FString& matchCloudFileName);
	bool SetAllowLegacyUpload(const struct FUGCUpdateHandle& Handle, bool bAllowLegacyUpload);
	bool STATIC_SetAllowCachedResponse(const struct FUGCQueryHandle& Handle, int maxAgeSeconds);
	void SendQueryUGCRequest(const struct FScriptDelegate& callback, const struct FUGCQueryHandle& Handle);
	bool STATIC_RemoveItemPreview(const struct FUGCUpdateHandle& Handle, int Index);
	bool STATIC_RemoveItemKeyValueTags(const struct FUGCUpdateHandle& Handle, const struct FString& Key);
	void RemoveItemFromFavorites(const struct FScriptDelegate& callback, int AppID, const struct FPublishedFileID& PublishedFileID);
	void RemoveDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& parentPublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
	void RemoveAppDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, int AppID);
	bool STATIC_ReleaseQueryUGCRequest(const struct FUGCQueryHandle& Handle);
	void GetUserItemVote(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID);
	int STATIC_GetSubscribedItems(TArray<struct FPublishedFileID>* publishedFileIDs, int maxEntries);
	bool STATIC_GetQueryUGCStatistic(const struct FUGCQueryHandle& Handle, int Index, SteamCore_ESteamItemStatistic statType, struct FString* StatValue);
	bool STATIC_GetQueryUGCResult(const struct FUGCQueryHandle& Handle, int Index, struct FSteamUGCDetails* Details);
	bool STATIC_GetQueryUGCPreviewURL(const struct FUGCQueryHandle& Handle, int Index, struct FString* URL);
	int STATIC_GetQueryUGCNumKeyValueTags(const struct FUGCQueryHandle& Handle, int Index);
	int STATIC_GetQueryUGCNumAdditionalPreviews(const struct FUGCQueryHandle& Handle, int Index);
	bool STATIC_GetQueryUGCMetadata(const struct FUGCQueryHandle& Handle, int Index, struct FString* MetaData, int metadataSize);
	bool STATIC_GetQueryUGCKeyValueTag(const struct FUGCQueryHandle& Handle, int Index, int keyValueTagIndex, struct FString* Key, struct FString* Value);
	bool STATIC_GetQueryUGCChildren(const struct FUGCQueryHandle& Handle, int Index, TArray<struct FPublishedFileID>* publishedFileIDs, int maxEntries);
	bool STATIC_GetQueryUGCAdditionalPreview(const struct FUGCQueryHandle& Handle, int Index, int PreviewIndex, struct FString* urlOrVideoID, struct FString* originalFileName, SteamCore_ESteamItemPreviewType* previewType);
	int STATIC_GetNumSubscribedItems();
	SteamCore_ESteamItemUpdateStatus STATIC_GetItemUpdateProgress(const struct FUGCUpdateHandle& Handle, int* bytesProcessed, int* bytesTotal);
	int STATIC_GetItemState(const struct FPublishedFileID& PublishedFileID, TArray<SteamCore_ESteamItemState>* States);
	bool STATIC_GetItemInstallInfo(const struct FPublishedFileID& PublishedFileID, int* sizeOnDisk, struct FString* folder, int* Timestamp);
	bool STATIC_GetItemDownloadInfo(const struct FPublishedFileID& PublishedFileID, int* bytesDownloaded, int* bytesTotal);
	void GetAppDependencies(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID);
	bool STATIC_DownloadItem(const struct FPublishedFileID& PublishedFileID, bool bHighPriority);
	void DeleteItem(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID);
	struct FUGCQueryHandle STATIC_CreateQueryUserUGCRequest(const struct FSteamID& SteamID, SteamCore_ESteamUserUGCList listType, SteamCore_ESteamUGCMatchingUGCType matchingUGCType, SteamCore_ESteamUserUGCListSortOrder SortOrder, int CreatorAppID, int ConsumerAppID, int page);
	struct FUGCQueryHandle STATIC_CreateQueryUGCDetailsRequest(TArray<struct FPublishedFileID> publishedFileIDs);
	struct FUGCQueryHandle STATIC_CreateQueryAllUGCRequest(SteamCore_ESteamUGCQuery QueryType, SteamCore_ESteamUGCMatchingUGCType FileType, int CreatorAppID, int ConsumerAppID, int page);
	void CreateItem(const struct FScriptDelegate& callback, int ConsumerAppID, SteamCore_ESteamWorkshopFileType FileType);
	bool STATIC_BInitWorkshopForGameServer(int workshopDepotID, const struct FString& folder);
	bool STATIC_AddRequiredTag(const struct FUGCQueryHandle& Handle, const struct FString& TagName);
	bool STATIC_AddRequiredKeyValueTag(const struct FUGCQueryHandle& Handle, const struct FString& Key, const struct FString& Value);
	void AddItemToFavorites(const struct FScriptDelegate& callback, int AppID, const struct FPublishedFileID& PublishedFileID);
	bool STATIC_AddItemPreviewVideo(const struct FUGCUpdateHandle& Handle, const struct FString& videoID);
	bool STATIC_AddItemPreviewFile(const struct FUGCUpdateHandle& Handle, const struct FString& PreviewFile, SteamCore_ESteamItemPreviewType Type);
	bool STATIC_AddItemKeyValueTag(const struct FUGCUpdateHandle& Handle, const struct FString& Key, const struct FString& Value);
	bool STATIC_AddExcludedTag(const struct FUGCQueryHandle& Handle, const struct FString& TagName);
	void AddDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
	void AddAppDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, int AppID);
};

// Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems");
		return ptr;
	}



	class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* STATIC_StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject);
	void HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking");
		return ptr;
	}



	class USteamCoreUGCAsyncActionStopPlaytimeTracking* STATIC_StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> publishedFileIDs);
	void HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking");
		return ptr;
	}



	class USteamCoreUGCAsyncActionStartPlaytimeTracking* STATIC_StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> publishedFileIDs);
	void HandleCallback(const struct FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem");
		return ptr;
	}



	class USteamCoreUGCAsyncActionUnsubscribeItem* STATIC_UnsubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& publishedFileIDs);
	void HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem");
		return ptr;
	}



	class USteamCoreUGCAsyncActionSubscribeItem* STATIC_SubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& publishedFileIDs);
	void HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites");
		return ptr;
	}



	class USteamCoreUGCAsyncActionRemoveItemFromFavorites* STATIC_RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int AppID, const struct FPublishedFileID& PublishedFileID);
	void HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites");
		return ptr;
	}



	void HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionAddItemToFavorites* STATIC_AddItemToFavoritesAsync(class UObject* WorldContextObject, int AppID, const struct FPublishedFileID& PublishedFileID);
};

// Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote");
		return ptr;
	}



	void HandleCallback(const struct FGetUserItemVoteResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionGetUserItemVote* STATIC_GetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID);
};

// Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote");
		return ptr;
	}



	class USteamCoreUGCAsyncActionSetUserItemVote* STATIC_SetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bVoteUp);
	void HandleCallback(const struct FSetUserItemVoteResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate");
		return ptr;
	}



	class USteamCoreUGCAsyncActionSubmitItemUpdate* STATIC_SubmitItemUpdateAsync(class UObject* WorldContextObject, const struct FUGCUpdateHandle& Handle, const struct FString& changeNote);
	void HandleCallback(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionCreateItem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionCreateItem");
		return ptr;
	}



	void HandleCallback(const struct FCreateItemResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionCreateItem* STATIC_CreateItemAsync(class UObject* WorldContextObject, int ConsumerAppID, SteamCore_ESteamWorkshopFileType FileType);
};

// Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest");
		return ptr;
	}



	class USteamCoreUGCAsyncActionSendQueryUGCRequest* STATIC_SendQueryUGCRequestAsync(class UObject* WorldContextObject, const struct FUGCQueryHandle& Handle);
	void HandleCallback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency");
		return ptr;
	}



	void HandleCallback(const struct FAddAppDependencyResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionAddAppDependency* STATIC_AddAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int AppID);
};

// Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency");
		return ptr;
	}



	class USteamCoreUGCAsyncActionRemoveAppDependency* STATIC_RemoveAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int AppID);
	void HandleCallback(const struct FRemoveAppDependencyResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency");
		return ptr;
	}



	void HandleCallback(const struct FAddUGCDependencyResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionAddUGCDependency* STATIC_AddDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
};

// Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency");
		return ptr;
	}



	class USteamCoreUGCAsyncActionRemoveUGCDependency* STATIC_RemoveDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
	void HandleCallback(const struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUGCAsyncActionDeleteItem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionDeleteItem");
		return ptr;
	}



	void HandleCallback(const struct FUGCDeleteItemResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionDeleteItem* STATIC_DeleteItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID);
};

// Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies");
		return ptr;
	}



	void HandleCallback(const struct FGetAppDependenciesResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionGetAppDependencies* STATIC_GetAppDependenciesAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID);
};

// Class SteamCore.SteamCoreUGCAsyncActionDownloadItem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionDownloadItem");
		return ptr;
	}



	void HandleCallback(const struct FDownloadItemResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionDownloadItem* STATIC_DownloadItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bHighPriority);
};

// Class SteamCore.User
// 0x0210 (FullSize[0x0258] - InheritedSize[0x0048])
class UUser : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    ClientGameServerDeny;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameWebCallback;                                           // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetAuthSessionTicketResponse;                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    IPCFailure;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LicensesUpdated;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    MicroTxnAuthorizationResponse;                             // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamServerConnectFailure;                                 // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamServersConnected;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamServersDisconnected;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ValidateAuthTicketResponse;                                // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EncryptedAppTicketResponse;                                // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIXL[0x160];                                   // 0x00F8(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.User");
		return ptr;
	}



	SteamCore_ESteamUserHasLicenseForAppResult STATIC_UserHasLicenseForApp(const struct FSteamID& SteamID, int AppID);
	void STATIC_StopVoiceRecording();
	void STATIC_StartVoiceRecording();
	void RequestStoreAuthURL(const struct FScriptDelegate& callback, const struct FString& RedirectURL);
	void RequestEncryptedAppTicket(const struct FScriptDelegate& callback, TArray<unsigned char> dataToInclude);
	int STATIC_GetVoiceOptimalSampleRate();
	SteamCore_ESteamVoiceResult STATIC_GetVoice(TArray<unsigned char>* destBuffer, int* bytesWritten);
	struct FSteamID STATIC_GetSteamID_Pure();
	struct FSteamID STATIC_GetSteamID();
	int STATIC_GetPlayerSteamLevel();
	int STATIC_GetGameBadgeLevel(int series, bool bFoil);
	bool STATIC_GetEncryptedAppTicket(TArray<unsigned char>* ticket);
	SteamCore_ESteamVoiceResult STATIC_GetAvailableVoice(int* compressedBytes, int* uncompressedBytes, int uncompressedVoiceDesiredSampleRate);
	struct FSteamTicketHandle STATIC_GetAuthSessionTicket(TArray<unsigned char>* ticket);
	void STATIC_EndAuthSession(const struct FSteamID& SteamID);
	SteamCore_ESteamVoiceResult STATIC_DecompressVoice(TArray<unsigned char> compressedBuffer, int desiredSampleRate, TArray<unsigned char>* destBuffer);
	void STATIC_CancelAuthTicket(const struct FSteamTicketHandle& ticketHandle);
	bool STATIC_BLoggedOn();
	bool STATIC_BIsTwoFactorEnabled();
	bool STATIC_BIsPhoneVerified();
	bool STATIC_BIsPhoneRequiringVerification();
	bool STATIC_BIsPhoneIdentifying();
	bool STATIC_BIsBehindNAT();
	SteamCore_ESteamBeginAuthSessionResult STATIC_BeginAuthSession(TArray<unsigned char> ticket, const struct FSteamID& SteamID);
	void STATIC_AdvertiseGame(const struct FSteamID& SteamIDGameServer, const struct FString& serverIP, int serverPort);
};

// Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket");
		return ptr;
	}



	class USteamCoreUserAsyncActionRequestEncryptedAppTicket* STATIC_RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<unsigned char> dataToInclude);
	void HandleCallback(const struct FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL");
		return ptr;
	}



	class USteamCoreUserAsyncActionRequestStoreAuthURL* STATIC_RequestStoreAuthURLAsync(class UObject* WorldContextObject, const struct FString& RedirectURL);
	void HandleCallback(const struct FStoreAuthURLResponse& Data, bool bWasSuccessful);
};

// Class SteamCore.UserStats
// 0x00F0 (FullSize[0x0138] - InheritedSize[0x0048])
class UUserStats : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    UserAchievementIconFetched;                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserAchievementStored;                                     // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserStatsReceived;                                         // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserStatsStored;                                           // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    UserStatsUnloaded;                                         // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNM5[0xA0];                                    // 0x0098(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.UserStats");
		return ptr;
	}



	void UploadLeaderboardScore(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int Score, TArray<int> scoreDetails);
	bool STATIC_UpdateAvgRateStat(const struct FString& Name, float countThisSession, float sessionLength);
	bool STATIC_StoreStats();
	bool STATIC_SetStatInt(const struct FString& Name, int Data);
	bool STATIC_SetStatFloat(const struct FString& Name, float Data);
	bool STATIC_SetAchievement(const struct FString& Name);
	bool STATIC_ResetAllStats(bool bAchievementsToo);
	void RequestUserStats(const struct FScriptDelegate& callback, const struct FSteamID& SteamID);
	void RequestGlobalStats(const struct FScriptDelegate& callback, int historyDays);
	void RequestGlobalAchievementPercentages(const struct FScriptDelegate& callback);
	bool STATIC_RequestCurrentStats();
	bool STATIC_IndicateAchievementProgress(const struct FString& Name, int CurrentProgress, int MaxProgress);
	bool STATIC_GetUserStatInteger(const struct FSteamID& SteamIDUser, const struct FString& Name, int* Data);
	bool STATIC_GetUserStatFloat(const struct FSteamID& SteamIDUser, const struct FString& Name, float* Data);
	bool STATIC_GetUserAchievementAndUnlockTime(const struct FSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved, int* unlockTime);
	bool STATIC_GetUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved);
	bool STATIC_GetStatInt(const struct FString& Name, int* Data);
	bool STATIC_GetStatFloat(const struct FString& Name, float* Data);
	void GetNumberOfCurrentPlayers(const struct FScriptDelegate& callback);
	int STATIC_GetNumAchievements();
	int STATIC_GetNextMostAchievedAchievementInfo(int iteratorPrevious, struct FString* Name, float* percent, bool* bAchieved);
	int STATIC_GetMostAchievedAchievementInfo(struct FString* Name, float* percent, bool* bAchieved);
	SteamCore_ESteamLeaderboardSortMethod STATIC_GetLeaderboardSortMethod(const struct FSteamLeaderboard& SteamLeaderboard);
	struct FString STATIC_GetLeaderboardName(const struct FSteamLeaderboard& SteamLeaderboard);
	int STATIC_GetLeaderboardEntryCount(const struct FSteamLeaderboard& SteamLeaderboard);
	SteamCore_ESteamLeaderboardDisplayType STATIC_GetLeaderboardDisplayType(const struct FSteamLeaderboard& SteamLeaderboard);
	bool STATIC_GetGlobalStatInt(const struct FString& StatName, int* Data);
	int STATIC_GetGlobalStatHistoryInt(const struct FString& StatName, int historyDays, TArray<int>* Data);
	int STATIC_GetGlobalStatHistoryFloat(const struct FString& StatName, int historyDays, TArray<float>* Data);
	bool STATIC_GetGlobalStatFloat(const struct FString& StatName, float* Data);
	bool STATIC_GetDownloadedLeaderboardEntry(const struct FSteamLeaderboardEntries& leaderboardEntries, int Index, struct FSteamLeaderboardEntry* leaderboardEntry, TArray<int> Details, TArray<int>* outDetails);
	struct FString STATIC_GetAchievementName(int achievement);
	class UTexture2D* STATIC_GetAchievementIcon(const struct FString& Name);
	struct FString STATIC_GetAchievementDisplayAttribute(const struct FString& Name, const struct FString& Key);
	bool STATIC_GetAchievementAndUnlockTime(const struct FString& Name, bool* bAchieved, int* unlockTime);
	bool STATIC_GetAchievementAchievedPercent(const struct FString& Name, float* percent);
	bool STATIC_GetAchievement(const struct FString& Name, bool* bAchieved);
	void FindOrCreateLeaderboard(const struct FScriptDelegate& callback, const struct FString& LeaderboardName, SteamCore_ESteamLeaderboardSortMethod SortMethod, SteamCore_ESteamLeaderboardDisplayType displayType);
	void FindLeaderboard(const struct FScriptDelegate& callback, const struct FString& LeaderboardName);
	void DownloadLeaderboardEntriesForUsers(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> users);
	void DownloadLeaderboardEntries(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardDataRequest dataRequest, int rangeStart, int rangeEnd);
	bool STATIC_ClearAchievement(const struct FString& Name);
	void AttachLeaderboardUGC(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard");
		return ptr;
	}



	void HandleCallback(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionFindLeaderboard* STATIC_FindLeaderboardAsync(class UObject* WorldContextObject, const struct FString& LeaderboardName);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries");
		return ptr;
	}



	void HandleCallback(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* STATIC_DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardDataRequest dataRequest, int rangeStart, int rangeEnd);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats");
		return ptr;
	}



	class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* STATIC_RequestGlobalStatsAsync(class UObject* WorldContextObject, int historyDays);
	void HandleCallback(const struct FGlobalStatsReceived& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages");
		return ptr;
	}



	class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* STATIC_RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject);
	void HandleCallback(const struct FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers");
		return ptr;
	}



	void HandleCallback(const struct FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* STATIC_GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore");
		return ptr;
	}



	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* STATIC_UploadLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int Score, TArray<int> scoreDetails);
	void HandleCallback(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard");
		return ptr;
	}



	void HandleCallback(const struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* STATIC_FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const struct FString& LeaderboardName, SteamCore_ESteamLeaderboardSortMethod SortMethod, SteamCore_ESteamLeaderboardDisplayType displayType);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats");
		return ptr;
	}



	class USteamCoreUserStatsAsyncActionRequestUserStats* STATIC_RequestUserStatsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID);
	void HandleCallback(const struct FRequestUserStatsData& Data, bool bWasSuccessful);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers");
		return ptr;
	}



	void HandleCallback(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* STATIC_DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> users);
};

// Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC");
		return ptr;
	}



	void HandleCallback(const struct FAttachLeaderboardUGCData& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* STATIC_AttachLeaderboardUGCAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle);
};

// Class SteamCore.SteamCoreVoice
// 0x0000 (FullSize[0x03C0] - InheritedSize[0x03C0])
class USteamCoreVoice : public USoundWaveProcedural
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamCoreVoice");
		return ptr;
	}



	void STATIC_DestroySteamCoreVoice(class USteamCoreVoice* Obj);
	class USteamCoreVoice* STATIC_ConstructSteamCoreVoice(int AudioSampleRate);
	void AddAudioBuffer(TArray<unsigned char> buffer);
};

// Class SteamCore.SteamUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.SteamUtilities");
		return ptr;
	}



	void STATIC_SteamItemInstanceID_Equals_Exec(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B, SteamCore_ESteamCoreIdentical* Result);
	bool STATIC_SteamItemInstanceID_Equals(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B);
	bool STATIC_PublishedFileID_NotEquals(const struct FPublishedFileID& A, const struct FPublishedFileID& B);
	void STATIC_PublishedFileID_Equals_Exec(const struct FPublishedFileID& A, const struct FPublishedFileID& B, SteamCore_ESteamCoreIdentical* Result);
	bool STATIC_PublishedFileID_Equals(const struct FPublishedFileID& A, const struct FPublishedFileID& B);
	bool STATIC_NotEqual(const struct FSteamID& A, const struct FSteamID& B);
	struct FSteamUGCHandle STATIC_MakeUGCHandle(const struct FString& Value);
	struct FSteamTicketHandle STATIC_MakeTicketHandle(const struct FString& Value);
	struct FSteamSessionSetting STATIC_MakeString(const struct FString& Value);
	struct FSteamID STATIC_MakeSteamID(const struct FString& Value);
	struct FSteamGameID STATIC_MakeSteamGameID(const struct FString& Value);
	struct FSteamSessionSearchSetting STATIC_MakeSearchString(const struct FString& Value);
	struct FSteamSessionSearchSetting STATIC_MakeSearchInteger(SteamCore_ESteamComparisonOp comparisonOperator, int Value);
	struct FSteamSessionSearchSetting STATIC_MakeSearchBool(bool Value);
	struct FPublishedFileID STATIC_MakePublishedFileID(const struct FString& Value);
	struct FSteamInventoryUpdateHandle STATIC_MakeInventoryUpdateHandle(const struct FString& Value);
	struct FSteamSessionSetting STATIC_MakeInteger(int Value);
	struct FSteamSessionSetting STATIC_MakeBool(bool Value);
	void STATIC_ListenForSteamMessages(const struct FScriptDelegate& callback);
	bool STATIC_IsValid(const struct FSteamID& SteamID);
	bool STATIC_IsUsingP2PRelays();
	void STATIC_IsUGCHandleValid_Exec(const struct FSteamUGCHandle& Handle, SteamCore_ESteamCoreValid* Result);
	bool STATIC_IsUGCHandleValid(const struct FSteamUGCHandle& Handle);
	void STATIC_IsSteamTicketHandleValid_Exec(const struct FSteamTicketHandle& Handle, SteamCore_ESteamCoreValid* Result);
	bool STATIC_IsSteamTicketHandleValid(const struct FSteamTicketHandle& Handle);
	void STATIC_IsSteamInventoryUpdateHandleValid_Exec(const struct FSteamInventoryUpdateHandle& Handle, SteamCore_ESteamCoreValid* Result);
	bool STATIC_IsSteamInventoryUpdateHandleValid(const struct FSteamInventoryUpdateHandle& Handle);
	void STATIC_IsSteamIDValid_Exec(const struct FSteamID& SteamID, SteamCore_ESteamCoreValid* Result);
	bool STATIC_IsSteamAvailable();
	bool STATIC_IsRecalculatingPing();
	void STATIC_IsPublishedFileIDValid_Exec(const struct FPublishedFileID& Handle, SteamCore_ESteamCoreValid* Result);
	bool STATIC_IsPublishedFileIDValid(const struct FPublishedFileID& PublishedFileID);
	bool STATIC_IsLobby(const struct FSteamID& SteamID);
	void STATIC_IsGameIDValid_Exec(const struct FSteamGameID& GameID, SteamCore_ESteamCoreValid* Result);
	bool STATIC_IsGameIDValid(const struct FSteamGameID& GameID);
	struct FString STATIC_GetString(const struct FSteamSessionSetting& Settings, struct FString* Key);
	void STATIC_GetPublicIp(const struct FScriptDelegate& callback);
	int STATIC_GetPingFromHostData(const struct FHostPingData& Data);
	int STATIC_GetInteger(const struct FSteamSessionSetting& Settings, struct FString* Key);
	struct FHostPingData STATIC_GetHostPingData();
	bool STATIC_GetBool(const struct FSteamSessionSetting& Settings, struct FString* Key);
	SteamCore_ESteamAccountType STATIC_GetAccountType(const struct FSteamID& SteamID);
	struct FDateTime STATIC_FromUnixTimestamp(const struct FString& Timestamp);
	void STATIC_Equal_Exec(const struct FSteamID& A, const struct FSteamID& B, SteamCore_ESteamCoreIdentical* Result);
	bool STATIC_Equal(const struct FSteamID& A, const struct FSteamID& B);
	struct FString STATIC_EncryptString(const struct FString& String);
	class UServerFilter* STATIC_ConstructServerFilter(class UObject* WorldContextObject);
	struct FString STATIC_BreakUGCHandle(const struct FSteamUGCHandle& Handle);
	struct FString STATIC_BreakTicketHandle(const struct FSteamTicketHandle& Handle);
	struct FString STATIC_BreakSteamID(const struct FSteamID& SteamID);
	struct FString STATIC_BreakSteamGameID(const struct FSteamGameID& SteamID);
	struct FString STATIC_BreakPublishedFileID(const struct FPublishedFileID& fileID);
	struct FString STATIC_BreakInventoryUpdateHandle(const struct FSteamInventoryUpdateHandle& Handle);
};

// Class SteamCore.Utils
// 0x00F0 (FullSize[0x0138] - InheritedSize[0x0048])
class UUtils : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    CheckFileSignature;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GamepadTextInputDismissed;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    IPCountry;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LowBatteryPower;                                           // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SteamShutdown;                                             // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPJL[0xA0];                                    // 0x0098(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Utils");
		return ptr;
	}



	void STATIC_StartVRDashboard();
	bool STATIC_ShowGamepadTextInput(SteamCore_ESteamGamepadTextInputMode InputMode, SteamCore_ESteamGamepadTextInputLineMode lineInputMode, const struct FString& Description, int charMax, const struct FString& existingText);
	void STATIC_SetVRHeadsetStreamingEnabled(bool bEnabled);
	void STATIC_SetOverlayNotificationPosition(SteamCore_ESteamNotificationPosition notificationPosition);
	void STATIC_SetOverlayNotificationInset(int horizontalInset, int verticalInset);
	bool STATIC_IsVRHeadsetStreamingEnabled();
	bool STATIC_IsSteamRunningInVR();
	bool STATIC_IsSteamInBigPictureMode();
	bool STATIC_IsSteamChinaLauncher();
	bool STATIC_IsOverlayEnabled();
	bool STATIC_InitFilterText();
	struct FString STATIC_GetSteamUILanguage();
	int STATIC_GetServerRealTime();
	int STATIC_GetSecondsSinceComputerActive();
	int STATIC_GetSecondsSinceAppActive();
	struct FString STATIC_GetIPCountry();
	int STATIC_GetIPCCallCount();
	bool STATIC_GetImageSize(int iImage, int* Width, int* Height);
	bool STATIC_GetImageRGBA(int iImage, TArray<unsigned char>* outBuffer);
	int STATIC_GetEnteredGamepadTextLength();
	bool STATIC_GetEnteredGamepadTextInput(struct FString* Text);
	int STATIC_GetCurrentBatteryPower();
	bool STATIC_GetCSERIPPort(struct FString* IP, int* Port);
	SteamCore_ESteamUniverse STATIC_GetConnectedUniverse();
	int STATIC_GetAppID_Pure();
	int STATIC_GetAppID();
	int STATIC_FilterText(struct FString* filteredText, const struct FString& inputMessage, bool bLegalOnly);
	bool STATIC_BOverlayNeedsPresent();
};

// Class SteamCore.Video
// 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
class UVideo : public USteamCoreSubsystem
{
public:
	struct FScriptMulticastDelegate                    GetOPFSettingsResult;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetVideoURLResult;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZKU[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCore.Video");
		return ptr;
	}



	bool STATIC_IsBroadcasting(int* numViewers);
	void STATIC_GetVideoURL(int videoAppID);
	bool STATIC_GetOPFStringForApp(int videoAppID, struct FString* outBuffer);
	void STATIC_GetOPFSettings(int videoAppID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
