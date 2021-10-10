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
// Enums
//---------------------------------------------------------------------------

// Enum AdvancedSteamSessions.FBPWorkshopFileType
enum class AdvancedSteamSessions_EFBPWorkshopFileType : uint8_t
{
	FBPWorkshopFileType__k_EWorkshopFileTypeCommunity = 0,
	FBPWorkshopFileType__k_EWorkshopFileTypeMicrotransaction = 1,
	FBPWorkshopFileType__k_EWorkshopFileTypeCollection = 2,
	FBPWorkshopFileType__k_EWorkshopFileTypeArt = 3,
	FBPWorkshopFileType__k_EWorkshopFileTypeVideo = 4,
	FBPWorkshopFileType__k_EWorkshopFileTypeScreenshot = 5,
	FBPWorkshopFileType__k_EWorkshopFileTypeGame = 6,
	FBPWorkshopFileType__k_EWorkshopFileTypeSoftware = 7,
	FBPWorkshopFileType__k_EWorkshopFileTypeConcept = 8,
	FBPWorkshopFileType__k_EWorkshopFileTypeWebGuide = 9,
	FBPWorkshopFileType__k_EWorkshopFileTypeIntegratedGuide = 10,
	FBPWorkshopFileType__k_EWorkshopFileTypeMerch = 11,
	FBPWorkshopFileType__k_EWorkshopFileTypeControllerBinding = 12,
	FBPWorkshopFileType__k_EWorkshopFileTypeSteamworksAccessInvite = 13,
	FBPWorkshopFileType__k_EWorkshopFileTypeSteamVideo = 14,
	FBPWorkshopFileType__k_EWorkshopFileTypeMax = 15,
	FBPWorkshopFileType__k_MAX     = 16,

};

// Enum AdvancedSteamSessions.FBPSteamResult
enum class AdvancedSteamSessions_EFBPSteamResult : uint8_t
{
	FBPSteamResult__K_EResultInvalid = 0,
	FBPSteamResult__k_EResultOK    = 1,
	FBPSteamResult__k_EResultFail  = 2,
	FBPSteamResult__k_EResultNoConnection = 3,
	FBPSteamResult__k_EResultInvalidPassword = 4,
	FBPSteamResult__k_EResultLoggedInElsewhere = 5,
	FBPSteamResult__k_EResultInvalidProtocolVer = 6,
	FBPSteamResult__k_EResultInvalidParam = 7,
	FBPSteamResult__k_EResultFileNotFound = 8,
	FBPSteamResult__k_EResultBusy  = 9,
	FBPSteamResult__k_EResultInvalidState = 10,
	FBPSteamResult__k_EResultInvalidName = 11,
	FBPSteamResult__k_EResultInvalidEmail = 12,
	FBPSteamResult__k_EResultDuplicateName = 13,
	FBPSteamResult__k_EResultAccessDenied = 14,
	FBPSteamResult__k_EResultTimeout = 15,
	FBPSteamResult__k_EResultBanned = 16,
	FBPSteamResult__k_EResultAccountNotFound = 17,
	FBPSteamResult__k_EResultInvalidSteamID = 18,
	FBPSteamResult__k_EResultServiceUnavailable = 19,
	FBPSteamResult__k_EResultNotLoggedOn = 20,
	FBPSteamResult__k_EResultPending = 21,
	FBPSteamResult__k_EResultEncryptionFailure = 22,
	FBPSteamResult__k_EResultInsufficientPrivilege = 23,
	FBPSteamResult__k_EResultLimitExceeded = 24,
	FBPSteamResult__k_EResultRevoked = 25,
	FBPSteamResult__k_EResultExpired = 26,
	FBPSteamResult__k_EResultAlreadyRedeemed = 27,
	FBPSteamResult__k_EResultDuplicateRequest = 28,
	FBPSteamResult__k_EResultAlreadyOwned = 29,
	FBPSteamResult__k_EResultIPNotFound = 30,
	FBPSteamResult__k_EResultPersistFailed = 31,
	FBPSteamResult__k_EResultLockingFailed = 32,
	FBPSteamResult__k_EResultLogonSessionReplaced = 33,
	FBPSteamResult__k_EResultConnectFailed = 34,
	FBPSteamResult__k_EResultHandshakeFailed = 35,
	FBPSteamResult__k_EResultIOFailure = 36,
	FBPSteamResult__k_EResultRemoteDisconnect = 37,
	FBPSteamResult__k_EResultShoppingCartNotFound = 38,
	FBPSteamResult__k_EResultBlocked = 39,
	FBPSteamResult__k_EResultIgnored = 40,
	FBPSteamResult__k_EResultNoMatch = 41,
	FBPSteamResult__k_EResultAccountDisabled = 42,
	FBPSteamResult__k_EResultServiceReadOnly = 43,
	FBPSteamResult__k_EResultAccountNotFeatured = 44,
	FBPSteamResult__k_EResultAdministratorOK = 45,
	FBPSteamResult__k_EResultContentVersion = 46,
	FBPSteamResult__k_EResultTryAnotherCM = 47,
	FBPSteamResult__k_EResultPasswordRequiredToKickSession = 48,
	FBPSteamResult__k_EResultAlreadyLoggedInElsewhere = 49,
	FBPSteamResult__k_EResultSuspended = 50,
	FBPSteamResult__k_EResultCancelled = 51,
	FBPSteamResult__k_EResultDataCorruption = 52,
	FBPSteamResult__k_EResultDiskFull = 53,
	FBPSteamResult__k_EResultRemoteCallFailed = 54,
	FBPSteamResult__k_EResultPasswordUnset = 55,
	FBPSteamResult__k_EResultExternalAccountUnlinked = 56,
	FBPSteamResult__k_EResultPSNTicketInvalid = 57,
	FBPSteamResult__k_EResultExternalAccountAlreadyLinked = 58,
	FBPSteamResult__k_EResultRemoteFileConflict = 59,
	FBPSteamResult__k_EResultIllegalPassword = 60,
	FBPSteamResult__k_EResultSameAsPreviousValue = 61,
	FBPSteamResult__k_EResultAccountLogonDenied = 62,
	FBPSteamResult__k_EResultCannotUseOldPassword = 63,
	FBPSteamResult__k_EResultInvalidLoginAuthCode = 64,
	FBPSteamResult__k_EResultAccountLogonDeniedNoMail = 65,
	FBPSteamResult__k_EResultHardwareNotCapableOfIPT = 66,
	FBPSteamResult__k_EResultIPTInitError = 67,
	FBPSteamResult__k_EResultParentalControlRestricted = 68,
	FBPSteamResult__k_EResultFacebookQueryError = 69,
	FBPSteamResult__k_EResultExpiredLoginAuthCode = 70,
	FBPSteamResult__k_EResultIPLoginRestrictionFailed = 71,
	FBPSteamResult__k_EResultAccountLockedDown = 72,
	FBPSteamResult__k_EResultAccountLogonDeniedVerifiedEmailRequired = 73,
	FBPSteamResult__k_EResultNoMatchingURL = 74,
	FBPSteamResult__k_EResultBadResponse = 75,
	FBPSteamResult__k_EResultRequirePasswordReEntry = 76,
	FBPSteamResult__k_EResultValueOutOfRange = 77,
	FBPSteamResult__k_EResultUnexpectedError = 78,
	FBPSteamResult__k_EResultDisabled = 79,
	FBPSteamResult__k_EResultInvalidCEGSubmission = 80,
	FBPSteamResult__k_EResultRestrictedDevice = 81,
	FBPSteamResult__k_EResultRegionLocked = 82,
	FBPSteamResult__k_EResultRateLimitExceeded = 83,
	FBPSteamResult__k_EResultAccountLoginDeniedNeedTwoFactor = 84,
	FBPSteamResult__k_EResultItemDeleted = 85,
	FBPSteamResult__k_EResultAccountLoginDeniedThrottle = 86,
	FBPSteamResult__k_EResultTwoFactorCodeMismatch = 87,
	FBPSteamResult__k_EResultTwoFactorActivationCodeMismatch = 88,
	FBPSteamResult__k_EResultAccountAssociatedToMultiplePartners = 89,
	FBPSteamResult__k_EResultNotModified = 90,
	FBPSteamResult__FBPSteamResult_MAX = 91,

};

