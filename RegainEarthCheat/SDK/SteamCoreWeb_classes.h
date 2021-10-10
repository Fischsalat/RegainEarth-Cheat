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

// Class SteamCoreWeb.SteamCoreWeb
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamCoreWeb : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWeb");
		return ptr;
	}



};

// Class SteamCoreWeb.SteamCoreWebSubsystem
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class USteamCoreWebSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_RJ1K[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebSubsystem");
		return ptr;
	}



};

// Class SteamCoreWeb.SteamCoreWebAsyncAction
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C68U[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncAction");
		return ptr;
	}



	void HandleCallback(const struct FString& Data, bool bWasSuccessful);
};

// Class SteamCoreWeb.SteamCoreWebSettings
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class USteamCoreWebSettings : public UDeveloperSettings
{
public:
	float                                              AsyncTaskTimeout;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisabledSubsystems;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugging;                                                // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDevMode;                                                  // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KKZ[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IY49[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DevSteamID;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSandboxMode;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z75H[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebSettings");
		return ptr;
	}



};

// Class SteamCoreWeb.SteamWebUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamWebUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamWebUtilities");
		return ptr;
	}



	bool STATIC_ParseJson(const struct FString& JsonString, TArray<struct FSteamCoreJson>* Data);
	struct FString STATIC_GetProjectKey();
	int STATIC_GetProjectAppID();
	struct FString STATIC_GetDevSteamID();
	void STATIC_FindJsonStrings(const struct FString& JsonString, const struct FString& Key, TArray<struct FString>* Values, SteamCoreWeb_ESteamJsonResult* Result);
	void STATIC_FindJsonString(const struct FString& JsonString, const struct FString& Key, struct FString* Value, SteamCoreWeb_ESteamJsonResult* Result);
	void STATIC_FindJsonNumbers(const struct FString& JsonString, const struct FString& Key, TArray<int>* Values, SteamCoreWeb_ESteamJsonResult* Result);
	void STATIC_FindJsonNumber(const struct FString& JsonString, const struct FString& Key, int* Value, SteamCoreWeb_ESteamJsonResult* Result);
	void STATIC_FindJsonBools(const struct FString& JsonString, const struct FString& Key, TArray<bool>* Values, SteamCoreWeb_ESteamJsonResult* Result);
	void STATIC_FindJsonBool(const struct FString& JsonString, const struct FString& Key, bool* Value, SteamCoreWeb_ESteamJsonResult* Result);
};

// Class SteamCoreWeb.WebApps
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebApps : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebApps");
		return ptr;
	}



	void UpToDateCheck(const struct FScriptDelegate& callback, int AppID, int Version);
	void SetAppBuildLive(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int buildID, const struct FString& betaKey, const struct FString& Description);
	void GetServersAtAddress(const struct FScriptDelegate& callback, const struct FString& addr);
	void GetServerList(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& Filter, int Limit);
	void GetPlayersBanned(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
	void GetCheatingReports(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int timeBegin, int timeEnd, bool bIncludeReports, bool bIncludeBans, int reportidMin);
	void GetAppList(const struct FScriptDelegate& callback, const struct FString& Key);
	void GetAppDepotVersions(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
	void GetAppBuilds(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int Count);
	void GetAppBetas(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetAppBetas* STATIC_GetAppBetasAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetAppBuilds* STATIC_GetAppBuildsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int Count);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetAppDepotVersions* STATIC_GetAppDepotVersionsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetAppList : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetAppList* STATIC_GetAppListAsync(class UObject* WorldContextObject, const struct FString& Key);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetCheatingReports* STATIC_GetCheatingReportsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int timeBegin, int timeEnd, bool bIncludeReports, bool bIncludeBans, int reportidMin);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetPlayersBanned* STATIC_GetPlayersBannedAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetServerList* STATIC_GetServerListAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& Filter, int Limit);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress");
		return ptr;
	}



	class USteamCoreAppsAsyncActionGetServersAtAddress* STATIC_GetServersAtAddressAsync(class UObject* WorldContextObject, const struct FString& addr);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive");
		return ptr;
	}



	class USteamCoreAppsAsyncActionSetAppBuildLive* STATIC_SetAppBuildLiveAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int buildID, const struct FString& betaKey, const struct FString& Description);
};

// Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck");
		return ptr;
	}



	class USteamCoreAppsAsyncActionUpToDateCheck* STATIC_UpToDateCheckAsync(class UObject* WorldContextObject, int AppID, int Version);
};

// Class SteamCoreWeb.WebBroadcastService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebBroadcastService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebBroadcastService");
		return ptr;
	}



	void PostGameDataFrame(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& broadcastID, const struct FString& FrameData);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame");
		return ptr;
	}



	class USteamCoreWebAsyncActionPostGameDataFrame* STATIC_PostGameDataFrameAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& broadcastID, const struct FString& FrameData);
};

// Class SteamCoreWeb.WebCheatReporting
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebCheatReporting : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebCheatReporting");
		return ptr;
	}



	void StartSecureMultiplayerSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
	void RequestVacStatusForUser(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID);
	void RequestPlayerGameBan(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& reportID, const struct FString& cheatDescription, int Duration, bool bDelayBan);
	void ReportPlayerCheating(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& steamIDReporter, const struct FString& appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int suspicionStartTime, int Severity);
	void ReportCheatData(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& pathAndFileName, const struct FString& webCheatURL, const struct FString& timeNow, const struct FString& timeStarted, const struct FString& timeStopped, const struct FString& cheatName, int gameProcessID, int cheatProcessID, const struct FString& cheatParam1, const struct FString& cheatParam2);
	void RemovePlayerGameBan(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
	void GetCheatingReports(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int timeEnd, int timeBegin, const struct FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const struct FString& SteamID);
	void EndSecureMultiplayerSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating");
		return ptr;
	}



	class USteamCoreWebAsyncActionReportPlayerCheating* STATIC_ReportPlayerCheatingAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& steamIDReporter, const struct FString& appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int suspicionStartTime, int Severity);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan");
		return ptr;
	}



	class USteamCoreWebAsyncActionRequestPlayerGameBan* STATIC_RequestPlayerGameBanAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& reportID, const struct FString& cheatDescription, int Duration, bool bDelayBan);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan");
		return ptr;
	}



	class USteamCoreWebAsyncActionRemovePlayerGameBan* STATIC_RemovePlayerGameBanAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetCheatingReports* STATIC_GetCheatingReportsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int timeEnd, int timeBegin, const struct FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData");
		return ptr;
	}



	class USteamCoreWebAsyncActionReportCheatData* STATIC_ReportCheatDataAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& pathAndFileName, const struct FString& webCheatURL, const struct FString& timeNow, const struct FString& timeStarted, const struct FString& timeStopped, const struct FString& cheatName, int gameProcessID, int cheatProcessID, const struct FString& cheatParam1, const struct FString& cheatParam2);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser");
		return ptr;
	}



	class USteamCoreWebAsyncActionRequestVacStatusForUser* STATIC_RequestVacStatusForUserAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession");
		return ptr;
	}



	class USteamCoreWebAsyncActionStartSecureMultiplayerSession* STATIC_StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession");
		return ptr;
	}



	class USteamCoreWebAsyncActionEndSecureMultiplayerSession* STATIC_EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID);
};

// Class SteamCoreWeb.WebEconMarketService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebEconMarketService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebEconMarketService");
		return ptr;
	}



	void GetPopular(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& Language, int rows, int Start, int filterAppID, int eCurrency);
	void GetMarketEligibility(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void GetAssetID(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& listingID);
	void CancelAppListingsForUser(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, bool bSynchronous);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetMarketEligibility* STATIC_GetMarketEligibilityAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser");
		return ptr;
	}



	class USteamCoreWebAsyncActionCancelAppListingsForUser* STATIC_CancelAppListingsForUserAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, bool bSynchronous);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetAssetID* STATIC_GetAssetIDAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& listingID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPopular* STATIC_GetPopularAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& Language, int rows, int Start, int filterAppID, int eCurrency);
};

