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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_DestructionSystemActor.B_DestructionSystemActor_C
// 0x008C (FullSize[0x02AC] - InheritedSize[0x0220])
class AB_DestructionSystemActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                     // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FDestructionSystemActorState>        States;                                                    // 0x0248(0x0010) (Edit, BlueprintVisible)
	class UParticleSystem*                             DeathParticle;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  DeathSound;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDestructionSystemDebrisActorProperties> DebrisActorPropertiesArray;                                // 0x0268(0x0010) (Edit, BlueprintVisible)
	int                                                StartingState;                                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartingHP;                                                // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentHP;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                CurrentStateHP;                                            // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebrisActorsCheckInterval;                                 // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5RG8[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTimerHandle>                        DebrisActorsTimersHandles;                                 // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bMakeLastStatePermanent;                                   // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_TRXF[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentState;                                              // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                LastCSStartingHP;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DestructionSystemActor.B_DestructionSystemActor_C");
		return ptr;
	}



	void GetStateHP(int StateIndex, int* StateHP);
	void CalculateNextState(int Damage, int* NextState, int* NextStateHP);
	void CalculateStartingHP(int StartingStateHP, int* CalculatedHP);
	void ClampStateValues(const struct FDestructionSystemActorState& State, int ArrayIndex, struct FDestructionSystemActorState* ClampedState);
	void SetDebrisActorCollision(class AActor* Actor, class UStaticMeshComponent* StaticMeshComponent, bool bCollisionEnabled, bool SetPawnsToCollisionIgnore);
	void ConditionalDestroyActor(bool bCheckParticleSystem, bool bCheckAudio);
	void Set_Debris_Actor_Properties(class AActor* Actor, class UStaticMeshComponent* StaticMeshComponent, class UStaticMesh* StaticMesh, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, const struct FVector& Impulse, float DeathTimer, bool bPhysicsEnabled, bool bCollisionEnabled, bool bCastShadows, bool SetPawnsToCollisionIgnore);
	void SpawnDebrisActor(const struct FDestructionSystemDebrisActorProperties& Properties);
	void DebrisActorsTimer();
	void SetSoundIfValid(class USoundBase* SoundAsset);
	void SetParticleIfValid(class UParticleSystem* ParticleSystemAsset);
	void SetMeshIfValid(class UStaticMesh* StaticMeshAsset);
	void BeginDeath();
	void GoToState(int StateIndex);
	void UserConstructionScript();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Multicast_BeginDeath();
	void Multicast_GoToState(int CurrentState);
	void ExecuteUbergraph_B_DestructionSystemActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
