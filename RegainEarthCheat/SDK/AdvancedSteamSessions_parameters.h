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

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
struct UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               bRequireNameOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
struct UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	AdvancedSteamSessions_ESteamUserOverlayType        DialogType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
struct UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
struct UAdvancedSteamFriendsLibrary_GetSteamGroups_Params
{
	TArray<struct FBPSteamGroupInfo>                   SteamGroups;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
struct UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintResultSwitch            Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
struct UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	AdvancedSessions_EBlueprintAsyncResultSwitch       Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSteamSessions_ESteamAvatarSize             AvatarSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
struct UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params
{
	struct FBPUniqueNetId                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
struct UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
struct UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params
{
	struct FString                                     SteamID64;                                                 // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
struct UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params
{
	int                                                NumberOfItems;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBPSteamWorkshopID>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
struct UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params
{
	int                                                NumberOfItems;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
struct USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPUniqueNetId                              GroupUniqueNetID;                                          // (Parm, NativeAccessSpecifierPublic)
	class USteamRequestGroupOfficersCallbackProxy*     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
struct USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBPSteamWorkshopID                          WorkShopID;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USteamWSRequestUGCDetailsCallbackProxy*      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