// Class SteamCoreWeb.WebEconService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebEconService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebEconService");
		return ptr;
	}



	void GetTradeOffersSummary(const struct FScriptDelegate& callback, const struct FString& Key, int timeLastVisit);
	void GetTradeOffers(const struct FScriptDelegate& callback, const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int timeHistoricalCutoff);
	void GetTradeOffer(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& tradeOfferID, const struct FString& Language);
	void GetTradeHistory(const struct FScriptDelegate& callback, const struct FString& Key, int maxTrades, int startAfterTime, const struct FString& startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal);
	void FlushInventoryCache(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID);
	void FlushContextCache(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
	void FlushAssetAppearanceCache(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
	void DeclineTradeOffer(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& tradeOfferID);
	void CancelTradeOffer(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& tradeOfferID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetTradeHistory* STATIC_GetTradeHistoryAsync(class UObject* WorldContextObject, const struct FString& Key, int maxTrades, int startAfterTime, const struct FString& startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache");
		return ptr;
	}



	class USteamCoreWebAsyncActionFlushInventoryCache* STATIC_FlushInventoryCacheAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache");
		return ptr;
	}



	class USteamCoreWebAsyncActionFlushAssetAppearanceCache* STATIC_FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache");
		return ptr;
	}



	class USteamCoreWebAsyncActionFlushContextCache* STATIC_FlushContextCacheAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetTradeOffers* STATIC_GetTradeOffersAsync(class UObject* WorldContextObject, const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int timeHistoricalCutoff);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetTradeOffer* STATIC_GetTradeOfferAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& tradeOfferID, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetTradeOffersSummary* STATIC_GetTradeOffersSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, int timeLastVisit);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer");
		return ptr;
	}



	class USteamCoreWebAsyncActionDeclineTradeOffer* STATIC_DeclineTradeOfferAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& tradeOfferID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer");
		return ptr;
	}



	class USteamCoreWebAsyncActionCancelTradeOffer* STATIC_CancelTradeOfferAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& tradeOfferID);
};

// Class SteamCoreWeb.WebGameInventory
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebGameInventory : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebGameInventory");
		return ptr;
	}



	void UpdateItemDefs();
	void SupportGetAssetHistory(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& assetID, const struct FString& contextID);
	void HistoryExecuteCommands(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int ActorId);
	void GetUserHistory(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int StartTime, int EndTime);
	void GetHistoryCommandDetails(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& Command, const struct FString& contextID, const struct FString& arguments);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetHistoryCommandDetails* STATIC_GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& Command, const struct FString& contextID, const struct FString& arguments);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetUserHistory* STATIC_GetUserHistoryAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int StartTime, int EndTime);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand");
		return ptr;
	}



	class USteamCoreWebAsyncActionHistoryExecuteCommand* STATIC_HistoryExecuteCommandAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int ActorId);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory");
		return ptr;
	}



	class USteamCoreWebAsyncActionSupportGetAssetHistory* STATIC_SupportGetAssetHistoryAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& assetID, const struct FString& contextID);
};

// Class SteamCoreWeb.WebGameNotificationsService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebGameNotificationsService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebGameNotificationsService");
		return ptr;
	}



	void UpdateSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& Title, const struct FString& users, const struct FString& SteamID);
	void RequestNotifications(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
	void GetSessionDetailsForApp(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& sessions, int AppID, const struct FString& Language);
	void EnumerateSessionsForApp(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language);
	void DeleteSessionBatch(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SessionID, int AppID);
	void DeleteSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& SteamID);
	void CreateSession(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Context, const struct FString& Title, const struct FString& users, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession");
		return ptr;
	}



	class USteamCoreWebAsyncActionCreateSession* STATIC_CreateSessionAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Context, const struct FString& Title, const struct FString& users, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession");
		return ptr;
	}



	class USteamCoreWebAsyncActionUpdateSession* STATIC_UpdateSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& Title, const struct FString& users, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp");
		return ptr;
	}



	class USteamCoreWebAsyncActionEnumerateSessionsForApp* STATIC_EnumerateSessionsForAppAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetSessionDetailsForApp* STATIC_GetSessionDetailsForAppAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& sessions, int AppID, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications");
		return ptr;
	}



	class USteamCoreWebAsyncActionRequestNotifications* STATIC_RequestNotificationsAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession");
		return ptr;
	}



	class USteamCoreWebAsyncActionDeleteSession* STATIC_DeleteSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch");
		return ptr;
	}



	class USteamCoreWebAsyncActionDeleteSessionBatch* STATIC_DeleteSessionBatchAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SessionID, int AppID);
};

