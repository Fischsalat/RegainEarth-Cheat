﻿#pragma once

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

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus__EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,

};

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class MagicLeapEyeTracker_EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected = 0,
	EMagicLeapEyeTrackingStatus__Disabled = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent = 2,
	EMagicLeapEyeTrackingStatus__UserPresent = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus__EMagicLeapEyeTrackingStatus_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// 0x0002
struct FMagicLeapEyeBlinkState
{
	bool                                               LeftEyeBlinked;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RightEyeBlinked;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
