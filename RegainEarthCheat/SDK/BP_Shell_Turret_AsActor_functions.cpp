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

// Function BP_Shell_Turret_AsActor.BP_Shell_Turret_AsActor_C.SpawnShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*         Shell_Particle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayToStartSpawn              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SoundHit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SundHitEnd                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Shell_Turret_AsActor_C::SpawnShell(const struct FTransform& Transform, float LifeTime, class UParticleSystem* Shell_Particle, float DelayToStartSpawn, class USoundBase* SoundHit, class USoundBase* SundHitEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shell_Turret_AsActor.BP_Shell_Turret_AsActor_C.SpawnShell");

	ABP_Shell_Turret_AsActor_C_SpawnShell_Params params;
	params.Transform = Transform;
	params.LifeTime = LifeTime;
	params.Shell_Particle = Shell_Particle;
	params.DelayToStartSpawn = DelayToStartSpawn;
	params.SoundHit = SoundHit;
	params.SundHitEnd = SundHitEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shell_Turret_AsActor.BP_Shell_Turret_AsActor_C.ExecuteUbergraph_BP_Shell_Turret_AsActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Shell_Turret_AsActor_C::ExecuteUbergraph_BP_Shell_Turret_AsActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shell_Turret_AsActor.BP_Shell_Turret_AsActor_C.ExecuteUbergraph_BP_Shell_Turret_AsActor");

	ABP_Shell_Turret_AsActor_C_ExecuteUbergraph_BP_Shell_Turret_AsActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
