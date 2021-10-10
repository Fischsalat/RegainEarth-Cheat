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

// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.OnRep_SpawnedAI
// (BlueprintCallable, BlueprintEvent)
void ABP_SpecialAiSpawner_C::OnRep_SpawnedAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.OnRep_SpawnedAI");

	ABP_SpecialAiSpawner_C_OnRep_SpawnedAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.TimelineMechWayDown__FinishedFunc
// (BlueprintEvent)
void ABP_SpecialAiSpawner_C::TimelineMechWayDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.TimelineMechWayDown__FinishedFunc");

	ABP_SpecialAiSpawner_C_TimelineMechWayDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.TimelineMechWayDown__UpdateFunc
// (BlueprintEvent)
void ABP_SpecialAiSpawner_C::TimelineMechWayDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.TimelineMechWayDown__UpdateFunc");

	ABP_SpecialAiSpawner_C_TimelineMechWayDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ParticleGrow__FinishedFunc
// (BlueprintEvent)
void ABP_SpecialAiSpawner_C::ParticleGrow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ParticleGrow__FinishedFunc");

	ABP_SpecialAiSpawner_C_ParticleGrow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ParticleGrow__UpdateFunc
// (BlueprintEvent)
void ABP_SpecialAiSpawner_C::ParticleGrow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ParticleGrow__UpdateFunc");

	ABP_SpecialAiSpawner_C_ParticleGrow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_SpecialAiSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ReceiveBeginPlay");

	ABP_SpecialAiSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ReverseParticleScale
// (BlueprintCallable, BlueprintEvent)
void ABP_SpecialAiSpawner_C::ReverseParticleScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ReverseParticleScale");

	ABP_SpecialAiSpawner_C_ReverseParticleScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.SpawnMechAiFlyDownInShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AttackDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Max_Health                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Run_Speed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ActorSizeScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           MissleRocketsUsable_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          RocketMissleDelayMin           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RocketMissleDelayMax           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  AiBossClassToSpawn             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpecialAiSpawner_C::SpawnMechAiFlyDownInShield(float AttackDamage, float Max_Health, float Run_Speed, const struct FVector& ActorSizeScale, bool MissleRocketsUsable_, float RocketMissleDelayMin, float RocketMissleDelayMax, class UClass* AiBossClassToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.SpawnMechAiFlyDownInShield");

	ABP_SpecialAiSpawner_C_SpawnMechAiFlyDownInShield_Params params;
	params.AttackDamage = AttackDamage;
	params.Max_Health = Max_Health;
	params.Run_Speed = Run_Speed;
	params.ActorSizeScale = ActorSizeScale;
	params.MissleRocketsUsable_ = MissleRocketsUsable_;
	params.RocketMissleDelayMin = RocketMissleDelayMin;
	params.RocketMissleDelayMax = RocketMissleDelayMax;
	params.AiBossClassToSpawn = AiBossClassToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.FlyMechDownToSpawnPoint
// (BlueprintCallable, BlueprintEvent)
void ABP_SpecialAiSpawner_C::FlyMechDownToSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.FlyMechDownToSpawnPoint");

	ABP_SpecialAiSpawner_C_FlyMechDownToSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.DestroyParticles
// (BlueprintCallable, BlueprintEvent)
void ABP_SpecialAiSpawner_C::DestroyParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.DestroyParticles");

	ABP_SpecialAiSpawner_C_DestroyParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.Multicast_SpawnMechAiFlyDownInShield
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AttackDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Max_Health                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Run_Speed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Spawn_Transform_Scale          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           MissleRocketsUsable_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          RocketMissleDelayMin           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RocketMissleDelayMax           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  AiBossClassToSpawn             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpecialAiSpawner_C::Multicast_SpawnMechAiFlyDownInShield(float AttackDamage, float Max_Health, float Run_Speed, const struct FVector& Spawn_Transform_Scale, bool MissleRocketsUsable_, float RocketMissleDelayMin, float RocketMissleDelayMax, class UClass* AiBossClassToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.Multicast_SpawnMechAiFlyDownInShield");

	ABP_SpecialAiSpawner_C_Multicast_SpawnMechAiFlyDownInShield_Params params;
	params.AttackDamage = AttackDamage;
	params.Max_Health = Max_Health;
	params.Run_Speed = Run_Speed;
	params.Spawn_Transform_Scale = Spawn_Transform_Scale;
	params.MissleRocketsUsable_ = MissleRocketsUsable_;
	params.RocketMissleDelayMin = RocketMissleDelayMin;
	params.RocketMissleDelayMax = RocketMissleDelayMax;
	params.AiBossClassToSpawn = AiBossClassToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ExecuteUbergraph_BP_SpecialAiSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpecialAiSpawner_C::ExecuteUbergraph_BP_SpecialAiSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpecialAiSpawner.BP_SpecialAiSpawner_C.ExecuteUbergraph_BP_SpecialAiSpawner");

	ABP_SpecialAiSpawner_C_ExecuteUbergraph_BP_SpecialAiSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
