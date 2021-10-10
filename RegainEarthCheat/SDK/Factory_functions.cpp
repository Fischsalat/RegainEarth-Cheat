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

// Function Factory.Factory_C.GetFirst2digitsAsNumber
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_C::GetFirst2digitsAsNumber(const struct FString& String, int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.GetFirst2digitsAsNumber");

	AFactory_C_GetFirst2digitsAsNumber_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function Factory.Factory_C.SortCamArrayByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACameraActor*>    PerfCams                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ACameraActor*>    SortedArray                    (Parm, OutParm)
void AFactory_C::SortCamArrayByName(TArray<class ACameraActor*>* PerfCams, TArray<class ACameraActor*>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.SortCamArrayByName");

	AFactory_C_SortCamArrayByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerfCams != nullptr)
		*PerfCams = params.PerfCams;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;

}


// Function Factory.Factory_C.SortPlayerStartArrayByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerStart*>    PerfCams                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class APlayerStart*>    SortedArray                    (Parm, OutParm)
void AFactory_C::SortPlayerStartArrayByName(TArray<class APlayerStart*>* PerfCams, TArray<class APlayerStart*>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.SortPlayerStartArrayByName");

	AFactory_C_SortPlayerStartArrayByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerfCams != nullptr)
		*PerfCams = params.PerfCams;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;

}


// Function Factory.Factory_C.OnRep_GameStarted
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::OnRep_GameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.OnRep_GameStarted");

	AFactory_C_OnRep_GameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.PerfTest
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::PerfTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.PerfTest");

	AFactory_C_PerfTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.Server_PerfTest
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AFactory_C::Server_PerfTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.Server_PerfTest");

	AFactory_C_Server_PerfTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.PrepareAndStartPerfCamTests
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACameraActor*>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 TestName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AFactory_C::PrepareAndStartPerfCamTests(TArray<class ACameraActor*>* Array, const struct FString& TestName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.PrepareAndStartPerfCamTests");

	AFactory_C_PrepareAndStartPerfCamTests_Params params;
	params.TestName = TestName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function Factory.Factory_C.PerfTestFinished_Event1
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::PerfTestFinished_Event1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.PerfTestFinished_Event1");

	AFactory_C_PerfTestFinished_Event1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.DrivePawn
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::DrivePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.DrivePawn");

	AFactory_C_DrivePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.PlayerCharacterFinishedBeginPlay_Event_1
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::PlayerCharacterFinishedBeginPlay_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.PlayerCharacterFinishedBeginPlay_Event_1");

	AFactory_C_PlayerCharacterFinishedBeginPlay_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.Multicast_LoadActorLevelAndContinoue
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AFactory_C::Multicast_LoadActorLevelAndContinoue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.Multicast_LoadActorLevelAndContinoue");

	AFactory_C_Multicast_LoadActorLevelAndContinoue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.Roundtrip
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::Roundtrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.Roundtrip");

	AFactory_C_Roundtrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFactory_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.ReceiveBeginPlay");

	AFactory_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.ReceiveTick");

	AFactory_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.OnGameStarts_GStateReplicated_Event_1
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::OnGameStarts_GStateReplicated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.OnGameStarts_GStateReplicated_Event_1");

	AFactory_C_OnGameStarts_GStateReplicated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.OpenGateToStartShowFPSCount
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::OpenGateToStartShowFPSCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.OpenGateToStartShowFPSCount");

	AFactory_C_OpenGateToStartShowFPSCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.ResetFrameCounter
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::ResetFrameCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.ResetFrameCounter");

	AFactory_C_ResetFrameCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.sp
// (BlueprintCallable, BlueprintEvent)
void AFactory_C::sp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.sp");

	AFactory_C_sp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.ExecuteUbergraph_Factory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_C::ExecuteUbergraph_Factory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.ExecuteUbergraph_Factory");

	AFactory_C_ExecuteUbergraph_Factory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory.Factory_C.PerfTestFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AFactory_C::PerfTestFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory.Factory_C.PerfTestFinished__DelegateSignature");

	AFactory_C_PerfTestFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