// Class SteamCoreWeb.WebGameServersService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebGameServersService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebGameServersService");
		return ptr;
	}



	void SetMemo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& memo);
	void SetBanStatus(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, bool bBanned, int banSeconds);
	void ResetLoginToken(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void QueryLoginToken(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& loginToken);
	void GetServerSteamIDsByIP(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& serverIP);
	void GetServerIPsBySteamID(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& serverSteamID);
	void GetAccountPublicInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void GetAccountList(const struct FScriptDelegate& callback, const struct FString& Key);
	void DeleteAccount(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void CreateAccount(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& memo);
};

// Class SteamCoreWeb.WebInventoryService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebInventoryService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebInventoryService");
		return ptr;
	}



	void ModifyItems(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& inputJson, const struct FString& SteamID, int Timestamp, const struct FString& updates);
	void GetQuantity(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce);
	void GetPriceSheet(const struct FScriptDelegate& callback, const struct FString& Key, int Currency);
	void GetItemDefs(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& modifiedSince, TArray<int> itemdefIDs, TArray<int> workshopIDs, int cacheMaxAgeSeconds);
	void GetInventory(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID);
	void ExchangeItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> materialsItemID, TArray<int> materialsQuantity, const struct FString& outputItemdefID);
	void ConsumeItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& ItemId, const struct FString& Quantity, const struct FString& SteamID, const struct FString& RequestID);
	void Consolidate(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce);
	void AddPromoItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID);
	void AddItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, TArray<int> itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID, bool bTradeRestriction);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem");
		return ptr;
	}



	class USteamCoreWebAsyncActionAddItem* STATIC_AddItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, TArray<int> itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID, bool bTradeRestriction);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem");
		return ptr;
	}



	class USteamCoreWebAsyncActionAddPromoItem* STATIC_AddPromoItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem");
		return ptr;
	}



	class USteamCoreWebAsyncActionConsumeItem* STATIC_ConsumeItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& ItemId, const struct FString& Quantity, const struct FString& SteamID, const struct FString& RequestID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem");
		return ptr;
	}



	class USteamCoreWebAsyncActionExchangeItem* STATIC_ExchangeItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> materialsItemID, TArray<int> materialsQuantity, const struct FString& outputItemdefID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetInventory* STATIC_GetInventoryAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetItemDefs* STATIC_GetItemDefsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& modifiedSince, TArray<int> itemdefIDs, TArray<int> workshopIDs, int cacheMaxAgeSeconds);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPriceSheet* STATIC_GetPriceSheetAsync(class UObject* WorldContextObject, const struct FString& Key, int Currency);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate");
		return ptr;
	}



	class USteamCoreWebAsyncActionConsolidate* STATIC_ConsolidateAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetQuantity* STATIC_GetQuantityAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems");
		return ptr;
	}



	class USteamCoreWebAsyncActionModifyItems* STATIC_ModifyItemsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& inputJson, const struct FString& SteamID, int Timestamp, const struct FString& updates);
};

// Class SteamCoreWeb.WebLeaderboards
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebLeaderboards : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebLeaderboards");
		return ptr;
	}



	void SetLeaderboardScore(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int leaderbordID, const struct FString& SteamID, int Score, TArray<unsigned char> Details, const struct FString& scoreMethod);
	void ResetLeaderboard(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int leaderbordID);
	void GetLeaderboardsForGame(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
	void GetLeaderboardEntries(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int rangeStart, int rangeEnd, int leaderboardID, int dataRequest, const struct FString& SteamID);
	void FindOrCreateLeaderboard(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
	void DeleteLeaderboard(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Name);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard");
		return ptr;
	}



	class USteamCoreWebAsyncActionDeleteLeaderboard* STATIC_DeleteLeaderboardAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Name);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard");
		return ptr;
	}



	class USteamCoreWebAsyncActionFindOrCreateLeaderboard* STATIC_FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetLeaderboardEntries* STATIC_GetLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int rangeStart, int rangeEnd, int leaderboardID, int dataRequest, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetLeaderboardsForGame* STATIC_GetLeaderboardsForGameAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard");
		return ptr;
	}



	class USteamCoreWebAsyncActionResetLeaderboard* STATIC_ResetLeaderboardAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int leaderbordID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore");
		return ptr;
	}



	class USteamCoreWebAsyncActionSetLeaderboardScore* STATIC_SetLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int leaderbordID, const struct FString& SteamID, int Score, TArray<unsigned char> Details, const struct FString& scoreMethod);
};

