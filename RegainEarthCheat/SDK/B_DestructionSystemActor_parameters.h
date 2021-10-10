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

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.GetStateHP
struct AB_DestructionSystemActor_C_GetStateHP_Params
{
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateHP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.CalculateNextState
struct AB_DestructionSystemActor_C_CalculateNextState_Params
{
	int                                                Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextStateHP;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.CalculateStartingHP
struct AB_DestructionSystemActor_C_CalculateStartingHP_Params
{
	int                                                StartingStateHP;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CalculatedHP;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ClampStateValues
struct AB_DestructionSystemActor_C_ClampStateValues_Params
{
	struct FDestructionSystemActorState                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                ArrayIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDestructionSystemActorState                ClampedState;                                              // (Parm, OutParm, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetDebrisActorCollision
struct AB_DestructionSystemActor_C_SetDebrisActorCollision_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCollisionEnabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetPawnsToCollisionIgnore;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ConditionalDestroyActor
struct AB_DestructionSystemActor_C_ConditionalDestroyActor_Params
{
	bool                                               bCheckParticleSystem;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCheckAudio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.Set Debris Actor Properties
struct AB_DestructionSystemActor_C_Set_Debris_Actor_Properties_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 StaticMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Impulse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathTimer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPhysicsEnabled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCollisionEnabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetPawnsToCollisionIgnore;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SpawnDebrisActor
struct AB_DestructionSystemActor_C_SpawnDebrisActor_Params
{
	struct FDestructionSystemDebrisActorProperties     Properties;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.DebrisActorsTimer
struct AB_DestructionSystemActor_C_DebrisActorsTimer_Params
{
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetSoundIfValid
struct AB_DestructionSystemActor_C_SetSoundIfValid_Params
{
	class USoundBase*                                  SoundAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetParticleIfValid
struct AB_DestructionSystemActor_C_SetParticleIfValid_Params
{
	class UParticleSystem*                             ParticleSystemAsset;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.SetMeshIfValid
struct AB_DestructionSystemActor_C_SetMeshIfValid_Params
{
	class UStaticMesh*                                 StaticMeshAsset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.BeginDeath
struct AB_DestructionSystemActor_C_BeginDeath_Params
{
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.GoToState
struct AB_DestructionSystemActor_C_GoToState_Params
{
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.UserConstructionScript
struct AB_DestructionSystemActor_C_UserConstructionScript_Params
{
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ReceiveAnyDamage
struct AB_DestructionSystemActor_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.Multicast_BeginDeath
struct AB_DestructionSystemActor_C_Multicast_BeginDeath_Params
{
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.Multicast_GoToState
struct AB_DestructionSystemActor_C_Multicast_GoToState_Params
{
	int                                                CurrentState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_DestructionSystemActor.B_DestructionSystemActor_C.ExecuteUbergraph_B_DestructionSystemActor
struct AB_DestructionSystemActor_C_ExecuteUbergraph_B_DestructionSystemActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
