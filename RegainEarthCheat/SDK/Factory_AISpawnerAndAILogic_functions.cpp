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

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.NextWaveRoundIsStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::NextWaveRoundIsStarted(int RoundNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.NextWaveRoundIsStarted");

	AFactory_AISpawnerAndAILogic_C_NextWaveRoundIsStarted_Params params;
	params.RoundNumber = RoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CheckIfOnePlayerHasTargetOnSight
// (BlueprintCallable, BlueprintEvent)
void AFactory_AISpawnerAndAILogic_C::CheckIfOnePlayerHasTargetOnSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CheckIfOnePlayerHasTargetOnSight");

	AFactory_AISpawnerAndAILogic_C_CheckIfOnePlayerHasTargetOnSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.SetTimerCheckIfOnePlayerHasTargetOnSight
// (BlueprintCallable, BlueprintEvent)
void AFactory_AISpawnerAndAILogic_C::SetTimerCheckIfOnePlayerHasTargetOnSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.SetTimerCheckIfOnePlayerHasTargetOnSight");

	AFactory_AISpawnerAndAILogic_C_SetTimerCheckIfOnePlayerHasTargetOnSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.TriggerFoundOnePlayerHasTargetOnSight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpawnMarker_C*       SpawnMarker                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::TriggerFoundOnePlayerHasTargetOnSight(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* SpawnMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.TriggerFoundOnePlayerHasTargetOnSight");

	AFactory_AISpawnerAndAILogic_C_TriggerFoundOnePlayerHasTargetOnSight_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.SpawnMarker = SpawnMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.FoundOnePawnWithTargetInSight_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpawnMarker_C*       TargetSpawnMarker              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::FoundOnePawnWithTargetInSight_Event(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.FoundOnePawnWithTargetInSight_Event");

	AFactory_AISpawnerAndAILogic_C_FoundOnePawnWithTargetInSight_Event_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.TargetSpawnMarker = TargetSpawnMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpawnMarker_C*       TargetSpawnMarker              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::CustomEvent(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CustomEvent");

	AFactory_AISpawnerAndAILogic_C_CustomEvent_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.TargetSpawnMarker = TargetSpawnMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpawnMarker_C*       TargetSpawnMarker              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::CustomEvent_2(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CustomEvent_2");

	AFactory_AISpawnerAndAILogic_C_CustomEvent_2_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.TargetSpawnMarker = TargetSpawnMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFactory_AISpawnerAndAILogic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.ReceiveBeginPlay");

	AFactory_AISpawnerAndAILogic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.ExecuteUbergraph_Factory_AISpawnerAndAILogic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::ExecuteUbergraph_Factory_AISpawnerAndAILogic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.ExecuteUbergraph_Factory_AISpawnerAndAILogic");

	AFactory_AISpawnerAndAILogic_C_ExecuteUbergraph_Factory_AISpawnerAndAILogic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.DispatcherFoundOnePawnWithTargetInSight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpawnMarker_C*       TargetSpawnMarker              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFactory_AISpawnerAndAILogic_C::DispatcherFoundOnePawnWithTargetInSight__DelegateSignature(const struct FVector& Location, const struct FRotator& Rotation, class ABP_SpawnMarker_C* TargetSpawnMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.DispatcherFoundOnePawnWithTargetInSight__DelegateSignature");

	AFactory_AISpawnerAndAILogic_C_DispatcherFoundOnePawnWithTargetInSight__DelegateSignature_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.TargetSpawnMarker = TargetSpawnMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