// Class SteamCoreWeb.WebLobbyMatchmakingService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebLobbyMatchmakingService");
		return ptr;
	}



	void RemoveUserFromLobby(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& steamIDToRemove, const struct FString& SteamIDLobby, const struct FString& inputJson);
	void CreateLobby(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int maxMembers, SteamCoreWeb_ESteamCoreWebLobbyType lobbyType, const struct FString& lobbyName, const struct FString& inputJson, TArray<struct FString> steamIDInvitedMembers, const struct FString& lobbyMetaData);
};

// Class SteamCoreWeb.WebMicroTxn
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebMicroTxn : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebMicroTxn");
		return ptr;
	}



	void RefundTxn(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, int AppID);
	void QueryTxn(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& OrderId, const struct FString& transID);
	void ProcessAgreement(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, const struct FString& agreementID, int AppID, int Amount, const struct FString& Currency);
	struct FString STATIC_MakeTransactionID();
	void InitTxn(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, int AppID, const struct FString& Language, const struct FString& Currency, const struct FString& userSession, const struct FString& ipaddress, TArray<int> ItemId, TArray<int> Quantity, TArray<struct FString> Amount, TArray<struct FString> Description, TArray<struct FString> Category, TArray<int> associatedBundle, TArray<struct FString> billingType, TArray<struct FString> startDate, TArray<struct FString> endDate, TArray<struct FString> Period, TArray<int> Frequency, TArray<struct FString> recurringAmt, TArray<int> bundleCount, TArray<int> bundleID, TArray<int> bundleQty, TArray<struct FString> bundleDesc, TArray<struct FString> bundleCategory);
	void GetUserInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int ipaddress);
	void GetUserAgreementInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
	void GetReport(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Time, const struct FString& Type, int MaxResults);
	void FinalizeTxn(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, int AppID);
	void CancelAgreement(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID);
	void AdjustAgreement(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID, const struct FString& nextProcessDate);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement");
		return ptr;
	}



	class USteamCoreWebAsyncActionAdjustAgreement* STATIC_AdjustAgreementAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID, const struct FString& nextProcessDate);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement");
		return ptr;
	}



	class USteamCoreWebAsyncActionCancelAgreement* STATIC_CancelAgreementAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn");
		return ptr;
	}



	class USteamCoreWebAsyncActionFinalizeTxn* STATIC_FinalizeTxnAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetReport* STATIC_GetReportAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Time, const struct FString& Type, int MaxResults);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetUserAgreementInfo* STATIC_GetUserAgreementInfoAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetUserInfo* STATIC_GetUserInfoAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int ipaddress);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn");
		return ptr;
	}



	class USteamCoreWebAsyncActionInitTxn* STATIC_InitTxnAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, int AppID, const struct FString& Language, const struct FString& Currency, const struct FString& userSession, const struct FString& ipaddress, TArray<int> ItemId, TArray<int> Quantity, TArray<struct FString> Amount, TArray<struct FString> Description, TArray<struct FString> Category, TArray<int> associatedBundle, TArray<struct FString> billingType, TArray<struct FString> startDate, TArray<struct FString> endDate, TArray<struct FString> Period, TArray<int> Frequency, TArray<struct FString> recurringAmt, TArray<int> bundleCount, TArray<int> bundleID, TArray<int> bundleQty, TArray<struct FString> bundleDesc, TArray<struct FString> bundleCategory);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement");
		return ptr;
	}



	class USteamCoreWebAsyncActionProcessAgreement* STATIC_ProcessAgreementAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, const struct FString& agreementID, int AppID, int Amount, const struct FString& Currency);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn");
		return ptr;
	}



	class USteamCoreWebAsyncActionQueryTxn* STATIC_QueryTxnAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& OrderId, const struct FString& transID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn");
		return ptr;
	}



	class USteamCoreWebAsyncActionRefundTxn* STATIC_RefundTxnAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, int AppID);
};

