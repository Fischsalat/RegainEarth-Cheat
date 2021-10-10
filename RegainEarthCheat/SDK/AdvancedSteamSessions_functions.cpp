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

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           bRequireNameOnly               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSteamFriendsLibrary::STATIC_RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo");

	UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params params;
	params.UniqueNetId = UniqueNetId;
	params.bRequireNameOnly = bRequireNameOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSteamSessions_ESteamUserOverlayType DialogType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAdvancedSteamFriendsLibrary::STATIC_OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, AdvancedSteamSessions_ESteamUserOverlayType DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay");

	UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params params;
	params.UniqueNetId = UniqueNetId;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAdvancedSteamFriendsLibrary::STATIC_GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName");

	UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBPSteamGroupInfo> SteamGroups                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAdvancedSteamFriendsLibrary::STATIC_GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups");

	UAdvancedSteamFriendsLibrary_GetSteamGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamGroups != nullptr)
		*SteamGroups = params.SteamGroups;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AppID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSteamFriendsLibrary::STATIC_GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result, int* AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed");

	UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (AppID != nullptr)
		*AppID = params.AppID;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// AdvancedSessions_EBlueprintAsyncResultSwitch Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedSteamSessions_ESteamAvatarSize AvatarSize                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UAdvancedSteamFriendsLibrary::STATIC_GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintAsyncResultSwitch* Result, AdvancedSteamSessions_ESteamAvatarSize AvatarSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar");

	UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params params;
	params.UniqueNetId = UniqueNetId;
	params.AvatarSize = AvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::STATIC_GetLocalSteamIDFromSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam");

	UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId          UniqueNetId                    (ConstParm, Parm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAdvancedSteamFriendsLibrary::STATIC_GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel");

	UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SteamID64                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::STATIC_CreateSteamIDFromString(const struct FString& SteamID64)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString");

	UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params params;
	params.SteamID64 = SteamID64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumberOfItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPSteamWorkshopID> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::STATIC_GetSubscribedWorkshopItems(int* NumberOfItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems");

	UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumberOfItems                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedSteamWorkshopLibrary::STATIC_GetNumSubscribedWorkshopItems(int* NumberOfItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems");

	UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfItems != nullptr)
		*NumberOfItems = params.NumberOfItems;

}


// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId          GroupUniqueNetID               (Parm, NativeAccessSpecifierPublic)
// class USteamRequestGroupOfficersCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::STATIC_GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList");

	USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupUniqueNetID = GroupUniqueNetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPSteamWorkshopID      WorkShopID                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USteamWSRequestUGCDetailsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::STATIC_GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails");

	USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorkShopID = WorkShopID;

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
