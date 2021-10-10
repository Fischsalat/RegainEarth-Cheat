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

// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary");
		return ptr;
	}



	bool STATIC_RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);
	bool STATIC_OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, AdvancedSteamSessions_ESteamUserOverlayType DialogType);
	struct FString STATIC_GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
	void STATIC_GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
	void STATIC_GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintResultSwitch* Result, int* AppID);
	class UTexture2D* STATIC_GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, AdvancedSessions_EBlueprintAsyncResultSwitch* Result, AdvancedSteamSessions_ESteamAvatarSize AvatarSize);
	struct FBPUniqueNetId STATIC_GetLocalSteamIDFromSteam();
	int STATIC_GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
	struct FBPUniqueNetId STATIC_CreateSteamIDFromString(const struct FString& SteamID64);
};

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary");
		return ptr;
	}



	TArray<struct FBPSteamWorkshopID> STATIC_GetSubscribedWorkshopItems(int* NumberOfItems);
	void STATIC_GetNumSubscribedWorkshopItems(int* NumberOfItems);
};

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LV80[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy");
		return ptr;
	}



	class USteamRequestGroupOfficersCallbackProxy* STATIC_GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);
};

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2VOD[0x38];                                    // 0x0050(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy");
		return ptr;
	}



	class USteamWSRequestUGCDetailsCallbackProxy* STATIC_GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
