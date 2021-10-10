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

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.NextWaveRoundIsStarted
struct AFactory_AISpawnerAndAILogic_C_NextWaveRoundIsStarted_Params
{
	int                                                RoundNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CheckIfOnePlayerHasTargetOnSight
struct AFactory_AISpawnerAndAILogic_C_CheckIfOnePlayerHasTargetOnSight_Params
{
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.SetTimerCheckIfOnePlayerHasTargetOnSight
struct AFactory_AISpawnerAndAILogic_C_SetTimerCheckIfOnePlayerHasTargetOnSight_Params
{
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.TriggerFoundOnePlayerHasTargetOnSight
struct AFactory_AISpawnerAndAILogic_C_TriggerFoundOnePlayerHasTargetOnSight_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_SpawnMarker_C*                           SpawnMarker;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.FoundOnePawnWithTargetInSight_Event
struct AFactory_AISpawnerAndAILogic_C_FoundOnePawnWithTargetInSight_Event_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_SpawnMarker_C*                           TargetSpawnMarker;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CustomEvent
struct AFactory_AISpawnerAndAILogic_C_CustomEvent_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_SpawnMarker_C*                           TargetSpawnMarker;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.CustomEvent_2
struct AFactory_AISpawnerAndAILogic_C_CustomEvent_2_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_SpawnMarker_C*                           TargetSpawnMarker;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.ReceiveBeginPlay
struct AFactory_AISpawnerAndAILogic_C_ReceiveBeginPlay_Params
{
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.ExecuteUbergraph_Factory_AISpawnerAndAILogic
struct AFactory_AISpawnerAndAILogic_C_ExecuteUbergraph_Factory_AISpawnerAndAILogic_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Factory_AISpawnerAndAILogic.Factory_AISpawnerAndAILogic_C.DispatcherFoundOnePawnWithTargetInSight__DelegateSignature
struct AFactory_AISpawnerAndAILogic_C_DispatcherFoundOnePawnWithTargetInSight__DelegateSignature_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_SpawnMarker_C*                           TargetSpawnMarker;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
