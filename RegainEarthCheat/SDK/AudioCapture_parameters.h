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
// Parameters
//---------------------------------------------------------------------------

// Function AudioCapture.AudioCapture.StopCapturingAudio
struct UAudioCapture_StopCapturingAudio_Params
{
};

// Function AudioCapture.AudioCapture.StartCapturingAudio
struct UAudioCapture_StartCapturingAudio_Params
{
};

// Function AudioCapture.AudioCapture.IsCapturingAudio
struct UAudioCapture_IsCapturingAudio_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
{
	struct FAudioCaptureDeviceInfo                     OutInfo;                                                   // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
{
	class UAudioCapture*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