// Class SteamCoreWeb.WebPlayerService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebPlayerService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebPlayerService");
		return ptr;
	}



	void IsPlayingSharedGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int appIDplaying);
	void GetSteamLevel(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void GetRecentlyPlayedGames(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int Count);
	void GetOwnedGames(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> Filter);
	void GetCommunityBadgeProgress(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int badgeID);
	void GetBadges(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetRecentlyPlayedGames* STATIC_GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int Count);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetOwnedGames* STATIC_GetOwnedGamesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> Filter);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetSteamLevel* STATIC_GetSteamLevelAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetBadges* STATIC_GetBadgesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetCommunityBadgeProgress* STATIC_GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int badgeID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame");
		return ptr;
	}



	class USteamCoreWebAsyncActionIsPlayingSharedGame* STATIC_IsPlayingSharedGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int appIDplaying);
};

// Class SteamCoreWeb.WebPublishedFileService
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebPublishedFileService : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebPublishedFileService");
		return ptr;
	}



	void UpdateTags(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, const struct FString& addTags, const struct FString& removeTags);
	void UpdateIncompatibleStatus(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, bool bIncompatible);
	void UpdateBanStatus(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, bool bBanned, const struct FString& Reason);
	void SetDeveloperMetadata(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, const struct FString& MetaData);
	void QueryFiles(const struct FScriptDelegate& callback, const struct FString& Key, int QueryType, int page, const struct FString& Cursor, int numPerPage, int CreatorAppID, int AppID, const struct FString& requiredTags, const struct FString& excludedTags, bool bMatchAllTags, const struct FString& requiredFlags, const struct FString& omittedFlags, const struct FString& SearchText, int FileType, const struct FString& ChildPublishedFileId, int days, bool bIncludeRecentVotesOnly, int cacheMaxAgeSeconds, int Language, const struct FString& requiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int returnPlaytimeStats);
};

// Class SteamCoreWeb.WebSteamPublishedItemSearch
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamPublishedItemSearch");
		return ptr;
	}



	void ResultSetSummary(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag);
	void RankedByVote(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag);
	void RankedByTrend(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, int days, TArray<struct FString> Tag, TArray<struct FString> UserTag);
	void RankedByPublicationOrder(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder");
		return ptr;
	}



	class USteamCoreWebAsyncActionRankedByPublicationOrder* STATIC_RankedByPublicationOrderAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend");
		return ptr;
	}



	class USteamCoreWebAsyncActionRankedByTrend* STATIC_RankedByTrendAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, int days, TArray<struct FString> Tag, TArray<struct FString> UserTag);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote");
		return ptr;
	}



	class USteamCoreWebAsyncActionRankedByVote* STATIC_RankedByVoteAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary");
		return ptr;
	}



	class USteamCoreWebAsyncActionResultSetSummary* STATIC_ResultSetSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag);
};

// Class SteamCoreWeb.WebPublishedItemVoting
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebPublishedItemVoting : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebPublishedItemVoting");
		return ptr;
	}



	void UserVoteSummary(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, TArray<struct FString> publishedFileIDs);
	void ItemVoteSummary(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> publishedFileIDs);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary");
		return ptr;
	}



	class USteamCoreWebAsyncActionItemVoteSummary* STATIC_ItemVoteSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> publishedFileIDs);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary");
		return ptr;
	}



	class USteamCoreWebAsyncActionUserVoteSummary* STATIC_UserVoteSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, TArray<struct FString> publishedFileIDs);
};

