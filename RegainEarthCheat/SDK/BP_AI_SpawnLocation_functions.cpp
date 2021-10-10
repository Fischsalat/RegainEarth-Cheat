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

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.FillAllPlayersArrayWithActualPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::FillAllPlayersArrayWithActualPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.FillAllPlayersArrayWithActualPlayers");

	ABP_AI_SpawnLocation_C_FillAllPlayersArrayWithActualPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Do Spawn Enemies Preparations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AI_SpawnLocation_C::Do_Spawn_Enemies_Preparations(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Do Spawn Enemies Preparations");

	ABP_AI_SpawnLocation_C_Do_Spawn_Enemies_Preparations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.OutsideOfDespawnZone
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AI_SpawnLocation_C::OutsideOfDespawnZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.OutsideOfDespawnZone");

	ABP_AI_SpawnLocation_C_OutsideOfDespawnZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ReEnableOrDisableSpawnCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AI_SpawnLocation_C::ReEnableOrDisableSpawnCheck(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ReEnableOrDisableSpawnCheck");

	ABP_AI_SpawnLocation_C_ReEnableOrDisableSpawnCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Remove 1 Amount Spawn Struct
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::Remove_1_Amount_Spawn_Struct(class APawn* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Remove 1 Amount Spawn Struct");

	ABP_AI_SpawnLocation_C_Remove_1_Amount_Spawn_Struct_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckDespawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResetDespawn_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AI_SpawnLocation_C::CheckDespawn(bool* ResetDespawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckDespawn");

	ABP_AI_SpawnLocation_C_CheckDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResetDespawn_ != nullptr)
		*ResetDespawn_ = params.ResetDespawn_;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CalculateGroupSpawnNumbers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_Spawn_AI            ST_Spawn_AI                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int                            Groups_to_Spawn                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Remaining                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::CalculateGroupSpawnNumbers(struct FST_Spawn_AI* ST_Spawn_AI, int* Groups_to_Spawn, int* Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CalculateGroupSpawnNumbers");

	ABP_AI_SpawnLocation_C_CalculateGroupSpawnNumbers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ST_Spawn_AI != nullptr)
		*ST_Spawn_AI = params.ST_Spawn_AI;
	if (Groups_to_Spawn != nullptr)
		*Groups_to_Spawn = params.Groups_to_Spawn;
	if (Remaining != nullptr)
		*Remaining = params.Remaining;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CalculateAmountToSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::CalculateAmountToSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CalculateAmountToSpawn");

	ABP_AI_SpawnLocation_C_CalculateAmountToSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.GetDistanceToPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_AI_SpawnLocation_C::GetDistanceToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.GetDistanceToPlayer");

	ABP_AI_SpawnLocation_C_GetDistanceToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SetVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Path_Points_C*       PathReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Zombie__Enemy_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AI_SpawnLocation_C::SetVariables(class UObject* Object, class ABP_Path_Points_C* PathReference, bool Zombie__Enemy_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SetVariables");

	ABP_AI_SpawnLocation_C_SetVariables_Params params;
	params.Object = Object;
	params.PathReference = PathReference;
	params.Zombie__Enemy_ = Zombie__Enemy_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Spawn_AI_character
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Spawn_AI            ST_Spawn_AI                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::Spawn_AI_character(struct FST_Spawn_AI* ST_Spawn_AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Spawn_AI_character");

	ABP_AI_SpawnLocation_C_Spawn_AI_character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ST_Spawn_AI != nullptr)
		*ST_Spawn_AI = params.ST_Spawn_AI;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckIfSpawnIsStillRelevant
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::CheckIfSpawnIsStillRelevant(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckIfSpawnIsStillRelevant");

	ABP_AI_SpawnLocation_C_CheckIfSpawnIsStillRelevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.DeleteVisualizers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::DeleteVisualizers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.DeleteVisualizers");

	ABP_AI_SpawnLocation_C_DeleteVisualizers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.RandomPointInRadius
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PawnClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Return_Value_Z__Yaw_           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FoundASpot_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AI_SpawnLocation_C::RandomPointInRadius(class UClass* PawnClass, struct FVector* RandomLocation, float* Return_Value_Z__Yaw_, bool* FoundASpot_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.RandomPointInRadius");

	ABP_AI_SpawnLocation_C_RandomPointInRadius_Params params;
	params.PawnClass = PawnClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;
	if (Return_Value_Z__Yaw_ != nullptr)
		*Return_Value_Z__Yaw_ = params.Return_Value_Z__Yaw_;
	if (FoundASpot_ != nullptr)
		*FoundASpot_ = params.FoundASpot_;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.UserConstructionScript");

	ABP_AI_SpawnLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AI_SpawnLocation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ReceiveBeginPlay");

	ABP_AI_SpawnLocation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Spawn_AI_PrepareAndStartSpawnLoop
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::Spawn_AI_PrepareAndStartSpawnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Spawn_AI_PrepareAndStartSpawnLoop");

	ABP_AI_SpawnLocation_C_Spawn_AI_PrepareAndStartSpawnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Despawn_AI
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::Despawn_AI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Despawn_AI");

	ABP_AI_SpawnLocation_C_Despawn_AI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SpawnBigGroups
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Spawn_AI            ST_Spawn_AI                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::SpawnBigGroups(const struct FST_Spawn_AI& ST_Spawn_AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SpawnBigGroups");

	ABP_AI_SpawnLocation_C_SpawnBigGroups_Params params;
	params.ST_Spawn_AI = ST_Spawn_AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SpawnCheckServer
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::SpawnCheckServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SpawnCheckServer");

	ABP_AI_SpawnLocation_C_SpawnCheckServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.StartSpawnCheckLogic
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::StartSpawnCheckLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.StartSpawnCheckLogic");

	ABP_AI_SpawnLocation_C_StartSpawnCheckLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckIfAiIsStillHunting
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::CheckIfAiIsStillHunting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckIfAiIsStillHunting");

	ABP_AI_SpawnLocation_C_CheckIfAiIsStillHunting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ChasingAIDespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::ChasingAIDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ChasingAIDespawn");

	ABP_AI_SpawnLocation_C_ChasingAIDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ResetSpawnPointInternalBPReasons
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::ResetSpawnPointInternalBPReasons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ResetSpawnPointInternalBPReasons");

	ABP_AI_SpawnLocation_C_ResetSpawnPointInternalBPReasons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ServerResetDespaw
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::ServerResetDespaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ServerResetDespaw");

	ABP_AI_SpawnLocation_C_ServerResetDespaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.StartRespawnEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EnemyLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::StartRespawnEnemies(int EnemyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.StartRespawnEnemies");

	ABP_AI_SpawnLocation_C_StartRespawnEnemies_Params params;
	params.EnemyLevel = EnemyLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ServerResetRespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::ServerResetRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ServerResetRespawn");

	ABP_AI_SpawnLocation_C_ServerResetRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.AISpawnsOfOneStructIsFinished_ExecuteNext
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::AISpawnsOfOneStructIsFinished_ExecuteNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.AISpawnsOfOneStructIsFinished_ExecuteNext");

	ABP_AI_SpawnLocation_C_AISpawnsOfOneStructIsFinished_ExecuteNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ExecuteUbergraph_BP_AI_SpawnLocation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_SpawnLocation_C::ExecuteUbergraph_BP_AI_SpawnLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ExecuteUbergraph_BP_AI_SpawnLocation");

	ABP_AI_SpawnLocation_C_ExecuteUbergraph_BP_AI_SpawnLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.AISpawnsOfOneStructIsFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_AI_SpawnLocation_C::AISpawnsOfOneStructIsFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.AISpawnsOfOneStructIsFinished__DelegateSignature");

	ABP_AI_SpawnLocation_C_AISpawnsOfOneStructIsFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
