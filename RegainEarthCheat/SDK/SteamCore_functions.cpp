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

// Function SteamCore.AppList.GetNumInstalledApps
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAppList::GetNumInstalledApps()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetNumInstalledApps");

	UAppList_GetNumInstalledApps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.AppList.GetInstalledApps
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    AppIDs                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            maxAppIDs                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAppList::GetInstalledApps(TArray<int>* AppIDs, int maxAppIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetInstalledApps");

	UAppList_GetInstalledApps_Params params;
	params.maxAppIDs = maxAppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppIDs != nullptr)
		*AppIDs = params.AppIDs;


	return params.ReturnValue;
}


// Function SteamCore.AppList.GetAppName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAppList::GetAppName(int AppID, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetAppName");

	UAppList_GetAppName_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function SteamCore.AppList.GetAppInstallDir
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Directory                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAppList::GetAppInstallDir(int AppID, struct FString* Directory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetAppInstallDir");

	UAppList_GetAppInstallDir_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Directory != nullptr)
		*Directory = params.Directory;


	return params.ReturnValue;
}


// Function SteamCore.AppList.GetAppBuildId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAppList::GetAppBuildId(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetAppBuildId");

	UAppList_GetAppBuildId_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.UninstallDLC
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UApps::STATIC_UninstallDLC(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.UninstallDLC");

	UApps_UninstallDLC_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Apps.MarkContentCorrupt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bMissingFilesOnly              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_MarkContentCorrupt(bool bMissingFilesOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.MarkContentCorrupt");

	UApps_MarkContentCorrupt_Params params;
	params.bMissingFilesOnly = bMissingFilesOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.InstallDLC
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UApps::STATIC_InstallDLC(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.InstallDLC");

	UApps_InstallDLC_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Apps.GetLaunchQueryParam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UApps::STATIC_GetLaunchQueryParam(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetLaunchQueryParam");

	UApps_GetLaunchQueryParam_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetLaunchCommandLine
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 commandLine                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UApps::STATIC_GetLaunchCommandLine(struct FString* commandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetLaunchCommandLine");

	UApps_GetLaunchCommandLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (commandLine != nullptr)
		*commandLine = params.commandLine;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetInstalledDepots
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxDepots                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    depots                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UApps::STATIC_GetInstalledDepots(int AppID, int maxDepots, TArray<int>* depots)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetInstalledDepots");

	UApps_GetInstalledDepots_Params params;
	params.AppID = AppID;
	params.maxDepots = maxDepots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (depots != nullptr)
		*depots = params.depots;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetFileDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UApps::GetFileDetails(const struct FScriptDelegate& callback, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetFileDetails");

	UApps_GetFileDetails_Params params;
	params.callback = callback;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Apps.GetEarliestPurchaseUnixTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UApps::STATIC_GetEarliestPurchaseUnixTime(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetEarliestPurchaseUnixTime");

	UApps_GetEarliestPurchaseUnixTime_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetDlcDownloadProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesDownloaded                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesTotal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_GetDlcDownloadProgress(int AppID, int* bytesDownloaded, int* bytesTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetDlcDownloadProgress");

	UApps_GetDlcDownloadProgress_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bytesDownloaded != nullptr)
		*bytesDownloaded = params.bytesDownloaded;
	if (bytesTotal != nullptr)
		*bytesTotal = params.bytesTotal;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetDLCCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UApps::STATIC_GetDLCCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetDLCCount");

	UApps_GetDLCCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetCurrentGameLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UApps::STATIC_GetCurrentGameLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetCurrentGameLanguage");

	UApps_GetCurrentGameLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetCurrentBetaName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_GetCurrentBetaName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetCurrentBetaName");

	UApps_GetCurrentBetaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetAvailableGameLanguages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UApps::STATIC_GetAvailableGameLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAvailableGameLanguages");

	UApps_GetAvailableGameLanguages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetAppOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UApps::STATIC_GetAppOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAppOwner");

	UApps_GetAppOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetAppInstallDir
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 folder                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UApps::STATIC_GetAppInstallDir(int AppID, struct FString* folder)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAppInstallDir");

	UApps_GetAppInstallDir_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (folder != nullptr)
		*folder = params.folder;


	return params.ReturnValue;
}


// Function SteamCore.Apps.GetAppBuildId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UApps::STATIC_GetAppBuildId()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAppBuildId");

	UApps_GetAppBuildId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsVACBanned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsVACBanned()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsVACBanned");

	UApps_BIsVACBanned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsSubscribedFromFreeWeekend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsSubscribedFromFreeWeekend()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribedFromFreeWeekend");

	UApps_BIsSubscribedFromFreeWeekend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsSubscribedFromFamilySharing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsSubscribedFromFamilySharing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribedFromFamilySharing");

	UApps_BIsSubscribedFromFamilySharing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsSubscribedApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsSubscribedApp(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribedApp");

	UApps_BIsSubscribedApp_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsSubscribed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsSubscribed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribed");

	UApps_BIsSubscribed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsLowViolence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsLowViolence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsLowViolence");

	UApps_BIsLowViolence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsDlcInstalled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsDlcInstalled(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsDlcInstalled");

	UApps_BIsDlcInstalled_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsCybercafe
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsCybercafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsCybercafe");

	UApps_BIsCybercafe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BIsAppInstalled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BIsAppInstalled(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsAppInstalled");

	UApps_BIsAppInstalled_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Apps.BGetDLCDataByIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            dlc                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAvailable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UApps::STATIC_BGetDLCDataByIndex(int dlc, int* AppID, bool* bAvailable, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BGetDLCDataByIndex");

	UApps_BGetDLCDataByIndex_Params params;
	params.dlc = dlc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (bAvailable != nullptr)
		*bAvailable = params.bAvailable;
	if (Name != nullptr)
		*Name = params.Name;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFileDetailsResult      Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreAppsAsyncActionGetFileDetails::HandleCallback(const struct FFileDetailsResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback");

	USteamCoreAppsAsyncActionGetFileDetails_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetFileDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetFileDetails* USteamCoreAppsAsyncActionGetFileDetails::STATIC_GetFileDetailsAsync(class UObject* WorldContextObject, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync");

	USteamCoreAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.SetRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_SetRichPresence(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetRichPresence");

	UFriends_SetRichPresence_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.SetPlayedWith
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                steamIDUserPlayedWith          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_SetPlayedWith(const struct FSteamID& steamIDUserPlayedWith)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetPlayedWith");

	UFriends_SetPlayedWith_Params params;
	params.steamIDUserPlayedWith = steamIDUserPlayedWith;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.SetPersonaName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::SetPersonaName(const struct FScriptDelegate& callback, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetPersonaName");

	UFriends_SetPersonaName_Params params;
	params.callback = callback;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.SetListenForFriendsMessages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bInterceptEnabled              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_SetListenForFriendsMessages(bool bInterceptEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetListenForFriendsMessages");

	UFriends_SetListenForFriendsMessages_Params params;
	params.bInterceptEnabled = bInterceptEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.SetInGameVoiceSpeaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSpeaking                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_SetInGameVoiceSpeaking(const struct FSteamID& SteamIDUser, bool bSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetInGameVoiceSpeaking");

	UFriends_SetInGameVoiceSpeaking_Params params;
	params.SteamIDUser = SteamIDUser;
	params.bSpeaking = bSpeaking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.SendClanChatMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Text                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_SendClanChatMessage(const struct FSteamID& SteamIDClanChat, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SendClanChatMessage");

	UFriends_SendClanChatMessage_Params params;
	params.SteamIDClanChat = SteamIDClanChat;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.RequestUserInformation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRequireNameOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_RequestUserInformation(const struct FSteamID& SteamIDUser, bool bRequireNameOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RequestUserInformation");

	UFriends_RequestUserInformation_Params params;
	params.SteamIDUser = SteamIDUser;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.RequestFriendRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_RequestFriendRichPresence(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RequestFriendRichPresence");

	UFriends_RequestFriendRichPresence_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.RequestClanOfficerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::RequestClanOfficerList(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RequestClanOfficerList");

	UFriends_RequestClanOfficerList_Params params;
	params.callback = callback;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.ReplyToFriendMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 msgToSend                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_ReplyToFriendMessage(const struct FSteamID& SteamIDFriend, const struct FString& msgToSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ReplyToFriendMessage");

	UFriends_ReplyToFriendMessage_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.msgToSend = msgToSend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.OpenClanChatWindowInSteam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_OpenClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.OpenClanChatWindowInSteam");

	UFriends_OpenClanChatWindowInSteam_Params params;
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.LeaveClanChatRoom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_LeaveClanChatRoom(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.LeaveClanChatRoom");

	UFriends_LeaveClanChatRoom_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.JoinClanChatRoom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::JoinClanChatRoom(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.JoinClanChatRoom");

	UFriends_JoinClanChatRoom_Params params;
	params.callback = callback;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.IsUserInSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDSource                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_IsUserInSource(const struct FSteamID& SteamIDUser, const struct FSteamID& steamIDSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsUserInSource");

	UFriends_IsUserInSource_Params params;
	params.SteamIDUser = SteamIDUser;
	params.steamIDSource = steamIDSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.IsFollowing
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::IsFollowing(const struct FScriptDelegate& callback, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsFollowing");

	UFriends_IsFollowing_Params params;
	params.callback = callback;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.IsClanPublic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_IsClanPublic(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanPublic");

	UFriends_IsClanPublic_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.IsClanOfficialGameGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_IsClanOfficialGameGroup(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanOfficialGameGroup");

	UFriends_IsClanOfficialGameGroup_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.IsClanChatWindowOpenInSteam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_IsClanChatWindowOpenInSteam(const struct FSteamID& SteamIDClanChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanChatWindowOpenInSteam");

	UFriends_IsClanChatWindowOpenInSteam_Params params;
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.IsClanChatAdmin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_IsClanChatAdmin(const struct FSteamID& SteamIDClanChat, const struct FSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanChatAdmin");

	UFriends_IsClanChatAdmin_Params params;
	params.SteamIDClanChat = SteamIDClanChat;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.InviteUserToGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ConnectString                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_InviteUserToGame(const struct FSteamID& SteamIDFriend, const struct FString& ConnectString)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.InviteUserToGame");

	UFriends_InviteUserToGame_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.ConnectString = ConnectString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.HasFriend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamFriendFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_HasFriend(const struct FSteamID& SteamIDFriend, TArray<SteamCore_ESteamFriendFlags> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.HasFriend");

	UFriends_HasFriend_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetUserRestrictions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<SteamCore_ESteamUserRestriction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<SteamCore_ESteamUserRestriction> UFriends::STATIC_GetUserRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetUserRestrictions");

	UFriends_GetUserRestrictions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetSmallFriendAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UFriends::STATIC_GetSmallFriendAvatar(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetSmallFriendAvatar");

	UFriends_GetSmallFriendAvatar_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetPlayerNickname_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                SteamIDPlayer                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetPlayerNickname_Pure(const struct FSteamID& SteamIDPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPlayerNickname_Pure");

	UFriends_GetPlayerNickname_Pure_Params params;
	params.SteamIDPlayer = SteamIDPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetPlayerNickname
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDPlayer                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetPlayerNickname(const struct FSteamID& SteamIDPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPlayerNickname");

	UFriends_GetPlayerNickname_Params params;
	params.SteamIDPlayer = SteamIDPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetPersonaState_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// SteamCore_ESteamPersonaState   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamPersonaState UFriends::STATIC_GetPersonaState_Pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaState_Pure");

	UFriends_GetPersonaState_Pure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetPersonaState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamPersonaState   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamPersonaState UFriends::STATIC_GetPersonaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaState");

	UFriends_GetPersonaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetPersonaName_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetPersonaName_Pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaName_Pure");

	UFriends_GetPersonaName_Pure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetPersonaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaName");

	UFriends_GetPersonaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetMediumFriendAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UFriends::STATIC_GetMediumFriendAvatar(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetMediumFriendAvatar");

	UFriends_GetMediumFriendAvatar_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetLargeFriendAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UFriends::STATIC_GetLargeFriendAvatar(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetLargeFriendAvatar");

	UFriends_GetLargeFriendAvatar_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendSteamLevel(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendSteamLevel");

	UFriends_GetFriendSteamLevel_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendsGroupName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamFriendsGroupID    friendsGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetFriendsGroupName(const struct FSteamFriendsGroupID& friendsGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupName");

	UFriends_GetFriendsGroupName_Params params;
	params.friendsGroupID = friendsGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendsGroupMembersList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamFriendsGroupID    friendsGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>        steamIDMembers                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            membersCount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_GetFriendsGroupMembersList(const struct FSteamFriendsGroupID& friendsGroupID, TArray<struct FSteamID>* steamIDMembers, int membersCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupMembersList");

	UFriends_GetFriendsGroupMembersList_Params params;
	params.friendsGroupID = friendsGroupID;
	params.membersCount = membersCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (steamIDMembers != nullptr)
		*steamIDMembers = params.steamIDMembers;

}


// Function SteamCore.Friends.GetFriendsGroupMembersCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamFriendsGroupID    friendsGroupID                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendsGroupMembersCount(const struct FSteamFriendsGroupID& friendsGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupMembersCount");

	UFriends_GetFriendsGroupMembersCount_Params params;
	params.friendsGroupID = friendsGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendsGroupIDByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            friendGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamFriendsGroupID    ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamFriendsGroupID UFriends::STATIC_GetFriendsGroupIDByIndex(int friendGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupIDByIndex");

	UFriends_GetFriendsGroupIDByIndex_Params params;
	params.friendGroup = friendGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendsGroupCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendsGroupCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupCount");

	UFriends_GetFriendsGroupCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendRichPresenceKeyCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendRichPresenceKeyCount(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRichPresenceKeyCount");

	UFriends_GetFriendRichPresenceKeyCount_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetFriendRichPresenceKeyByIndex(const struct FSteamID& SteamIDFriend, int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex");

	UFriends_GetFriendRichPresenceKeyByIndex_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetFriendRichPresence(const struct FSteamID& SteamIDFriend, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRichPresence");

	UFriends_GetFriendRichPresence_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendRelationship
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamFriendRelationship ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamFriendRelationship UFriends::STATIC_GetFriendRelationship(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRelationship");

	UFriends_GetFriendRelationship_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendPersonaState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamPersonaState   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamPersonaState UFriends::STATIC_GetFriendPersonaState(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendPersonaState");

	UFriends_GetFriendPersonaState_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendPersonaNameHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            personaName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetFriendPersonaNameHistory(const struct FSteamID& SteamIDFriend, int personaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendPersonaNameHistory");

	UFriends_GetFriendPersonaNameHistory_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.personaName = personaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetFriendPersonaName(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendPersonaName");

	UFriends_GetFriendPersonaName_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendMessage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamChatEntryType  ChatEntryType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendMessage(const struct FSteamID& SteamIDFriend, int MessageID, struct FString* Text, SteamCore_ESteamChatEntryType* ChatEntryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendMessage");

	UFriends_GetFriendMessage_Params params;
	params.SteamIDFriend = SteamIDFriend;
	params.MessageID = MessageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendGamePlayed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamGameID            GameID                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 gameIP                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDLobby                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_GetFriendGamePlayed(const struct FSteamID& SteamIDFriend, struct FSteamGameID* GameID, struct FString* gameIP, int* ConnectionPort, int* QueryPort, struct FSteamID* SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendGamePlayed");

	UFriends_GetFriendGamePlayed_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameID != nullptr)
		*GameID = params.GameID;
	if (gameIP != nullptr)
		*gameIP = params.gameIP;
	if (ConnectionPort != nullptr)
		*ConnectionPort = params.ConnectionPort;
	if (QueryPort != nullptr)
		*QueryPort = params.QueryPort;
	if (SteamIDLobby != nullptr)
		*SteamIDLobby = params.SteamIDLobby;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendFromSourceByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                steamIDSource                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ifriend                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetFriendFromSourceByIndex(const struct FSteamID& steamIDSource, int ifriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendFromSourceByIndex");

	UFriends_GetFriendFromSourceByIndex_Params params;
	params.steamIDSource = steamIDSource;
	params.ifriend = ifriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendCountFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                steamIDSource                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendCountFromSource(const struct FSteamID& steamIDSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCountFromSource");

	UFriends_GetFriendCountFromSource_Params params;
	params.steamIDSource = steamIDSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<SteamCore_ESteamFriendFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendCount(TArray<SteamCore_ESteamFriendFlags> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCount");

	UFriends_GetFriendCount_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendCoplayTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendCoplayTime(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCoplayTime");

	UFriends_GetFriendCoplayTime_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendCoplayGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetFriendCoplayGame(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCoplayGame");

	UFriends_GetFriendCoplayGame_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFriendByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ifriend                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamFriendFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetFriendByIndex(int ifriend, TArray<SteamCore_ESteamFriendFlags> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendByIndex");

	UFriends_GetFriendByIndex_Params params;
	params.ifriend = ifriend;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetFollowerCount
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::GetFollowerCount(const struct FScriptDelegate& callback, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFollowerCount");

	UFriends_GetFollowerCount_Params params;
	params.callback = callback;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.GetCoplayFriendCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetCoplayFriendCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetCoplayFriendCount");

	UFriends_GetCoplayFriendCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetCoplayFriend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            coplayFriend                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetCoplayFriend(int coplayFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetCoplayFriend");

	UFriends_GetCoplayFriend_Params params;
	params.coplayFriend = coplayFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetClanTag(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanTag");

	UFriends_GetClanTag_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetClanOwner(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanOwner");

	UFriends_GetClanOwner_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanOfficerCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetClanOfficerCount(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanOfficerCount");

	UFriends_GetClanOfficerCount_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanOfficerByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            officer                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetClanOfficerByIndex(const struct FSteamID& SteamIDClan, int officer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanOfficerByIndex");

	UFriends_GetClanOfficerByIndex_Params params;
	params.SteamIDClan = SteamIDClan;
	params.officer = officer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriends::STATIC_GetClanName(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanName");

	UFriends_GetClanName_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetClanCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanCount");

	UFriends_GetClanCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanChatMessage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamChatEntryType  ChatEntryType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDChatter                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetClanChatMessage(const struct FSteamID& SteamIDClanChat, int MessageID, struct FString* Text, SteamCore_ESteamChatEntryType* ChatEntryType, struct FSteamID* steamIDChatter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanChatMessage");

	UFriends_GetClanChatMessage_Params params;
	params.SteamIDClanChat = SteamIDClanChat;
	params.MessageID = MessageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;
	if (steamIDChatter != nullptr)
		*steamIDChatter = params.steamIDChatter;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanChatMemberCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFriends::STATIC_GetClanChatMemberCount(const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanChatMemberCount");

	UFriends_GetClanChatMemberCount_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            clan                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetClanByIndex(int clan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanByIndex");

	UFriends_GetClanByIndex_Params params;
	params.clan = clan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetClanActivityCounts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            online                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            inGame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            chatting                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_GetClanActivityCounts(const struct FSteamID& SteamIDClan, int* online, int* inGame, int* chatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanActivityCounts");

	UFriends_GetClanActivityCounts_Params params;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (online != nullptr)
		*online = params.online;
	if (inGame != nullptr)
		*inGame = params.inGame;
	if (chatting != nullptr)
		*chatting = params.chatting;


	return params.ReturnValue;
}


// Function SteamCore.Friends.GetChatMemberByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            User                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UFriends::STATIC_GetChatMemberByIndex(const struct FSteamID& SteamIDClan, int User)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetChatMemberByIndex");

	UFriends_GetChatMemberByIndex_Params params;
	params.SteamIDClan = SteamIDClan;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.EnumerateFollowingList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            startIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::EnumerateFollowingList(const struct FScriptDelegate& callback, int startIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.EnumerateFollowingList");

	UFriends_EnumerateFollowingList_Params params;
	params.callback = callback;
	params.startIndex = startIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.DownloadClanActivityCounts
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>        steamIDClans                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFriends::DownloadClanActivityCounts(const struct FScriptDelegate& callback, TArray<struct FSteamID> steamIDClans)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.DownloadClanActivityCounts");

	UFriends_DownloadClanActivityCounts_Params params;
	params.callback = callback;
	params.steamIDClans = steamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.CloseClanChatWindowInSteam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDClanChat                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFriends::STATIC_CloseClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.CloseClanChatWindowInSteam");

	UFriends_CloseClanChatWindowInSteam_Params params;
	params.SteamIDClanChat = SteamIDClanChat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Friends.ClearRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
void UFriends::STATIC_ClearRichPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ClearRichPresence");

	UFriends_ClearRichPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.ActivateGameOverlayToWebPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamActivateGameOverlayToWebPageMode Mode                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_ActivateGameOverlayToWebPage(const struct FString& URL, SteamCore_ESteamActivateGameOverlayToWebPageMode Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayToWebPage");

	UFriends_ActivateGameOverlayToWebPage_Params params;
	params.URL = URL;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.ActivateGameOverlayToUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 dialog                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_ActivateGameOverlayToUser(const struct FString& dialog, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayToUser");

	UFriends_ActivateGameOverlayToUser_Params params;
	params.dialog = dialog;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.ActivateGameOverlayToStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamOverlayToStoreFlag flag                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_ActivateGameOverlayToStore(int AppID, SteamCore_ESteamOverlayToStoreFlag flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayToStore");

	UFriends_ActivateGameOverlayToStore_Params params;
	params.AppID = AppID;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.ActivateGameOverlayInvitedialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_ActivateGameOverlayInvitedialog(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayInvitedialog");

	UFriends_ActivateGameOverlayInvitedialog_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Friends.ActivateGameOverlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 dialog                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriends::STATIC_ActivateGameOverlay(const struct FString& dialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlay");

	UFriends_ActivateGameOverlay_Params params;
	params.dialog = dialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionSetPersonaName* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionSetPersonaName* USteamCoreFriendsAsyncActionSetPersonaName::STATIC_SetPersonaNameAsync(class UObject* WorldContextObject, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync");

	USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSetPersonaNameResponse Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(const struct FSetPersonaNameResponse& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback");

	USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FDownloadClanActivityCountsResult Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(const struct FDownloadClanActivityCountsResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback");

	USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>        steamIDClans                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::STATIC_DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<struct FSteamID> steamIDClans)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync");

	USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.steamIDClans = steamIDClans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionRequestClanOfficerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::STATIC_RequestClanOfficerListAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync");

	USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FClanOfficerListResponse Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const struct FClanOfficerListResponse& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback");

	USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionJoinClanChatRoom* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionJoinClanChatRoom* USteamCoreFriendsAsyncActionJoinClanChatRoom::STATIC_JoinClanChatRoomAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync");

	USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FJoinClanChatRoomCompletionResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(const struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback");

	USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFriendsEnumerateFollowingList Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(const struct FFriendsEnumerateFollowingList& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback");

	USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionEnumerateFollowingList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionEnumerateFollowingList* USteamCoreFriendsAsyncActionEnumerateFollowingList::STATIC_EnumerateFollowingListAsync(class UObject* WorldContextObject, int startIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync");

	USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.startIndex = startIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionIsFollowing* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionIsFollowing* USteamCoreFriendsAsyncActionIsFollowing::STATIC_IsFollowingAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync");

	USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFriendsIsFollowing     Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(const struct FFriendsIsFollowing& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback");

	USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFriendsGetFollowerCount Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(const struct FFriendsGetFollowerCount& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback");

	USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionGetFollowerCount* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionGetFollowerCount* USteamCoreFriendsAsyncActionGetFollowerCount::STATIC_GetFollowerCountAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync");

	USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRequireNameOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionRequestUserInformation* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFriendsAsyncActionRequestUserInformation* USteamCoreFriendsAsyncActionRequestUserInformation::STATIC_RequestUserInformationAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDUser, bool bRequireNameOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync");

	USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamIDUser = SteamIDUser;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback
// (Final, Native, Public)
void USteamCoreFriendsAsyncActionRequestUserInformation::HandleCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback");

	USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameSearch.SubmitPlayerResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueGameID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDPlayer                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamPlayerResult   playerResult                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::SubmitPlayerResult(const struct FString& UniqueGameID, const struct FSteamID& SteamIDPlayer, SteamCore_ESteamPlayerResult playerResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.SubmitPlayerResult");

	UGameSearch_SubmitPlayerResult_Params params;
	params.UniqueGameID = UniqueGameID;
	params.SteamIDPlayer = SteamIDPlayer;
	params.playerResult = playerResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.SetGameHostParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Values                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::SetGameHostParams(const struct FString& Key, TArray<struct FString> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.SetGameHostParams");

	UGameSearch_SetGameHostParams_Params params;
	params.Key = Key;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.SetConnectionDetails
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 connectionDetails              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::SetConnectionDetails(const struct FString& connectionDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.SetConnectionDetails");

	UGameSearch_SetConnectionDetails_Params params;
	params.connectionDetails = connectionDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.SearchForGameWithLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            playerMin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            playerMax                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::SearchForGameWithLobby(const struct FSteamID& SteamIDLobby, int playerMin, int playerMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.SearchForGameWithLobby");

	UGameSearch_SearchForGameWithLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.playerMin = playerMin;
	params.playerMax = playerMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.SearchForGameSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            playerMin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            playerMax                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::SearchForGameSolo(int playerMin, int playerMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.SearchForGameSolo");

	UGameSearch_SearchForGameSolo_Params params;
	params.playerMin = playerMin;
	params.playerMax = playerMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.RetrieveConnectionDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDHost                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 connectionDetails              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            numConnectionDetails           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::RetrieveConnectionDetails(const struct FSteamID& SteamIDHost, struct FString* connectionDetails, int numConnectionDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.RetrieveConnectionDetails");

	UGameSearch_RetrieveConnectionDetails_Params params;
	params.SteamIDHost = SteamIDHost;
	params.numConnectionDetails = numConnectionDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (connectionDetails != nullptr)
		*connectionDetails = params.connectionDetails;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.RequestPlayersForGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            playerMin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            playerMax                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxTeamSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::RequestPlayersForGame(int playerMin, int playerMax, int maxTeamSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.RequestPlayersForGame");

	UGameSearch_RequestPlayersForGame_Params params;
	params.playerMin = playerMin;
	params.playerMax = playerMax;
	params.maxTeamSize = maxTeamSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.HostConfirmGameStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueGameID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::HostConfirmGameStart(const struct FString& UniqueGameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.HostConfirmGameStart");

	UGameSearch_HostConfirmGameStart_Params params;
	params.UniqueGameID = UniqueGameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.EndGameSearch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::EndGameSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.EndGameSearch");

	UGameSearch_EndGameSearch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.EndGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueGameID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::EndGame(const struct FString& UniqueGameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.EndGame");

	UGameSearch_EndGame_Params params;
	params.UniqueGameID = UniqueGameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.DeclineGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::DeclineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.DeclineGame");

	UGameSearch_DeclineGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.CancelRequestPlayersForGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::CancelRequestPlayersForGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.CancelRequestPlayersForGame");

	UGameSearch_CancelRequestPlayersForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.AddGameSearchParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 keyToFind                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         valuesToFind                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::AddGameSearchParams(const struct FString& keyToFind, TArray<struct FString> valuesToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.AddGameSearchParams");

	UGameSearch_AddGameSearchParams_Params params;
	params.keyToFind = keyToFind;
	params.valuesToFind = valuesToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameSearch.AcceptGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamGameSearchErrorCode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamGameSearchErrorCode UGameSearch::AcceptGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameSearch.AcceptGame");

	UGameSearch_AcceptGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.WasRestartRequested
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServer::WasRestartRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.WasRestartRequested");

	UGameServer_WasRestartRequested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.UserHasLicenseForApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamUserHasLicenseForAppResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamUserHasLicenseForAppResult UGameServer::UserHasLicenseForApp(const struct FSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.UserHasLicenseForApp");

	UGameServer_UserHasLicenseForApp_Params params;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.SetSpectatorServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 spectatorServerName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetSpectatorServerName(const struct FString& spectatorServerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetSpectatorServerName");

	UGameServer_SetSpectatorServerName_Params params;
	params.spectatorServerName = spectatorServerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetSpectatorPort
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            spectatorPort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetSpectatorPort(int spectatorPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetSpectatorPort");

	UGameServer_SetSpectatorPort_Params params;
	params.spectatorPort = spectatorPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ServerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetServerName(const struct FString& ServerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetServerName");

	UGameServer_SetServerName_Params params;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 region                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetRegion(const struct FString& region)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetRegion");

	UGameServer_SetRegion_Params params;
	params.region = region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetProduct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 product                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetProduct(const struct FString& product)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetProduct");

	UGameServer_SetProduct_Params params;
	params.product = product;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetPasswordProtected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPasswordProtected             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetPasswordProtected");

	UGameServer_SetPasswordProtected_Params params;
	params.bPasswordProtected = bPasswordProtected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetModDir
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 modDir                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetModDir(const struct FString& modDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetModDir");

	UGameServer_SetModDir_Params params;
	params.modDir = modDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetMaxPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            playersMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetMaxPlayerCount(int playersMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetMaxPlayerCount");

	UGameServer_SetMaxPlayerCount_Params params;
	params.playersMax = playersMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetMapName(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetMapName");

	UGameServer_SetMapName_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetKeyValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetKeyValue(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetKeyValue");

	UGameServer_SetKeyValue_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetHeartbeatInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            heartbeatInterval              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetHeartbeatInterval(int heartbeatInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetHeartbeatInterval");

	UGameServer_SetHeartbeatInterval_Params params;
	params.heartbeatInterval = heartbeatInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetGameTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameTags                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetGameTags(const struct FString& GameTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetGameTags");

	UGameServer_SetGameTags_Params params;
	params.GameTags = GameTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetGameDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameDescription                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetGameDescription(const struct FString& GameDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetGameDescription");

	UGameServer_SetGameDescription_Params params;
	params.GameDescription = GameDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetGameData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 gameData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetGameData(const struct FString& gameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetGameData");

	UGameServer_SetGameData_Params params;
	params.gameData = gameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetDedicatedServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDedicated                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetDedicatedServer(bool bDedicated)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetDedicatedServer");

	UGameServer_SetDedicatedServer_Params params;
	params.bDedicated = bDedicated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.SetBotPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BotPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::SetBotPlayerCount(int BotPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.SetBotPlayerCount");

	UGameServer_SetBotPlayerCount_Params params;
	params.BotPlayers = BotPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.RequestUserGroupStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDGroup                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServer::RequestUserGroupStatus(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.RequestUserGroupStatus");

	UGameServer_RequestUserGroupStatus_Params params;
	params.SteamIDUser = SteamIDUser;
	params.SteamIDGroup = SteamIDGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.LogOnAnonymous
// (Final, Native, Public, BlueprintCallable)
void UGameServer::LogOnAnonymous()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.LogOnAnonymous");

	UGameServer_LogOnAnonymous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.LogOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Token                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::LogOn(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.LogOn");

	UGameServer_LogOn_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.LogOff
// (Final, Native, Public, BlueprintCallable)
void UGameServer::LogOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.LogOff");

	UGameServer_LogOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.GetServerSteamID_PureCompact
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UGameServer::GetServerSteamID_PureCompact()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetServerSteamID_PureCompact");

	UGameServer_GetServerSteamID_PureCompact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.GetServerSteamID_Pure
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UGameServer::GetServerSteamID_Pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetServerSteamID_Pure");

	UGameServer_GetServerSteamID_Pure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.GetServerSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UGameServer::GetServerSteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetServerSteamID");

	UGameServer_GetServerSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.GetServerPublicIP_PureCompact
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameServer::GetServerPublicIP_PureCompact()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetServerPublicIP_PureCompact");

	UGameServer_GetServerPublicIP_PureCompact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.GetServerPublicIP_Pure
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameServer::GetServerPublicIP_Pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetServerPublicIP_Pure");

	UGameServer_GetServerPublicIP_Pure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.GetServerPublicIP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameServer::GetServerPublicIP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetServerPublicIP");

	UGameServer_GetServerPublicIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.GetAuthSessionTicket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ticket                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamTicketHandle      ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamTicketHandle UGameServer::GetAuthSessionTicket(TArray<unsigned char>* ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.GetAuthSessionTicket");

	UGameServer_GetAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ticket != nullptr)
		*ticket = params.ticket;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.ForceHeartbeat
// (Final, Native, Public, BlueprintCallable)
void UGameServer::ForceHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.ForceHeartbeat");

	UGameServer_ForceHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.EndAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::EndAuthSession(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.EndAuthSession");

	UGameServer_EndAuthSession_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.EnableHeartbeats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::EnableHeartbeats(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.EnableHeartbeats");

	UGameServer_EnableHeartbeats_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.CreateUnauthenticatedUserConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UGameServer::CreateUnauthenticatedUserConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.CreateUnauthenticatedUserConnection");

	UGameServer_CreateUnauthenticatedUserConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.ComputeNewPlayerCompatibility
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDNewPlayer               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::ComputeNewPlayerCompatibility(const struct FScriptDelegate& callback, const struct FSteamID& steamIDNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.ComputeNewPlayerCompatibility");

	UGameServer_ComputeNewPlayerCompatibility_Params params;
	params.callback = callback;
	params.steamIDNewPlayer = steamIDNewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.ClearAllKeyValues
// (Final, Native, Public, BlueprintCallable)
void UGameServer::ClearAllKeyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.ClearAllKeyValues");

	UGameServer_ClearAllKeyValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.CancelAuthTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamTicketHandle      ticketHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::CancelAuthTicket(const struct FSteamTicketHandle& ticketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.CancelAuthTicket");

	UGameServer_CancelAuthTicket_Params params;
	params.ticketHandle = ticketHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServer.BUpdateUserData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServer::BUpdateUserData(const struct FSteamID& SteamIDUser, const struct FString& PlayerName, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.BUpdateUserData");

	UGameServer_BUpdateUserData_Params params;
	params.SteamIDUser = SteamIDUser;
	params.PlayerName = PlayerName;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.BSecure
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServer::BSecure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.BSecure");

	UGameServer_BSecure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.BLoggedOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServer::BLoggedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.BLoggedOn");

	UGameServer_BLoggedOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.BeginAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ticket                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamBeginAuthSessionResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamBeginAuthSessionResult UGameServer::BeginAuthSession(TArray<unsigned char> ticket, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.BeginAuthSession");

	UGameServer_BeginAuthSession_Params params;
	params.ticket = ticket;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServer.AssociateWithClan
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDClan                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServer::AssociateWithClan(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDClan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServer.AssociateWithClan");

	UGameServer_AssociateWithClan_Params params;
	params.callback = callback;
	params.SteamIDClan = SteamIDClan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServerStats.UpdateUserAvgRateStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          countThisSession               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          sessionLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::UpdateUserAvgRateStat(const struct FSteamID& SteamIDUser, const struct FString& Name, float countThisSession, float sessionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.UpdateUserAvgRateStat");

	UGameServerStats_UpdateUserAvgRateStat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.countThisSession = countThisSession;
	params.sessionLength = sessionLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.SetUserStatInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::SetUserStatInt(const struct FSteamID& SteamIDUser, const struct FString& Name, int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.SetUserStatInt");

	UGameServerStats_SetUserStatInt_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.SetUserStatFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::SetUserStatFloat(const struct FSteamID& SteamIDUser, const struct FString& Name, float Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.SetUserStatFloat");

	UGameServerStats_SetUserStatFloat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.SetUserAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::SetUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.SetUserAchievement");

	UGameServerStats_SetUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.ServerStoreUserStats
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServerStats::ServerStoreUserStats(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.ServerStoreUserStats");

	UGameServerStats_ServerStoreUserStats_Params params;
	params.callback = callback;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServerStats.ServerRequestUserStats
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameServerStats::ServerRequestUserStats(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.ServerRequestUserStats");

	UGameServerStats_ServerRequestUserStats_Params params;
	params.callback = callback;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.GameServerStats.GetUserStatInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::GetUserStatInt(const struct FSteamID& SteamIDUser, const struct FString& Name, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.GetUserStatInt");

	UGameServerStats_GetUserStatInt_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.GetUserStatFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::GetUserStatFloat(const struct FSteamID& SteamIDUser, const struct FString& Name, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.GetUserStatFloat");

	UGameServerStats_GetUserStatFloat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.GetUserAchievement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::GetUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.GetUserAchievement");

	UGameServerStats_GetUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function SteamCore.GameServerStats.ClearUserAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameServerStats::ClearUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.ClearUserAchievement");

	UGameServerStats_ClearUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.TriggerVibration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  leftSpeed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  rightSpeed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::TriggerVibration(const struct FInputHandle& Handle, unsigned char leftSpeed, unsigned char rightSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TriggerVibration");

	UInput_TriggerVibration_Params params;
	params.Handle = Handle;
	params.leftSpeed = leftSpeed;
	params.rightSpeed = rightSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.TriggerRepeatedHapticPulse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreControllerPad targetPad                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  durationMicroSec               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  offMicroSec                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  repeat                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::TriggerRepeatedHapticPulse(const struct FInputHandle& Handle, SteamCore_ESteamCoreControllerPad targetPad, unsigned char durationMicroSec, unsigned char offMicroSec, unsigned char repeat, unsigned char Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TriggerRepeatedHapticPulse");

	UInput_TriggerRepeatedHapticPulse_Params params;
	params.Handle = Handle;
	params.targetPad = targetPad;
	params.durationMicroSec = durationMicroSec;
	params.offMicroSec = offMicroSec;
	params.repeat = repeat;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.TriggerHapticPulse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreControllerPad targetPad                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  durationMicroSec               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::TriggerHapticPulse(const struct FInputHandle& Handle, SteamCore_ESteamCoreControllerPad targetPad, unsigned char durationMicroSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TriggerHapticPulse");

	UInput_TriggerHapticPulse_Params params;
	params.Handle = Handle;
	params.targetPad = targetPad;
	params.durationMicroSec = durationMicroSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.TranslateActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamCoreInputType  destinationInputType           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreInputActionOrigin sourceOrigin                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreInputActionOrigin ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(SteamCore_ESteamCoreInputType destinationInputType, SteamCore_ESteamCoreInputActionOrigin sourceOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TranslateActionOrigin");

	UInput_TranslateActionOrigin_Params params;
	params.destinationInputType = destinationInputType;
	params.sourceOrigin = sourceOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.StopAnalogActionMomentum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle eAction                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::StopAnalogActionMomentum(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& eAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.StopAnalogActionMomentum");

	UInput_StopAnalogActionMomentum_Params params;
	params.Handle = Handle;
	params.eAction = eAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.ShowBindingPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInput::ShowBindingPanel(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.ShowBindingPanel");

	UInput_ShowBindingPanel_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.SetLEDColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  colorR                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  colorG                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  colorB                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreInputLEDFlag Flags                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::SetLEDColor(const struct FInputHandle& Handle, unsigned char colorR, unsigned char colorG, unsigned char colorB, SteamCore_ESteamCoreInputLEDFlag Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.SetLEDColor");

	UInput_SetLEDColor_Params params;
	params.Handle = Handle;
	params.colorR = colorR;
	params.colorG = colorG;
	params.colorB = colorB;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.GetStringForXboxOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamCoreXboxOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UInput::GetStringForXboxOrigin(SteamCore_ESteamCoreXboxOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetStringForXboxOrigin");

	UInput_GetStringForXboxOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetStringForActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamCoreInputActionOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UInput::GetStringForActionOrigin(SteamCore_ESteamCoreInputActionOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetStringForActionOrigin");

	UInput_GetStringForActionOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetRemotePlaySessionID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInput::GetRemotePlaySessionID(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetRemotePlaySessionID");

	UInput_GetRemotePlaySessionID_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetMotionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputMotionData        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FInputMotionData UInput::GetMotionData(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetMotionData");

	UInput_GetMotionData_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetInputTypeForHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreInputType  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamCoreInputType UInput::GetInputTypeForHandle(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetInputTypeForHandle");

	UInput_GetInputTypeForHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetGlyphForXboxOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamCoreXboxOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UInput::GetGlyphForXboxOrigin(SteamCore_ESteamCoreXboxOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetGlyphForXboxOrigin");

	UInput_GetGlyphForXboxOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetGlyphForActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamCoreInputActionOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UInput::GetGlyphForActionOrigin(SteamCore_ESteamCoreInputActionOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetGlyphForActionOrigin");

	UInput_GetGlyphForActionOrigin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetGamepadIndexForController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInput::GetGamepadIndexForController(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetGamepadIndexForController");

	UInput_GetGamepadIndexForController_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetDigitalActionOrigins
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   actionSetHandle                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDigitalActionHandle digitalActionHandle            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamCoreInputActionOrigin> originsOut                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInput::GetDigitalActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetHandle, const struct FInputDigitalActionHandle& digitalActionHandle, TArray<SteamCore_ESteamCoreInputActionOrigin>* originsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDigitalActionOrigins");

	UInput_GetDigitalActionOrigins_Params params;
	params.Handle = Handle;
	params.actionSetHandle = actionSetHandle;
	params.digitalActionHandle = digitalActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (originsOut != nullptr)
		*originsOut = params.originsOut;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetDigitalActionHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 pszActionName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDigitalActionHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInputDigitalActionHandle UInput::GetDigitalActionHandle(const struct FString& pszActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDigitalActionHandle");

	UInput_GetDigitalActionHandle_Params params;
	params.pszActionName = pszActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetDigitalActionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDigitalActionHandle digitalActionHandle            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDigitalActionData ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FInputDigitalActionData UInput::GetDigitalActionData(const struct FInputHandle& Handle, const struct FInputDigitalActionHandle& digitalActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDigitalActionData");

	UInput_GetDigitalActionData_Params params;
	params.Handle = Handle;
	params.digitalActionHandle = digitalActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetDeviceBindingRevision
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            major                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInput::GetDeviceBindingRevision(const struct FInputHandle& Handle, int* major, int* minor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDeviceBindingRevision");

	UInput_GetDeviceBindingRevision_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (major != nullptr)
		*major = params.major;
	if (minor != nullptr)
		*minor = params.minor;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetCurrentActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInputActionSetHandle UInput::GetCurrentActionSet(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetCurrentActionSet");

	UInput_GetCurrentActionSet_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetControllerForGamepadIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputHandle            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInputHandle UInput::GetControllerForGamepadIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetControllerForGamepadIndex");

	UInput_GetControllerForGamepadIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetAnalogActionOrigins
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   actionSetHandle                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle analogActionHandle             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamCoreInputActionOrigin> originsOut                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInput::GetAnalogActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetHandle, const struct FInputAnalogActionHandle& analogActionHandle, TArray<SteamCore_ESteamCoreInputActionOrigin>* originsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetAnalogActionOrigins");

	UInput_GetAnalogActionOrigins_Params params;
	params.Handle = Handle;
	params.actionSetHandle = actionSetHandle;
	params.analogActionHandle = analogActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (originsOut != nullptr)
		*originsOut = params.originsOut;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetAnalogActionHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 pszActionName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInputAnalogActionHandle UInput::GetAnalogActionHandle(const struct FString& pszActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetAnalogActionHandle");

	UInput_GetAnalogActionHandle_Params params;
	params.pszActionName = pszActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetAnalogActionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle analogActionHandle             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAnalogActionData  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FInputAnalogActionData UInput::GetAnalogActionData(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& analogActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetAnalogActionData");

	UInput_GetAnalogActionData_Params params;
	params.Handle = Handle;
	params.analogActionHandle = analogActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetActiveActionSetLayers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputActionSetHandle> Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInput::GetActiveActionSetLayers(const struct FInputHandle& Handle, TArray<struct FInputActionSetHandle>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetActiveActionSetLayers");

	UInput_GetActiveActionSetLayers_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetActionSetHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 actionSetName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInputActionSetHandle UInput::GetActionSetHandle(const struct FString& actionSetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetActionSetHandle");

	UInput_GetActionSetHandle_Params params;
	params.actionSetName = actionSetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.GetActionOriginFromXboxOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreXboxOrigin Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreInputActionOrigin ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(const struct FInputHandle& Handle, SteamCore_ESteamCoreXboxOrigin Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetActionOriginFromXboxOrigin");

	UInput_GetActionOriginFromXboxOrigin_Params params;
	params.Handle = Handle;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Input.DeactivateAllActionSetLayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::DeactivateAllActionSetLayers(const struct FInputHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.DeactivateAllActionSetLayers");

	UInput_DeactivateAllActionSetLayers_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.DeactivateActionSetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   actionSetLayerHandle           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::DeactivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetLayerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.DeactivateActionSetLayer");

	UInput_DeactivateActionSetLayer_Params params;
	params.Handle = Handle;
	params.actionSetLayerHandle = actionSetLayerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.ActivateActionSetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   actionSetLayerHandle           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::ActivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetLayerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.ActivateActionSetLayer");

	UInput_ActivateActionSetLayer_Params params;
	params.Handle = Handle;
	params.actionSetLayerHandle = actionSetLayerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Input.ActivateActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle            Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle   actionSetHandle                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInput::ActivateActionSet(const struct FInputHandle& Handle, const struct FInputActionSetHandle& actionSetHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Input.ActivateActionSet");

	UInput_ActivateActionSet_Params params;
	params.Handle = Handle;
	params.actionSetHandle = actionSetHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Inventory.TriggerItemDrop
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemDef           listDefinition                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_TriggerItemDrop(struct FSteamInventoryResult* Result, const struct FSteamItemDef& listDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.TriggerItemDrop");

	UInventory_TriggerItemDrop_Params params;
	params.listDefinition = listDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.TransferItemQuantity
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    itemIDSource                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    itemIDDest                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_TransferItemQuantity(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& itemIDSource, int Quantity, const struct FSteamItemInstanceID& itemIDDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.TransferItemQuantity");

	UInventory_TransferItemQuantity_Params params;
	params.itemIDSource = itemIDSource;
	params.Quantity = Quantity;
	params.itemIDDest = itemIDDest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.SubmitUpdateProperties
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamInventoryResult   resultHandle                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* resultHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SubmitUpdateProperties");

	UInventory_SubmitUpdateProperties_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (resultHandle != nullptr)
		*resultHandle = params.resultHandle;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.StartUpdateProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamInventoryUpdateHandle UInventory::STATIC_StartUpdateProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.StartUpdateProperties");

	UInventory_StartUpdateProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.StartPurchase
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>   itemDefs                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantity                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UInventory::StartPurchase(const struct FScriptDelegate& callback, TArray<struct FSteamItemDef> itemDefs, TArray<int> Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.StartPurchase");

	UInventory_StartPurchase_Params params;
	params.callback = callback;
	params.itemDefs = itemDefs;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Inventory.SetPropertyString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    ItemId                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_SetPropertyString(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyString");

	UInventory_SetPropertyString_Params params;
	params.Handle = Handle;
	params.ItemId = ItemId;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.SetPropertyInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    ItemId                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_SetPropertyInt(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyInt");

	UInventory_SetPropertyInt_Params params;
	params.Handle = Handle;
	params.ItemId = ItemId;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.SetPropertyFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    ItemId                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_SetPropertyFloat(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyFloat");

	UInventory_SetPropertyFloat_Params params;
	params.Handle = Handle;
	params.ItemId = ItemId;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.SetPropertyBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    ItemId                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_SetPropertyBool(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyBool");

	UInventory_SetPropertyBool_Params params;
	params.Handle = Handle;
	params.ItemId = ItemId;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.SerializeResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          buffer                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_SerializeResult(const struct FSteamInventoryResult& Handle, TArray<unsigned char>* buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SerializeResult");

	UInventory_SerializeResult_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (buffer != nullptr)
		*buffer = params.buffer;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.RequestPrices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UInventory::RequestPrices(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.RequestPrices");

	UInventory_RequestPrices_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInventory::RequestEligiblePromoItemDefinitionsIDs(const struct FScriptDelegate& callback, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs");

	UInventory_RequestEligiblePromoItemDefinitionsIDs_Params params;
	params.callback = callback;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Inventory.RemoveProperty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    ItemId                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_RemoveProperty(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const struct FString& PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.RemoveProperty");

	UInventory_RemoveProperty_Params params;
	params.Handle = Handle;
	params.ItemId = ItemId;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.LoadItemDefinitions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_LoadItemDefinitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.LoadItemDefinitions");

	UInventory_LoadItemDefinitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GrantPromoItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GrantPromoItems(struct FSteamInventoryResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GrantPromoItems");

	UInventory_GrantPromoItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetResultTimestamp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInventory::STATIC_GetResultTimestamp(const struct FSteamInventoryResult& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultTimestamp");

	UInventory_GetResultTimestamp_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetResultStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamResult         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamResult UInventory::STATIC_GetResultStatus(const struct FSteamInventoryResult& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultStatus");

	UInventory_GetResultStatus_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetResultItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDetails> items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetResultItems(const struct FSteamInventoryResult& Handle, TArray<struct FSteamItemDetails>* items)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultItems");

	UInventory_GetResultItems_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (items != nullptr)
		*items = params.items;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetResultItemProperty
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetResultItemProperty(const struct FSteamInventoryResult& Handle, int ItemIndex, const struct FString& PropertyName, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultItemProperty");

	UInventory_GetResultItemProperty_Params params;
	params.Handle = Handle;
	params.ItemIndex = ItemIndex;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetNumItemsWithPrices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInventory::STATIC_GetNumItemsWithPrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetNumItemsWithPrices");

	UInventory_GetNumItemsWithPrices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetItemsWithPrices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSteamItemDef>   itemDefs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    prices                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    basePrices                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetItemsWithPrices(TArray<struct FSteamItemDef>* itemDefs, TArray<int>* prices, TArray<int>* basePrices)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemsWithPrices");

	UInventory_GetItemsWithPrices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (itemDefs != nullptr)
		*itemDefs = params.itemDefs;
	if (prices != nullptr)
		*prices = params.prices;
	if (basePrices != nullptr)
		*basePrices = params.basePrices;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetItemsByID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   inventoryResult                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemInstanceID> instanceIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetItemsByID(struct FSteamInventoryResult* inventoryResult, TArray<struct FSteamItemInstanceID> instanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemsByID");

	UInventory_GetItemsByID_Params params;
	params.instanceIDs = instanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (inventoryResult != nullptr)
		*inventoryResult = params.inventoryResult;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetItemPrice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamItemDef           itemDef                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            basePrice                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetItemPrice(const struct FSteamItemDef& itemDef, int* Price, int* basePrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemPrice");

	UInventory_GetItemPrice_Params params;
	params.itemDef = itemDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
	if (basePrice != nullptr)
		*basePrice = params.basePrice;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetItemDefinitionProperty
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamItemDef           itemDef                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetItemDefinitionProperty(const struct FSteamItemDef& itemDef, const struct FString& PropertyName, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemDefinitionProperty");

	UInventory_GetItemDefinitionProperty_Params params;
	params.itemDef = itemDef;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetItemDefinitionIDs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSteamItemDef>   itemDefs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetItemDefinitionIDs(TArray<struct FSteamItemDef>* itemDefs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemDefinitionIDs");

	UInventory_GetItemDefinitionIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (itemDefs != nullptr)
		*itemDefs = params.itemDefs;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>   itemDefs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetEligiblePromoItemDefinitionIDs(const struct FSteamID& SteamID, TArray<struct FSteamItemDef>* itemDefs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs");

	UInventory_GetEligiblePromoItemDefinitionIDs_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (itemDefs != nullptr)
		*itemDefs = params.itemDefs;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GetAllItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GetAllItems(struct FSteamInventoryResult* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetAllItems");

	UInventory_GetAllItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.GenerateItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>   itemDefs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantity                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_GenerateItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> itemDefs, TArray<int> Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GenerateItems");

	UInventory_GenerateItems_Params params;
	params.itemDefs = itemDefs;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.ExchangeItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>   arrayGenerate                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    arrayGenerateQuantity          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemInstanceID> arrayDestroy                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    arrayDestroyQuantity           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_ExchangeItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> arrayGenerate, TArray<int> arrayGenerateQuantity, TArray<struct FSteamItemInstanceID> arrayDestroy, TArray<int> arrayDestroyQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.ExchangeItems");

	UInventory_ExchangeItems_Params params;
	params.arrayGenerate = arrayGenerate;
	params.arrayGenerateQuantity = arrayGenerateQuantity;
	params.arrayDestroy = arrayDestroy;
	params.arrayDestroyQuantity = arrayDestroyQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.DestroyResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInventory::STATIC_DestroyResult(const struct FSteamInventoryResult& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.DestroyResult");

	UInventory_DestroyResult_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Inventory.DeserializeResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          buffer                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bReservedMustBeFalse           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_DeserializeResult(struct FSteamInventoryResult* Result, TArray<unsigned char> buffer, bool bReservedMustBeFalse)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.DeserializeResult");

	UInventory_DeserializeResult_Params params;
	params.buffer = buffer;
	params.bReservedMustBeFalse = bReservedMustBeFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.ConsumeItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    itemConsume                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_ConsumeItem(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& itemConsume, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.ConsumeItem");

	UInventory_ConsumeItem_Params params;
	params.itemConsume = itemConsume;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.CheckResultSteamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDExpected                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_CheckResultSteamID(const struct FSteamInventoryResult& Handle, const struct FSteamID& steamIDExpected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.CheckResultSteamID");

	UInventory_CheckResultSteamID_Params params;
	params.Handle = Handle;
	params.steamIDExpected = steamIDExpected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.AddPromoItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   outResult                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>   itemDefs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_AddPromoItems(struct FSteamInventoryResult* outResult, TArray<struct FSteamItemDef> itemDefs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.AddPromoItems");

	UInventory_AddPromoItems_Params params;
	params.itemDefs = itemDefs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outResult != nullptr)
		*outResult = params.outResult;


	return params.ReturnValue;
}


// Function SteamCore.Inventory.AddPromoItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult   Result                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemDef           itemDef                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInventory::STATIC_AddPromoItem(struct FSteamInventoryResult* Result, const struct FSteamItemDef& itemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.AddPromoItem");

	UInventory_AddPromoItem_Params params;
	params.itemDef = itemDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::STATIC_RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync");

	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSteamInventoryEligiblePromoItemDefIDs Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(const struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback");

	USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreInventoryAsyncActionRequestPricesResult* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreInventoryAsyncActionRequestPricesResult* USteamCoreInventoryAsyncActionRequestPricesResult::STATIC_RequestPricesAsync(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync");

	USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSteamInventoryRequestPricesResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(const struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback");

	USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>   itemDefs                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantity                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreInventoryAsyncActionStartPurchaseResult* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreInventoryAsyncActionStartPurchaseResult* USteamCoreInventoryAsyncActionStartPurchaseResult::STATIC_StartPurchaseAsync(class UObject* WorldContextObject, TArray<struct FSteamItemDef> itemDefs, TArray<int> Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync");

	USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.itemDefs = itemDefs;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSteamInventoryStartPurchaseResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(const struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback");

	USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.SetLobbyType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLobbyType      lobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SetLobbyType(const struct FSteamID& SteamIDLobby, SteamCore_ESteamLobbyType lobbyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyType");

	UMatchmaking_SetLobbyType_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.lobbyType = lobbyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.SetLobbyOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDNewOwner                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SetLobbyOwner(const struct FSteamID& SteamIDLobby, const struct FSteamID& steamIDNewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyOwner");

	UMatchmaking_SetLobbyOwner_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.steamIDNewOwner = steamIDNewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.SetLobbyMemberLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SetLobbyMemberLimit(const struct FSteamID& SteamIDLobby, int maxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyMemberLimit");

	UMatchmaking_SetLobbyMemberLimit_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.maxMembers = maxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.SetLobbyMemberData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_SetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyMemberData");

	UMatchmaking_SetLobbyMemberData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.SetLobbyJoinable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLobbyJoinable                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SetLobbyJoinable(const struct FSteamID& SteamIDLobby, bool bLobbyJoinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyJoinable");

	UMatchmaking_SetLobbyJoinable_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.bLobbyJoinable = bLobbyJoinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.SetLobbyGameServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameServerIP                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameServerPort                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDGameServer              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_SetLobbyGameServer(const struct FSteamID& SteamIDLobby, const struct FString& GameServerIP, int GameServerPort, const struct FSteamID& SteamIDGameServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyGameServer");

	UMatchmaking_SetLobbyGameServer_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.GameServerIP = GameServerIP;
	params.GameServerPort = GameServerPort;
	params.SteamIDGameServer = SteamIDGameServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.SetLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SetLobbyData(const struct FSteamID& SteamIDLobby, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyData");

	UMatchmaking_SetLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.SetLinkedLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDLobbyDependent          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SetLinkedLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& steamIDLobbyDependent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLinkedLobby");

	UMatchmaking_SetLinkedLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.steamIDLobbyDependent = steamIDLobbyDependent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.SendLobbyChatMsg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_SendLobbyChatMsg(const struct FSteamID& SteamIDLobby, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SendLobbyChatMsg");

	UMatchmaking_SendLobbyChatMsg_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.RequestLobbyList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMatchmaking::RequestLobbyList(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.RequestLobbyList");

	UMatchmaking_RequestLobbyList_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.RequestLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_RequestLobbyData(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.RequestLobbyData");

	UMatchmaking_RequestLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.RemoveFavoriteGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamFavoriteFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_RemoveFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<SteamCore_ESteamFavoriteFlags> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.RemoveFavoriteGame");

	UMatchmaking_RemoveFavoriteGame_Params params;
	params.AppID = AppID;
	params.IP = IP;
	params.ConnectionPort = ConnectionPort;
	params.QueryPort = QueryPort;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.LeaveLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_LeaveLobby(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.LeaveLobby");

	UMatchmaking_LeaveLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.JoinLobby
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::JoinLobby(const struct FScriptDelegate& callback, const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.JoinLobby");

	UMatchmaking_JoinLobby_Params params;
	params.callback = callback;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.InviteUserToLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                steamIDInvitee                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_InviteUserToLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& steamIDInvitee)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.InviteUserToLobby");

	UMatchmaking_InviteUserToLobby_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.steamIDInvitee = steamIDInvitee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetNumLobbyMembers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMatchmaking::STATIC_GetNumLobbyMembers(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetNumLobbyMembers");

	UMatchmaking_GetNumLobbyMembers_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UMatchmaking::STATIC_GetLobbyOwner(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyOwner");

	UMatchmaking_GetLobbyOwner_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyMemberLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMatchmaking::STATIC_GetLobbyMemberLimit(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyMemberLimit");

	UMatchmaking_GetLobbyMemberLimit_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyMemberData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMatchmaking::STATIC_GetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDUser, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyMemberData");

	UMatchmaking_GetLobbyMemberData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.SteamIDUser = SteamIDUser;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyMemberByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            member                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UMatchmaking::STATIC_GetLobbyMemberByIndex(const struct FSteamID& SteamIDLobby, int member)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyMemberByIndex");

	UMatchmaking_GetLobbyMemberByIndex_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.member = member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyGameServer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameServerIP                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameServerPort                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDGameServer              (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_GetLobbyGameServer(const struct FSteamID& SteamIDLobby, struct FString* GameServerIP, int* GameServerPort, struct FSteamID* SteamIDGameServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyGameServer");

	UMatchmaking_GetLobbyGameServer_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameServerIP != nullptr)
		*GameServerIP = params.GameServerIP;
	if (GameServerPort != nullptr)
		*GameServerPort = params.GameServerPort;
	if (SteamIDGameServer != nullptr)
		*SteamIDGameServer = params.SteamIDGameServer;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyDataCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMatchmaking::STATIC_GetLobbyDataCount(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyDataCount");

	UMatchmaking_GetLobbyDataCount_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyDataByIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            lobbyData                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_GetLobbyDataByIndex(const struct FSteamID& SteamIDLobby, int lobbyData, struct FString* Key, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyDataByIndex");

	UMatchmaking_GetLobbyDataByIndex_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.lobbyData = lobbyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMatchmaking::STATIC_GetLobbyData(const struct FSteamID& SteamIDLobby, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyData");

	UMatchmaking_GetLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyChatEntry
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamChatEntryType  ChatEntryType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMatchmaking::STATIC_GetLobbyChatEntry(const struct FSteamID& SteamIDLobby, int MessageID, struct FSteamID* SteamIDUser, struct FString* Message, SteamCore_ESteamChatEntryType* ChatEntryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyChatEntry");

	UMatchmaking_GetLobbyChatEntry_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.MessageID = MessageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDUser != nullptr)
		*SteamIDUser = params.SteamIDUser;
	if (Message != nullptr)
		*Message = params.Message;
	if (ChatEntryType != nullptr)
		*ChatEntryType = params.ChatEntryType;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetLobbyByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Lobby                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UMatchmaking::STATIC_GetLobbyByIndex(int Lobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyByIndex");

	UMatchmaking_GetLobbyByIndex_Params params;
	params.Lobby = Lobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetFavoriteGameCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMatchmaking::STATIC_GetFavoriteGameCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetFavoriteGameCount");

	UMatchmaking_GetFavoriteGameCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.GetFavoriteGame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Game                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamFavoriteFlags> Flags                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            timeLastPlayedOnServer         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_GetFavoriteGame(int Game, int* AppID, struct FString* IP, int* ConnectionPort, int* QueryPort, TArray<SteamCore_ESteamFavoriteFlags>* Flags, int* timeLastPlayedOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetFavoriteGame");

	UMatchmaking_GetFavoriteGame_Params params;
	params.Game = Game;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (IP != nullptr)
		*IP = params.IP;
	if (ConnectionPort != nullptr)
		*ConnectionPort = params.ConnectionPort;
	if (QueryPort != nullptr)
		*QueryPort = params.QueryPort;
	if (Flags != nullptr)
		*Flags = params.Flags;
	if (timeLastPlayedOnServer != nullptr)
		*timeLastPlayedOnServer = params.timeLastPlayedOnServer;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.DeleteLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaking::STATIC_DeleteLobbyData(const struct FSteamID& SteamIDLobby, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.DeleteLobbyData");

	UMatchmaking_DeleteLobbyData_Params params;
	params.SteamIDLobby = SteamIDLobby;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Matchmaking.CreateLobby
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// SteamCore_ESteamLobbyType      lobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::CreateLobby(const struct FScriptDelegate& callback, SteamCore_ESteamLobbyType lobbyType, int maxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.CreateLobby");

	UMatchmaking_CreateLobby_Params params;
	params.callback = callback;
	params.lobbyType = lobbyType;
	params.maxMembers = maxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 keyToMatch                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 valueToMatch                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLobbyComparison comparisonType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListStringFilter(const struct FString& keyToMatch, const struct FString& valueToMatch, SteamCore_ESteamLobbyComparison comparisonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter");

	UMatchmaking_AddRequestLobbyListStringFilter_Params params;
	params.keyToMatch = keyToMatch;
	params.valueToMatch = valueToMatch;
	params.comparisonType = comparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListResultCountFilter(int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter");

	UMatchmaking_AddRequestLobbyListResultCountFilter_Params params;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 keyToMatch                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            valueToMatch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLobbyComparison comparisonType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListNumericalFilter(const struct FString& keyToMatch, int valueToMatch, SteamCore_ESteamLobbyComparison comparisonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter");

	UMatchmaking_AddRequestLobbyListNumericalFilter_Params params;
	params.keyToMatch = keyToMatch;
	params.valueToMatch = valueToMatch;
	params.comparisonType = comparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 keyToMatch                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            valueToBeCloseTo               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListNearValueFilter(const struct FString& keyToMatch, int valueToBeCloseTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter");

	UMatchmaking_AddRequestLobbyListNearValueFilter_Params params;
	params.keyToMatch = keyToMatch;
	params.valueToBeCloseTo = valueToBeCloseTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            slotsAvailable                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListFilterSlotsAvailable(int slotsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable");

	UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params params;
	params.slotsAvailable = slotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamLobbyDistanceFilter lobbyDistanceFilter            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListDistanceFilter(SteamCore_ESteamLobbyDistanceFilter lobbyDistanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter");

	UMatchmaking_AddRequestLobbyListDistanceFilter_Params params;
	params.lobbyDistanceFilter = lobbyDistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaking::STATIC_AddRequestLobbyListCompatibleMembersFilter(const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter");

	UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params params;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Matchmaking.AddFavoriteGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConnectionPort                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamFavoriteFlags> Flags                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            timeLastPlayedOnServer         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMatchmaking::STATIC_AddFavoriteGame(int AppID, const struct FString& IP, int ConnectionPort, int QueryPort, TArray<SteamCore_ESteamFavoriteFlags> Flags, int timeLastPlayedOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddFavoriteGame");

	UMatchmaking_AddFavoriteGame_Params params;
	params.AppID = AppID;
	params.IP = IP;
	params.ConnectionPort = ConnectionPort;
	params.QueryPort = QueryPort;
	params.Flags = Flags;
	params.timeLastPlayedOnServer = timeLastPlayedOnServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FCreateLobbyData        Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreMatchmakingAsyncActionCreateLobby::HandleCallback(const struct FCreateLobbyData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback");

	USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLobbyType      lobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingAsyncActionCreateLobby* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingAsyncActionCreateLobby* USteamCoreMatchmakingAsyncActionCreateLobby::STATIC_CreateLobbyAsync(class UObject* WorldContextObject, SteamCore_ESteamLobbyType lobbyType, int maxMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync");

	USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.lobbyType = lobbyType;
	params.maxMembers = maxMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingAsyncActionRequestLobbyList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingAsyncActionRequestLobbyList* USteamCoreMatchmakingAsyncActionRequestLobbyList::STATIC_RequestLobbyListAsync(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync");

	USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FLobbyMatchList         Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreMatchmakingAsyncActionRequestLobbyList::HandleCallback(const struct FLobbyMatchList& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback");

	USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDLobby                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingAsyncActionJoinLobby* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingAsyncActionJoinLobby* USteamCoreMatchmakingAsyncActionJoinLobby::STATIC_JoinLobbyAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync");

	USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamIDLobby = SteamIDLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FJoinLobbyData          Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(const struct FJoinLobbyData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback");

	USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FString, struct FSteamSessionSetting> SessionSettings                (Parm, NativeAccessSpecifierPublic)
// struct FString                 SessionName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            numPublicConnections           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumPrivateConnections          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowInvites                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsesPresence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresence          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowJoinViaPresenceFriendsOnly (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAntiCheatProtected            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsesStats                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldAdvertise               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreCreateSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreCreateSession* USteamCoreCreateSession::STATIC_CreateSteamCoreSession(class UObject* WorldContextObject, TMap<struct FString, struct FSteamSessionSetting> SessionSettings, const struct FString& SessionName, int numPublicConnections, int NumPrivateConnections, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession");

	USteamCoreCreateSession_CreateSteamCoreSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SessionSettings = SessionSettings;
	params.SessionName = SessionName;
	params.numPublicConnections = numPublicConnections;
	params.NumPrivateConnections = NumPrivateConnections;
	params.bUseLAN = bUseLAN;
	params.bAllowInvites = bAllowInvites;
	params.bUsesPresence = bUsesPresence;
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


// Function SteamCore.SteamCoreFindSession.OnCompleted
// (Final, Native, Public)
// Parameters:
// bool                           bSuccessful                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreFindSession::OnCompleted(bool bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFindSession.OnCompleted");

	USteamCoreFindSession_OnCompleted_Params params;
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FString, struct FSteamSessionSearchSetting> searchSettings                 (Parm, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamSessionFindType serverType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEmptyServersOnly              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSecureServersOnly             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFindSession*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreFindSession* USteamCoreFindSession::STATIC_FindSteamCoreSessions(class UObject* WorldContextObject, TMap<struct FString, struct FSteamSessionSearchSetting> searchSettings, int MaxResults, bool bUseLAN, SteamCore_ESteamSessionFindType serverType, bool bEmptyServersOnly, bool bSecureServersOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions");

	USteamCoreFindSession_FindSteamCoreSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.searchSettings = searchSettings;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.serverType = serverType;
	params.bEmptyServersOnly = bEmptyServersOnly;
	params.bSecureServersOnly = bSecureServersOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreDestroySession.OnCompleted
// (Final, Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreDestroySession::OnCompleted(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreDestroySession.OnCompleted");

	USteamCoreDestroySession_OnCompleted_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreDestroySession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreDestroySession* USteamCoreDestroySession::STATIC_DestroySteamCoreSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession");

	USteamCoreDestroySession_DestroySteamCoreSession_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.MatchmakingServers.ServerRules
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::ServerRules(const struct FScriptDelegate& callback, const struct FString& IP, int QueryPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.ServerRules");

	UMatchmakingServers_ServerRules_Params params;
	params.callback = callback;
	params.IP = IP;
	params.QueryPort = QueryPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.RequestSpectatorServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         serverCallback                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::RequestSpectatorServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestSpectatorServerList");

	UMatchmakingServers_RequestSpectatorServerList_Params params;
	params.serverCallback = serverCallback;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.RequestLANServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         serverCallback                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::RequestLANServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestLANServerList");

	UMatchmakingServers_RequestLANServerList_Params params;
	params.serverCallback = serverCallback;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.RequestInternetServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         serverCallback                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::RequestInternetServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestInternetServerList");

	UMatchmakingServers_RequestInternetServerList_Params params;
	params.serverCallback = serverCallback;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.RequestHistoryServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         serverCallback                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::RequestHistoryServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestHistoryServerList");

	UMatchmakingServers_RequestHistoryServerList_Params params;
	params.serverCallback = serverCallback;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.RequestFriendsServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         serverCallback                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::RequestFriendsServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestFriendsServerList");

	UMatchmakingServers_RequestFriendsServerList_Params params;
	params.serverCallback = serverCallback;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.RequestFavoritesServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         serverCallback                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::RequestFavoritesServerList(const struct FScriptDelegate& serverCallback, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestFavoritesServerList");

	UMatchmakingServers_RequestFavoritesServerList_Params params;
	params.serverCallback = serverCallback;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.MatchmakingServers.PingServer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakingServers::PingServer(const struct FScriptDelegate& callback, const struct FString& IP, int QueryPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.PingServer");

	UMatchmakingServers_PingServer_Params params;
	params.callback = callback;
	params.IP = IP;
	params.QueryPort = QueryPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionPingServer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::STATIC_PingServerAsync(class UObject* WorldContextObject, const struct FString& IP, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync");

	USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IP = IP;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameServerItem         Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(const struct FGameServerItem& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback");

	USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::STATIC_RequestSpectatorServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::STATIC_RequestLANServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::STATIC_RequestInternetServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::STATIC_RequestHistoryServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::STATIC_RequestFriendsServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreNonResponsive           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ServerFilter                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::STATIC_RequestFavoritesServerListAsync(class UObject* WorldContextObject, int AppID, int MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxResults = MaxResults;
	params.bIgnoreNonResponsive = bIgnoreNonResponsive;
	params.ServerFilter = ServerFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
// (Final, Native, Private)
void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FGameServerItem> Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(TArray<struct FGameServerItem> Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback");

	USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 IP                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryPort                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionServerRules* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::STATIC_ServerRulesAsync(class UObject* WorldContextObject, const struct FString& IP, int QueryPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync");

	USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IP = IP;
	params.QueryPort = QueryPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FGameServerRule> Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(TArray<struct FGameServerRule> Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback");

	USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.GetFilters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<struct FString, struct FString> ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FString, struct FString> UServerFilter::GetFilters()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.GetFilters");

	UServerFilter_GetFilters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ServerFilter.AddFilterSecure
// (Final, Native, Public, BlueprintCallable)
void UServerFilter::AddFilterSecure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterSecure");

	UServerFilter_AddFilterSecure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterOr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterOr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterOr");

	UServerFilter_AddFilterOr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterNotFull
// (Final, Native, Public, BlueprintCallable)
void UServerFilter::AddFilterNotFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNotFull");

	UServerFilter_AddFilterNotFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterNor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterNor(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNor");

	UServerFilter_AddFilterNor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterNoPlayers
// (Final, Native, Public, BlueprintCallable)
void UServerFilter::AddFilterNoPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNoPlayers");

	UServerFilter_AddFilterNoPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterNand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterNand(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNand");

	UServerFilter_AddFilterNand_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterMap(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterMap");

	UServerFilter_AddFilterMap_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterLinux
// (Final, Native, Public, BlueprintCallable)
void UServerFilter::AddFilterLinux()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterLinux");

	UServerFilter_AddFilterLinux_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterHasPlayers
// (Final, Native, Public, BlueprintCallable)
void UServerFilter::AddFilterHasPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterHasPlayers");

	UServerFilter_AddFilterHasPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterGameTagsNor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterGameTagsNor(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameTagsNor");

	UServerFilter_AddFilterGameTagsNor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterGameTagsAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterGameTagsAnd(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameTagsAnd");

	UServerFilter_AddFilterGameTagsAnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterGameDataOr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterGameDataOr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameDataOr");

	UServerFilter_AddFilterGameDataOr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterGameDataNor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterGameDataNor(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameDataNor");

	UServerFilter_AddFilterGameDataNor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterGameDataAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterGameDataAnd(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameDataAnd");

	UServerFilter_AddFilterGameDataAnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterGameAddr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterGameAddr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameAddr");

	UServerFilter_AddFilterGameAddr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterDedicated
// (Final, Native, Public, BlueprintCallable)
void UServerFilter::AddFilterDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterDedicated");

	UServerFilter_AddFilterDedicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.ServerFilter.AddFilterAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerFilter::AddFilterAnd(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterAnd");

	UServerFilter_AddFilterAnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Music.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          flVolume                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMusic::SetVolume(float flVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.SetVolume");

	UMusic_SetVolume_Params params;
	params.flVolume = flVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Music.PlayPrevious
// (Final, Native, Public, BlueprintCallable)
void UMusic::PlayPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.PlayPrevious");

	UMusic_PlayPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Music.PlayNext
// (Final, Native, Public, BlueprintCallable)
void UMusic::PlayNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.PlayNext");

	UMusic_PlayNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Music.Play
// (Final, Native, Public, BlueprintCallable)
void UMusic::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.Play");

	UMusic_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Music.Pause
// (Final, Native, Public, BlueprintCallable)
void UMusic::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.Pause");

	UMusic_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Music.GetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMusic::GetVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.GetVolume");

	UMusic_GetVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Music.GetPlaybackStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamAudioPlaybackStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.GetPlaybackStatus");

	UMusic_GetPlaybackStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Music.BIsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMusic::BIsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.BIsPlaying");

	UMusic_BIsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Music.BIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMusic::BIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Music.BIsEnabled");

	UMusic_BIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Networking.SendP2PPacket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCore_ESteamP2PSend        p2pSendType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::SendP2PPacket(const struct FSteamID& SteamIDRemote, TArray<unsigned char> Data, SteamCore_ESteamP2PSend p2pSendType, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.SendP2PPacket");

	UNetworking_SendP2PPacket_Params params;
	params.SteamIDRemote = SteamIDRemote;
	params.Data = Data;
	params.p2pSendType = p2pSendType;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Networking.ReadP2PPacket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDRemote                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::ReadP2PPacket(TArray<unsigned char>* Data, struct FSteamID* SteamIDRemote, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.ReadP2PPacket");

	UNetworking_ReadP2PPacket_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (SteamIDRemote != nullptr)
		*SteamIDRemote = params.SteamIDRemote;


	return params.ReturnValue;
}


// Function SteamCore.Networking.IsP2PPacketAvailable
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            messageSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::IsP2PPacketAvailable(int* messageSize, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.IsP2PPacketAvailable");

	UNetworking_IsP2PPacketAvailable_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (messageSize != nullptr)
		*messageSize = params.messageSize;


	return params.ReturnValue;
}


// Function SteamCore.Networking.GetP2PSessionState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamP2PSessionState   ConnectionState                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::GetP2PSessionState(const struct FSteamID& SteamIDRemote, struct FSteamP2PSessionState* ConnectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.GetP2PSessionState");

	UNetworking_GetP2PSessionState_Params params;
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConnectionState != nullptr)
		*ConnectionState = params.ConnectionState;


	return params.ReturnValue;
}


// Function SteamCore.Networking.CloseP2PSessionWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::CloseP2PSessionWithUser(const struct FSteamID& SteamIDRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.CloseP2PSessionWithUser");

	UNetworking_CloseP2PSessionWithUser_Params params;
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Networking.CloseP2PchannelWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::CloseP2PchannelWithUser(const struct FSteamID& SteamIDRemote, int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.CloseP2PchannelWithUser");

	UNetworking_CloseP2PchannelWithUser_Params params;
	params.SteamIDRemote = SteamIDRemote;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Networking.AllowP2PPacketRelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::AllowP2PPacketRelay(bool bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.AllowP2PPacketRelay");

	UNetworking_AllowP2PPacketRelay_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Networking.AcceptP2PSessionWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDRemote                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworking::AcceptP2PSessionWithUser(const struct FSteamID& SteamIDRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.AcceptP2PSessionWithUser");

	UNetworking_AcceptP2PSessionWithUser_Params params;
	params.SteamIDRemote = SteamIDRemote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.NetworkingUtils.ParsePingLocationString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamNetworkPingLocation Result                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworkingUtils::STATIC_ParsePingLocationString(const struct FString& String, struct FSteamNetworkPingLocation* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.ParsePingLocationString");

	UNetworkingUtils_ParsePingLocationString_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.NetworkingUtils.InitRelayNetworkAccess
// (Final, Native, Public, BlueprintCallable)
void UNetworkingUtils::InitRelayNetworkAccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.InitRelayNetworkAccess");

	UNetworkingUtils_InitRelayNetworkAccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.NetworkingUtils.GetLocalPingLocation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation Result                         (Parm, OutParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNetworkingUtils::GetLocalPingLocation(struct FSteamNetworkPingLocation* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.GetLocalPingLocation");

	UNetworkingUtils_GetLocalPingLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation remoteLocation                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNetworkingUtils::EstimatePingTimeFromLocalHost(const struct FSteamNetworkPingLocation& remoteLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost");

	UNetworkingUtils_EstimatePingTimeFromLocalHost_Params params;
	params.remoteLocation = remoteLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation location1                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSteamNetworkPingLocation location2                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const struct FSteamNetworkPingLocation& location1, const struct FSteamNetworkPingLocation& location2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations");

	UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Params params;
	params.location1 = location1;
	params.location2 = location2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.NetworkingUtils.ConvertPingLocationToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation Location                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNetworkingUtils::STATIC_ConvertPingLocationToString(const struct FSteamNetworkPingLocation& Location, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.ConvertPingLocationToString");

	UNetworkingUtils_ConvertPingLocationToString_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function SteamCore.NetworkingUtils.CheckPingDataUpToDate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          maxAgeSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetworkingUtils::CheckPingDataUpToDate(float maxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.CheckPingDataUpToDate");

	UNetworkingUtils_CheckPingDataUpToDate_Params params;
	params.maxAgeSeconds = maxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ParentalSettings.BIsParentalLockLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UParentalSettings::BIsParentalLockLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsParentalLockLocked");

	UParentalSettings_BIsParentalLockLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ParentalSettings.BIsParentalLockEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UParentalSettings::BIsParentalLockEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsParentalLockEnabled");

	UParentalSettings_BIsParentalLockEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ParentalSettings.BIsFeatureInBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamParentalFeature feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UParentalSettings::BIsFeatureInBlockList(SteamCore_ESteamParentalFeature feature)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsFeatureInBlockList");

	UParentalSettings_BIsFeatureInBlockList_Params params;
	params.feature = feature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ParentalSettings.BIsFeatureBlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamParentalFeature feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UParentalSettings::BIsFeatureBlocked(SteamCore_ESteamParentalFeature feature)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsFeatureBlocked");

	UParentalSettings_BIsFeatureBlocked_Params params;
	params.feature = feature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ParentalSettings.BIsAppInBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UParentalSettings::BIsAppInBlockList(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsAppInBlockList");

	UParentalSettings_BIsAppInBlockList_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.ParentalSettings.BIsAppBlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UParentalSettings::BIsAppBlocked(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsAppBlocked");

	UParentalSettings_BIsAppBlocked_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.OnReservationCompleted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamParties::STATIC_OnReservationCompleted(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.OnReservationCompleted");

	USteamParties_OnReservationCompleted_Params params;
	params.BeaconID = BeaconID;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamParties.JoinParty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamParties::JoinParty(const struct FScriptDelegate& callback, const struct FPartyBeaconID& BeaconID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.JoinParty");

	USteamParties_JoinParty_Params params;
	params.callback = callback;
	params.BeaconID = BeaconID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamParties.GetNumAvailableBeaconLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            numLocations                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamParties::STATIC_GetNumAvailableBeaconLocations(int* numLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetNumAvailableBeaconLocations");

	USteamParties_GetNumAvailableBeaconLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (numLocations != nullptr)
		*numLocations = params.numLocations;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.GetNumActiveBeacons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamParties::STATIC_GetNumActiveBeacons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetNumActiveBeacons");

	USteamParties_GetNumActiveBeacons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.GetBeaconLocationData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamPartyBeaconLocation beaconLocation                 (Parm, NativeAccessSpecifierPublic)
// SteamCore_ESteamPartiesBeaconLocationData eData                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 pchDataStringOut               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamParties::STATIC_GetBeaconLocationData(const struct FSteamPartyBeaconLocation& beaconLocation, SteamCore_ESteamPartiesBeaconLocationData eData, struct FString* pchDataStringOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetBeaconLocationData");

	USteamParties_GetBeaconLocationData_Params params;
	params.beaconLocation = beaconLocation;
	params.eData = eData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (pchDataStringOut != nullptr)
		*pchDataStringOut = params.pchDataStringOut;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.GetBeaconDetails
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDBeaconOwner             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamPartyBeaconLocation Location                       (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FString                 outMetadata                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamParties::STATIC_GetBeaconDetails(const struct FPartyBeaconID& BeaconID, struct FSteamID* SteamIDBeaconOwner, struct FSteamPartyBeaconLocation* Location, struct FString* outMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetBeaconDetails");

	USteamParties_GetBeaconDetails_Params params;
	params.BeaconID = BeaconID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamIDBeaconOwner != nullptr)
		*SteamIDBeaconOwner = params.SteamIDBeaconOwner;
	if (Location != nullptr)
		*Location = params.Location;
	if (outMetadata != nullptr)
		*outMetadata = params.outMetadata;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.GetBeaconByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPartyBeaconID USteamParties::STATIC_GetBeaconByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetBeaconByIndex");

	USteamParties_GetBeaconByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.GetAvailableBeaconLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSteamPartyBeaconLocation> locationList                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            maxNumLocations                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamParties::STATIC_GetAvailableBeaconLocations(TArray<struct FSteamPartyBeaconLocation>* locationList, int maxNumLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetAvailableBeaconLocations");

	USteamParties_GetAvailableBeaconLocations_Params params;
	params.maxNumLocations = maxNumLocations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (locationList != nullptr)
		*locationList = params.locationList;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.DestroyBeacon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamParties::STATIC_DestroyBeacon(const struct FPartyBeaconID& BeaconID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.DestroyBeacon");

	USteamParties_DestroyBeacon_Params params;
	params.BeaconID = BeaconID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamParties.CreateBeacon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            openSlots                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamPartyBeaconLocation beaconLocation                 (Parm, NativeAccessSpecifierPublic)
// struct FString                 ConnectString                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamParties::CreateBeacon(const struct FScriptDelegate& callback, int openSlots, const struct FSteamPartyBeaconLocation& beaconLocation, const struct FString& ConnectString, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.CreateBeacon");

	USteamParties_CreateBeacon_Params params;
	params.callback = callback;
	params.openSlots = openSlots;
	params.beaconLocation = beaconLocation;
	params.ConnectString = ConnectString;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamParties.ChangeNumOpenSlots
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            openSlots                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamParties::ChangeNumOpenSlots(const struct FScriptDelegate& callback, const struct FPartyBeaconID& BeaconID, int openSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.ChangeNumOpenSlots");

	USteamParties_ChangeNumOpenSlots_Params params;
	params.callback = callback;
	params.BeaconID = BeaconID;
	params.openSlots = openSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamParties.CancelReservation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamParties::STATIC_CancelReservation(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.CancelReservation");

	USteamParties_CancelReservation_Params params;
	params.BeaconID = BeaconID;
	params.SteamIDUser = SteamIDUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreSteamPartiesAsyncActionJoinParty* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreSteamPartiesAsyncActionJoinParty* USteamCoreSteamPartiesAsyncActionJoinParty::STATIC_JoinPartyAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync");

	USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BeaconID = BeaconID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FJoinPartyData          Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(const struct FJoinPartyData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback");

	USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FCreateBeaconData       Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreSteamPartiesAsyncActionCreateBeacon::HandleCallback(const struct FCreateBeaconData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback");

	USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            openSlots                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamPartyBeaconLocation beaconLocation                 (Parm, NativeAccessSpecifierPublic)
// struct FString                 ConnectString                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreSteamPartiesAsyncActionCreateBeacon* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreSteamPartiesAsyncActionCreateBeacon* USteamCoreSteamPartiesAsyncActionCreateBeacon::STATIC_CreateBeaconAsync(class UObject* WorldContextObject, int openSlots, const struct FSteamPartyBeaconLocation& beaconLocation, const struct FString& ConnectString, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync");

	USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.openSlots = openSlots;
	params.beaconLocation = beaconLocation;
	params.ConnectString = ConnectString;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FChangeNumOpenSlotsData Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::HandleCallback(const struct FChangeNumOpenSlotsData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback");

	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID          BeaconID                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            openSlots                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::STATIC_ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, int openSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync");

	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BeaconID = BeaconID;
	params.openSlots = openSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.GetSessionSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SessionID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID URemotePlay::GetSessionSteamID(int SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionSteamID");

	URemotePlay_GetSessionSteamID_Params params;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.GetSessionID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            sessionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemotePlay::GetSessionID(int sessionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionID");

	URemotePlay_GetSessionID_Params params;
	params.sessionIndex = sessionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.GetSessionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemotePlay::GetSessionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionCount");

	URemotePlay_GetSessionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.GetSessionClientName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SessionID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString URemotePlay::GetSessionClientName(int SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionClientName");

	URemotePlay_GetSessionClientName_Params params;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.GetSessionClientFormFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SessionID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreDeviceFormFactor ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionClientFormFactor");

	URemotePlay_GetSessionClientFormFactor_Params params;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDFriend                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemotePlay::BSendRemotePlayTogetherInvite(const struct FSteamID& SteamIDFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite");

	URemotePlay_BSendRemotePlayTogetherInvite_Params params;
	params.SteamIDFriend = SteamIDFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemotePlay.BGetSessionClientResolution
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SessionID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            resolutionX                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            resolutionY                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemotePlay::BGetSessionClientResolution(int SessionID, int* resolutionX, int* resolutionY)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.BGetSessionClientResolution");

	URemotePlay_BGetSessionClientResolution_Params params;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (resolutionX != nullptr)
		*resolutionX = params.resolutionX;
	if (resolutionY != nullptr)
		*resolutionY = params.resolutionY;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.SetSyncPlatforms
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamRemoteStoragePlatform remoteStoragePlatform          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_SetSyncPlatforms(const struct FString& File, SteamCore_ESteamRemoteStoragePlatform remoteStoragePlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.SetSyncPlatforms");

	URemoteStorage_SetSyncPlatforms_Params params;
	params.File = File;
	params.remoteStoragePlatform = remoteStoragePlatform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.SetCloudEnabledForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoteStorage::STATIC_SetCloudEnabledForApp(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.SetCloudEnabledForApp");

	URemoteStorage_SetCloudEnabledForApp_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.RemoteStorage.IsCloudEnabledForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_IsCloudEnabledForApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.IsCloudEnabledForApp");

	URemoteStorage_IsCloudEnabledForApp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.IsCloudEnabledForAccount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_IsCloudEnabledForAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.IsCloudEnabledForAccount");

	URemoteStorage_IsCloudEnabledForAccount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetUGCDownloadProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesDownloaded                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesExpected                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_GetUGCDownloadProgress(const struct FSteamUGCHandle& Handle, int* bytesDownloaded, int* bytesExpected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetUGCDownloadProgress");

	URemoteStorage_GetUGCDownloadProgress_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bytesDownloaded != nullptr)
		*bytesDownloaded = params.bytesDownloaded;
	if (bytesExpected != nullptr)
		*bytesExpected = params.bytesExpected;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetUGCDetails
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            fileSizeInBytes                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamIDOwner                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_GetUGCDetails(const struct FSteamUGCHandle& Handle, int* AppID, struct FString* Name, int* fileSizeInBytes, struct FSteamID* SteamIDOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetUGCDetails");

	URemoteStorage_GetUGCDetails_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;
	if (Name != nullptr)
		*Name = params.Name;
	if (fileSizeInBytes != nullptr)
		*fileSizeInBytes = params.fileSizeInBytes;
	if (SteamIDOwner != nullptr)
		*SteamIDOwner = params.SteamIDOwner;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetSyncPlatforms
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamRemoteStoragePlatform ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamRemoteStoragePlatform URemoteStorage::STATIC_GetSyncPlatforms(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetSyncPlatforms");

	URemoteStorage_GetSyncPlatforms_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetQuota
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            totalBytes                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            availableBytes                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_GetQuota(int* totalBytes, int* availableBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetQuota");

	URemoteStorage_GetQuota_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (totalBytes != nullptr)
		*totalBytes = params.totalBytes;
	if (availableBytes != nullptr)
		*availableBytes = params.availableBytes;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetFileTimestamp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemoteStorage::STATIC_GetFileTimestamp(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileTimestamp");

	URemoteStorage_GetFileTimestamp_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetFileSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemoteStorage::STATIC_GetFileSize(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileSize");

	URemoteStorage_GetFileSize_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetFileNameAndSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            File                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            fileSizeInBytes                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString URemoteStorage::STATIC_GetFileNameAndSize(int File, int* fileSizeInBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileNameAndSize");

	URemoteStorage_GetFileNameAndSize_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (fileSizeInBytes != nullptr)
		*fileSizeInBytes = params.fileSizeInBytes;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetFileCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemoteStorage::STATIC_GetFileCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileCount");

	URemoteStorage_GetFileCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetCachedUGCHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            iCachedContent                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamUGCHandle URemoteStorage::STATIC_GetCachedUGCHandle(int iCachedContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetCachedUGCHandle");

	URemoteStorage_GetCachedUGCHandle_Params params;
	params.iCachedContent = iCachedContent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.GetCachedUGCCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemoteStorage::STATIC_GetCachedUGCCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetCachedUGCCount");

	URemoteStorage_GetCachedUGCCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCFileWriteStreamHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileWriteStreamWriteChunk(const struct FUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk");

	URemoteStorage_FileWriteStreamWriteChunk_Params params;
	params.Handle = Handle;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileWriteStreamOpen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCFileWriteStreamHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUGCFileWriteStreamHandle URemoteStorage::STATIC_FileWriteStreamOpen(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamOpen");

	URemoteStorage_FileWriteStreamOpen_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileWriteStreamClose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCFileWriteStreamHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileWriteStreamClose(const struct FUGCFileWriteStreamHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamClose");

	URemoteStorage_FileWriteStreamClose_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileWriteStreamCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCFileWriteStreamHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileWriteStreamCancel(const struct FUGCFileWriteStreamHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamCancel");

	URemoteStorage_FileWriteStreamCancel_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileWriteAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void URemoteStorage::FileWriteAsync(const struct FScriptDelegate& callback, const struct FString& File, TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteAsync");

	URemoteStorage_FileWriteAsync_Params params;
	params.callback = callback;
	params.File = File;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.RemoteStorage.FileWrite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileWrite(const struct FString& File, TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWrite");

	URemoteStorage_FileWrite_Params params;
	params.File = File;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileShare
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoteStorage::FileShare(const struct FScriptDelegate& callback, const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileShare");

	URemoteStorage_FileShare_Params params;
	params.callback = callback;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.RemoteStorage.FileReadAsyncComplete
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRemoteStorageFileReadAsyncComplete readCall                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          buffer                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            bytesToRead                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileReadAsyncComplete(const struct FRemoteStorageFileReadAsyncComplete& readCall, TArray<unsigned char>* buffer, int bytesToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileReadAsyncComplete");

	URemoteStorage_FileReadAsyncComplete_Params params;
	params.readCall = readCall;
	params.bytesToRead = bytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (buffer != nullptr)
		*buffer = params.buffer;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileReadAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesToRead                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoteStorage::FileReadAsync(const struct FScriptDelegate& callback, const struct FString& File, int Offset, int bytesToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileReadAsync");

	URemoteStorage_FileReadAsync_Params params;
	params.callback = callback;
	params.File = File;
	params.Offset = Offset;
	params.bytesToRead = bytesToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.RemoteStorage.FileRead
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          buffer                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            dataToRead                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemoteStorage::STATIC_FileRead(const struct FString& File, TArray<unsigned char>* buffer, int dataToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileRead");

	URemoteStorage_FileRead_Params params;
	params.File = File;
	params.dataToRead = dataToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (buffer != nullptr)
		*buffer = params.buffer;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FilePersisted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FilePersisted(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FilePersisted");

	URemoteStorage_FilePersisted_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileForget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileForget(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileForget");

	URemoteStorage_FileForget_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileExists(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileExists");

	URemoteStorage_FileExists_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.RemoteStorage.FileDelete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemoteStorage::STATIC_FileDelete(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileDelete");

	URemoteStorage_FileDelete_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.WriteScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          pubRGB                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScreenshotHandle       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FScreenshotHandle UScreenshots::STATIC_WriteScreenshot(TArray<unsigned char> pubRGB, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.WriteScreenshot");

	UScreenshots_WriteScreenshot_Params params;
	params.pubRGB = pubRGB;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.TriggerScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
void UScreenshots::STATIC_TriggerScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.TriggerScreenshot");

	UScreenshots_TriggerScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Screenshots.TagUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScreenshotHandle       Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScreenshots::STATIC_TagUser(const struct FScreenshotHandle& Handle, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.TagUser");

	UScreenshots_TagUser_Params params;
	params.Handle = Handle;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.TagPublishedFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScreenshotHandle       Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScreenshots::STATIC_TagPublishedFile(const struct FScreenshotHandle& Handle, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.TagPublishedFile");

	UScreenshots_TagPublishedFile_Params params;
	params.Handle = Handle;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScreenshotHandle       Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Location                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScreenshots::STATIC_SetLocation(const struct FScreenshotHandle& Handle, const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.SetLocation");

	UScreenshots_SetLocation_Params params;
	params.Handle = Handle;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.IsScreenshotsHooked
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UScreenshots::STATIC_IsScreenshotsHooked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.IsScreenshotsHooked");

	UScreenshots_IsScreenshotsHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.HookScreenshots
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bHook                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScreenshots::STATIC_HookScreenshots(bool bHook)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.HookScreenshots");

	UScreenshots_HookScreenshots_Params params;
	params.bHook = bHook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Screenshots.AddVRScreenshotToLibrary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamVRScreenshotType eType                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 vrFileName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScreenshotHandle       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FScreenshotHandle UScreenshots::STATIC_AddVRScreenshotToLibrary(SteamCore_ESteamVRScreenshotType eType, const struct FString& Filename, const struct FString& vrFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.AddVRScreenshotToLibrary");

	UScreenshots_AddVRScreenshotToLibrary_Params params;
	params.eType = eType;
	params.Filename = Filename;
	params.vrFileName = vrFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Screenshots.AddScreenshotToLibrary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 thumbnailFilename              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScreenshotHandle       ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FScreenshotHandle UScreenshots::STATIC_AddScreenshotToLibrary(const struct FString& Filename, const struct FString& thumbnailFilename, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.AddScreenshotToLibrary");

	UScreenshots_AddScreenshotToLibrary_Params params;
	params.Filename = Filename;
	params.thumbnailFilename = thumbnailFilename;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.UpdateItemPreviewVideo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 previewVideo                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_UpdateItemPreviewVideo(const struct FUGCUpdateHandle& Handle, int Index, const struct FString& previewVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.UpdateItemPreviewVideo");

	UUGC_UpdateItemPreviewVideo_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.previewVideo = previewVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.UpdateItemPreviewFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PreviewFile                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_UpdateItemPreviewFile(const struct FUGCUpdateHandle& Handle, int Index, const struct FString& PreviewFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.UpdateItemPreviewFile");

	UUGC_UpdateItemPreviewFile_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewFile = PreviewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.UnsubscribeItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::UnsubscribeItem(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.UnsubscribeItem");

	UUGC_UnsubscribeItem_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.SuspendDownloads
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::STATIC_SuspendDownloads(bool bSuspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SuspendDownloads");

	UUGC_SuspendDownloads_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.SubscribeItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::SubscribeItem(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SubscribeItem");

	UUGC_SubscribeItem_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.SubmitItemUpdate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 changeNote                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::SubmitItemUpdate(const struct FScriptDelegate& callback, const struct FUGCUpdateHandle& Handle, const struct FString& changeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SubmitItemUpdate");

	UUGC_SubmitItemUpdate_Params params;
	params.callback = callback;
	params.Handle = Handle;
	params.changeNote = changeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.StopPlaytimeTrackingForAllItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUGC::StopPlaytimeTrackingForAllItems(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StopPlaytimeTrackingForAllItems");

	UUGC_StopPlaytimeTrackingForAllItems_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.StopPlaytimeTracking
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID> publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUGC::StopPlaytimeTracking(const struct FScriptDelegate& callback, TArray<struct FPublishedFileID> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StopPlaytimeTracking");

	UUGC_StopPlaytimeTracking_Params params;
	params.callback = callback;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.StartPlaytimeTracking
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID> PublishedFileID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUGC::StartPlaytimeTracking(const struct FScriptDelegate& callback, TArray<struct FPublishedFileID> PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StartPlaytimeTracking");

	UUGC_StartPlaytimeTracking_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.StartItemUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCUpdateHandle        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FUGCUpdateHandle UUGC::STATIC_StartItemUpdate(int ConsumerAppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StartItemUpdate");

	UUGC_StartItemUpdate_Params params;
	params.ConsumerAppID = ConsumerAppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetUserItemVote
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::SetUserItemVote(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetUserItemVote");

	UUGC_SetUserItemVote_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.SetSearchText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SearchText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetSearchText(const struct FUGCQueryHandle& Handle, const struct FString& SearchText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetSearchText");

	UUGC_SetSearchText_Params params;
	params.Handle = Handle;
	params.SearchText = SearchText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnTotalOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnTotalOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnTotalOnly(const struct FUGCQueryHandle& Handle, bool bReturnTotalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnTotalOnly");

	UUGC_SetReturnTotalOnly_Params params;
	params.Handle = Handle;
	params.bReturnTotalOnly = bReturnTotalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnPlaytimeStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnPlaytimeStats(const struct FUGCQueryHandle& Handle, int days)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnPlaytimeStats");

	UUGC_SetReturnPlaytimeStats_Params params;
	params.Handle = Handle;
	params.days = days;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnOnlyIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnOnlyIDs                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnOnlyIDs(const struct FUGCQueryHandle& Handle, bool bReturnOnlyIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnOnlyIDs");

	UUGC_SetReturnOnlyIDs_Params params;
	params.Handle = Handle;
	params.bReturnOnlyIDs = bReturnOnlyIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnMetadata
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnMetadata                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnMetadata(const struct FUGCQueryHandle& Handle, bool bReturnMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnMetadata");

	UUGC_SetReturnMetadata_Params params;
	params.Handle = Handle;
	params.bReturnMetadata = bReturnMetadata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnLongDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnLongDescription         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnLongDescription(const struct FUGCQueryHandle& Handle, bool bReturnLongDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnLongDescription");

	UUGC_SetReturnLongDescription_Params params;
	params.Handle = Handle;
	params.bReturnLongDescription = bReturnLongDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnKeyValueTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnKeyValueTags            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnKeyValueTags(const struct FUGCQueryHandle& Handle, bool bReturnKeyValueTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnKeyValueTags");

	UUGC_SetReturnKeyValueTags_Params params;
	params.Handle = Handle;
	params.bReturnKeyValueTags = bReturnKeyValueTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnChildren
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnChildren                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnChildren(const struct FUGCQueryHandle& Handle, bool bReturnChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnChildren");

	UUGC_SetReturnChildren_Params params;
	params.Handle = Handle;
	params.bReturnChildren = bReturnChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetReturnAdditionalPreviews
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnAdditionalPreviews      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetReturnAdditionalPreviews(const struct FUGCQueryHandle& Handle, bool bReturnAdditionalPreviews)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnAdditionalPreviews");

	UUGC_SetReturnAdditionalPreviews_Params params;
	params.Handle = Handle;
	params.bReturnAdditionalPreviews = bReturnAdditionalPreviews;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetRankedByTrendDays
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetRankedByTrendDays(const struct FUGCQueryHandle& Handle, int days)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetRankedByTrendDays");

	UUGC_SetRankedByTrendDays_Params params;
	params.Handle = Handle;
	params.days = days;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetMatchAnyTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchAnyTag                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetMatchAnyTag(const struct FUGCQueryHandle& Handle, bool bMatchAnyTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetMatchAnyTag");

	UUGC_SetMatchAnyTag_Params params;
	params.Handle = Handle;
	params.bMatchAnyTag = bMatchAnyTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetLanguage(const struct FUGCQueryHandle& Handle, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetLanguage");

	UUGC_SetLanguage_Params params;
	params.Handle = Handle;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// SteamCore_ESteamRemoteStoragePublishedFileVisibility Visibility                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemVisibility(const struct FUGCUpdateHandle& Handle, SteamCore_ESteamRemoteStoragePublishedFileVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemVisibility");

	UUGC_SetItemVisibility_Params params;
	params.Handle = Handle;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemUpdateLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemUpdateLanguage(const struct FUGCUpdateHandle& Handle, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemUpdateLanguage");

	UUGC_SetItemUpdateLanguage_Params params;
	params.Handle = Handle;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemTitle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemTitle(const struct FUGCUpdateHandle& Handle, const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemTitle");

	UUGC_SetItemTitle_Params params;
	params.Handle = Handle;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tags                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemTags(const struct FUGCUpdateHandle& Handle, TArray<struct FString> Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemTags");

	UUGC_SetItemTags_Params params;
	params.Handle = Handle;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PreviewFile                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemPreview(const struct FUGCUpdateHandle& Handle, const struct FString& PreviewFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemPreview");

	UUGC_SetItemPreview_Params params;
	params.Handle = Handle;
	params.PreviewFile = PreviewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemMetadata
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemMetadata(const struct FUGCUpdateHandle& Handle, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemMetadata");

	UUGC_SetItemMetadata_Params params;
	params.Handle = Handle;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemDescription(const struct FUGCUpdateHandle& Handle, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemDescription");

	UUGC_SetItemDescription_Params params;
	params.Handle = Handle;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetItemContent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 contentFolder                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetItemContent(const struct FUGCUpdateHandle& Handle, const struct FString& contentFolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemContent");

	UUGC_SetItemContent_Params params;
	params.Handle = Handle;
	params.contentFolder = contentFolder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetCloudFileNameFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 matchCloudFileName             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetCloudFileNameFilter(const struct FUGCQueryHandle& Handle, const struct FString& matchCloudFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetCloudFileNameFilter");

	UUGC_SetCloudFileNameFilter_Params params;
	params.Handle = Handle;
	params.matchCloudFileName = matchCloudFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetAllowLegacyUpload
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bAllowLegacyUpload             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::SetAllowLegacyUpload(const struct FUGCUpdateHandle& Handle, bool bAllowLegacyUpload)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetAllowLegacyUpload");

	UUGC_SetAllowLegacyUpload_Params params;
	params.Handle = Handle;
	params.bAllowLegacyUpload = bAllowLegacyUpload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SetAllowCachedResponse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxAgeSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_SetAllowCachedResponse(const struct FUGCQueryHandle& Handle, int maxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetAllowCachedResponse");

	UUGC_SetAllowCachedResponse_Params params;
	params.Handle = Handle;
	params.maxAgeSeconds = maxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.SendQueryUGCRequest
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::SendQueryUGCRequest(const struct FScriptDelegate& callback, const struct FUGCQueryHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SendQueryUGCRequest");

	UUGC_SendQueryUGCRequest_Params params;
	params.callback = callback;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.RemoveItemPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_RemoveItemPreview(const struct FUGCUpdateHandle& Handle, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveItemPreview");

	UUGC_RemoveItemPreview_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.RemoveItemKeyValueTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_RemoveItemKeyValueTags(const struct FUGCUpdateHandle& Handle, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveItemKeyValueTags");

	UUGC_RemoveItemKeyValueTags_Params params;
	params.Handle = Handle;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.RemoveItemFromFavorites
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::RemoveItemFromFavorites(const struct FScriptDelegate& callback, int AppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveItemFromFavorites");

	UUGC_RemoveItemFromFavorites_Params params;
	params.callback = callback;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.RemoveDependency
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        parentPublishedFileID          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        ChildPublishedFileId           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::RemoveDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& parentPublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveDependency");

	UUGC_RemoveDependency_Params params;
	params.callback = callback;
	params.parentPublishedFileID = parentPublishedFileID;
	params.ChildPublishedFileId = ChildPublishedFileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.RemoveAppDependency
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::RemoveAppDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveAppDependency");

	UUGC_RemoveAppDependency_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.ReleaseQueryUGCRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_ReleaseQueryUGCRequest(const struct FUGCQueryHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.ReleaseQueryUGCRequest");

	UUGC_ReleaseQueryUGCRequest_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetUserItemVote
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::GetUserItemVote(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetUserItemVote");

	UUGC_GetUserItemVote_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.GetSubscribedItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPublishedFileID> publishedFileIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            maxEntries                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUGC::STATIC_GetSubscribedItems(TArray<struct FPublishedFileID>* publishedFileIDs, int maxEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetSubscribedItems");

	UUGC_GetSubscribedItems_Params params;
	params.maxEntries = maxEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (publishedFileIDs != nullptr)
		*publishedFileIDs = params.publishedFileIDs;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCStatistic
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamItemStatistic  statType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StatValue                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCStatistic(const struct FUGCQueryHandle& Handle, int Index, SteamCore_ESteamItemStatistic statType, struct FString* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCStatistic");

	UUGC_GetQueryUGCStatistic_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.statType = statType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCDetails        Details                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCResult(const struct FUGCQueryHandle& Handle, int Index, struct FSteamUGCDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCResult");

	UUGC_GetQueryUGCResult_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCPreviewURL
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCPreviewURL(const struct FUGCQueryHandle& Handle, int Index, struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCPreviewURL");

	UUGC_GetQueryUGCPreviewURL_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (URL != nullptr)
		*URL = params.URL;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCNumKeyValueTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUGC::STATIC_GetQueryUGCNumKeyValueTags(const struct FUGCQueryHandle& Handle, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCNumKeyValueTags");

	UUGC_GetQueryUGCNumKeyValueTags_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUGC::STATIC_GetQueryUGCNumAdditionalPreviews(const struct FUGCQueryHandle& Handle, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews");

	UUGC_GetQueryUGCNumAdditionalPreviews_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCMetadata
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            metadataSize                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCMetadata(const struct FUGCQueryHandle& Handle, int Index, struct FString* MetaData, int metadataSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCMetadata");

	UUGC_GetQueryUGCMetadata_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.metadataSize = metadataSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCKeyValueTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            keyValueTagIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCKeyValueTag(const struct FUGCQueryHandle& Handle, int Index, int keyValueTagIndex, struct FString* Key, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCKeyValueTag");

	UUGC_GetQueryUGCKeyValueTag_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.keyValueTagIndex = keyValueTagIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCChildren
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID> publishedFileIDs               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            maxEntries                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCChildren(const struct FUGCQueryHandle& Handle, int Index, TArray<struct FPublishedFileID>* publishedFileIDs, int maxEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCChildren");

	UUGC_GetQueryUGCChildren_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.maxEntries = maxEntries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (publishedFileIDs != nullptr)
		*publishedFileIDs = params.publishedFileIDs;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetQueryUGCAdditionalPreview
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 urlOrVideoID                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 originalFileName               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamItemPreviewType previewType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetQueryUGCAdditionalPreview(const struct FUGCQueryHandle& Handle, int Index, int PreviewIndex, struct FString* urlOrVideoID, struct FString* originalFileName, SteamCore_ESteamItemPreviewType* previewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCAdditionalPreview");

	UUGC_GetQueryUGCAdditionalPreview_Params params;
	params.Handle = Handle;
	params.Index = Index;
	params.PreviewIndex = PreviewIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (urlOrVideoID != nullptr)
		*urlOrVideoID = params.urlOrVideoID;
	if (originalFileName != nullptr)
		*originalFileName = params.originalFileName;
	if (previewType != nullptr)
		*previewType = params.previewType;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetNumSubscribedItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUGC::STATIC_GetNumSubscribedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetNumSubscribedItems");

	UUGC_GetNumSubscribedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetItemUpdateProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            bytesProcessed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesTotal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamItemUpdateStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamItemUpdateStatus UUGC::STATIC_GetItemUpdateProgress(const struct FUGCUpdateHandle& Handle, int* bytesProcessed, int* bytesTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemUpdateProgress");

	UUGC_GetItemUpdateProgress_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bytesProcessed != nullptr)
		*bytesProcessed = params.bytesProcessed;
	if (bytesTotal != nullptr)
		*bytesTotal = params.bytesTotal;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetItemState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<SteamCore_ESteamItemState> States                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUGC::STATIC_GetItemState(const struct FPublishedFileID& PublishedFileID, TArray<SteamCore_ESteamItemState>* States)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemState");

	UUGC_GetItemState_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (States != nullptr)
		*States = params.States;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetItemInstallInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            sizeOnDisk                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 folder                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timestamp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetItemInstallInfo(const struct FPublishedFileID& PublishedFileID, int* sizeOnDisk, struct FString* folder, int* Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemInstallInfo");

	UUGC_GetItemInstallInfo_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (sizeOnDisk != nullptr)
		*sizeOnDisk = params.sizeOnDisk;
	if (folder != nullptr)
		*folder = params.folder;
	if (Timestamp != nullptr)
		*Timestamp = params.Timestamp;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetItemDownloadInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesDownloaded                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            bytesTotal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_GetItemDownloadInfo(const struct FPublishedFileID& PublishedFileID, int* bytesDownloaded, int* bytesTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemDownloadInfo");

	UUGC_GetItemDownloadInfo_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bytesDownloaded != nullptr)
		*bytesDownloaded = params.bytesDownloaded;
	if (bytesTotal != nullptr)
		*bytesTotal = params.bytesTotal;


	return params.ReturnValue;
}


// Function SteamCore.UGC.GetAppDependencies
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::GetAppDependencies(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetAppDependencies");

	UUGC_GetAppDependencies_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.DownloadItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHighPriority                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_DownloadItem(const struct FPublishedFileID& PublishedFileID, bool bHighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.DownloadItem");

	UUGC_DownloadItem_Params params;
	params.PublishedFileID = PublishedFileID;
	params.bHighPriority = bHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.DeleteItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::DeleteItem(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.DeleteItem");

	UUGC_DeleteItem_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.CreateQueryUserUGCRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamUserUGCList    listType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamUGCMatchingUGCType matchingUGCType                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamUserUGCListSortOrder SortOrder                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUGCQueryHandle UUGC::STATIC_CreateQueryUserUGCRequest(const struct FSteamID& SteamID, SteamCore_ESteamUserUGCList listType, SteamCore_ESteamUGCMatchingUGCType matchingUGCType, SteamCore_ESteamUserUGCListSortOrder SortOrder, int CreatorAppID, int ConsumerAppID, int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateQueryUserUGCRequest");

	UUGC_CreateQueryUserUGCRequest_Params params;
	params.SteamID = SteamID;
	params.listType = listType;
	params.matchingUGCType = matchingUGCType;
	params.SortOrder = SortOrder;
	params.CreatorAppID = CreatorAppID;
	params.ConsumerAppID = ConsumerAppID;
	params.page = page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.CreateQueryUGCDetailsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPublishedFileID> publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUGCQueryHandle UUGC::STATIC_CreateQueryUGCDetailsRequest(TArray<struct FPublishedFileID> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateQueryUGCDetailsRequest");

	UUGC_CreateQueryUGCDetailsRequest_Params params;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.CreateQueryAllUGCRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamUGCQuery       QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamUGCMatchingUGCType FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUGCQueryHandle UUGC::STATIC_CreateQueryAllUGCRequest(SteamCore_ESteamUGCQuery QueryType, SteamCore_ESteamUGCMatchingUGCType FileType, int CreatorAppID, int ConsumerAppID, int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateQueryAllUGCRequest");

	UUGC_CreateQueryAllUGCRequest_Params params;
	params.QueryType = QueryType;
	params.FileType = FileType;
	params.CreatorAppID = CreatorAppID;
	params.ConsumerAppID = ConsumerAppID;
	params.page = page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.CreateItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamWorkshopFileType FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::CreateItem(const struct FScriptDelegate& callback, int ConsumerAppID, SteamCore_ESteamWorkshopFileType FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateItem");

	UUGC_CreateItem_Params params;
	params.callback = callback;
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.BInitWorkshopForGameServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            workshopDepotID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 folder                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_BInitWorkshopForGameServer(int workshopDepotID, const struct FString& folder)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.BInitWorkshopForGameServer");

	UUGC_BInitWorkshopForGameServer_Params params;
	params.workshopDepotID = workshopDepotID;
	params.folder = folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddRequiredTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TagName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_AddRequiredTag(const struct FUGCQueryHandle& Handle, const struct FString& TagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddRequiredTag");

	UUGC_AddRequiredTag_Params params;
	params.Handle = Handle;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddRequiredKeyValueTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_AddRequiredKeyValueTag(const struct FUGCQueryHandle& Handle, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddRequiredKeyValueTag");

	UUGC_AddRequiredKeyValueTag_Params params;
	params.Handle = Handle;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddItemToFavorites
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::AddItemToFavorites(const struct FScriptDelegate& callback, int AppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemToFavorites");

	UUGC_AddItemToFavorites_Params params;
	params.callback = callback;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.AddItemPreviewVideo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 videoID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_AddItemPreviewVideo(const struct FUGCUpdateHandle& Handle, const struct FString& videoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemPreviewVideo");

	UUGC_AddItemPreviewVideo_Params params;
	params.Handle = Handle;
	params.videoID = videoID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddItemPreviewFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PreviewFile                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamItemPreviewType Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_AddItemPreviewFile(const struct FUGCUpdateHandle& Handle, const struct FString& PreviewFile, SteamCore_ESteamItemPreviewType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemPreviewFile");

	UUGC_AddItemPreviewFile_Params params;
	params.Handle = Handle;
	params.PreviewFile = PreviewFile;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddItemKeyValueTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_AddItemKeyValueTag(const struct FUGCUpdateHandle& Handle, const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemKeyValueTag");

	UUGC_AddItemKeyValueTag_Params params;
	params.Handle = Handle;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddExcludedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TagName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUGC::STATIC_AddExcludedTag(const struct FUGCQueryHandle& Handle, const struct FString& TagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddExcludedTag");

	UUGC_AddExcludedTag_Params params;
	params.Handle = Handle;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UGC.AddDependency
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        ChildPublishedFileId           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::AddDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddDependency");

	UUGC_AddDependency_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;
	params.ChildPublishedFileId = ChildPublishedFileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UGC.AddAppDependency
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUGC::AddAppDependency(const struct FScriptDelegate& callback, const struct FPublishedFileID& PublishedFileID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddAppDependency");

	UUGC_AddAppDependency_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::STATIC_StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync");

	USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_StopPlaytimeTrackingForAllItemsAsync_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FStopPlaytimeTrackingResult Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback");

	USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID> publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionStopPlaytimeTracking* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionStopPlaytimeTracking* USteamCoreUGCAsyncActionStopPlaytimeTracking::STATIC_StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync");

	USteamCoreUGCAsyncActionStopPlaytimeTracking_StopPlaytimeTrackingAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FStopPlaytimeTrackingResult Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback");

	USteamCoreUGCAsyncActionStopPlaytimeTracking_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID> publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionStartPlaytimeTracking* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionStartPlaytimeTracking* USteamCoreUGCAsyncActionStartPlaytimeTracking::STATIC_StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync");

	USteamCoreUGCAsyncActionStartPlaytimeTracking_StartPlaytimeTrackingAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FStartPlaytimeTrackingResult Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(const struct FStartPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback");

	USteamCoreUGCAsyncActionStartPlaytimeTracking_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        publishedFileIDs               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionUnsubscribeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionUnsubscribeItem* USteamCoreUGCAsyncActionUnsubscribeItem::STATIC_UnsubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync");

	USteamCoreUGCAsyncActionUnsubscribeItem_UnsubscribeItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FRemoteStorageSubscribePublishedFileResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback");

	USteamCoreUGCAsyncActionUnsubscribeItem_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        publishedFileIDs               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSubscribeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionSubscribeItem* USteamCoreUGCAsyncActionSubscribeItem::STATIC_SubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync");

	USteamCoreUGCAsyncActionSubscribeItem_SubscribeItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FRemoteStorageSubscribePublishedFileResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback");

	USteamCoreUGCAsyncActionSubscribeItem_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionRemoveItemFromFavorites* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionRemoveItemFromFavorites* USteamCoreUGCAsyncActionRemoveItemFromFavorites::STATIC_RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int AppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync");

	USteamCoreUGCAsyncActionRemoveItemFromFavorites_RemoveItemFromFavoritesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FUserFavoriteItemsListChanged Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback");

	USteamCoreUGCAsyncActionRemoveItemFromFavorites_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FUserFavoriteItemsListChanged Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback");

	USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionAddItemToFavorites* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionAddItemToFavorites* USteamCoreUGCAsyncActionAddItemToFavorites::STATIC_AddItemToFavoritesAsync(class UObject* WorldContextObject, int AppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync");

	USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGetUserItemVoteResult  Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(const struct FGetUserItemVoteResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback");

	USteamCoreUGCAsyncActionGetUserItemVote_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionGetUserItemVote* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionGetUserItemVote* USteamCoreUGCAsyncActionGetUserItemVote::STATIC_GetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync");

	USteamCoreUGCAsyncActionGetUserItemVote_GetUserItemVoteAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVoteUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSetUserItemVote* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionSetUserItemVote* USteamCoreUGCAsyncActionSetUserItemVote::STATIC_SetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync");

	USteamCoreUGCAsyncActionSetUserItemVote_SetUserItemVoteAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSetUserItemVoteResult  Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(const struct FSetUserItemVoteResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback");

	USteamCoreUGCAsyncActionSetUserItemVote_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCUpdateHandle        Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 changeNote                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSubmitItemUpdate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionSubmitItemUpdate* USteamCoreUGCAsyncActionSubmitItemUpdate::STATIC_SubmitItemUpdateAsync(class UObject* WorldContextObject, const struct FUGCUpdateHandle& Handle, const struct FString& changeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync");

	USteamCoreUGCAsyncActionSubmitItemUpdate_SubmitItemUpdateAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;
	params.changeNote = changeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSubmitItemUpdateResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback");

	USteamCoreUGCAsyncActionSubmitItemUpdate_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FCreateItemResult       Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionCreateItem::HandleCallback(const struct FCreateItemResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback");

	USteamCoreUGCAsyncActionCreateItem_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ConsumerAppID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamWorkshopFileType FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionCreateItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionCreateItem* USteamCoreUGCAsyncActionCreateItem::STATIC_CreateItemAsync(class UObject* WorldContextObject, int ConsumerAppID, SteamCore_ESteamWorkshopFileType FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync");

	USteamCoreUGCAsyncActionCreateItem_CreateItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConsumerAppID = ConsumerAppID;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle         Handle                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSendQueryUGCRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionSendQueryUGCRequest* USteamCoreUGCAsyncActionSendQueryUGCRequest::STATIC_SendQueryUGCRequestAsync(class UObject* WorldContextObject, const struct FUGCQueryHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync");

	USteamCoreUGCAsyncActionSendQueryUGCRequest_SendQueryUGCRequestAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSteamUGCQueryCompleted Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback");

	USteamCoreUGCAsyncActionSendQueryUGCRequest_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAddAppDependencyResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionAddAppDependency::HandleCallback(const struct FAddAppDependencyResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback");

	USteamCoreUGCAsyncActionAddAppDependency_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionAddAppDependency* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionAddAppDependency* USteamCoreUGCAsyncActionAddAppDependency::STATIC_AddAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync");

	USteamCoreUGCAsyncActionAddAppDependency_AddAppDependencyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionRemoveAppDependency* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionRemoveAppDependency* USteamCoreUGCAsyncActionRemoveAppDependency::STATIC_RemoveAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync");

	USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FRemoveAppDependencyResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(const struct FRemoveAppDependencyResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback");

	USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAddUGCDependencyResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(const struct FAddUGCDependencyResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback");

	USteamCoreUGCAsyncActionAddUGCDependency_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        ChildPublishedFileId           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionAddUGCDependency* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionAddUGCDependency* USteamCoreUGCAsyncActionAddUGCDependency::STATIC_AddDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync");

	USteamCoreUGCAsyncActionAddUGCDependency_AddDependencyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;
	params.ChildPublishedFileId = ChildPublishedFileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        ChildPublishedFileId           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionRemoveUGCDependency* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionRemoveUGCDependency* USteamCoreUGCAsyncActionRemoveUGCDependency::STATIC_RemoveDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync");

	USteamCoreUGCAsyncActionRemoveUGCDependency_RemoveDependencyAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;
	params.ChildPublishedFileId = ChildPublishedFileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FRemoveUGCDependencyResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(const struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback");

	USteamCoreUGCAsyncActionRemoveUGCDependency_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FUGCDeleteItemResult    Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionDeleteItem::HandleCallback(const struct FUGCDeleteItemResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback");

	USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionDeleteItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionDeleteItem* USteamCoreUGCAsyncActionDeleteItem::STATIC_DeleteItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync");

	USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGetAppDependenciesResult Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(const struct FGetAppDependenciesResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback");

	USteamCoreUGCAsyncActionGetAppDependencies_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionGetAppDependencies* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionGetAppDependencies* USteamCoreUGCAsyncActionGetAppDependencies::STATIC_GetAppDependenciesAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync");

	USteamCoreUGCAsyncActionGetAppDependencies_GetAppDependenciesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FDownloadItemResult     Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUGCAsyncActionDownloadItem::HandleCallback(const struct FDownloadItemResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback");

	USteamCoreUGCAsyncActionDownloadItem_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHighPriority                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionDownloadItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUGCAsyncActionDownloadItem* USteamCoreUGCAsyncActionDownloadItem::STATIC_DownloadItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bHighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync");

	USteamCoreUGCAsyncActionDownloadItem_DownloadItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;
	params.bHighPriority = bHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.UserHasLicenseForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamUserHasLicenseForAppResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamUserHasLicenseForAppResult UUser::STATIC_UserHasLicenseForApp(const struct FSteamID& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.UserHasLicenseForApp");

	UUser_UserHasLicenseForApp_Params params;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.StopVoiceRecording
// (Final, Native, Static, Public, BlueprintCallable)
void UUser::STATIC_StopVoiceRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.StopVoiceRecording");

	UUser_StopVoiceRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.User.StartVoiceRecording
// (Final, Native, Static, Public, BlueprintCallable)
void UUser::STATIC_StartVoiceRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.StartVoiceRecording");

	UUser_StartVoiceRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.User.RequestStoreAuthURL
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 RedirectURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUser::RequestStoreAuthURL(const struct FScriptDelegate& callback, const struct FString& RedirectURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.RequestStoreAuthURL");

	UUser_RequestStoreAuthURL_Params params;
	params.callback = callback;
	params.RedirectURL = RedirectURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.User.RequestEncryptedAppTicket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          dataToInclude                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUser::RequestEncryptedAppTicket(const struct FScriptDelegate& callback, TArray<unsigned char> dataToInclude)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.RequestEncryptedAppTicket");

	UUser_RequestEncryptedAppTicket_Params params;
	params.callback = callback;
	params.dataToInclude = dataToInclude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.User.GetVoiceOptimalSampleRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUser::STATIC_GetVoiceOptimalSampleRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetVoiceOptimalSampleRate");

	UUser_GetVoiceOptimalSampleRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.GetVoice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          destBuffer                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            bytesWritten                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamVoiceResult    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamVoiceResult UUser::STATIC_GetVoice(TArray<unsigned char>* destBuffer, int* bytesWritten)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetVoice");

	UUser_GetVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (destBuffer != nullptr)
		*destBuffer = params.destBuffer;
	if (bytesWritten != nullptr)
		*bytesWritten = params.bytesWritten;


	return params.ReturnValue;
}


// Function SteamCore.User.GetSteamID_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UUser::STATIC_GetSteamID_Pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetSteamID_Pure");

	UUser_GetSteamID_Pure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.GetSteamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID UUser::STATIC_GetSteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetSteamID");

	UUser_GetSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.GetPlayerSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUser::STATIC_GetPlayerSteamLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetPlayerSteamLevel");

	UUser_GetPlayerSteamLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.GetGameBadgeLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            series                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoil                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUser::STATIC_GetGameBadgeLevel(int series, bool bFoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetGameBadgeLevel");

	UUser_GetGameBadgeLevel_Params params;
	params.series = series;
	params.bFoil = bFoil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.GetEncryptedAppTicket
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ticket                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_GetEncryptedAppTicket(TArray<unsigned char>* ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetEncryptedAppTicket");

	UUser_GetEncryptedAppTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ticket != nullptr)
		*ticket = params.ticket;


	return params.ReturnValue;
}


// Function SteamCore.User.GetAvailableVoice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            compressedBytes                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            uncompressedBytes              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            uncompressedVoiceDesiredSampleRate (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamVoiceResult    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamVoiceResult UUser::STATIC_GetAvailableVoice(int* compressedBytes, int* uncompressedBytes, int uncompressedVoiceDesiredSampleRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetAvailableVoice");

	UUser_GetAvailableVoice_Params params;
	params.uncompressedVoiceDesiredSampleRate = uncompressedVoiceDesiredSampleRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (compressedBytes != nullptr)
		*compressedBytes = params.compressedBytes;
	if (uncompressedBytes != nullptr)
		*uncompressedBytes = params.uncompressedBytes;


	return params.ReturnValue;
}


// Function SteamCore.User.GetAuthSessionTicket
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ticket                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamTicketHandle      ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamTicketHandle UUser::STATIC_GetAuthSessionTicket(TArray<unsigned char>* ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetAuthSessionTicket");

	UUser_GetAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ticket != nullptr)
		*ticket = params.ticket;


	return params.ReturnValue;
}


// Function SteamCore.User.EndAuthSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUser::STATIC_EndAuthSession(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.EndAuthSession");

	UUser_EndAuthSession_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.User.DecompressVoice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          compressedBuffer               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            desiredSampleRate              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          destBuffer                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCore_ESteamVoiceResult    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamVoiceResult UUser::STATIC_DecompressVoice(TArray<unsigned char> compressedBuffer, int desiredSampleRate, TArray<unsigned char>* destBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.DecompressVoice");

	UUser_DecompressVoice_Params params;
	params.compressedBuffer = compressedBuffer;
	params.desiredSampleRate = desiredSampleRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (destBuffer != nullptr)
		*destBuffer = params.destBuffer;


	return params.ReturnValue;
}


// Function SteamCore.User.CancelAuthTicket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamTicketHandle      ticketHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUser::STATIC_CancelAuthTicket(const struct FSteamTicketHandle& ticketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.CancelAuthTicket");

	UUser_CancelAuthTicket_Params params;
	params.ticketHandle = ticketHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.User.BLoggedOn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_BLoggedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BLoggedOn");

	UUser_BLoggedOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.BIsTwoFactorEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_BIsTwoFactorEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsTwoFactorEnabled");

	UUser_BIsTwoFactorEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.BIsPhoneVerified
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_BIsPhoneVerified()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsPhoneVerified");

	UUser_BIsPhoneVerified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.BIsPhoneRequiringVerification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_BIsPhoneRequiringVerification()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsPhoneRequiringVerification");

	UUser_BIsPhoneRequiringVerification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.BIsPhoneIdentifying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_BIsPhoneIdentifying()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsPhoneIdentifying");

	UUser_BIsPhoneIdentifying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.BIsBehindNAT
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUser::STATIC_BIsBehindNAT()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsBehindNAT");

	UUser_BIsBehindNAT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.BeginAuthSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ticket                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamBeginAuthSessionResult ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamBeginAuthSessionResult UUser::STATIC_BeginAuthSession(TArray<unsigned char> ticket, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.BeginAuthSession");

	UUser_BeginAuthSession_Params params;
	params.ticket = ticket;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.User.AdvertiseGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDGameServer              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 serverIP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            serverPort                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUser::STATIC_AdvertiseGame(const struct FSteamID& SteamIDGameServer, const struct FString& serverIP, int serverPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.User.AdvertiseGame");

	UUser_AdvertiseGame_Params params;
	params.SteamIDGameServer = SteamIDGameServer;
	params.serverIP = serverIP;
	params.serverPort = serverPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          dataToInclude                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreUserAsyncActionRequestEncryptedAppTicket* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserAsyncActionRequestEncryptedAppTicket* USteamCoreUserAsyncActionRequestEncryptedAppTicket::STATIC_RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<unsigned char> dataToInclude)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync");

	USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.dataToInclude = dataToInclude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEncryptedAppTicketResponse Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserAsyncActionRequestEncryptedAppTicket::HandleCallback(const struct FEncryptedAppTicketResponse& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback");

	USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserAsyncActionRequestStoreAuthURL* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserAsyncActionRequestStoreAuthURL* USteamCoreUserAsyncActionRequestStoreAuthURL::STATIC_RequestStoreAuthURLAsync(class UObject* WorldContextObject, const struct FString& RedirectURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync");

	USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RedirectURL = RedirectURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FStoreAuthURLResponse   Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(const struct FStoreAuthURLResponse& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback");

	USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.UploadLeaderboardScore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardUploadScoreMethod uploadScoreMethod              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    scoreDetails                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUserStats::UploadLeaderboardScore(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int Score, TArray<int> scoreDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.UploadLeaderboardScore");

	UUserStats_UploadLeaderboardScore_Params params;
	params.callback = callback;
	params.SteamLeaderboard = SteamLeaderboard;
	params.uploadScoreMethod = uploadScoreMethod;
	params.Score = Score;
	params.scoreDetails = scoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.UpdateAvgRateStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          countThisSession               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          sessionLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_UpdateAvgRateStat(const struct FString& Name, float countThisSession, float sessionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.UpdateAvgRateStat");

	UUserStats_UpdateAvgRateStat_Params params;
	params.Name = Name;
	params.countThisSession = countThisSession;
	params.sessionLength = sessionLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.StoreStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_StoreStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.StoreStats");

	UUserStats_StoreStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.SetStatInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_SetStatInt(const struct FString& Name, int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.SetStatInt");

	UUserStats_SetStatInt_Params params;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.SetStatFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_SetStatFloat(const struct FString& Name, float Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.SetStatFloat");

	UUserStats_SetStatFloat_Params params;
	params.Name = Name;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.SetAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_SetAchievement(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.SetAchievement");

	UUserStats_SetAchievement_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.ResetAllStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bAchievementsToo               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_ResetAllStats(bool bAchievementsToo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.ResetAllStats");

	UUserStats_ResetAllStats_Params params;
	params.bAchievementsToo = bAchievementsToo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.RequestUserStats
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserStats::RequestUserStats(const struct FScriptDelegate& callback, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestUserStats");

	UUserStats_RequestUserStats_Params params;
	params.callback = callback;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.RequestGlobalStats
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            historyDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserStats::RequestGlobalStats(const struct FScriptDelegate& callback, int historyDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestGlobalStats");

	UUserStats_RequestGlobalStats_Params params;
	params.callback = callback;
	params.historyDays = historyDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.RequestGlobalAchievementPercentages
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUserStats::RequestGlobalAchievementPercentages(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestGlobalAchievementPercentages");

	UUserStats_RequestGlobalAchievementPercentages_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.RequestCurrentStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_RequestCurrentStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestCurrentStats");

	UUserStats_RequestCurrentStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.IndicateAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CurrentProgress                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxProgress                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_IndicateAchievementProgress(const struct FString& Name, int CurrentProgress, int MaxProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.IndicateAchievementProgress");

	UUserStats_IndicateAchievementProgress_Params params;
	params.Name = Name;
	params.CurrentProgress = CurrentProgress;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetUserStatInteger
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetUserStatInteger(const struct FSteamID& SteamIDUser, const struct FString& Name, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserStatInteger");

	UUserStats_GetUserStatInteger_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetUserStatFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetUserStatFloat(const struct FSteamID& SteamIDUser, const struct FString& Name, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserStatFloat");

	UUserStats_GetUserStatFloat_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetUserAchievementAndUnlockTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            unlockTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetUserAchievementAndUnlockTime(const struct FSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved, int* unlockTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserAchievementAndUnlockTime");

	UUserStats_GetUserAchievementAndUnlockTime_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;
	if (unlockTime != nullptr)
		*unlockTime = params.unlockTime;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetUserAchievement
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamIDUser                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetUserAchievement(const struct FSteamID& SteamIDUser, const struct FString& Name, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserAchievement");

	UUserStats_GetUserAchievement_Params params;
	params.SteamIDUser = SteamIDUser;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetStatInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetStatInt(const struct FString& Name, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetStatInt");

	UUserStats_GetStatInt_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetStatFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetStatFloat(const struct FString& Name, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetStatFloat");

	UUserStats_GetStatFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetNumberOfCurrentPlayers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUserStats::GetNumberOfCurrentPlayers(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetNumberOfCurrentPlayers");

	UUserStats_GetNumberOfCurrentPlayers_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.GetNumAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUserStats::STATIC_GetNumAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetNumAchievements");

	UUserStats_GetNumAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            iteratorPrevious               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUserStats::STATIC_GetNextMostAchievedAchievementInfo(int iteratorPrevious, struct FString* Name, float* percent, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo");

	UUserStats_GetNextMostAchievedAchievementInfo_Params params;
	params.iteratorPrevious = iteratorPrevious;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (percent != nullptr)
		*percent = params.percent;
	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetMostAchievedAchievementInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUserStats::STATIC_GetMostAchievedAchievementInfo(struct FString* Name, float* percent, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetMostAchievedAchievementInfo");

	UUserStats_GetMostAchievedAchievementInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (percent != nullptr)
		*percent = params.percent;
	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetLeaderboardSortMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardSortMethod ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamLeaderboardSortMethod UUserStats::STATIC_GetLeaderboardSortMethod(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardSortMethod");

	UUserStats_GetLeaderboardSortMethod_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetLeaderboardName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUserStats::STATIC_GetLeaderboardName(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardName");

	UUserStats_GetLeaderboardName_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetLeaderboardEntryCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUserStats::STATIC_GetLeaderboardEntryCount(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardEntryCount");

	UUserStats_GetLeaderboardEntryCount_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetLeaderboardDisplayType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardDisplayType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamLeaderboardDisplayType UUserStats::STATIC_GetLeaderboardDisplayType(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardDisplayType");

	UUserStats_GetLeaderboardDisplayType_Params params;
	params.SteamLeaderboard = SteamLeaderboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetGlobalStatInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetGlobalStatInt(const struct FString& StatName, int* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatInt");

	UUserStats_GetGlobalStatInt_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetGlobalStatHistoryInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            historyDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUserStats::STATIC_GetGlobalStatHistoryInt(const struct FString& StatName, int historyDays, TArray<int>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatHistoryInt");

	UUserStats_GetGlobalStatHistoryInt_Params params;
	params.StatName = StatName;
	params.historyDays = historyDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetGlobalStatHistoryFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            historyDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUserStats::STATIC_GetGlobalStatHistoryFloat(const struct FString& StatName, int historyDays, TArray<float>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatHistoryFloat");

	UUserStats_GetGlobalStatHistoryFloat_Params params;
	params.StatName = StatName;
	params.historyDays = historyDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetGlobalStatFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetGlobalStatFloat(const struct FString& StatName, float* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatFloat");

	UUserStats_GetGlobalStatFloat_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetDownloadedLeaderboardEntry
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboardEntries leaderboardEntries             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboardEntry  leaderboardEntry               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<int>                    Details                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    outDetails                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetDownloadedLeaderboardEntry(const struct FSteamLeaderboardEntries& leaderboardEntries, int Index, struct FSteamLeaderboardEntry* leaderboardEntry, TArray<int> Details, TArray<int>* outDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetDownloadedLeaderboardEntry");

	UUserStats_GetDownloadedLeaderboardEntry_Params params;
	params.leaderboardEntries = leaderboardEntries;
	params.Index = Index;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (leaderboardEntry != nullptr)
		*leaderboardEntry = params.leaderboardEntry;
	if (outDetails != nullptr)
		*outDetails = params.outDetails;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetAchievementName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            achievement                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUserStats::STATIC_GetAchievementName(int achievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementName");

	UUserStats_GetAchievementName_Params params;
	params.achievement = achievement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetAchievementIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UUserStats::STATIC_GetAchievementIcon(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementIcon");

	UUserStats_GetAchievementIcon_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetAchievementDisplayAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUserStats::STATIC_GetAchievementDisplayAttribute(const struct FString& Name, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementDisplayAttribute");

	UUserStats_GetAchievementDisplayAttribute_Params params;
	params.Name = Name;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetAchievementAndUnlockTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            unlockTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetAchievementAndUnlockTime(const struct FString& Name, bool* bAchieved, int* unlockTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementAndUnlockTime");

	UUserStats_GetAchievementAndUnlockTime_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;
	if (unlockTime != nullptr)
		*unlockTime = params.unlockTime;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetAchievementAchievedPercent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetAchievementAchievedPercent(const struct FString& Name, float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementAchievedPercent");

	UUserStats_GetAchievementAchievedPercent_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (percent != nullptr)
		*percent = params.percent;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.GetAchievement
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAchieved                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_GetAchievement(const struct FString& Name, bool* bAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievement");

	UUserStats_GetAchievement_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAchieved != nullptr)
		*bAchieved = params.bAchieved;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.FindOrCreateLeaderboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardDisplayType displayType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserStats::FindOrCreateLeaderboard(const struct FScriptDelegate& callback, const struct FString& LeaderboardName, SteamCore_ESteamLeaderboardSortMethod SortMethod, SteamCore_ESteamLeaderboardDisplayType displayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.FindOrCreateLeaderboard");

	UUserStats_FindOrCreateLeaderboard_Params params;
	params.callback = callback;
	params.LeaderboardName = LeaderboardName;
	params.SortMethod = SortMethod;
	params.displayType = displayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.FindLeaderboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserStats::FindLeaderboard(const struct FScriptDelegate& callback, const struct FString& LeaderboardName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.FindLeaderboard");

	UUserStats_FindLeaderboard_Params params;
	params.callback = callback;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>        users                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UUserStats::DownloadLeaderboardEntriesForUsers(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> users)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers");

	UUserStats_DownloadLeaderboardEntriesForUsers_Params params;
	params.callback = callback;
	params.SteamLeaderboard = SteamLeaderboard;
	params.users = users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.DownloadLeaderboardEntries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardDataRequest dataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserStats::DownloadLeaderboardEntries(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardDataRequest dataRequest, int rangeStart, int rangeEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.DownloadLeaderboardEntries");

	UUserStats_DownloadLeaderboardEntries_Params params;
	params.callback = callback;
	params.SteamLeaderboard = SteamLeaderboard;
	params.dataRequest = dataRequest;
	params.rangeStart = rangeStart;
	params.rangeEnd = rangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.UserStats.ClearAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserStats::STATIC_ClearAchievement(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.ClearAchievement");

	UUserStats_ClearAchievement_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.UserStats.AttachLeaderboardUGC
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserStats::AttachLeaderboardUGC(const struct FScriptDelegate& callback, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.AttachLeaderboardUGC");

	UUserStats_AttachLeaderboardUGC_Params params;
	params.callback = callback;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FLeaderboardFindResult  Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionFindLeaderboard::HandleCallback(const struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback");

	USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionFindLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionFindLeaderboard* USteamCoreUserStatsAsyncActionFindLeaderboard::STATIC_FindLeaderboardAsync(class UObject* WorldContextObject, const struct FString& LeaderboardName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync");

	USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FLeaderboardScoresDownloaded Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback");

	USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardDataRequest dataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::STATIC_DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardDataRequest dataRequest, int rangeStart, int rangeEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync");

	USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamLeaderboard = SteamLeaderboard;
	params.dataRequest = dataRequest;
	params.rangeStart = rangeStart;
	params.rangeEnd = rangeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            historyDays                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::STATIC_RequestGlobalStatsAsync(class UObject* WorldContextObject, int historyDays)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync");

	USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.historyDays = historyDays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGlobalStatsReceived    Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::HandleCallback(const struct FGlobalStatsReceived& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback");

	USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::STATIC_RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync");

	USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGlobalAchievementPercentagesReady Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::HandleCallback(const struct FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback");

	USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FNumberOfCurrentPlayers Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::HandleCallback(const struct FNumberOfCurrentPlayers& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback");

	USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::STATIC_GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync");

	USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardUploadScoreMethod uploadScoreMethod              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    scoreDetails                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::STATIC_UploadLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, SteamCore_ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int Score, TArray<int> scoreDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync");

	USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamLeaderboard = SteamLeaderboard;
	params.uploadScoreMethod = uploadScoreMethod;
	params.Score = Score;
	params.scoreDetails = scoreDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FLeaderboardScoreUploaded Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::HandleCallback(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback");

	USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFindOrCreateLeaderboardData Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::HandleCallback(const struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback");

	USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamLeaderboardDisplayType displayType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::STATIC_FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const struct FString& LeaderboardName, SteamCore_ESteamLeaderboardSortMethod SortMethod, SteamCore_ESteamLeaderboardDisplayType displayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync");

	USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LeaderboardName = LeaderboardName;
	params.SortMethod = SortMethod;
	params.displayType = displayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionRequestUserStats* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionRequestUserStats* USteamCoreUserStatsAsyncActionRequestUserStats::STATIC_RequestUserStatsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync");

	USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FRequestUserStatsData   Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(const struct FRequestUserStatsData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback");

	USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FLeaderboardScoresDownloadedForUsers Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::HandleCallback(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback");

	USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>        users                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::STATIC_DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> users)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync");

	USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamLeaderboard = SteamLeaderboard;
	params.users = users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAttachLeaderboardUGCData Data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::HandleCallback(const struct FAttachLeaderboardUGCData& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback");

	USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard       SteamLeaderboard               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::STATIC_AttachLeaderboardUGCAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync");

	USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamLeaderboard = SteamLeaderboard;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USteamCoreVoice*         Obj                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreVoice::STATIC_DestroySteamCoreVoice(class USteamCoreVoice* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice");

	USteamCoreVoice_DestroySteamCoreVoice_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AudioSampleRate                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreVoice*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreVoice* USteamCoreVoice::STATIC_ConstructSteamCoreVoice(int AudioSampleRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice");

	USteamCoreVoice_ConstructSteamCoreVoice_Params params;
	params.AudioSampleRate = AudioSampleRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamCoreVoice.AddAudioBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void USteamCoreVoice::AddAudioBuffer(TArray<unsigned char> buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreVoice.AddAudioBuffer");

	USteamCoreVoice_AddAudioBuffer_Params params;
	params.buffer = buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamItemInstanceID    A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreIdentical  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_SteamItemInstanceID_Equals_Exec(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B, SteamCore_ESteamCoreIdentical* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec");

	USteamUtilities_SteamItemInstanceID_Equals_Exec_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamItemInstanceID    A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID    B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_SteamItemInstanceID_Equals(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals");

	USteamUtilities_SteamItemInstanceID_Equals_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.PublishedFileID_NotEquals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID        A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_PublishedFileID_NotEquals(const struct FPublishedFileID& A, const struct FPublishedFileID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.PublishedFileID_NotEquals");

	USteamUtilities_PublishedFileID_NotEquals_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPublishedFileID        A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreIdentical  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_PublishedFileID_Equals_Exec(const struct FPublishedFileID& A, const struct FPublishedFileID& B, SteamCore_ESteamCoreIdentical* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec");

	USteamUtilities_PublishedFileID_Equals_Exec_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.PublishedFileID_Equals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID        A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_PublishedFileID_Equals(const struct FPublishedFileID& A, const struct FPublishedFileID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.PublishedFileID_Equals");

	USteamUtilities_PublishedFileID_Equals_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.NotEqual
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_NotEqual(const struct FSteamID& A, const struct FSteamID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.NotEqual");

	USteamUtilities_NotEqual_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeUGCHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamUGCHandle USteamUtilities::STATIC_MakeUGCHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeUGCHandle");

	USteamUtilities_MakeUGCHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeTicketHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamTicketHandle      ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamTicketHandle USteamUtilities::STATIC_MakeTicketHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeTicketHandle");

	USteamUtilities_MakeTicketHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSetting    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamSessionSetting USteamUtilities::STATIC_MakeString(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeString");

	USteamUtilities_MakeString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamID USteamUtilities::STATIC_MakeSteamID(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSteamID");

	USteamUtilities_MakeSteamID_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeSteamGameID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamGameID            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamGameID USteamUtilities::STATIC_MakeSteamGameID(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSteamGameID");

	USteamUtilities_MakeSteamGameID_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeSearchString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSearchSetting ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamSessionSearchSetting USteamUtilities::STATIC_MakeSearchString(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSearchString");

	USteamUtilities_MakeSearchString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeSearchInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// SteamCore_ESteamComparisonOp   comparisonOperator             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSearchSetting ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamSessionSearchSetting USteamUtilities::STATIC_MakeSearchInteger(SteamCore_ESteamComparisonOp comparisonOperator, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSearchInteger");

	USteamUtilities_MakeSearchInteger_Params params;
	params.comparisonOperator = comparisonOperator;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeSearchBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSearchSetting ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamSessionSearchSetting USteamUtilities::STATIC_MakeSearchBool(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSearchBool");

	USteamUtilities_MakeSearchBool_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakePublishedFileID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPublishedFileID USteamUtilities::STATIC_MakePublishedFileID(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakePublishedFileID");

	USteamUtilities_MakePublishedFileID_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamInventoryUpdateHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSteamInventoryUpdateHandle USteamUtilities::STATIC_MakeInventoryUpdateHandle(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle");

	USteamUtilities_MakeInventoryUpdateHandle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSetting    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamSessionSetting USteamUtilities::STATIC_MakeInteger(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeInteger");

	USteamUtilities_MakeInteger_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.MakeBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSetting    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamSessionSetting USteamUtilities::STATIC_MakeBool(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeBool");

	USteamUtilities_MakeBool_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.ListenForSteamMessages
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_ListenForSteamMessages(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.ListenForSteamMessages");

	USteamUtilities_ListenForSteamMessages_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamUtilities.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsValid(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsValid");

	USteamUtilities_IsValid_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsUsingP2PRelays
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsUsingP2PRelays()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsUsingP2PRelays");

	USteamUtilities_IsUsingP2PRelays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreValid      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_IsUGCHandleValid_Exec(const struct FSteamUGCHandle& Handle, SteamCore_ESteamCoreValid* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec");

	USteamUtilities_IsUGCHandleValid_Exec_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.IsUGCHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsUGCHandleValid(const struct FSteamUGCHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsUGCHandleValid");

	USteamUtilities_IsUGCHandleValid_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamTicketHandle      Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreValid      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_IsSteamTicketHandleValid_Exec(const struct FSteamTicketHandle& Handle, SteamCore_ESteamCoreValid* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec");

	USteamUtilities_IsSteamTicketHandleValid_Exec_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.IsSteamTicketHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamTicketHandle      Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsSteamTicketHandleValid(const struct FSteamTicketHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamTicketHandleValid");

	USteamUtilities_IsSteamTicketHandleValid_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreValid      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_IsSteamInventoryUpdateHandleValid_Exec(const struct FSteamInventoryUpdateHandle& Handle, SteamCore_ESteamCoreValid* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec");

	USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsSteamInventoryUpdateHandleValid(const struct FSteamInventoryUpdateHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid");

	USteamUtilities_IsSteamInventoryUpdateHandleValid_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsSteamIDValid_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreValid      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_IsSteamIDValid_Exec(const struct FSteamID& SteamID, SteamCore_ESteamCoreValid* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamIDValid_Exec");

	USteamUtilities_IsSteamIDValid_Exec_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.IsSteamAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsSteamAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamAvailable");

	USteamUtilities_IsSteamAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsRecalculatingPing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsRecalculatingPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsRecalculatingPing");

	USteamUtilities_IsRecalculatingPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPublishedFileID        Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreValid      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_IsPublishedFileIDValid_Exec(const struct FPublishedFileID& Handle, SteamCore_ESteamCoreValid* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec");

	USteamUtilities_IsPublishedFileIDValid_Exec_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.IsPublishedFileIDValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID        PublishedFileID                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsPublishedFileIDValid(const struct FPublishedFileID& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsPublishedFileIDValid");

	USteamUtilities_IsPublishedFileIDValid_Params params;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsLobby(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsLobby");

	USteamUtilities_IsLobby_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.IsGameIDValid_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamGameID            GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreValid      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_IsGameIDValid_Exec(const struct FSteamGameID& GameID, SteamCore_ESteamCoreValid* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsGameIDValid_Exec");

	USteamUtilities_IsGameIDValid_Exec_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.IsGameIDValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamGameID            GameID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_IsGameIDValid(const struct FSteamGameID& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsGameIDValid");

	USteamUtilities_IsGameIDValid_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.GetString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting    Settings                       (Parm, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_GetString(const struct FSteamSessionSetting& Settings, struct FString* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetString");

	USteamUtilities_GetString_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.GetPublicIp
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_GetPublicIp(const struct FScriptDelegate& callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetPublicIp");

	USteamUtilities_GetPublicIp_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.SteamUtilities.GetPingFromHostData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHostPingData           Data                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamUtilities::STATIC_GetPingFromHostData(const struct FHostPingData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetPingFromHostData");

	USteamUtilities_GetPingFromHostData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.GetInteger
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting    Settings                       (Parm, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamUtilities::STATIC_GetInteger(const struct FSteamSessionSetting& Settings, struct FString* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetInteger");

	USteamUtilities_GetInteger_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.GetHostPingData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FHostPingData           ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FHostPingData USteamUtilities::STATIC_GetHostPingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetHostPingData");

	USteamUtilities_GetHostPingData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.GetBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting    Settings                       (Parm, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_GetBool(const struct FSteamSessionSetting& Settings, struct FString* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetBool");

	USteamUtilities_GetBool_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.GetAccountType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamAccountType    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamAccountType USteamUtilities::STATIC_GetAccountType(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetAccountType");

	USteamUtilities_GetAccountType_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.FromUnixTimestamp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Timestamp                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime USteamUtilities::STATIC_FromUnixTimestamp(const struct FString& Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.FromUnixTimestamp");

	USteamUtilities_FromUnixTimestamp_Params params;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.Equal_Exec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamID                A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamCoreIdentical  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamUtilities::STATIC_Equal_Exec(const struct FSteamID& A, const struct FSteamID& B, SteamCore_ESteamCoreIdentical* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.Equal_Exec");

	USteamUtilities_Equal_Exec_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCore.SteamUtilities.Equal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamUtilities::STATIC_Equal(const struct FSteamID& A, const struct FSteamID& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.Equal");

	USteamUtilities_Equal_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.EncryptString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_EncryptString(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.EncryptString");

	USteamUtilities_EncryptString_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.ConstructServerFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UServerFilter* USteamUtilities::STATIC_ConstructServerFilter(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.ConstructServerFilter");

	USteamUtilities_ConstructServerFilter_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.BreakUGCHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamUGCHandle         Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_BreakUGCHandle(const struct FSteamUGCHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakUGCHandle");

	USteamUtilities_BreakUGCHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.BreakTicketHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamTicketHandle      Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_BreakTicketHandle(const struct FSteamTicketHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakTicketHandle");

	USteamUtilities_BreakTicketHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.BreakSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_BreakSteamID(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakSteamID");

	USteamUtilities_BreakSteamID_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.BreakSteamGameID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamGameID            SteamID                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_BreakSteamGameID(const struct FSteamGameID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakSteamGameID");

	USteamUtilities_BreakSteamGameID_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.BreakPublishedFileID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID        fileID                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_BreakPublishedFileID(const struct FPublishedFileID& fileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakPublishedFileID");

	USteamUtilities_BreakPublishedFileID_Params params;
	params.fileID = fileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamUtilities::STATIC_BreakInventoryUpdateHandle(const struct FSteamInventoryUpdateHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle");

	USteamUtilities_BreakInventoryUpdateHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.StartVRDashboard
// (Final, Native, Static, Public, BlueprintCallable)
void UUtils::STATIC_StartVRDashboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.StartVRDashboard");

	UUtils_StartVRDashboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Utils.ShowGamepadTextInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamGamepadTextInputMode InputMode                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCore_ESteamGamepadTextInputLineMode lineInputMode                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            charMax                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 existingText                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_ShowGamepadTextInput(SteamCore_ESteamGamepadTextInputMode InputMode, SteamCore_ESteamGamepadTextInputLineMode lineInputMode, const struct FString& Description, int charMax, const struct FString& existingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.ShowGamepadTextInput");

	UUtils_ShowGamepadTextInput_Params params;
	params.InputMode = InputMode;
	params.lineInputMode = lineInputMode;
	params.Description = Description;
	params.charMax = charMax;
	params.existingText = existingText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.SetVRHeadsetStreamingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUtils::STATIC_SetVRHeadsetStreamingEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.SetVRHeadsetStreamingEnabled");

	UUtils_SetVRHeadsetStreamingEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Utils.SetOverlayNotificationPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamNotificationPosition notificationPosition           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUtils::STATIC_SetOverlayNotificationPosition(SteamCore_ESteamNotificationPosition notificationPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.SetOverlayNotificationPosition");

	UUtils_SetOverlayNotificationPosition_Params params;
	params.notificationPosition = notificationPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Utils.SetOverlayNotificationInset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            horizontalInset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            verticalInset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUtils::STATIC_SetOverlayNotificationInset(int horizontalInset, int verticalInset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.SetOverlayNotificationInset");

	UUtils_SetOverlayNotificationInset_Params params;
	params.horizontalInset = horizontalInset;
	params.verticalInset = verticalInset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Utils.IsVRHeadsetStreamingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_IsVRHeadsetStreamingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsVRHeadsetStreamingEnabled");

	UUtils_IsVRHeadsetStreamingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.IsSteamRunningInVR
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_IsSteamRunningInVR()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsSteamRunningInVR");

	UUtils_IsSteamRunningInVR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.IsSteamInBigPictureMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_IsSteamInBigPictureMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsSteamInBigPictureMode");

	UUtils_IsSteamInBigPictureMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.IsSteamChinaLauncher
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_IsSteamChinaLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsSteamChinaLauncher");

	UUtils_IsSteamChinaLauncher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.IsOverlayEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_IsOverlayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsOverlayEnabled");

	UUtils_IsOverlayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.InitFilterText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_InitFilterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.InitFilterText");

	UUtils_InitFilterText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetSteamUILanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUtils::STATIC_GetSteamUILanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetSteamUILanguage");

	UUtils_GetSteamUILanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetServerRealTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetServerRealTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetServerRealTime");

	UUtils_GetServerRealTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetSecondsSinceComputerActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetSecondsSinceComputerActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetSecondsSinceComputerActive");

	UUtils_GetSecondsSinceComputerActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetSecondsSinceAppActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetSecondsSinceAppActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetSecondsSinceAppActive");

	UUtils_GetSecondsSinceAppActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetIPCountry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUtils::STATIC_GetIPCountry()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetIPCountry");

	UUtils_GetIPCountry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetIPCCallCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetIPCCallCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetIPCCallCount");

	UUtils_GetIPCCallCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetImageSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            iImage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_GetImageSize(int iImage, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetImageSize");

	UUtils_GetImageSize_Params params;
	params.iImage = iImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetImageRGBA
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            iImage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          outBuffer                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_GetImageRGBA(int iImage, TArray<unsigned char>* outBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetImageRGBA");

	UUtils_GetImageRGBA_Params params;
	params.iImage = iImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outBuffer != nullptr)
		*outBuffer = params.outBuffer;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetEnteredGamepadTextLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetEnteredGamepadTextLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetEnteredGamepadTextLength");

	UUtils_GetEnteredGamepadTextLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetEnteredGamepadTextInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_GetEnteredGamepadTextInput(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetEnteredGamepadTextInput");

	UUtils_GetEnteredGamepadTextInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetCurrentBatteryPower
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetCurrentBatteryPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetCurrentBatteryPower");

	UUtils_GetCurrentBatteryPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetCSERIPPort
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 IP                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Port                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_GetCSERIPPort(struct FString* IP, int* Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetCSERIPPort");

	UUtils_GetCSERIPPort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IP != nullptr)
		*IP = params.IP;
	if (Port != nullptr)
		*Port = params.Port;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetConnectedUniverse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// SteamCore_ESteamUniverse       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamCore_ESteamUniverse UUtils::STATIC_GetConnectedUniverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetConnectedUniverse");

	UUtils_GetConnectedUniverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetAppID_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetAppID_Pure()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetAppID_Pure");

	UUtils_GetAppID_Pure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.GetAppID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_GetAppID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetAppID");

	UUtils_GetAppID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Utils.FilterText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 filteredText                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 inputMessage                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLegalOnly                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUtils::STATIC_FilterText(struct FString* filteredText, const struct FString& inputMessage, bool bLegalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.FilterText");

	UUtils_FilterText_Params params;
	params.inputMessage = inputMessage;
	params.bLegalOnly = bLegalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (filteredText != nullptr)
		*filteredText = params.filteredText;


	return params.ReturnValue;
}


// Function SteamCore.Utils.BOverlayNeedsPresent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUtils::STATIC_BOverlayNeedsPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.BOverlayNeedsPresent");

	UUtils_BOverlayNeedsPresent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCore.Video.IsBroadcasting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            numViewers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVideo::STATIC_IsBroadcasting(int* numViewers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Video.IsBroadcasting");

	UVideo_IsBroadcasting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (numViewers != nullptr)
		*numViewers = params.numViewers;


	return params.ReturnValue;
}


// Function SteamCore.Video.GetVideoURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            videoAppID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVideo::STATIC_GetVideoURL(int videoAppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Video.GetVideoURL");

	UVideo_GetVideoURL_Params params;
	params.videoAppID = videoAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCore.Video.GetOPFStringForApp
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            videoAppID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 outBuffer                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVideo::STATIC_GetOPFStringForApp(int videoAppID, struct FString* outBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Video.GetOPFStringForApp");

	UVideo_GetOPFStringForApp_Params params;
	params.videoAppID = videoAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outBuffer != nullptr)
		*outBuffer = params.outBuffer;


	return params.ReturnValue;
}


// Function SteamCore.Video.GetOPFSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            videoAppID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVideo::STATIC_GetOPFSettings(int videoAppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCore.Video.GetOPFSettings");

	UVideo_GetOPFSettings_Params params;
	params.videoAppID = videoAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
