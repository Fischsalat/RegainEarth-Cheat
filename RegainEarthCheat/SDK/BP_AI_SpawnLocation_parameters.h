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

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.FillAllPlayersArrayWithActualPlayers
struct ABP_AI_SpawnLocation_C_FillAllPlayersArrayWithActualPlayers_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Do Spawn Enemies Preparations
struct ABP_AI_SpawnLocation_C_Do_Spawn_Enemies_Preparations_Params
{
	bool                                               NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.OutsideOfDespawnZone
struct ABP_AI_SpawnLocation_C_OutsideOfDespawnZone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ReEnableOrDisableSpawnCheck
struct ABP_AI_SpawnLocation_C_ReEnableOrDisableSpawnCheck_Params
{
	bool                                               NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Remove 1 Amount Spawn Struct
struct ABP_AI_SpawnLocation_C_Remove_1_Amount_Spawn_Struct_Params
{
	class APawn*                                       InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckDespawn
struct ABP_AI_SpawnLocation_C_CheckDespawn_Params
{
	bool                                               ResetDespawn_;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CalculateGroupSpawnNumbers
struct ABP_AI_SpawnLocation_C_CalculateGroupSpawnNumbers_Params
{
	struct FST_Spawn_AI                                ST_Spawn_AI;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                Groups_to_Spawn;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Remaining;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CalculateAmountToSpawn
struct ABP_AI_SpawnLocation_C_CalculateAmountToSpawn_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.GetDistanceToPlayer
struct ABP_AI_SpawnLocation_C_GetDistanceToPlayer_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SetVariables
struct ABP_AI_SpawnLocation_C_SetVariables_Params
{
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Path_Points_C*                           PathReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Zombie__Enemy_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Spawn_AI_character
struct ABP_AI_SpawnLocation_C_Spawn_AI_character_Params
{
	struct FST_Spawn_AI                                ST_Spawn_AI;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckIfSpawnIsStillRelevant
struct ABP_AI_SpawnLocation_C_CheckIfSpawnIsStillRelevant_Params
{
	int                                                NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.DeleteVisualizers
struct ABP_AI_SpawnLocation_C_DeleteVisualizers_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.RandomPointInRadius
struct ABP_AI_SpawnLocation_C_RandomPointInRadius_Params
{
	class UClass*                                      PawnClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RandomLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Return_Value_Z__Yaw_;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundASpot_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.UserConstructionScript
struct ABP_AI_SpawnLocation_C_UserConstructionScript_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ReceiveBeginPlay
struct ABP_AI_SpawnLocation_C_ReceiveBeginPlay_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Spawn_AI_PrepareAndStartSpawnLoop
struct ABP_AI_SpawnLocation_C_Spawn_AI_PrepareAndStartSpawnLoop_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.Despawn_AI
struct ABP_AI_SpawnLocation_C_Despawn_AI_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SpawnBigGroups
struct ABP_AI_SpawnLocation_C_SpawnBigGroups_Params
{
	struct FST_Spawn_AI                                ST_Spawn_AI;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.SpawnCheckServer
struct ABP_AI_SpawnLocation_C_SpawnCheckServer_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.StartSpawnCheckLogic
struct ABP_AI_SpawnLocation_C_StartSpawnCheckLogic_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.CheckIfAiIsStillHunting
struct ABP_AI_SpawnLocation_C_CheckIfAiIsStillHunting_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ChasingAIDespawn
struct ABP_AI_SpawnLocation_C_ChasingAIDespawn_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ResetSpawnPointInternalBPReasons
struct ABP_AI_SpawnLocation_C_ResetSpawnPointInternalBPReasons_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ServerResetDespaw
struct ABP_AI_SpawnLocation_C_ServerResetDespaw_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.StartRespawnEnemies
struct ABP_AI_SpawnLocation_C_StartRespawnEnemies_Params
{
	int                                                EnemyLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ServerResetRespawn
struct ABP_AI_SpawnLocation_C_ServerResetRespawn_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.AISpawnsOfOneStructIsFinished_ExecuteNext
struct ABP_AI_SpawnLocation_C_AISpawnsOfOneStructIsFinished_ExecuteNext_Params
{
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.ExecuteUbergraph_BP_AI_SpawnLocation
struct ABP_AI_SpawnLocation_C_ExecuteUbergraph_BP_AI_SpawnLocation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AI_SpawnLocation.BP_AI_SpawnLocation_C.AISpawnsOfOneStructIsFinished__DelegateSignature
struct ABP_AI_SpawnLocation_C_AISpawnsOfOneStructIsFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
