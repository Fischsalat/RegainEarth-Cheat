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

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.OnRep_SpawnedAI
struct ABP_SpecialAiSpawner_C_OnRep_SpawnedAI_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.TimelineMechWayDown__FinishedFunc
struct ABP_SpecialAiSpawner_C_TimelineMechWayDown__FinishedFunc_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.TimelineMechWayDown__UpdateFunc
struct ABP_SpecialAiSpawner_C_TimelineMechWayDown__UpdateFunc_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ParticleGrow__FinishedFunc
struct ABP_SpecialAiSpawner_C_ParticleGrow__FinishedFunc_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ParticleGrow__UpdateFunc
struct ABP_SpecialAiSpawner_C_ParticleGrow__UpdateFunc_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ReceiveBeginPlay
struct ABP_SpecialAiSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ReverseParticleScale
struct ABP_SpecialAiSpawner_C_ReverseParticleScale_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.SpawnMechAiFlyDownInShield
struct ABP_SpecialAiSpawner_C_SpawnMechAiFlyDownInShield_Params
{
	float                                              AttackDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Health;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Run_Speed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ActorSizeScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MissleRocketsUsable_;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RocketMissleDelayMin;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RocketMissleDelayMax;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AiBossClassToSpawn;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.FlyMechDownToSpawnPoint
struct ABP_SpecialAiSpawner_C_FlyMechDownToSpawnPoint_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.DestroyParticles
struct ABP_SpecialAiSpawner_C_DestroyParticles_Params
{
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.Multicast_SpawnMechAiFlyDownInShield
struct ABP_SpecialAiSpawner_C_Multicast_SpawnMechAiFlyDownInShield_Params
{
	float                                              AttackDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Health;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Run_Speed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Spawn_Transform_Scale;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MissleRocketsUsable_;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RocketMissleDelayMin;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RocketMissleDelayMax;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AiBossClassToSpawn;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ExecuteUbergraph_BP_SpecialAiSpawner
struct ABP_SpecialAiSpawner_C_ExecuteUbergraph_BP_SpecialAiSpawner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