// Enum AdvancedSteamSessions.ESteamUserOverlayType
enum class AdvancedSteamSessions_ESteamUserOverlayType : uint8_t
{
	ESteamUserOverlayType__steamid = 0,
	ESteamUserOverlayType__chat    = 1,
	ESteamUserOverlayType__jointrade = 2,
	ESteamUserOverlayType__stats   = 3,
	ESteamUserOverlayType__achievements = 4,
	ESteamUserOverlayType__friendadd = 5,
	ESteamUserOverlayType__friendremove = 6,
	ESteamUserOverlayType__friendrequestaccept = 7,
	ESteamUserOverlayType__friendrequestignore = 8,
	ESteamUserOverlayType__ESteamUserOverlayType_MAX = 9,

};

// Enum AdvancedSteamSessions.SteamAvatarSize
enum class AdvancedSteamSessions_ESteamAvatarSize : uint8_t
{
	SteamAvatarSize__SteamAvatar_INVALID = 0,
	SteamAvatarSize__SteamAvatar_Small = 1,
	SteamAvatarSize__SteamAvatar_Medium = 2,
	SteamAvatarSize__SteamAvatar_Large = 3,
	SteamAvatarSize__SteamAvatar_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
// 0x0028
struct FBPSteamGroupOfficer
{
	struct FBPUniqueNetId                              OfficerUniqueNetID;                                        // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsOwner;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BWO[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
// 0x0060
struct FBPSteamWorkshopItemDetails
{
	AdvancedSteamSessions_EFBPSteamResult              ResultOfRequest;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedSteamSessions_EFBPWorkshopFileType         FileType;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HM76[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CreatorAppID;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConsumerAppID;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DUWH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Title;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemUrl;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VotesUp;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VotesDown;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CalculatedScore;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBanned;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptedForUse;                                           // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTagsTruncated;                                            // 0x004E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TV4W[0x1];                                     // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CreatorSteamID;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
// 0x0050
struct FBPSteamGroupInfo
{
	struct FBPUniqueNetId                              GroupID;                                                   // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupTag;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numOnline;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numInGame;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numChatting;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8X8I[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
// 0x0008
struct FBPSteamWorkshopID
{
	unsigned char                                      UnknownData_FB0C[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