// Class SteamCoreWeb.WebRemoteStorage
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebRemoteStorage : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebRemoteStorage");
		return ptr;
	}



	void UnsubscribePublishedFile(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID);
	void SubscribePublishedFile(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID);
	void SetUGCUsedByGC(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID, bool bUsed);
	void GetUGCFileDetails(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID);
	void GetPublishedFileDetails(const struct FScriptDelegate& callback, const struct FString& PublishedFileID);
	void GetCollectionDetails(const struct FScriptDelegate& callback, TArray<struct FString> publishedFileIDs);
	void EnumerateUserSubscribedFiles(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int listType);
	void EnumerateUserPublishedFiles(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles");
		return ptr;
	}



	class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* STATIC_EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles");
		return ptr;
	}



	class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* STATIC_EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int listType);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetCollectionDetails* STATIC_GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<struct FString> publishedFileIDs);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPublishedFileDetails* STATIC_GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const struct FString& PublishedFileID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetUGCFileDetails* STATIC_GetUGCFileDetailsAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC");
		return ptr;
	}



	class USteamCoreWebAsyncActionSetUGCUsedByGC* STATIC_SetUGCUsedByGCAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID, bool bUsed);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile");
		return ptr;
	}



	class USteamCoreWebAsyncActionSubscribePublishedFile* STATIC_SubscribePublishedFileAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile");
		return ptr;
	}



	class USteamCoreWebAsyncActionUnsubscribePublishedFile* STATIC_UnsubscribePublishedFileAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID);
};

// Class SteamCoreWeb.WebSteamCommunity
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebSteamCommunity : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamCommunity");
		return ptr;
	}



	void ReportAbuse(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& steamIDActor, const struct FString& steamIDTarget, int AppID, int abuseType, int contentType, const struct FString& Description, const struct FString& gid);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse");
		return ptr;
	}



	class USteamCoreWebAsyncActionReportAbuse* STATIC_ReportAbuseAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& steamIDActor, const struct FString& steamIDTarget, int AppID, int abuseType, int contentType, const struct FString& Description, const struct FString& gid);
};

// Class SteamCoreWeb.WebSteamEconomy
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebSteamEconomy : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamEconomy");
		return ptr;
	}



	void StartTrade(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& steamID1, const struct FString& steamID2);
	void StartAssetTransaction(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& assetID, int assetQuantity, const struct FString& Currency, const struct FString& Language, const struct FString& ipaddress, const struct FString& referer, bool bClientAuth);
	void GetMarketPrices(const struct FScriptDelegate& callback, const struct FString& Key, int AppID);
	void GetExportedAssetsForUser(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID);
	void GetAssetPrices(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language);
	void GetAssetClassInfo(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Language, int classCount, const struct FString& classID, const struct FString& InstanceID);
	void FinalizeAssetTransaction(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& txnID, const struct FString& Language);
	void CanTrade(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& TargetId);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade");
		return ptr;
	}



	class USteamCoreWebAsyncActionCanTrade* STATIC_CanTradeAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& TargetId);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction");
		return ptr;
	}



	class USteamCoreWebAsyncActionFinalizeAssetTransaction* STATIC_FinalizeAssetTransactionAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& txnID, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetAssetClassInfo* STATIC_GetAssetClassInfoAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Language, int classCount, const struct FString& classID, const struct FString& InstanceID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetAssetPrices* STATIC_GetAssetPricesAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetExportedAssetsForUser* STATIC_GetExportedAssetsForUserAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetMarketPrices* STATIC_GetMarketPricesAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction");
		return ptr;
	}



	class USteamCoreWebAsyncActionStartAssetTransaction* STATIC_StartAssetTransactionAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& assetID, int assetQuantity, const struct FString& Currency, const struct FString& Language, const struct FString& ipaddress, const struct FString& referer, bool bClientAuth);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade");
		return ptr;
	}



	class USteamCoreWebAsyncActionStartTrade* STATIC_StartTradeAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& steamID1, const struct FString& steamID2);
};

// Class SteamCoreWeb.WebSteamGameServerStats
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebSteamGameServerStats : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamGameServerStats");
		return ptr;
	}



	void GetGameServerPlayerStatsForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& GameID, int AppID, const struct FString& rangeStart, const struct FString& rangeEnd, int MaxResults);
};

// Class SteamCoreWeb.WebSteamNews
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebSteamNews : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamNews");
		return ptr;
	}



	void GetNewsForAppAuthed(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count);
	void GetNewsForApp(const struct FScriptDelegate& callback, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetNewsForApp* STATIC_GetNewsForAppAsync(class UObject* WorldContextObject, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetNewsForAppAuthed* STATIC_GetNewsForAppAuthedAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count);
};

