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

// Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
// (Native, Public)
// Parameters:
// struct FString                 Data                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamCoreWebAsyncAction::HandleCallback(const struct FString& Data, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback");

	USteamCoreWebAsyncAction_HandleCallback_Params params;
	params.Data = Data;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamWebUtilities.ParseJson
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamCoreJson>  Data                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamWebUtilities::STATIC_ParseJson(const struct FString& JsonString, TArray<struct FSteamCoreJson>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.ParseJson");

	USteamWebUtilities_ParseJson_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamWebUtilities.GetProjectKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamWebUtilities::STATIC_GetProjectKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.GetProjectKey");

	USteamWebUtilities_GetProjectKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamWebUtilities::STATIC_GetProjectAppID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID");

	USteamWebUtilities_GetProjectAppID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamWebUtilities::STATIC_GetDevSteamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID");

	USteamWebUtilities_GetDevSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Values                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamJsonResult  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWebUtilities::STATIC_FindJsonStrings(const struct FString& JsonString, const struct FString& Key, TArray<struct FString>* Values, SteamCoreWeb_ESteamJsonResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings");

	USteamWebUtilities_FindJsonStrings_Params params;
	params.JsonString = JsonString;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamJsonResult  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWebUtilities::STATIC_FindJsonString(const struct FString& JsonString, const struct FString& Key, struct FString* Value, SteamCoreWeb_ESteamJsonResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonString");

	USteamWebUtilities_FindJsonString_Params params;
	params.JsonString = JsonString;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Values                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamJsonResult  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWebUtilities::STATIC_FindJsonNumbers(const struct FString& JsonString, const struct FString& Key, TArray<int>* Values, SteamCoreWeb_ESteamJsonResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers");

	USteamWebUtilities_FindJsonNumbers_Params params;
	params.JsonString = JsonString;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamJsonResult  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWebUtilities::STATIC_FindJsonNumber(const struct FString& JsonString, const struct FString& Key, int* Value, SteamCoreWeb_ESteamJsonResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber");

	USteamWebUtilities_FindJsonNumber_Params params;
	params.JsonString = JsonString;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonBools
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   Values                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamJsonResult  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWebUtilities::STATIC_FindJsonBools(const struct FString& JsonString, const struct FString& Key, TArray<bool>* Values, SteamCoreWeb_ESteamJsonResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonBools");

	USteamWebUtilities_FindJsonBools_Params params;
	params.JsonString = JsonString;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamJsonResult  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWebUtilities::STATIC_FindJsonBool(const struct FString& JsonString, const struct FString& Key, bool* Value, SteamCoreWeb_ESteamJsonResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonBool");

	USteamWebUtilities_FindJsonBool_Params params;
	params.JsonString = JsonString;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function SteamCoreWeb.WebApps.UpToDateCheck
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::UpToDateCheck(const struct FScriptDelegate& callback, int AppID, int Version)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.UpToDateCheck");

	UWebApps_UpToDateCheck_Params params;
	params.callback = callback;
	params.AppID = AppID;
	params.Version = Version;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.SetAppBuildLive
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            buildID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 betaKey                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::SetAppBuildLive(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int buildID, const struct FString& betaKey, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.SetAppBuildLive");

	UWebApps_SetAppBuildLive_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.buildID = buildID;
	params.betaKey = betaKey;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetServersAtAddress
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 addr                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetServersAtAddress(const struct FScriptDelegate& callback, const struct FString& addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetServersAtAddress");

	UWebApps_GetServersAtAddress_Params params;
	params.callback = callback;
	params.addr = addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filter                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetServerList(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& Filter, int Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetServerList");

	UWebApps_GetServerList_Params params;
	params.callback = callback;
	params.Key = Key;
	params.Filter = Filter;
	params.Limit = Limit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetPlayersBanned
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetPlayersBanned(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetPlayersBanned");

	UWebApps_GetPlayersBanned_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetCheatingReports
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            reportidMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetCheatingReports(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int timeBegin, int timeEnd, bool bIncludeReports, bool bIncludeBans, int reportidMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetCheatingReports");

	UWebApps_GetCheatingReports_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.timeBegin = timeBegin;
	params.timeEnd = timeEnd;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.reportidMin = reportidMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetAppList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetAppList(const struct FScriptDelegate& callback, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppList");

	UWebApps_GetAppList_Params params;
	params.callback = callback;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetAppDepotVersions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetAppDepotVersions(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppDepotVersions");

	UWebApps_GetAppDepotVersions_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetAppBuilds
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetAppBuilds(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppBuilds");

	UWebApps_GetAppBuilds_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebApps.GetAppBetas
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebApps::GetAppBetas(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppBetas");

	UWebApps_GetAppBetas_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppBetas* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetAppBetas* USteamCoreAppsAsyncActionGetAppBetas::STATIC_GetAppBetasAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync");

	USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppBuilds* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetAppBuilds* USteamCoreAppsAsyncActionGetAppBuilds::STATIC_GetAppBuildsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync");

	USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppDepotVersions* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetAppDepotVersions* USteamCoreAppsAsyncActionGetAppDepotVersions::STATIC_GetAppDepotVersionsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync");

	USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetAppList* USteamCoreAppsAsyncActionGetAppList::STATIC_GetAppListAsync(class UObject* WorldContextObject, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync");

	USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            reportidMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetCheatingReports* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetCheatingReports* USteamCoreAppsAsyncActionGetCheatingReports::STATIC_GetCheatingReportsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int timeBegin, int timeEnd, bool bIncludeReports, bool bIncludeBans, int reportidMin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync");

	USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.timeBegin = timeBegin;
	params.timeEnd = timeEnd;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.reportidMin = reportidMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetPlayersBanned* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetPlayersBanned* USteamCoreAppsAsyncActionGetPlayersBanned::STATIC_GetPlayersBannedAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync");

	USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filter                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetServerList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetServerList* USteamCoreAppsAsyncActionGetServerList::STATIC_GetServerListAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& Filter, int Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync");

	USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.Filter = Filter;
	params.Limit = Limit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 addr                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetServersAtAddress* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionGetServersAtAddress* USteamCoreAppsAsyncActionGetServersAtAddress::STATIC_GetServersAtAddressAsync(class UObject* WorldContextObject, const struct FString& addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync");

	USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.addr = addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            buildID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 betaKey                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionSetAppBuildLive* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionSetAppBuildLive* USteamCoreAppsAsyncActionSetAppBuildLive::STATIC_SetAppBuildLiveAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int buildID, const struct FString& betaKey, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync");

	USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.buildID = buildID;
	params.betaKey = betaKey;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionUpToDateCheck* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreAppsAsyncActionUpToDateCheck* USteamCoreAppsAsyncActionUpToDateCheck::STATIC_UpToDateCheckAsync(class UObject* WorldContextObject, int AppID, int Version)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync");

	USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.Version = Version;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 broadcastID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FrameData                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebBroadcastService::PostGameDataFrame(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& broadcastID, const struct FString& FrameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame");

	UWebBroadcastService_PostGameDataFrame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.broadcastID = broadcastID;
	params.FrameData = FrameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 broadcastID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FrameData                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionPostGameDataFrame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionPostGameDataFrame* USteamCoreWebAsyncActionPostGameDataFrame::STATIC_PostGameDataFrameAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& broadcastID, const struct FString& FrameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync");

	USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.broadcastID = broadcastID;
	params.FrameData = FrameData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::StartSecureMultiplayerSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession");

	UWebCheatReporting_StartSecureMultiplayerSession_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::RequestVacStatusForUser(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser");

	UWebCheatReporting_RequestVacStatusForUser_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 reportID                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDelayBan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::RequestPlayerGameBan(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& reportID, const struct FString& cheatDescription, int Duration, bool bDelayBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan");

	UWebCheatReporting_RequestPlayerGameBan_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.reportID = reportID;
	params.cheatDescription = cheatDescription;
	params.Duration = Duration;
	params.bDelayBan = bDelayBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDReporter                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 appData                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHeuristic                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDetection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerReport                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoReportID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            suspicionStartTime             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::ReportPlayerCheating(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& steamIDReporter, const struct FString& appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int suspicionStartTime, int Severity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating");

	UWebCheatReporting_ReportPlayerCheating_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.steamIDReporter = steamIDReporter;
	params.appData = appData;
	params.bHeuristic = bHeuristic;
	params.bDetection = bDetection;
	params.bPlayerReport = bPlayerReport;
	params.bNoReportID = bNoReportID;
	params.GameMode = GameMode;
	params.suspicionStartTime = suspicionStartTime;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.ReportCheatData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 pathAndFileName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 webCheatURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 timeNow                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 timeStarted                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 timeStopped                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            gameProcessID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            cheatProcessID                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatParam1                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatParam2                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::ReportCheatData(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& pathAndFileName, const struct FString& webCheatURL, const struct FString& timeNow, const struct FString& timeStarted, const struct FString& timeStopped, const struct FString& cheatName, int gameProcessID, int cheatProcessID, const struct FString& cheatParam1, const struct FString& cheatParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.ReportCheatData");

	UWebCheatReporting_ReportCheatData_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.pathAndFileName = pathAndFileName;
	params.webCheatURL = webCheatURL;
	params.timeNow = timeNow;
	params.timeStarted = timeStarted;
	params.timeStopped = timeStopped;
	params.cheatName = cheatName;
	params.gameProcessID = gameProcessID;
	params.cheatProcessID = cheatProcessID;
	params.cheatParam1 = cheatParam1;
	params.cheatParam2 = cheatParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::RemovePlayerGameBan(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan");

	UWebCheatReporting_RemovePlayerGameBan_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.GetCheatingReports
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 reportidMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::GetCheatingReports(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int timeEnd, int timeBegin, const struct FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.GetCheatingReports");

	UWebCheatReporting_GetCheatingReports_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.timeEnd = timeEnd;
	params.timeBegin = timeBegin;
	params.reportidMin = reportidMin;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebCheatReporting::EndSecureMultiplayerSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession");

	UWebCheatReporting_EndSecureMultiplayerSession_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDReporter                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 appData                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHeuristic                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDetection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerReport                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoReportID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            suspicionStartTime             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionReportPlayerCheating* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionReportPlayerCheating* USteamCoreWebAsyncActionReportPlayerCheating::STATIC_ReportPlayerCheatingAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& steamIDReporter, const struct FString& appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int suspicionStartTime, int Severity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync");

	USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.steamIDReporter = steamIDReporter;
	params.appData = appData;
	params.bHeuristic = bHeuristic;
	params.bDetection = bDetection;
	params.bPlayerReport = bPlayerReport;
	params.bNoReportID = bNoReportID;
	params.GameMode = GameMode;
	params.suspicionStartTime = suspicionStartTime;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 reportID                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDelayBan                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRequestPlayerGameBan* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRequestPlayerGameBan* USteamCoreWebAsyncActionRequestPlayerGameBan::STATIC_RequestPlayerGameBanAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& reportID, const struct FString& cheatDescription, int Duration, bool bDelayBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync");

	USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.reportID = reportID;
	params.cheatDescription = cheatDescription;
	params.Duration = Duration;
	params.bDelayBan = bDelayBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRemovePlayerGameBan* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRemovePlayerGameBan* USteamCoreWebAsyncActionRemovePlayerGameBan::STATIC_RemovePlayerGameBanAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync");

	USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeBegin                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 reportidMin                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReports                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeBans                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCheatingReports* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetCheatingReports* USteamCoreWebAsyncActionGetCheatingReports::STATIC_GetCheatingReportsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int timeEnd, int timeBegin, const struct FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync");

	USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.timeEnd = timeEnd;
	params.timeBegin = timeBegin;
	params.reportidMin = reportidMin;
	params.bIncludeReports = bIncludeReports;
	params.bIncludeBans = bIncludeBans;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 pathAndFileName                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 webCheatURL                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 timeNow                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 timeStarted                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 timeStopped                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            gameProcessID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            cheatProcessID                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatParam1                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cheatParam2                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionReportCheatData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionReportCheatData* USteamCoreWebAsyncActionReportCheatData::STATIC_ReportCheatDataAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& pathAndFileName, const struct FString& webCheatURL, const struct FString& timeNow, const struct FString& timeStarted, const struct FString& timeStopped, const struct FString& cheatName, int gameProcessID, int cheatProcessID, const struct FString& cheatParam1, const struct FString& cheatParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync");

	USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.pathAndFileName = pathAndFileName;
	params.webCheatURL = webCheatURL;
	params.timeNow = timeNow;
	params.timeStarted = timeStarted;
	params.timeStopped = timeStopped;
	params.cheatName = cheatName;
	params.gameProcessID = gameProcessID;
	params.cheatProcessID = cheatProcessID;
	params.cheatParam1 = cheatParam1;
	params.cheatParam2 = cheatParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRequestVacStatusForUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRequestVacStatusForUser* USteamCoreWebAsyncActionRequestVacStatusForUser::STATIC_RequestVacStatusForUserAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync");

	USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionStartSecureMultiplayerSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionStartSecureMultiplayerSession* USteamCoreWebAsyncActionStartSecureMultiplayerSession::STATIC_StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync");

	USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEndSecureMultiplayerSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionEndSecureMultiplayerSession* USteamCoreWebAsyncActionEndSecureMultiplayerSession::STATIC_EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync");

	USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebEconMarketService.GetPopular
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rows                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            filterAppID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            eCurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconMarketService::GetPopular(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& Language, int rows, int Start, int filterAppID, int eCurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.GetPopular");

	UWebEconMarketService_GetPopular_Params params;
	params.callback = callback;
	params.Key = Key;
	params.Language = Language;
	params.rows = rows;
	params.Start = Start;
	params.filterAppID = filterAppID;
	params.eCurrency = eCurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconMarketService::GetMarketEligibility(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility");

	UWebEconMarketService_GetMarketEligibility_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconMarketService.GetAssetID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 listingID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconMarketService::GetAssetID(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& listingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.GetAssetID");

	UWebEconMarketService_GetAssetID_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.listingID = listingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSynchronous                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconMarketService::CancelAppListingsForUser(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, bool bSynchronous)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser");

	UWebEconMarketService_CancelAppListingsForUser_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bSynchronous = bSynchronous;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetMarketEligibility* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetMarketEligibility* USteamCoreWebAsyncActionGetMarketEligibility::STATIC_GetMarketEligibilityAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync");

	USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSynchronous                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCancelAppListingsForUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionCancelAppListingsForUser* USteamCoreWebAsyncActionCancelAppListingsForUser::STATIC_CancelAppListingsForUserAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, bool bSynchronous)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync");

	USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bSynchronous = bSynchronous;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 listingID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAssetID* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetAssetID* USteamCoreWebAsyncActionGetAssetID::STATIC_GetAssetIDAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& listingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync");

	USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.listingID = listingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rows                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            filterAppID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            eCurrency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPopular* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPopular* USteamCoreWebAsyncActionGetPopular::STATIC_GetPopularAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& Language, int rows, int Start, int filterAppID, int eCurrency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync");

	USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.Language = Language;
	params.rows = rows;
	params.Start = Start;
	params.filterAppID = filterAppID;
	params.eCurrency = eCurrency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebEconService.GetTradeOffersSummary
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeLastVisit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::GetTradeOffersSummary(const struct FScriptDelegate& callback, const struct FString& Key, int timeLastVisit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeOffersSummary");

	UWebEconService_GetTradeOffersSummary_Params params;
	params.callback = callback;
	params.Key = Key;
	params.timeLastVisit = timeLastVisit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.GetTradeOffers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetSentOffers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetReceivedOffers             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescriptions               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHistoricalOnly                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeHistoricalCutoff           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::GetTradeOffers(const struct FScriptDelegate& callback, const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int timeHistoricalCutoff)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeOffers");

	UWebEconService_GetTradeOffers_Params params;
	params.callback = callback;
	params.Key = Key;
	params.bGetSentOffers = bGetSentOffers;
	params.bGetReceivedOffers = bGetReceivedOffers;
	params.bGetDescriptions = bGetDescriptions;
	params.Language = Language;
	params.bActiveOnly = bActiveOnly;
	params.bHistoricalOnly = bHistoricalOnly;
	params.timeHistoricalCutoff = timeHistoricalCutoff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.GetTradeOffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 tradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::GetTradeOffer(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& tradeOfferID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeOffer");

	UWebEconService_GetTradeOffer_Params params;
	params.callback = callback;
	params.Key = Key;
	params.tradeOfferID = tradeOfferID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.GetTradeHistory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxTrades                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startAfterTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 startAfterTradeID              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNavigatingBack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescriptions               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeFailed                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeTotal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::GetTradeHistory(const struct FScriptDelegate& callback, const struct FString& Key, int maxTrades, int startAfterTime, const struct FString& startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeHistory");

	UWebEconService_GetTradeHistory_Params params;
	params.callback = callback;
	params.Key = Key;
	params.maxTrades = maxTrades;
	params.startAfterTime = startAfterTime;
	params.startAfterTradeID = startAfterTradeID;
	params.bNavigatingBack = bNavigatingBack;
	params.bGetDescriptions = bGetDescriptions;
	params.Language = Language;
	params.bIncludeFailed = bIncludeFailed;
	params.bIncludeTotal = bIncludeTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.FlushInventoryCache
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::FlushInventoryCache(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.FlushInventoryCache");

	UWebEconService_FlushInventoryCache_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.contextID = contextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.FlushContextCache
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::FlushContextCache(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.FlushContextCache");

	UWebEconService_FlushContextCache_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::FlushAssetAppearanceCache(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache");

	UWebEconService_FlushAssetAppearanceCache_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.DeclineTradeOffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 tradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::DeclineTradeOffer(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& tradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.DeclineTradeOffer");

	UWebEconService_DeclineTradeOffer_Params params;
	params.callback = callback;
	params.Key = Key;
	params.tradeOfferID = tradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebEconService.CancelTradeOffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 tradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebEconService::CancelTradeOffer(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& tradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.CancelTradeOffer");

	UWebEconService_CancelTradeOffer_Params params;
	params.callback = callback;
	params.Key = Key;
	params.tradeOfferID = tradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxTrades                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startAfterTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 startAfterTradeID              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNavigatingBack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescriptions               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeFailed                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeTotal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeHistory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetTradeHistory* USteamCoreWebAsyncActionGetTradeHistory::STATIC_GetTradeHistoryAsync(class UObject* WorldContextObject, const struct FString& Key, int maxTrades, int startAfterTime, const struct FString& startAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync");

	USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.maxTrades = maxTrades;
	params.startAfterTime = startAfterTime;
	params.startAfterTradeID = startAfterTradeID;
	params.bNavigatingBack = bNavigatingBack;
	params.bGetDescriptions = bGetDescriptions;
	params.Language = Language;
	params.bIncludeFailed = bIncludeFailed;
	params.bIncludeTotal = bIncludeTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFlushInventoryCache* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionFlushInventoryCache* USteamCoreWebAsyncActionFlushInventoryCache::STATIC_FlushInventoryCacheAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync");

	USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.contextID = contextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFlushAssetAppearanceCache* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionFlushAssetAppearanceCache* USteamCoreWebAsyncActionFlushAssetAppearanceCache::STATIC_FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync");

	USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFlushContextCache* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionFlushContextCache* USteamCoreWebAsyncActionFlushContextCache::STATIC_FlushContextCacheAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync");

	USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetSentOffers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetReceivedOffers             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGetDescriptions               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHistoricalOnly                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeHistoricalCutoff           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeOffers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetTradeOffers* USteamCoreWebAsyncActionGetTradeOffers::STATIC_GetTradeOffersAsync(class UObject* WorldContextObject, const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int timeHistoricalCutoff)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync");

	USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.bGetSentOffers = bGetSentOffers;
	params.bGetReceivedOffers = bGetReceivedOffers;
	params.bGetDescriptions = bGetDescriptions;
	params.Language = Language;
	params.bActiveOnly = bActiveOnly;
	params.bHistoricalOnly = bHistoricalOnly;
	params.timeHistoricalCutoff = timeHistoricalCutoff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 tradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeOffer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetTradeOffer* USteamCoreWebAsyncActionGetTradeOffer::STATIC_GetTradeOfferAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& tradeOfferID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync");

	USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.tradeOfferID = tradeOfferID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            timeLastVisit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeOffersSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetTradeOffersSummary* USteamCoreWebAsyncActionGetTradeOffersSummary::STATIC_GetTradeOffersSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, int timeLastVisit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync");

	USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.timeLastVisit = timeLastVisit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 tradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeclineTradeOffer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionDeclineTradeOffer* USteamCoreWebAsyncActionDeclineTradeOffer::STATIC_DeclineTradeOfferAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& tradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync");

	USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.tradeOfferID = tradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 tradeOfferID                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCancelTradeOffer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionCancelTradeOffer* USteamCoreWebAsyncActionCancelTradeOffer::STATIC_CancelTradeOfferAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& tradeOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync");

	USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.tradeOfferID = tradeOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebGameInventory.UpdateItemDefs
// (Final, Native, Public, BlueprintCallable)
void UWebGameInventory::UpdateItemDefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.UpdateItemDefs");

	UWebGameInventory_UpdateItemDefs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 assetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameInventory::SupportGetAssetHistory(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& assetID, const struct FString& contextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory");

	UWebGameInventory_SupportGetAssetHistory_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.assetID = assetID;
	params.contextID = contextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ActorId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameInventory::HistoryExecuteCommands(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int ActorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands");

	UWebGameInventory_HistoryExecuteCommands_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.contextID = contextID;
	params.ActorId = ActorId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameInventory.GetUserHistory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameInventory::GetUserHistory(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int StartTime, int EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.GetUserHistory");

	UWebGameInventory_GetUserHistory_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.contextID = contextID;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Command                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 arguments                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameInventory::GetHistoryCommandDetails(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& Command, const struct FString& contextID, const struct FString& arguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails");

	UWebGameInventory_GetHistoryCommandDetails_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Command = Command;
	params.contextID = contextID;
	params.arguments = arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Command                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 arguments                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetHistoryCommandDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetHistoryCommandDetails* USteamCoreWebAsyncActionGetHistoryCommandDetails::STATIC_GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& Command, const struct FString& contextID, const struct FString& arguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync");

	USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.Command = Command;
	params.contextID = contextID;
	params.arguments = arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserHistory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetUserHistory* USteamCoreWebAsyncActionGetUserHistory::STATIC_GetUserHistoryAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int StartTime, int EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync");

	USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.contextID = contextID;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ActorId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionHistoryExecuteCommand* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionHistoryExecuteCommand* USteamCoreWebAsyncActionHistoryExecuteCommand::STATIC_HistoryExecuteCommandAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& contextID, int ActorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync");

	USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.contextID = contextID;
	params.ActorId = ActorId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 assetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSupportGetAssetHistory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionSupportGetAssetHistory* USteamCoreWebAsyncActionSupportGetAssetHistory::STATIC_SupportGetAssetHistoryAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& assetID, const struct FString& contextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync");

	USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.assetID = assetID;
	params.contextID = contextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebGameNotificationsService.UpdateSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 users                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::UpdateSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& Title, const struct FString& users, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.UpdateSession");

	UWebGameNotificationsService_UpdateSession_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SessionID = SessionID;
	params.AppID = AppID;
	params.Title = Title;
	params.users = users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::RequestNotifications(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications");

	UWebGameNotificationsService_RequestNotifications_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 sessions                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::GetSessionDetailsForApp(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& sessions, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp");

	UWebGameNotificationsService_GetSessionDetailsForApp_Params params;
	params.callback = callback;
	params.Key = Key;
	params.sessions = sessions;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAllUserMessages        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAuthUserMessage        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::EnumerateSessionsForApp(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp");

	UWebGameNotificationsService_EnumerateSessionsForApp_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bIncludeAllUserMessages = bIncludeAllUserMessages;
	params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::DeleteSessionBatch(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SessionID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch");

	UWebGameNotificationsService_DeleteSessionBatch_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SessionID = SessionID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.DeleteSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::DeleteSession(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.DeleteSession");

	UWebGameNotificationsService_DeleteSession_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SessionID = SessionID;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.CreateSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Context                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 users                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameNotificationsService::CreateSession(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Context, const struct FString& Title, const struct FString& users, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.CreateSession");

	UWebGameNotificationsService_CreateSession_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Context = Context;
	params.Title = Title;
	params.users = users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Context                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 users                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCreateSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionCreateSession* USteamCoreWebAsyncActionCreateSession::STATIC_CreateSessionAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Context, const struct FString& Title, const struct FString& users, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync");

	USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Context = Context;
	params.Title = Title;
	params.users = users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 users                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionUpdateSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionUpdateSession* USteamCoreWebAsyncActionUpdateSession::STATIC_UpdateSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& Title, const struct FString& users, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync");

	USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SessionID = SessionID;
	params.AppID = AppID;
	params.Title = Title;
	params.users = users;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAllUserMessages        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAuthUserMessage        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEnumerateSessionsForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionEnumerateSessionsForApp* USteamCoreWebAsyncActionEnumerateSessionsForApp::STATIC_EnumerateSessionsForAppAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync");

	USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.bIncludeAllUserMessages = bIncludeAllUserMessages;
	params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 sessions                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetSessionDetailsForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetSessionDetailsForApp* USteamCoreWebAsyncActionGetSessionDetailsForApp::STATIC_GetSessionDetailsForAppAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& sessions, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync");

	USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.sessions = sessions;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRequestNotifications* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRequestNotifications* USteamCoreWebAsyncActionRequestNotifications::STATIC_RequestNotificationsAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync");

	USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeleteSession* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionDeleteSession* USteamCoreWebAsyncActionDeleteSession::STATIC_DeleteSessionAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SessionID, int AppID, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync");

	USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SessionID = SessionID;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeleteSessionBatch* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionDeleteSessionBatch* USteamCoreWebAsyncActionDeleteSessionBatch::STATIC_DeleteSessionBatchAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SessionID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync");

	USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SessionID = SessionID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebGameServersService.SetMemo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::SetMemo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& memo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.SetMemo");

	UWebGameServersService_SetMemo_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.memo = memo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.SetBanStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBanned                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            banSeconds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::SetBanStatus(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, bool bBanned, int banSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.SetBanStatus");

	UWebGameServersService_SetBanStatus_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bBanned = bBanned;
	params.banSeconds = banSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.ResetLoginToken
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::ResetLoginToken(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.ResetLoginToken");

	UWebGameServersService_ResetLoginToken_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.QueryLoginToken
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 loginToken                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::QueryLoginToken(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& loginToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.QueryLoginToken");

	UWebGameServersService_QueryLoginToken_Params params;
	params.callback = callback;
	params.Key = Key;
	params.loginToken = loginToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 serverIP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::GetServerSteamIDsByIP(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& serverIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP");

	UWebGameServersService_GetServerSteamIDsByIP_Params params;
	params.callback = callback;
	params.Key = Key;
	params.serverIP = serverIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 serverSteamID                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::GetServerIPsBySteamID(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& serverSteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID");

	UWebGameServersService_GetServerIPsBySteamID_Params params;
	params.callback = callback;
	params.Key = Key;
	params.serverSteamID = serverSteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::GetAccountPublicInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo");

	UWebGameServersService_GetAccountPublicInfo_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.GetAccountList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::GetAccountList(const struct FScriptDelegate& callback, const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetAccountList");

	UWebGameServersService_GetAccountList_Params params;
	params.callback = callback;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.DeleteAccount
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::DeleteAccount(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.DeleteAccount");

	UWebGameServersService_DeleteAccount_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebGameServersService.CreateAccount
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 memo                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebGameServersService::CreateAccount(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& memo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.CreateAccount");

	UWebGameServersService_CreateAccount_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.memo = memo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.ModifyItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 inputJson                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timestamp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 updates                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::ModifyItems(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& inputJson, const struct FString& SteamID, int Timestamp, const struct FString& updates)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.ModifyItems");

	UWebInventoryService_ModifyItems_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.inputJson = inputJson;
	params.SteamID = SteamID;
	params.Timestamp = Timestamp;
	params.updates = updates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.GetQuantity
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::GetQuantity(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetQuantity");

	UWebInventoryService_GetQuantity_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.itemdefIDs = itemdefIDs;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.GetPriceSheet
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::GetPriceSheet(const struct FScriptDelegate& callback, const struct FString& Key, int Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetPriceSheet");

	UWebInventoryService_GetPriceSheet_Params params;
	params.callback = callback;
	params.Key = Key;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.GetItemDefs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 modifiedSince                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    workshopIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            cacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::GetItemDefs(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& modifiedSince, TArray<int> itemdefIDs, TArray<int> workshopIDs, int cacheMaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetItemDefs");

	UWebInventoryService_GetItemDefs_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.modifiedSince = modifiedSince;
	params.itemdefIDs = itemdefIDs;
	params.workshopIDs = workshopIDs;
	params.cacheMaxAgeSeconds = cacheMaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.GetInventory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::GetInventory(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetInventory");

	UWebInventoryService_GetInventory_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.ExchangeItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    materialsItemID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    materialsQuantity              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 outputItemdefID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::ExchangeItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> materialsItemID, TArray<int> materialsQuantity, const struct FString& outputItemdefID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.ExchangeItem");

	UWebInventoryService_ExchangeItem_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.materialsItemID = materialsItemID;
	params.materialsQuantity = materialsQuantity;
	params.outputItemdefID = outputItemdefID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.ConsumeItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Quantity                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::ConsumeItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& ItemId, const struct FString& Quantity, const struct FString& SteamID, const struct FString& RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.ConsumeItem");

	UWebInventoryService_ConsumeItem_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.SteamID = SteamID;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.Consolidate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::Consolidate(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.Consolidate");

	UWebInventoryService_Consolidate_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.itemdefIDs = itemdefIDs;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.AddPromoItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            itemdefID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 itemPropsJson                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::AddPromoItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.AddPromoItem");

	UWebInventoryService_AddPromoItem_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.itemdefID = itemdefID;
	params.itemPropsJson = itemPropsJson;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebInventoryService.AddItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 itemPropsJson                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTradeRestriction              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebInventoryService::AddItem(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, TArray<int> itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID, bool bTradeRestriction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.AddItem");

	UWebInventoryService_AddItem_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.itemdefID = itemdefID;
	params.itemPropsJson = itemPropsJson;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestID = RequestID;
	params.bTradeRestriction = bTradeRestriction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefID                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 itemPropsJson                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTradeRestriction              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAddItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionAddItem* USteamCoreWebAsyncActionAddItem::STATIC_AddItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, TArray<int> itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID, bool bTradeRestriction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync");

	USteamCoreWebAsyncActionAddItem_AddItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.itemdefID = itemdefID;
	params.itemPropsJson = itemPropsJson;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestID = RequestID;
	params.bTradeRestriction = bTradeRestriction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            itemdefID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 itemPropsJson                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAddPromoItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionAddPromoItem* USteamCoreWebAsyncActionAddPromoItem::STATIC_AddPromoItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int itemdefID, const struct FString& itemPropsJson, const struct FString& SteamID, bool bNotify, const struct FString& RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync");

	USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.itemdefID = itemdefID;
	params.itemPropsJson = itemPropsJson;
	params.SteamID = SteamID;
	params.bNotify = bNotify;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Quantity                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RequestID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionConsumeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionConsumeItem* USteamCoreWebAsyncActionConsumeItem::STATIC_ConsumeItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& ItemId, const struct FString& Quantity, const struct FString& SteamID, const struct FString& RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync");

	USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.SteamID = SteamID;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    materialsItemID                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    materialsQuantity              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 outputItemdefID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionExchangeItem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionExchangeItem* USteamCoreWebAsyncActionExchangeItem::STATIC_ExchangeItemAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> materialsItemID, TArray<int> materialsQuantity, const struct FString& outputItemdefID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync");

	USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.materialsItemID = materialsItemID;
	params.materialsQuantity = materialsQuantity;
	params.outputItemdefID = outputItemdefID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetInventory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetInventory* USteamCoreWebAsyncActionGetInventory::STATIC_GetInventoryAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync");

	USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 modifiedSince                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    workshopIDs                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            cacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetItemDefs* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetItemDefs* USteamCoreWebAsyncActionGetItemDefs::STATIC_GetItemDefsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& modifiedSince, TArray<int> itemdefIDs, TArray<int> workshopIDs, int cacheMaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync");

	USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.modifiedSince = modifiedSince;
	params.itemdefIDs = itemdefIDs;
	params.workshopIDs = workshopIDs;
	params.cacheMaxAgeSeconds = cacheMaxAgeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPriceSheet* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPriceSheet* USteamCoreWebAsyncActionGetPriceSheet::STATIC_GetPriceSheetAsync(class UObject* WorldContextObject, const struct FString& Key, int Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync");

	USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionConsolidate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionConsolidate* USteamCoreWebAsyncActionConsolidate::STATIC_ConsolidateAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync");

	USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.itemdefIDs = itemdefIDs;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    itemdefIDs                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetQuantity* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetQuantity* USteamCoreWebAsyncActionGetQuantity::STATIC_GetQuantityAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, TArray<int> itemdefIDs, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync");

	USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.itemdefIDs = itemdefIDs;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 inputJson                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timestamp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 updates                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionModifyItems* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionModifyItems* USteamCoreWebAsyncActionModifyItems::STATIC_ModifyItemsAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& inputJson, const struct FString& SteamID, int Timestamp, const struct FString& updates)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync");

	USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.inputJson = inputJson;
	params.SteamID = SteamID;
	params.Timestamp = Timestamp;
	params.updates = updates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            leaderbordID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Details                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 scoreMethod                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLeaderboards::SetLeaderboardScore(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int leaderbordID, const struct FString& SteamID, int Score, TArray<unsigned char> Details, const struct FString& scoreMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore");

	UWebLeaderboards_SetLeaderboardScore_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.leaderbordID = leaderbordID;
	params.SteamID = SteamID;
	params.Score = Score;
	params.Details = Details;
	params.scoreMethod = scoreMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            leaderbordID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLeaderboards::ResetLeaderboard(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int leaderbordID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard");

	UWebLeaderboards_ResetLeaderboard_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.leaderbordID = leaderbordID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLeaderboards::GetLeaderboardsForGame(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame");

	UWebLeaderboards_GetLeaderboardsForGame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            leaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            dataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLeaderboards::GetLeaderboardEntries(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int rangeStart, int rangeEnd, int leaderboardID, int dataRequest, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries");

	UWebLeaderboards_GetLeaderboardEntries_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.rangeStart = rangeStart;
	params.rangeEnd = rangeEnd;
	params.leaderboardID = leaderboardID;
	params.dataRequest = dataRequest;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SortMethod                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 displayType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyTrustedWrites             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyFriendsReads              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLeaderboards::FindOrCreateLeaderboard(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard");

	UWebLeaderboards_FindOrCreateLeaderboard_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;
	params.SortMethod = SortMethod;
	params.displayType = displayType;
	params.bCreateIfNotFound = bCreateIfNotFound;
	params.bOnlyTrustedWrites = bOnlyTrustedWrites;
	params.bOnlyFriendsReads = bOnlyFriendsReads;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLeaderboards::DeleteLeaderboard(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard");

	UWebLeaderboards_DeleteLeaderboard_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeleteLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionDeleteLeaderboard* USteamCoreWebAsyncActionDeleteLeaderboard::STATIC_DeleteLeaderboardAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync");

	USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SortMethod                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 displayType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyTrustedWrites             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyFriendsReads              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFindOrCreateLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionFindOrCreateLeaderboard* USteamCoreWebAsyncActionFindOrCreateLeaderboard::STATIC_FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync");

	USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Name = Name;
	params.SortMethod = SortMethod;
	params.displayType = displayType;
	params.bCreateIfNotFound = bCreateIfNotFound;
	params.bOnlyTrustedWrites = bOnlyTrustedWrites;
	params.bOnlyFriendsReads = bOnlyFriendsReads;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            rangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            leaderboardID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            dataRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetLeaderboardEntries* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetLeaderboardEntries* USteamCoreWebAsyncActionGetLeaderboardEntries::STATIC_GetLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int rangeStart, int rangeEnd, int leaderboardID, int dataRequest, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync");

	USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.rangeStart = rangeStart;
	params.rangeEnd = rangeEnd;
	params.leaderboardID = leaderboardID;
	params.dataRequest = dataRequest;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetLeaderboardsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetLeaderboardsForGame* USteamCoreWebAsyncActionGetLeaderboardsForGame::STATIC_GetLeaderboardsForGameAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync");

	USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            leaderbordID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionResetLeaderboard* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionResetLeaderboard* USteamCoreWebAsyncActionResetLeaderboard::STATIC_ResetLeaderboardAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int leaderbordID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync");

	USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.leaderbordID = leaderbordID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            leaderbordID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Details                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 scoreMethod                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSetLeaderboardScore* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionSetLeaderboardScore* USteamCoreWebAsyncActionSetLeaderboardScore::STATIC_SetLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int leaderbordID, const struct FString& SteamID, int Score, TArray<unsigned char> Details, const struct FString& scoreMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync");

	USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.leaderbordID = leaderbordID;
	params.SteamID = SteamID;
	params.Score = Score;
	params.Details = Details;
	params.scoreMethod = scoreMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDToRemove                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamIDLobby                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 inputJson                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLobbyMatchmakingService::RemoveUserFromLobby(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& steamIDToRemove, const struct FString& SteamIDLobby, const struct FString& inputJson)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby");

	UWebLobbyMatchmakingService_RemoveUserFromLobby_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.steamIDToRemove = steamIDToRemove;
	params.SteamIDLobby = SteamIDLobby;
	params.inputJson = inputJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxMembers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCoreWeb_ESteamCoreWebLobbyType lobbyType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 lobbyName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 inputJson                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         steamIDInvitedMembers          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FString                 lobbyMetaData                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebLobbyMatchmakingService::CreateLobby(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int maxMembers, SteamCoreWeb_ESteamCoreWebLobbyType lobbyType, const struct FString& lobbyName, const struct FString& inputJson, TArray<struct FString> steamIDInvitedMembers, const struct FString& lobbyMetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby");

	UWebLobbyMatchmakingService_CreateLobby_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.maxMembers = maxMembers;
	params.lobbyType = lobbyType;
	params.lobbyName = lobbyName;
	params.inputJson = inputJson;
	params.steamIDInvitedMembers = steamIDInvitedMembers;
	params.lobbyMetaData = lobbyMetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.RefundTxn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::RefundTxn(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.RefundTxn");

	UWebMicroTxn_RefundTxn_Params params;
	params.callback = callback;
	params.Key = Key;
	params.OrderId = OrderId;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.QueryTxn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 transID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::QueryTxn(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& OrderId, const struct FString& transID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.QueryTxn");

	UWebMicroTxn_QueryTxn_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.OrderId = OrderId;
	params.transID = transID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.ProcessAgreement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 agreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::ProcessAgreement(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, const struct FString& agreementID, int AppID, int Amount, const struct FString& Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.ProcessAgreement");

	UWebMicroTxn_ProcessAgreement_Params params;
	params.callback = callback;
	params.Key = Key;
	params.OrderId = OrderId;
	params.SteamID = SteamID;
	params.agreementID = agreementID;
	params.AppID = AppID;
	params.Amount = Amount;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.MakeTransactionID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UWebMicroTxn::STATIC_MakeTransactionID()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.MakeTransactionID");

	UWebMicroTxn_MakeTransactionID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebMicroTxn.InitTxn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 userSession                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ipaddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ItemId                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantity                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Amount                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Description                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Category                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    associatedBundle               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         billingType                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         startDate                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         endDate                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Period                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Frequency                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         recurringAmt                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    bundleCount                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    bundleID                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    bundleQty                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         bundleDesc                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         bundleCategory                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebMicroTxn::InitTxn(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, int AppID, const struct FString& Language, const struct FString& Currency, const struct FString& userSession, const struct FString& ipaddress, TArray<int> ItemId, TArray<int> Quantity, TArray<struct FString> Amount, TArray<struct FString> Description, TArray<struct FString> Category, TArray<int> associatedBundle, TArray<struct FString> billingType, TArray<struct FString> startDate, TArray<struct FString> endDate, TArray<struct FString> Period, TArray<int> Frequency, TArray<struct FString> recurringAmt, TArray<int> bundleCount, TArray<int> bundleID, TArray<int> bundleQty, TArray<struct FString> bundleDesc, TArray<struct FString> bundleCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.InitTxn");

	UWebMicroTxn_InitTxn_Params params;
	params.callback = callback;
	params.Key = Key;
	params.OrderId = OrderId;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;
	params.Currency = Currency;
	params.userSession = userSession;
	params.ipaddress = ipaddress;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.Amount = Amount;
	params.Description = Description;
	params.Category = Category;
	params.associatedBundle = associatedBundle;
	params.billingType = billingType;
	params.startDate = startDate;
	params.endDate = endDate;
	params.Period = Period;
	params.Frequency = Frequency;
	params.recurringAmt = recurringAmt;
	params.bundleCount = bundleCount;
	params.bundleID = bundleID;
	params.bundleQty = bundleQty;
	params.bundleDesc = bundleDesc;
	params.bundleCategory = bundleCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.GetUserInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ipaddress                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::GetUserInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int ipaddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.GetUserInfo");

	UWebMicroTxn_GetUserInfo_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.ipaddress = ipaddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::GetUserAgreementInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo");

	UWebMicroTxn_GetUserAgreementInfo_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.GetReport
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Type                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::GetReport(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Time, const struct FString& Type, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.GetReport");

	UWebMicroTxn_GetReport_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Time = Time;
	params.Type = Type;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.FinalizeTxn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::FinalizeTxn(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& OrderId, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.FinalizeTxn");

	UWebMicroTxn_FinalizeTxn_Params params;
	params.callback = callback;
	params.Key = Key;
	params.OrderId = OrderId;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.CancelAgreement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 agreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::CancelAgreement(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.CancelAgreement");

	UWebMicroTxn_CancelAgreement_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.agreementID = agreementID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebMicroTxn.AdjustAgreement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 agreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 nextProcessDate                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebMicroTxn::AdjustAgreement(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID, const struct FString& nextProcessDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.AdjustAgreement");

	UWebMicroTxn_AdjustAgreement_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.agreementID = agreementID;
	params.AppID = AppID;
	params.nextProcessDate = nextProcessDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 agreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 nextProcessDate                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAdjustAgreement* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionAdjustAgreement* USteamCoreWebAsyncActionAdjustAgreement::STATIC_AdjustAgreementAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID, const struct FString& nextProcessDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync");

	USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.agreementID = agreementID;
	params.AppID = AppID;
	params.nextProcessDate = nextProcessDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 agreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCancelAgreement* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionCancelAgreement* USteamCoreWebAsyncActionCancelAgreement::STATIC_CancelAgreementAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& agreementID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync");

	USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.agreementID = agreementID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFinalizeTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionFinalizeTxn* USteamCoreWebAsyncActionFinalizeTxn::STATIC_FinalizeTxnAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync");

	USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.OrderId = OrderId;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Type                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetReport* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetReport* USteamCoreWebAsyncActionGetReport::STATIC_GetReportAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Time, const struct FString& Type, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync");

	USteamCoreWebAsyncActionGetReport_GetReportAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Time = Time;
	params.Type = Type;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserAgreementInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetUserAgreementInfo* USteamCoreWebAsyncActionGetUserAgreementInfo::STATIC_GetUserAgreementInfoAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync");

	USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ipaddress                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetUserInfo* USteamCoreWebAsyncActionGetUserInfo::STATIC_GetUserInfoAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int ipaddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync");

	USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.ipaddress = ipaddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 userSession                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ipaddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ItemId                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Quantity                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Amount                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Description                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Category                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    associatedBundle               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         billingType                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         startDate                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         endDate                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Period                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Frequency                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         recurringAmt                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    bundleCount                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    bundleID                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    bundleQty                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         bundleDesc                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         bundleCategory                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionInitTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionInitTxn* USteamCoreWebAsyncActionInitTxn::STATIC_InitTxnAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, int AppID, const struct FString& Language, const struct FString& Currency, const struct FString& userSession, const struct FString& ipaddress, TArray<int> ItemId, TArray<int> Quantity, TArray<struct FString> Amount, TArray<struct FString> Description, TArray<struct FString> Category, TArray<int> associatedBundle, TArray<struct FString> billingType, TArray<struct FString> startDate, TArray<struct FString> endDate, TArray<struct FString> Period, TArray<int> Frequency, TArray<struct FString> recurringAmt, TArray<int> bundleCount, TArray<int> bundleID, TArray<int> bundleQty, TArray<struct FString> bundleDesc, TArray<struct FString> bundleCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync");

	USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.OrderId = OrderId;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;
	params.Currency = Currency;
	params.userSession = userSession;
	params.ipaddress = ipaddress;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.Amount = Amount;
	params.Description = Description;
	params.Category = Category;
	params.associatedBundle = associatedBundle;
	params.billingType = billingType;
	params.startDate = startDate;
	params.endDate = endDate;
	params.Period = Period;
	params.Frequency = Frequency;
	params.recurringAmt = recurringAmt;
	params.bundleCount = bundleCount;
	params.bundleID = bundleID;
	params.bundleQty = bundleQty;
	params.bundleDesc = bundleDesc;
	params.bundleCategory = bundleCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 agreementID                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionProcessAgreement* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionProcessAgreement* USteamCoreWebAsyncActionProcessAgreement::STATIC_ProcessAgreementAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, const struct FString& SteamID, const struct FString& agreementID, int AppID, int Amount, const struct FString& Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync");

	USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.OrderId = OrderId;
	params.SteamID = SteamID;
	params.agreementID = agreementID;
	params.AppID = AppID;
	params.Amount = Amount;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 transID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionQueryTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionQueryTxn* USteamCoreWebAsyncActionQueryTxn::STATIC_QueryTxnAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& OrderId, const struct FString& transID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync");

	USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.OrderId = OrderId;
	params.transID = transID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRefundTxn* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRefundTxn* USteamCoreWebAsyncActionRefundTxn::STATIC_RefundTxnAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& OrderId, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync");

	USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.OrderId = OrderId;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            appIDplaying                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPlayerService::IsPlayingSharedGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int appIDplaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame");

	UWebPlayerService_IsPlayingSharedGame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.appIDplaying = appIDplaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPlayerService.GetSteamLevel
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPlayerService::GetSteamLevel(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetSteamLevel");

	UWebPlayerService_GetSteamLevel_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPlayerService::GetRecentlyPlayedGames(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames");

	UWebPlayerService_GetRecentlyPlayedGames_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPlayerService.GetOwnedGames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAppInfo                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludePlayedFreeGames        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Filter                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebPlayerService::GetOwnedGames(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetOwnedGames");

	UWebPlayerService_GetOwnedGames_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bIncludeAppInfo = bIncludeAppInfo;
	params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            badgeID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPlayerService::GetCommunityBadgeProgress(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int badgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress");

	UWebPlayerService_GetCommunityBadgeProgress_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.badgeID = badgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPlayerService.GetBadges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPlayerService::GetBadges(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetBadges");

	UWebPlayerService_GetBadges_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetRecentlyPlayedGames* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetRecentlyPlayedGames* USteamCoreWebAsyncActionGetRecentlyPlayedGames::STATIC_GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync");

	USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeAppInfo                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludePlayedFreeGames        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Filter                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetOwnedGames* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetOwnedGames* USteamCoreWebAsyncActionGetOwnedGames::STATIC_GetOwnedGamesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync");

	USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.bIncludeAppInfo = bIncludeAppInfo;
	params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetSteamLevel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetSteamLevel* USteamCoreWebAsyncActionGetSteamLevel::STATIC_GetSteamLevelAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync");

	USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetBadges* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetBadges* USteamCoreWebAsyncActionGetBadges::STATIC_GetBadgesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync");

	USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            badgeID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCommunityBadgeProgress* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetCommunityBadgeProgress* USteamCoreWebAsyncActionGetCommunityBadgeProgress::STATIC_GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int badgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync");

	USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.badgeID = badgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            appIDplaying                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionIsPlayingSharedGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionIsPlayingSharedGame* USteamCoreWebAsyncActionIsPlayingSharedGame::STATIC_IsPlayingSharedGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int appIDplaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync");

	USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.appIDplaying = appIDplaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebPublishedFileService.UpdateTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 addTags                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 removeTags                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPublishedFileService::UpdateTags(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, const struct FString& addTags, const struct FString& removeTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.UpdateTags");

	UWebPublishedFileService_UpdateTags_Params params;
	params.callback = callback;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.addTags = addTags;
	params.removeTags = removeTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncompatible                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPublishedFileService::UpdateIncompatibleStatus(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, bool bIncompatible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus");

	UWebPublishedFileService_UpdateIncompatibleStatus_Params params;
	params.callback = callback;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.bIncompatible = bIncompatible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBanned                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPublishedFileService::UpdateBanStatus(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, bool bBanned, const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus");

	UWebPublishedFileService_UpdateBanStatus_Params params;
	params.callback = callback;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.bBanned = bBanned;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MetaData                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPublishedFileService::SetDeveloperMetadata(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& PublishedFileID, int AppID, const struct FString& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata");

	UWebPublishedFileService_SetDeveloperMetadata_Params params;
	params.callback = callback;
	params.Key = Key;
	params.PublishedFileID = PublishedFileID;
	params.AppID = AppID;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPublishedFileService.QueryFiles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QueryType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            page                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Cursor                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            numPerPage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CreatorAppID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 requiredTags                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 excludedTags                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMatchAllTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 requiredFlags                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 omittedFlags                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SearchText                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChildPublishedFileId           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeRecentVotesOnly        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            cacheMaxAgeSeconds             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Language                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 requiredKvTags                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTotalOnly                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIDsOnly                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnVoteData                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnTags                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnKvTags                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnPreviews                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnChildren                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnShortDescription        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnForSaleData             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnMetadata                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            returnPlaytimeStats            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebPublishedFileService::QueryFiles(const struct FScriptDelegate& callback, const struct FString& Key, int QueryType, int page, const struct FString& Cursor, int numPerPage, int CreatorAppID, int AppID, const struct FString& requiredTags, const struct FString& excludedTags, bool bMatchAllTags, const struct FString& requiredFlags, const struct FString& omittedFlags, const struct FString& SearchText, int FileType, const struct FString& ChildPublishedFileId, int days, bool bIncludeRecentVotesOnly, int cacheMaxAgeSeconds, int Language, const struct FString& requiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int returnPlaytimeStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.QueryFiles");

	UWebPublishedFileService_QueryFiles_Params params;
	params.callback = callback;
	params.Key = Key;
	params.QueryType = QueryType;
	params.page = page;
	params.Cursor = Cursor;
	params.numPerPage = numPerPage;
	params.CreatorAppID = CreatorAppID;
	params.AppID = AppID;
	params.requiredTags = requiredTags;
	params.excludedTags = excludedTags;
	params.bMatchAllTags = bMatchAllTags;
	params.requiredFlags = requiredFlags;
	params.omittedFlags = omittedFlags;
	params.SearchText = SearchText;
	params.FileType = FileType;
	params.ChildPublishedFileId = ChildPublishedFileId;
	params.days = days;
	params.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
	params.cacheMaxAgeSeconds = cacheMaxAgeSeconds;
	params.Language = Language;
	params.requiredKvTags = requiredKvTags;
	params.bTotalOnly = bTotalOnly;
	params.bIDsOnly = bIDsOnly;
	params.bReturnVoteData = bReturnVoteData;
	params.bReturnTags = bReturnTags;
	params.bReturnKvTags = bReturnKvTags;
	params.bReturnPreviews = bReturnPreviews;
	params.bReturnChildren = bReturnChildren;
	params.bReturnShortDescription = bReturnShortDescription;
	params.bReturnForSaleData = bReturnForSaleData;
	params.bReturnMetadata = bReturnMetadata;
	params.returnPlaytimeStats = returnPlaytimeStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamPublishedItemSearch::ResultSetSummary(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary");

	UWebSteamPublishedItemSearch_ResultSetSummary_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamPublishedItemSearch::RankedByVote(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote");

	UWebSteamPublishedItemSearch_RankedByVote_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.Count = Count;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamPublishedItemSearch::RankedByTrend(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, int days, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend");

	UWebSteamPublishedItemSearch_RankedByTrend_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.Count = Count;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.days = days;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamPublishedItemSearch::RankedByPublicationOrder(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder");

	UWebSteamPublishedItemSearch_RankedByPublicationOrder_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.Count = Count;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRankedByPublicationOrder* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRankedByPublicationOrder* USteamCoreWebAsyncActionRankedByPublicationOrder::STATIC_RankedByPublicationOrderAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync");

	USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.Count = Count;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            days                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRankedByTrend* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRankedByTrend* USteamCoreWebAsyncActionRankedByTrend::STATIC_RankedByTrendAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, int days, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync");

	USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.Count = Count;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.days = days;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRankedByVote* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionRankedByVote* USteamCoreWebAsyncActionRankedByVote::STATIC_RankedByVoteAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, int Count, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync");

	USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.Count = Count;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            startID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasAppAdminAccess             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FileType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Tag                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         UserTag                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionResultSetSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionResultSetSummary* USteamCoreWebAsyncActionResultSetSummary::STATIC_ResultSetSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int startID, bool bHasAppAdminAccess, int FileType, TArray<struct FString> Tag, TArray<struct FString> UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync");

	USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.startID = startID;
	params.bHasAppAdminAccess = bHasAppAdminAccess;
	params.FileType = FileType;
	params.Tag = Tag;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebPublishedItemVoting::UserVoteSummary(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, TArray<struct FString> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary");

	UWebPublishedItemVoting_UserVoteSummary_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebPublishedItemVoting::ItemVoteSummary(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary");

	UWebPublishedItemVoting_ItemVoteSummary_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionItemVoteSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionItemVoteSummary* USteamCoreWebAsyncActionItemVoteSummary::STATIC_ItemVoteSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync");

	USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionUserVoteSummary* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionUserVoteSummary* USteamCoreWebAsyncActionUserVoteSummary::STATIC_UserVoteSummaryAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, TArray<struct FString> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync");

	USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::UnsubscribePublishedFile(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile");

	UWebRemoteStorage_UnsubscribePublishedFile_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::SubscribePublishedFile(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile");

	UWebRemoteStorage_SubscribePublishedFile_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UGCID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::SetUGCUsedByGC(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID, bool bUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC");

	UWebRemoteStorage_SetUGCUsedByGC_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;
	params.bUsed = bUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UGCID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::GetUGCFileDetails(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails");

	UWebRemoteStorage_GetUGCFileDetails_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::GetPublishedFileDetails(const struct FScriptDelegate& callback, const struct FString& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails");

	UWebRemoteStorage_GetPublishedFileDetails_Params params;
	params.callback = callback;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebRemoteStorage::GetCollectionDetails(const struct FScriptDelegate& callback, TArray<struct FString> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails");

	UWebRemoteStorage_GetCollectionDetails_Params params;
	params.callback = callback;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            listType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::EnumerateUserSubscribedFiles(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, int listType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles");

	UWebRemoteStorage_EnumerateUserSubscribedFiles_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.listType = listType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebRemoteStorage::EnumerateUserPublishedFiles(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles");

	UWebRemoteStorage_EnumerateUserPublishedFiles_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::STATIC_EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync");

	USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            listType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::STATIC_EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, int listType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync");

	USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.listType = listType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         publishedFileIDs               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCollectionDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetCollectionDetails* USteamCoreWebAsyncActionGetCollectionDetails::STATIC_GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<struct FString> publishedFileIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync");

	USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.publishedFileIDs = publishedFileIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublishedFileDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPublishedFileDetails* USteamCoreWebAsyncActionGetPublishedFileDetails::STATIC_GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const struct FString& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync");

	USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UGCID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUGCFileDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetUGCFileDetails* USteamCoreWebAsyncActionGetUGCFileDetails::STATIC_GetUGCFileDetailsAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync");

	USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UGCID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSetUGCUsedByGC* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionSetUGCUsedByGC* USteamCoreWebAsyncActionSetUGCUsedByGC::STATIC_SetUGCUsedByGCAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& UGCID, int AppID, bool bUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync");

	USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.UGCID = UGCID;
	params.AppID = AppID;
	params.bUsed = bUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSubscribePublishedFile* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionSubscribePublishedFile* USteamCoreWebAsyncActionSubscribePublishedFile::STATIC_SubscribePublishedFileAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync");

	USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublishedFileID                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionUnsubscribePublishedFile* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionUnsubscribePublishedFile* USteamCoreWebAsyncActionUnsubscribePublishedFile::STATIC_UnsubscribePublishedFileAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& PublishedFileID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync");

	USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.PublishedFileID = PublishedFileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebSteamCommunity.ReportAbuse
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDActor                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDTarget                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            abuseType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            contentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 gid                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamCommunity::ReportAbuse(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& steamIDActor, const struct FString& steamIDTarget, int AppID, int abuseType, int contentType, const struct FString& Description, const struct FString& gid)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamCommunity.ReportAbuse");

	UWebSteamCommunity_ReportAbuse_Params params;
	params.callback = callback;
	params.Key = Key;
	params.steamIDActor = steamIDActor;
	params.steamIDTarget = steamIDTarget;
	params.AppID = AppID;
	params.abuseType = abuseType;
	params.contentType = contentType;
	params.Description = Description;
	params.gid = gid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDActor                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamIDTarget                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            abuseType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            contentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 gid                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionReportAbuse* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionReportAbuse* USteamCoreWebAsyncActionReportAbuse::STATIC_ReportAbuseAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& steamIDActor, const struct FString& steamIDTarget, int AppID, int abuseType, int contentType, const struct FString& Description, const struct FString& gid)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync");

	USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.steamIDActor = steamIDActor;
	params.steamIDTarget = steamIDTarget;
	params.AppID = AppID;
	params.abuseType = abuseType;
	params.contentType = contentType;
	params.Description = Description;
	params.gid = gid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebSteamEconomy.StartTrade
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamID1                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamID2                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::StartTrade(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& steamID1, const struct FString& steamID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.StartTrade");

	UWebSteamEconomy_StartTrade_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.steamID1 = steamID1;
	params.steamID2 = steamID2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 assetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            assetQuantity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ipaddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 referer                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClientAuth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::StartAssetTransaction(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& assetID, int assetQuantity, const struct FString& Currency, const struct FString& Language, const struct FString& ipaddress, const struct FString& referer, bool bClientAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction");

	UWebSteamEconomy_StartAssetTransaction_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.assetID = assetID;
	params.assetQuantity = assetQuantity;
	params.Currency = Currency;
	params.Language = Language;
	params.ipaddress = ipaddress;
	params.referer = referer;
	params.bClientAuth = bClientAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::GetMarketPrices(const struct FScriptDelegate& callback, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices");

	UWebSteamEconomy_GetMarketPrices_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::GetExportedAssetsForUser(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser");

	UWebSteamEconomy_GetExportedAssetsForUser_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.contextID = contextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::GetAssetPrices(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices");

	UWebSteamEconomy_GetAssetPrices_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Currency = Currency;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            classCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 classID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstanceID                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::GetAssetClassInfo(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& Language, int classCount, const struct FString& classID, const struct FString& InstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo");

	UWebSteamEconomy_GetAssetClassInfo_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.Language = Language;
	params.classCount = classCount;
	params.classID = classID;
	params.InstanceID = InstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 txnID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::FinalizeAssetTransaction(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& txnID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction");

	UWebSteamEconomy_FinalizeAssetTransaction_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.txnID = txnID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamEconomy.CanTrade
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TargetId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamEconomy::CanTrade(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.CanTrade");

	UWebSteamEconomy_CanTrade_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TargetId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCanTrade* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionCanTrade* USteamCoreWebAsyncActionCanTrade::STATIC_CanTradeAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync");

	USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 txnID                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFinalizeAssetTransaction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionFinalizeAssetTransaction* USteamCoreWebAsyncActionFinalizeAssetTransaction::STATIC_FinalizeAssetTransactionAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& txnID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync");

	USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.txnID = txnID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            classCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 classID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InstanceID                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAssetClassInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetAssetClassInfo* USteamCoreWebAsyncActionGetAssetClassInfo::STATIC_GetAssetClassInfoAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Language, int classCount, const struct FString& classID, const struct FString& InstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync");

	USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Language = Language;
	params.classCount = classCount;
	params.classID = classID;
	params.InstanceID = InstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAssetPrices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetAssetPrices* USteamCoreWebAsyncActionGetAssetPrices::STATIC_GetAssetPricesAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync");

	USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.Currency = Currency;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 contextID                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetExportedAssetsForUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetExportedAssetsForUser* USteamCoreWebAsyncActionGetExportedAssetsForUser::STATIC_GetExportedAssetsForUserAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& contextID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync");

	USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.contextID = contextID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetMarketPrices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetMarketPrices* USteamCoreWebAsyncActionGetMarketPrices::STATIC_GetMarketPricesAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync");

	USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 assetID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            assetQuantity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ipaddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 referer                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClientAuth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionStartAssetTransaction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionStartAssetTransaction* USteamCoreWebAsyncActionStartAssetTransaction::STATIC_StartAssetTransactionAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& SteamID, const struct FString& assetID, int assetQuantity, const struct FString& Currency, const struct FString& Language, const struct FString& ipaddress, const struct FString& referer, bool bClientAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync");

	USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.SteamID = SteamID;
	params.assetID = assetID;
	params.assetQuantity = assetQuantity;
	params.Currency = Currency;
	params.Language = Language;
	params.ipaddress = ipaddress;
	params.referer = referer;
	params.bClientAuth = bClientAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamID1                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 steamID2                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionStartTrade* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionStartTrade* USteamCoreWebAsyncActionStartTrade::STATIC_StartTradeAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& steamID1, const struct FString& steamID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync");

	USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.steamID1 = steamID1;
	params.steamID2 = steamID2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameID                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 rangeStart                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 rangeEnd                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamGameServerStats::GetGameServerPlayerStatsForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& GameID, int AppID, const struct FString& rangeStart, const struct FString& rangeEnd, int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame");

	UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.GameID = GameID;
	params.AppID = AppID;
	params.rangeStart = rangeStart;
	params.rangeEnd = rangeEnd;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         feeds                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            endDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamNews::GetNewsForAppAuthed(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed");

	UWebSteamNews_GetNewsForAppAuthed_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.feeds = feeds;
	params.endDate = endDate;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamNews.GetNewsForApp
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         feeds                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            endDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamNews::GetNewsForApp(const struct FScriptDelegate& callback, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamNews.GetNewsForApp");

	UWebSteamNews_GetNewsForApp_Params params;
	params.callback = callback;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.feeds = feeds;
	params.endDate = endDate;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         feeds                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            endDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNewsForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetNewsForApp* USteamCoreWebAsyncActionGetNewsForApp::STATIC_GetNewsForAppAsync(class UObject* WorldContextObject, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync");

	USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.feeds = feeds;
	params.endDate = endDate;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         feeds                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            endDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNewsForAppAuthed* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetNewsForAppAuthed* USteamCoreWebAsyncActionGetNewsForAppAuthed::STATIC_GetNewsForAppAuthedAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, int MaxLength, TArray<struct FString> feeds, int endDate, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync");

	USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.MaxLength = MaxLength;
	params.feeds = feeds;
	params.endDate = endDate;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebSteamUser.ResolveVanityURL
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 vanityURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCoreWeb_EVanityUrlType    urlType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::ResolveVanityURL(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& vanityURL, SteamCoreWeb_EVanityUrlType urlType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.ResolveVanityURL");

	UWebSteamUser_ResolveVanityURL_Params params;
	params.callback = callback;
	params.Key = Key;
	params.vanityURL = vanityURL;
	params.urlType = urlType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GrantPackage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            packageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ipaddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 thirdPartyKey                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            thirdPartyAppID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::GrantPackage(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int packageID, const struct FString& ipaddress, const struct FString& thirdPartyKey, int thirdPartyAppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GrantPackage");

	UWebSteamUser_GrantPackage_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.packageID = packageID;
	params.ipaddress = ipaddress;
	params.thirdPartyKey = thirdPartyKey;
	params.thirdPartyAppID = thirdPartyAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetUserGroupList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::GetUserGroupList(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetUserGroupList");

	UWebSteamUser_GetUserGroupList_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 packageRowVersion              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cdkeyRowVersion                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::GetPublisherAppOwnershipChanges(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& packageRowVersion, const struct FString& cdkeyRowVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges");

	UWebSteamUser_GetPublisherAppOwnershipChanges_Params params;
	params.callback = callback;
	params.Key = Key;
	params.packageRowVersion = packageRowVersion;
	params.cdkeyRowVersion = cdkeyRowVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::GetPublisherAppOwnership(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership");

	UWebSteamUser_GetPublisherAppOwnership_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         SteamIDs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamUser::GetPlayerSummaries(const struct FScriptDelegate& callback, const struct FString& Key, TArray<struct FString> SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries");

	UWebSteamUser_GetPlayerSummaries_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPlayerBans
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         SteamIDs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamUser::GetPlayerBans(const struct FScriptDelegate& callback, const struct FString& Key, TArray<struct FString> SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPlayerBans");

	UWebSteamUser_GetPlayerBans_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetFriendList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 relationship                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::GetFriendList(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, const struct FString& relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetFriendList");

	UWebSteamUser_GetFriendList_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    AppIDs                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebSteamUser::GetAppPriceInfo(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, TArray<int> AppIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo");

	UWebSteamUser_GetAppPriceInfo_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDs = AppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebSteamUser.CheckAppOwnership
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSteamUser::CheckAppOwnership(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.CheckAppOwnership");

	UWebSteamUser_CheckAppOwnership_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCheckAppOwnership* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionCheckAppOwnership* USteamCoreWebAsyncActionCheckAppOwnership::STATIC_CheckAppOwnershipAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync");

	USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    AppIDs                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAppPriceInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetAppPriceInfo* USteamCoreWebAsyncActionGetAppPriceInfo::STATIC_GetAppPriceInfoAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, TArray<int> AppIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync");

	USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppIDs = AppIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 relationship                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetFriendList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetFriendList* USteamCoreWebAsyncActionGetFriendList::STATIC_GetFriendListAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, const struct FString& relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync");

	USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.relationship = relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         SteamIDs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPlayerBans* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPlayerBans* USteamCoreWebAsyncActionGetPlayerBans::STATIC_GetPlayerBansAsync(class UObject* WorldContextObject, const struct FString& Key, TArray<struct FString> SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync");

	USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         SteamIDs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPlayerSummaries* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPlayerSummaries* USteamCoreWebAsyncActionGetPlayerSummaries::STATIC_GetPlayerSummariesAsync(class UObject* WorldContextObject, const struct FString& Key, TArray<struct FString> SteamIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync");

	USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamIDs = SteamIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublisherAppOwnership* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPublisherAppOwnership* USteamCoreWebAsyncActionGetPublisherAppOwnership::STATIC_GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync");

	USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 packageRowVersion              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 cdkeyRowVersion                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::STATIC_GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& packageRowVersion, const struct FString& cdkeyRowVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync");

	USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.packageRowVersion = packageRowVersion;
	params.cdkeyRowVersion = cdkeyRowVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserGroupList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetUserGroupList* USteamCoreWebAsyncActionGetUserGroupList::STATIC_GetUserGroupListAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync");

	USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            packageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ipaddress                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 thirdPartyKey                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            thirdPartyAppID                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGrantPackage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGrantPackage* USteamCoreWebAsyncActionGrantPackage::STATIC_GrantPackageAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int packageID, const struct FString& ipaddress, const struct FString& thirdPartyKey, int thirdPartyAppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync");

	USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.packageID = packageID;
	params.ipaddress = ipaddress;
	params.thirdPartyKey = thirdPartyKey;
	params.thirdPartyAppID = thirdPartyAppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 vanityURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamCoreWeb_EVanityUrlType    urlType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionResolveVanityURL* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionResolveVanityURL* USteamCoreWebAsyncActionResolveVanityURL::STATIC_ResolveVanityURLAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& vanityURL, SteamCoreWeb_EVanityUrlType urlType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync");

	USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.vanityURL = vanityURL;
	params.urlType = urlType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserAuth::AuthenticateUserTicket(const struct FScriptDelegate& callback, const struct FString& Key, int AppID, const struct FString& ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket");

	UWebUserAuth_AuthenticateUserTicket_Params params;
	params.callback = callback;
	params.Key = Key;
	params.AppID = AppID;
	params.ticket = ticket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserAuth.AuthenticateUser
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          sessionKey                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          encryptedLoginKey              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebUserAuth::AuthenticateUser(const struct FScriptDelegate& callback, const struct FString& SteamID, TArray<unsigned char> sessionKey, TArray<unsigned char> encryptedLoginKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserAuth.AuthenticateUser");

	UWebUserAuth_AuthenticateUser_Params params;
	params.callback = callback;
	params.SteamID = SteamID;
	params.sessionKey = sessionKey;
	params.encryptedLoginKey = encryptedLoginKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          sessionKey                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<unsigned char>          encryptedLoginKey              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAuthenticateUser* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionAuthenticateUser* USteamCoreWebAsyncActionAuthenticateUser::STATIC_AuthenticateUserAsync(class UObject* WorldContextObject, const struct FString& SteamID, TArray<unsigned char> sessionKey, TArray<unsigned char> encryptedLoginKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync");

	USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamID = SteamID;
	params.sessionKey = sessionKey;
	params.encryptedLoginKey = encryptedLoginKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ticket                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAuthenticateUserTicket* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionAuthenticateUserTicket* USteamCoreWebAsyncActionAuthenticateUserTicket::STATIC_AuthenticateUserTicketAsync(class UObject* WorldContextObject, const struct FString& Key, int AppID, const struct FString& ticket)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync");

	USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.AppID = AppID;
	params.ticket = ticket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.WebUserStats.SetUserStatsForGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Names                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Values                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UWebUserStats::SetUserStatsForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> Names, TArray<int> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.SetUserStatsForGame");

	UWebUserStats_SetUserStatsForGame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Names = Names;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserStats.GetUserStatsForGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserStats::GetUserStatsForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetUserStatsForGame");

	UWebUserStats_GetUserStatsForGame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserStats.GetSchemaForGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserStats::GetSchemaForGame(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetSchemaForGame");

	UWebUserStats_GetSchemaForGame_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserStats.GetPlayerAchievements
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserStats::GetPlayerAchievements(const struct FScriptDelegate& callback, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetPlayerAchievements");

	UWebUserStats_GetPlayerAchievements_Params params;
	params.callback = callback;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserStats::GetNumberOfCurrentPlayers(const struct FScriptDelegate& callback, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers");

	UWebUserStats_GetNumberOfCurrentPlayers_Params params;
	params.callback = callback;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Names                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            startDate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            endDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserStats::GetGlobalStatsForGame(const struct FScriptDelegate& callback, int AppID, TArray<struct FString> Names, int startDate, int endDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame");

	UWebUserStats_GetGlobalStatsForGame_Params params;
	params.callback = callback;
	params.AppID = AppID;
	params.Names = Names;
	params.startDate = startDate;
	params.endDate = endDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 GameID                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebUserStats::GetGlobalAchievementPercentagesForApp(const struct FScriptDelegate& callback, const struct FString& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp");

	UWebUserStats_GetGlobalAchievementPercentagesForApp_Params params;
	params.callback = callback;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameID                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::STATIC_GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const struct FString& GameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync");

	USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Names                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            startDate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            endDate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetGlobalStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetGlobalStatsForGame* USteamCoreWebAsyncActionGetGlobalStatsForGame::STATIC_GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int AppID, TArray<struct FString> Names, int startDate, int endDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync");

	USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;
	params.Names = Names;
	params.startDate = startDate;
	params.endDate = endDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::STATIC_GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync");

	USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPlayerAchievements* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetPlayerAchievements* USteamCoreWebAsyncActionGetPlayerAchievements::STATIC_GetPlayerAchievementsAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync");

	USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetSchemaForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetSchemaForGame* USteamCoreWebAsyncActionGetSchemaForGame::STATIC_GetSchemaForGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, const struct FString& Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync");

	USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionGetUserStatsForGame* USteamCoreWebAsyncActionGetUserStatsForGame::STATIC_GetUserStatsForGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync");

	USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Names                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int>                    Values                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSetUserStatsForGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamCoreWebAsyncActionSetUserStatsForGame* USteamCoreWebAsyncActionSetUserStatsForGame::STATIC_SetUserStatsForGameAsync(class UObject* WorldContextObject, const struct FString& Key, const struct FString& SteamID, int AppID, TArray<struct FString> Names, TArray<int> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync");

	USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.SteamID = SteamID;
	params.AppID = AppID;
	params.Names = Names;
	params.Values = Values;

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
