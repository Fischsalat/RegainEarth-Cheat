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

// BlueprintGeneratedClass BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C
// 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
class UBP_StatusEffectsBaseComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FScriptMulticastDelegate                    SpeedModifyEffectEnded;                                    // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                EndSpeedGlowEffectTimer;                                   // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedChangeEffectAlphaMultiplier;                          // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delta_Seconds;                                             // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              LastTargetMesh;                                            // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastSetSpeedMultiplierByEffect;                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpeedEffectEndedNormallyAndNowFadeOutToNormal_;            // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ACA[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Owner_Ref_Current_Speed_Modifer_Multiplier;                // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSpeedModiferMultiplier;                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CompOwner;                                                 // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                SpeedStatusModifyTimer;                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SpeedStatusModfied;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AAI_Character_Base_Enemy_Pawn_C*             LastBoundCauserAi;                                         // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimerDelayEndEffectAiDeath;                                // 0x0118(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpawnedSlowDownParticleEffect;                             // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             LastSpawnedParticleType;                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LastEffectMaterialParamterName;                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EffectEndsSoonMaterialEffectStarted;                       // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TEHJ[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSSpeedEffectSettingsStruct                 SpeedEffectSettings;                                       // 0x013C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FSSpeedEffectSettingsStruct                 LastSpeedEffectSettings;                                   // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> LastEffectType;                                            // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PIC8[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SpeedModifyEffectStarted;                                  // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C");
		return ptr;
	}



	void StartEffectByEffectType(float EffectDuration, float SpeedModifyAsFactor, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType, class UMeshComponent* MeshP);
	void OnRep_Speed_Effect_Settings();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartSpeedGlowEffectForDuration(const struct FName& ParameterName, class UCurveFloat* CurveToSignalStartEffect, class UCurveFloat* CurveToSignalSoonEndEffect, float TimeBeforeEffectEndsToStartEndSoonMaterialEffect);
	void ReverseSpeedModifyTimeline(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut);
	void StopSpeedModifyTick();
	void LastSpeedeffectHasEnded();
	void AiOnDeath_Event_1();
	void DelayEffectHasEndedByAIDeath();
	void DriveParticleSizeOnSpeedStatusModfied(float CurrentSpeedModifer, float AlphaBetweenNormalStateAndEffectState);
	void SpeedModifyEffectEnded_Event2(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut);
	void StartSpeedStatusModfiedMaterialVisDriver(float CurrentSpeedModifer, float AlphaBetweenNormalStateAndEffectState);
	void EndRunningMaterialEffectOnSpeedModifyEffectEnded(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut);
	void TriggerPawnMovementSpeedModifyEffectDetails(float EffectDuration, float RampUpTimeFullEffect, float SpeedModifyAsFactor, bool RemoveEffectWhenCauseDestroyed_, class AActor* OptionalCauser, class UParticleSystem* ParticleLoop, class UMeshComponent* TargetMesh, const struct FVector& ParticleSpawnLocRelToMesh, const struct FRotator& ParticleSpawnRotation, const struct FVector& ParticleScaleFullSize, const struct FName& OptionalMaterialParamNameForMatEffects, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType);
	void Server_TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings);
	void OnPlayerUnconscious_Event_1();
	void AiOnDeath_Event_2();
	void ExecuteUbergraph_BP_StatusEffectsBaseComponent(int EntryPoint);
	void SpeedModifyEffectStarted__DelegateSignature(float SpeedMultiplierOfStartedEffect, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType);
	void SpeedStatusModfied__DelegateSignature(float CurrentSpeedModifer, float AlphaBetweenNormalStateAndEffectState);
	void SpeedModifyEffectEnded__DelegateSignature(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