// Class SteamCoreWeb.WebSteamUser
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebSteamUser : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamUser");
		return ptr;
	}



	void ResolveVanityURL(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& vanityURL, SteamCoreWeb_EVanityUrlType urlType);
	void GrantPackage(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int packageID, const struct FString& ipaddress, const struct FString& thirdPartyKey, int thirdPartyAppID);
	void GetUserGroupList(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void GetPublisherAppOwnershipChanges(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& packageRowVersion, const struct FString& cdkeyRowVersion);
	void GetPublisherAppOwnership(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID);
	void GetPlayerSummaries(const struct FScriptDelegate& callback, const struct FString& Key, TArray<struct FString> SteamIDs);
	void GetPlayerBans(const struct FScriptDelegate& callback, const struct FString& Key, TArray<struct FString> SteamIDs);
	void GetFriendList(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& relationship);
	void GetAppPriceInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, TArray<int> AppIDs);
	void CheckAppOwnership(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership");
		return ptr;
	}



	class USteamCoreWebAsyncActionCheckAppOwnership* STATIC_CheckAppOwnershipAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetAppPriceInfo* STATIC_GetAppPriceInfoAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, TArray<int> AppIDs);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetFriendList* STATIC_GetFriendListAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& relationship);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPlayerBans* STATIC_GetPlayerBansAsync(class UObject* WorldContextObject, const struct FString& Key, TArray<struct FString> SteamIDs);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPlayerSummaries* STATIC_GetPlayerSummariesAsync(class UObject* WorldContextObject, const struct FString& Key, TArray<struct FString> SteamIDs);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPublisherAppOwnership* STATIC_GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* STATIC_GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& packageRowVersion, const struct FString& cdkeyRowVersion);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetUserGroupList* STATIC_GetUserGroupListAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage");
		return ptr;
	}



	class USteamCoreWebAsyncActionGrantPackage* STATIC_GrantPackageAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int packageID, const struct FString& ipaddress, const struct FString& thirdPartyKey, int thirdPartyAppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL");
		return ptr;
	}



	class USteamCoreWebAsyncActionResolveVanityURL* STATIC_ResolveVanityURLAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& vanityURL, SteamCoreWeb_EVanityUrlType urlType);
};

// Class SteamCoreWeb.WebUserAuth
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebUserAuth : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebUserAuth");
		return ptr;
	}



	void AuthenticateUserTicket(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& ticket);
	void AuthenticateUser(const struct FScriptDelegate& callback, const struct FString& SteamID, TArray<unsigned char> sessionKey, TArray<unsigned char> encryptedLoginKey);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser");
		return ptr;
	}



	class USteamCoreWebAsyncActionAuthenticateUser* STATIC_AuthenticateUserAsync(class UObject* WorldContextObject, const struct FString& SteamID, TArray<unsigned char> sessionKey, TArray<unsigned char> encryptedLoginKey);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket");
		return ptr;
	}



	class USteamCoreWebAsyncActionAuthenticateUserTicket* STATIC_AuthenticateUserTicketAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& ticket);
};

// Class SteamCoreWeb.WebUserStats
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UWebUserStats : public USteamCoreWebSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.WebUserStats");
		return ptr;
	}



	void SetUserStatsForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> Names, TArray<int> Values);
	void GetUserStatsForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID);
	void GetSchemaForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language);
	void GetPlayerAchievements(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language);
	void GetNumberOfCurrentPlayers(const struct FScriptDelegate& callback, int AppID);
	void GetGlobalStatsForGame(const struct FScriptDelegate& callback, int AppID, TArray<struct FString> Names, int startDate, int endDate);
	void GetGlobalAchievementPercentagesForApp(const struct FScriptDelegate& callback, const struct FString& GameID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* STATIC_GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const struct FString& GameID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetGlobalStatsForGame* STATIC_GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int AppID, TArray<struct FString> Names, int startDate, int endDate);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* STATIC_GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetPlayerAchievements* STATIC_GetPlayerAchievementsAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetSchemaForGame* STATIC_GetSchemaForGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame");
		return ptr;
	}



	class USteamCoreWebAsyncActionGetUserStatsForGame* STATIC_GetUserStatsForGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID);
};

// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame");
		return ptr;
	}



	class USteamCoreWebAsyncActionSetUserStatsForGame* STATIC_SetUserStatsForGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> Names, TArray<int> Values);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
