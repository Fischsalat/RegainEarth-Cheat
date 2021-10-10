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

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartEffectByEffectType
struct UBP_StatusEffectsBaseComponent_C_StartEffectByEffectType_Params
{
	float                                              EffectDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedModifyAsFactor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              MeshP;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.OnRep_Speed Effect Settings
struct UBP_StatusEffectsBaseComponent_C_OnRep_Speed_Effect_Settings_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReceiveBeginPlay
struct UBP_StatusEffectsBaseComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReceiveTick
struct UBP_StatusEffectsBaseComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartSpeedGlowEffectForDuration
struct UBP_StatusEffectsBaseComponent_C_StartSpeedGlowEffectForDuration_Params
{
	struct FName                                       ParameterName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 CurveToSignalStartEffect;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 CurveToSignalSoonEndEffect;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBeforeEffectEndsToStartEndSoonMaterialEffect;          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReverseSpeedModifyTimeline
struct UBP_StatusEffectsBaseComponent_C_ReverseSpeedModifyTimeline_Params
{
	bool                                               EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StopSpeedModifyTick
struct UBP_StatusEffectsBaseComponent_C_StopSpeedModifyTick_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.LastSpeedeffectHasEnded
struct UBP_StatusEffectsBaseComponent_C_LastSpeedeffectHasEnded_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.AiOnDeath_Event_1
struct UBP_StatusEffectsBaseComponent_C_AiOnDeath_Event_1_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.DelayEffectHasEndedByAIDeath
struct UBP_StatusEffectsBaseComponent_C_DelayEffectHasEndedByAIDeath_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.DriveParticleSizeOnSpeedStatusModfied
struct UBP_StatusEffectsBaseComponent_C_DriveParticleSizeOnSpeedStatusModfied_Params
{
	float                                              CurrentSpeedModifer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaBetweenNormalStateAndEffectState;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectEnded_Event2
struct UBP_StatusEffectsBaseComponent_C_SpeedModifyEffectEnded_Event2_Params
{
	bool                                               EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartSpeedStatusModfiedMaterialVisDriver
struct UBP_StatusEffectsBaseComponent_C_StartSpeedStatusModfiedMaterialVisDriver_Params
{
	float                                              CurrentSpeedModifer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaBetweenNormalStateAndEffectState;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.EndRunningMaterialEffectOnSpeedModifyEffectEnded
struct UBP_StatusEffectsBaseComponent_C_EndRunningMaterialEffectOnSpeedModifyEffectEnded_Params
{
	bool                                               EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.TriggerPawnMovementSpeedModifyEffectDetails
struct UBP_StatusEffectsBaseComponent_C_TriggerPawnMovementSpeedModifyEffectDetails_Params
{
	float                                              EffectDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RampUpTimeFullEffect;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedModifyAsFactor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveEffectWhenCauseDestroyed_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      OptionalCauser;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ParticleLoop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              TargetMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ParticleSpawnLocRelToMesh;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ParticleSpawnRotation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ParticleScaleFullSize;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OptionalMaterialParamNameForMatEffects;                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.Server_TriggerPawnMovementSpeedModifyEffect
struct UBP_StatusEffectsBaseComponent_C_Server_TriggerPawnMovementSpeedModifyEffect_Params
{
	struct FSSpeedEffectSettingsStruct                 SpeedEffectSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.OnPlayerUnconscious_Event_1
struct UBP_StatusEffectsBaseComponent_C_OnPlayerUnconscious_Event_1_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.AiOnDeath_Event_2
struct UBP_StatusEffectsBaseComponent_C_AiOnDeath_Event_2_Params
{
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ExecuteUbergraph_BP_StatusEffectsBaseComponent
struct UBP_StatusEffectsBaseComponent_C_ExecuteUbergraph_BP_StatusEffectsBaseComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectStarted__DelegateSignature
struct UBP_StatusEffectsBaseComponent_C_SpeedModifyEffectStarted__DelegateSignature_Params
{
	float                                              SpeedMultiplierOfStartedEffect;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedStatusModfied__DelegateSignature
struct UBP_StatusEffectsBaseComponent_C_SpeedStatusModfied__DelegateSignature_Params
{
	float                                              CurrentSpeedModifer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaBetweenNormalStateAndEffectState;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectEnded__DelegateSignature
struct UBP_StatusEffectsBaseComponent_C_SpeedModifyEffectEnded__DelegateSignature_Params
{
	bool                                               EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
