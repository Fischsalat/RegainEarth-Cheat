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

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.GetStateHP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateHP                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::GetStateHP(int StateIndex, int* StateHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.GetStateHP");

	AB_DestructionSystemActor_C_GetStateHP_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StateHP != nullptr)
		*StateHP = params.StateHP;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.CalculateNextState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NextState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NextStateHP                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::CalculateNextState(int Damage, int* NextState, int* NextStateHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.CalculateNextState");

	AB_DestructionSystemActor_C_CalculateNextState_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;
	if (NextStateHP != nullptr)
		*NextStateHP = params.NextStateHP;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.CalculateStartingHP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartingStateHP                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CalculatedHP                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::CalculateStartingHP(int StartingStateHP, int* CalculatedHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.CalculateStartingHP");

	AB_DestructionSystemActor_C_CalculateStartingHP_Params params;
	params.StartingStateHP = StartingStateHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CalculatedHP != nullptr)
		*CalculatedHP = params.CalculatedHP;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ClampStateValues
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDestructionSystemActorState State                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDestructionSystemActorState ClampedState                   (Parm, OutParm, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::ClampStateValues(const struct FDestructionSystemActorState& State, int ArrayIndex, struct FDestructionSystemActorState* ClampedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.ClampStateValues");

	AB_DestructionSystemActor_C_ClampStateValues_Params params;
	params.State = State;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClampedState != nullptr)
		*ClampedState = params.ClampedState;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetDebrisActorCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*    StaticMeshComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bCollisionEnabled              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SetPawnsToCollisionIgnore      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_DestructionSystemActor_C::SetDebrisActorCollision(class AActor* Actor, class UStaticMeshComponent* StaticMeshComponent, bool bCollisionEnabled, bool SetPawnsToCollisionIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetDebrisActorCollision");

	AB_DestructionSystemActor_C_SetDebrisActorCollision_Params params;
	params.Actor = Actor;
	params.StaticMeshComponent = StaticMeshComponent;
	params.bCollisionEnabled = bCollisionEnabled;
	params.SetPawnsToCollisionIgnore = SetPawnsToCollisionIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ConditionalDestroyActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCheckParticleSystem           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCheckAudio                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_DestructionSystemActor_C::ConditionalDestroyActor(bool bCheckParticleSystem, bool bCheckAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.ConditionalDestroyActor");

	AB_DestructionSystemActor_C_ConditionalDestroyActor_Params params;
	params.bCheckParticleSystem = bCheckParticleSystem;
	params.bCheckAudio = bCheckAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.Set Debris Actor Properties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*    StaticMeshComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeathTimer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bPhysicsEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCollisionEnabled              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCastShadows                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SetPawnsToCollisionIgnore      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_DestructionSystemActor_C::Set_Debris_Actor_Properties(class AActor* Actor, class UStaticMeshComponent* StaticMeshComponent, class UStaticMesh* StaticMesh, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, const struct FVector& Impulse, float DeathTimer, bool bPhysicsEnabled, bool bCollisionEnabled, bool bCastShadows, bool SetPawnsToCollisionIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.Set Debris Actor Properties");

	AB_DestructionSystemActor_C_Set_Debris_Actor_Properties_Params params;
	params.Actor = Actor;
	params.StaticMeshComponent = StaticMeshComponent;
	params.StaticMesh = StaticMesh;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.Impulse = Impulse;
	params.DeathTimer = DeathTimer;
	params.bPhysicsEnabled = bPhysicsEnabled;
	params.bCollisionEnabled = bCollisionEnabled;
	params.bCastShadows = bCastShadows;
	params.SetPawnsToCollisionIgnore = SetPawnsToCollisionIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SpawnDebrisActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDestructionSystemDebrisActorProperties Properties                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::SpawnDebrisActor(const struct FDestructionSystemDebrisActorProperties& Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.SpawnDebrisActor");

	AB_DestructionSystemActor_C_SpawnDebrisActor_Params params;
	params.Properties = Properties;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.DebrisActorsTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_DestructionSystemActor_C::DebrisActorsTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.DebrisActorsTimer");

	AB_DestructionSystemActor_C_DebrisActorsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetSoundIfValid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              SoundAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::SetSoundIfValid(class USoundBase* SoundAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetSoundIfValid");

	AB_DestructionSystemActor_C_SetSoundIfValid_Params params;
	params.SoundAsset = SoundAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetParticleIfValid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystemAsset            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::SetParticleIfValid(class UParticleSystem* ParticleSystemAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetParticleIfValid");

	AB_DestructionSystemActor_C_SetParticleIfValid_Params params;
	params.ParticleSystemAsset = ParticleSystemAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetMeshIfValid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             StaticMeshAsset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::SetMeshIfValid(class UStaticMesh* StaticMeshAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetMeshIfValid");

	AB_DestructionSystemActor_C_SetMeshIfValid_Params params;
	params.StaticMeshAsset = StaticMeshAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.BeginDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_DestructionSystemActor_C::BeginDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.BeginDeath");

	AB_DestructionSystemActor_C_BeginDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.GoToState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::GoToState(int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.GoToState");

	AB_DestructionSystemActor_C_GoToState_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_DestructionSystemActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.UserConstructionScript");

	AB_DestructionSystemActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.ReceiveAnyDamage");

	AB_DestructionSystemActor_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.Multicast_BeginDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AB_DestructionSystemActor_C::Multicast_BeginDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.Multicast_BeginDeath");

	AB_DestructionSystemActor_C_Multicast_BeginDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.Multicast_GoToState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::Multicast_GoToState(int CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.Multicast_GoToState");

	AB_DestructionSystemActor_C_Multicast_GoToState_Params params;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ExecuteUbergraph_B_DestructionSystemActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AB_DestructionSystemActor_C::ExecuteUbergraph_B_DestructionSystemActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DestructionSystemActor.B_DestructionSystemActor_C.ExecuteUbergraph_B_DestructionSystemActor");

	AB_DestructionSystemActor_C_ExecuteUbergraph_B_DestructionSystemActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
