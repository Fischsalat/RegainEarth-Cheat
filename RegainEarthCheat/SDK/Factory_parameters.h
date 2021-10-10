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

// Function Factory.Factory_C.GetFirst2digitsAsNumber
struct AFactory_C_GetFirst2digitsAsNumber_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory.Factory_C.SortCamArrayByName
struct AFactory_C_SortCamArrayByName_Params
{
	TArray<class ACameraActor*>                        PerfCams;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ACameraActor*>                        SortedArray;                                               // (Parm, OutParm)
};

// Function Factory.Factory_C.SortPlayerStartArrayByName
struct AFactory_C_SortPlayerStartArrayByName_Params
{
	TArray<class APlayerStart*>                        PerfCams;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class APlayerStart*>                        SortedArray;                                               // (Parm, OutParm)
};

// Function Factory.Factory_C.OnRep_GameStarted
struct AFactory_C_OnRep_GameStarted_Params
{
};

// Function Factory.Factory_C.PerfTest
struct AFactory_C_PerfTest_Params
{
};

// Function Factory.Factory_C.Server_PerfTest
struct AFactory_C_Server_PerfTest_Params
{
};

// Function Factory.Factory_C.PrepareAndStartPerfCamTests
struct AFactory_C_PrepareAndStartPerfCamTests_Params
{
	TArray<class ACameraActor*>                        Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     TestName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Factory.Factory_C.PerfTestFinished_Event1
struct AFactory_C_PerfTestFinished_Event1_Params
{
};

// Function Factory.Factory_C.DrivePawn
struct AFactory_C_DrivePawn_Params
{
};

// Function Factory.Factory_C.PlayerCharacterFinishedBeginPlay_Event_1
struct AFactory_C_PlayerCharacterFinishedBeginPlay_Event_1_Params
{
};

// Function Factory.Factory_C.Multicast_LoadActorLevelAndContinoue
struct AFactory_C_Multicast_LoadActorLevelAndContinoue_Params
{
};

// Function Factory.Factory_C.Roundtrip
struct AFactory_C_Roundtrip_Params
{
};

// Function Factory.Factory_C.ReceiveBeginPlay
struct AFactory_C_ReceiveBeginPlay_Params
{
};

// Function Factory.Factory_C.ReceiveTick
struct AFactory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory.Factory_C.OnGameStarts_GStateReplicated_Event_1
struct AFactory_C_OnGameStarts_GStateReplicated_Event_1_Params
{
};

// Function Factory.Factory_C.OpenGateToStartShowFPSCount
struct AFactory_C_OpenGateToStartShowFPSCount_Params
{
};

// Function Factory.Factory_C.ResetFrameCounter
struct AFactory_C_ResetFrameCounter_Params
{
};

// Function Factory.Factory_C.sp
struct AFactory_C_sp_Params
{
};

// Function Factory.Factory_C.ExecuteUbergraph_Factory
struct AFactory_C_ExecuteUbergraph_Factory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory.Factory_C.PerfTestFinished__DelegateSignature
struct AFactory_C_PerfTestFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
