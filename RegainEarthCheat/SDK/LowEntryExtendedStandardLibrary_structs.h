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

// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class LowEntryExtendedStandardLibrary_ELowEntryBatteryState : uint8_t
{
	ELowEntryBatteryState__Charging = 0,
	ELowEntryBatteryState__Discharging = 1,
	ELowEntryBatteryState__Full    = 2,
	ELowEntryBatteryState__NotCharging = 3,
	ELowEntryBatteryState__Unknown = 4,
	ELowEntryBatteryState__ELowEntryBatteryState_MAX = 5,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 : uint8_t
{
	ELowEntryExtendedStandardLibrary0to9___0_ = 0,
	ELowEntryExtendedStandardLibrary0to9___1_ = 1,
	ELowEntryExtendedStandardLibrary0to9___2_ = 2,
	ELowEntryExtendedStandardLibrary0to9___3_ = 3,
	ELowEntryExtendedStandardLibrary0to9___4_ = 4,
	ELowEntryExtendedStandardLibrary0to9___5_ = 5,
	ELowEntryExtendedStandardLibrary0to9___6_ = 6,
	ELowEntryExtendedStandardLibrary0to9___7_ = 7,
	ELowEntryExtendedStandardLibrary0to9___8_ = 8,
	ELowEntryExtendedStandardLibrary0to9___9_ = 9,
	ELowEntryExtendedStandardLibrary0to9___MAX = 10,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other : uint8_t
{
	ELowEntryExtendedStandardLibrary1to10other___1_ = 0,
	ELowEntryExtendedStandardLibrary1to10other___2_ = 1,
	ELowEntryExtendedStandardLibrary1to10other___3_ = 2,
	ELowEntryExtendedStandardLibrary1to10other___4_ = 3,
	ELowEntryExtendedStandardLibrary1to10other___5_ = 4,
	ELowEntryExtendedStandardLibrary1to10other___6_ = 5,
	ELowEntryExtendedStandardLibrary1to10other___7_ = 6,
	ELowEntryExtendedStandardLibrary1to10other___8_ = 7,
	ELowEntryExtendedStandardLibrary1to10other___9_ = 8,
	ELowEntryExtendedStandardLibrary1to10other___10_ = 9,
	ELowEntryExtendedStandardLibrary1to10other__Other = 10,
	ELowEntryExtendedStandardLibrary1to10other__ELowEntryExtendedStandardLibrary1to10other_MAX = 11,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse : uint8_t
{
	ELowEntryExtendedStandardLibraryTrueOrFalse___True_ = 0,
	ELowEntryExtendedStandardLibraryTrueOrFalse___False_ = 1,
	ELowEntryExtendedStandardLibraryTrueOrFalse___MAX = 2,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm : uint8_t
{
	ELowEntryHmacAlgorithm__MD5    = 0,
	ELowEntryHmacAlgorithm__SHA1   = 1,
	ELowEntryHmacAlgorithm__SHA256 = 2,
	ELowEntryHmacAlgorithm__SHA512 = 3,
	ELowEntryHmacAlgorithm__ELowEntryHmacAlgorithm_MAX = 4,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class LowEntryExtendedStandardLibrary_ELowEntryImageFormat : uint8_t
{
	ELowEntryImageFormat__Invalid  = 0,
	ELowEntryImageFormat__PNG      = 1,
	ELowEntryImageFormat__JPEG     = 2,
	ELowEntryImageFormat__GrayscaleJPEG = 3,
	ELowEntryImageFormat__BMP      = 4,
	ELowEntryImageFormat__ICO      = 5,
	ELowEntryImageFormat__EXR      = 6,
	ELowEntryImageFormat__ICNS     = 7,
	ELowEntryImageFormat__ELowEntryImageFormat_MAX = 8,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class LowEntryExtendedStandardLibrary_ELowEntryRGBFormat : uint8_t
{
	ELowEntryRGBFormat__Invalid    = 0,
	ELowEntryRGBFormat__RGBA       = 1,
	ELowEntryRGBFormat__BGRA       = 2,
	ELowEntryRGBFormat__Gray       = 3,
	ELowEntryRGBFormat__ELowEntryRGBFormat_MAX = 4,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType : uint8_t
{
	ELowEntrySplitScreenType__None = 0,
	ELowEntrySplitScreenType__TwoPlayer_Horizontal = 1,
	ELowEntrySplitScreenType__TwoPlayer_Vertical = 2,
	ELowEntrySplitScreenType__ThreePlayer_FavorTop = 3,
	ELowEntrySplitScreenType__ThreePlayer_FavorBottom = 4,
	ELowEntrySplitScreenType__ThreePlayer_Vertical = 5,
	ELowEntrySplitScreenType__FourPlayer_Grid = 6,
	ELowEntrySplitScreenType__FourPlayer_Vertical = 7,
	ELowEntrySplitScreenType__ELowEntrySplitScreenType_MAX = 8,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers : uint8_t
{
	ELowEntrySplitScreenTypeThreePlayers__FavorTop = 0,
	ELowEntrySplitScreenTypeThreePlayers__FavorBottom = 1,
	ELowEntrySplitScreenTypeThreePlayers__ELowEntrySplitScreenTypeThreePlayers_MAX = 2,

};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers : uint8_t
{
	ELowEntrySplitScreenTypeTwoPlayers__Horizontal = 0,
	ELowEntrySplitScreenTypeTwoPlayers__Vertical = 1,
	ELowEntrySplitScreenTypeTwoPlayers__ELowEntrySplitScreenTypeTwoPlayers_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexCaptureGroup
// 0x0020
struct FLowEntryRegexCaptureGroup
{
	int                                                CaptureGroupNumber;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BeginIndex;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndIndex;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JL6O[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Match;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexMatch
// 0x0030
struct FLowEntryRegexMatch
{
	int                                                MatchNumber;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BeginIndex;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndIndex;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J24B[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Match;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLowEntryRegexCaptureGroup>          CaptureGroups;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
