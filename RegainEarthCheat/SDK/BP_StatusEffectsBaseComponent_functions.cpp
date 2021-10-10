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

// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartEffectByEffectType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EffectDuration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedModifyAsFactor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*          MeshP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::StartEffectByEffectType(float EffectDuration, float SpeedModifyAsFactor, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType, class UMeshComponent* MeshP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartEffectByEffectType");

	UBP_StatusEffectsBaseComponent_C_StartEffectByEffectType_Params params;
	params.EffectDuration = EffectDuration;
	params.SpeedModifyAsFactor = SpeedModifyAsFactor;
	params.EffectType = EffectType;
	params.MeshP = MeshP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.OnRep_Speed Effect Settings
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::OnRep_Speed_Effect_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.OnRep_Speed Effect Settings");

	UBP_StatusEffectsBaseComponent_C_OnRep_Speed_Effect_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReceiveBeginPlay");

	UBP_StatusEffectsBaseComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReceiveTick");

	UBP_StatusEffectsBaseComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartSpeedGlowEffectForDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParameterName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             CurveToSignalStartEffect       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             CurveToSignalSoonEndEffect     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimeBeforeEffectEndsToStartEndSoonMaterialEffect (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::StartSpeedGlowEffectForDuration(const struct FName& ParameterName, class UCurveFloat* CurveToSignalStartEffect, class UCurveFloat* CurveToSignalSoonEndEffect, float TimeBeforeEffectEndsToStartEndSoonMaterialEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartSpeedGlowEffectForDuration");

	UBP_StatusEffectsBaseComponent_C_StartSpeedGlowEffectForDuration_Params params;
	params.ParameterName = ParameterName;
	params.CurveToSignalStartEffect = CurveToSignalStartEffect;
	params.CurveToSignalSoonEndEffect = CurveToSignalSoonEndEffect;
	params.TimeBeforeEffectEndsToStartEndSoonMaterialEffect = TimeBeforeEffectEndsToStartEndSoonMaterialEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReverseSpeedModifyTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StatusEffectsBaseComponent_C::ReverseSpeedModifyTimeline(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ReverseSpeedModifyTimeline");

	UBP_StatusEffectsBaseComponent_C_ReverseSpeedModifyTimeline_Params params;
	params.EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut = EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StopSpeedModifyTick
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::StopSpeedModifyTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StopSpeedModifyTick");

	UBP_StatusEffectsBaseComponent_C_StopSpeedModifyTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.LastSpeedeffectHasEnded
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::LastSpeedeffectHasEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.LastSpeedeffectHasEnded");

	UBP_StatusEffectsBaseComponent_C_LastSpeedeffectHasEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.AiOnDeath_Event_1
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::AiOnDeath_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.AiOnDeath_Event_1");

	UBP_StatusEffectsBaseComponent_C_AiOnDeath_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.DelayEffectHasEndedByAIDeath
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::DelayEffectHasEndedByAIDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.DelayEffectHasEndedByAIDeath");

	UBP_StatusEffectsBaseComponent_C_DelayEffectHasEndedByAIDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.DriveParticleSizeOnSpeedStatusModfied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSpeedModifer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AlphaBetweenNormalStateAndEffectState (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::DriveParticleSizeOnSpeedStatusModfied(float CurrentSpeedModifer, float AlphaBetweenNormalStateAndEffectState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.DriveParticleSizeOnSpeedStatusModfied");

	UBP_StatusEffectsBaseComponent_C_DriveParticleSizeOnSpeedStatusModfied_Params params;
	params.CurrentSpeedModifer = CurrentSpeedModifer;
	params.AlphaBetweenNormalStateAndEffectState = AlphaBetweenNormalStateAndEffectState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectEnded_Event2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StatusEffectsBaseComponent_C::SpeedModifyEffectEnded_Event2(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectEnded_Event2");

	UBP_StatusEffectsBaseComponent_C_SpeedModifyEffectEnded_Event2_Params params;
	params.EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut = EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartSpeedStatusModfiedMaterialVisDriver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSpeedModifer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AlphaBetweenNormalStateAndEffectState (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::StartSpeedStatusModfiedMaterialVisDriver(float CurrentSpeedModifer, float AlphaBetweenNormalStateAndEffectState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.StartSpeedStatusModfiedMaterialVisDriver");

	UBP_StatusEffectsBaseComponent_C_StartSpeedStatusModfiedMaterialVisDriver_Params params;
	params.CurrentSpeedModifer = CurrentSpeedModifer;
	params.AlphaBetweenNormalStateAndEffectState = AlphaBetweenNormalStateAndEffectState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.EndRunningMaterialEffectOnSpeedModifyEffectEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StatusEffectsBaseComponent_C::EndRunningMaterialEffectOnSpeedModifyEffectEnded(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.EndRunningMaterialEffectOnSpeedModifyEffectEnded");

	UBP_StatusEffectsBaseComponent_C_EndRunningMaterialEffectOnSpeedModifyEffectEnded_Params params;
	params.EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut = EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.TriggerPawnMovementSpeedModifyEffectDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EffectDuration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RampUpTimeFullEffect           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedModifyAsFactor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RemoveEffectWhenCauseDestroyed_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  OptionalCauser                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*         ParticleLoop                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*          TargetMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ParticleSpawnLocRelToMesh      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ParticleSpawnRotation          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ParticleScaleFullSize          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   OptionalMaterialParamNameForMatEffects (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::TriggerPawnMovementSpeedModifyEffectDetails(float EffectDuration, float RampUpTimeFullEffect, float SpeedModifyAsFactor, bool RemoveEffectWhenCauseDestroyed_, class AActor* OptionalCauser, class UParticleSystem* ParticleLoop, class UMeshComponent* TargetMesh, const struct FVector& ParticleSpawnLocRelToMesh, const struct FRotator& ParticleSpawnRotation, const struct FVector& ParticleScaleFullSize, const struct FName& OptionalMaterialParamNameForMatEffects, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.TriggerPawnMovementSpeedModifyEffectDetails");

	UBP_StatusEffectsBaseComponent_C_TriggerPawnMovementSpeedModifyEffectDetails_Params params;
	params.EffectDuration = EffectDuration;
	params.RampUpTimeFullEffect = RampUpTimeFullEffect;
	params.SpeedModifyAsFactor = SpeedModifyAsFactor;
	params.RemoveEffectWhenCauseDestroyed_ = RemoveEffectWhenCauseDestroyed_;
	params.OptionalCauser = OptionalCauser;
	params.ParticleLoop = ParticleLoop;
	params.TargetMesh = TargetMesh;
	params.ParticleSpawnLocRelToMesh = ParticleSpawnLocRelToMesh;
	params.ParticleSpawnRotation = ParticleSpawnRotation;
	params.ParticleScaleFullSize = ParticleScaleFullSize;
	params.OptionalMaterialParamNameForMatEffects = OptionalMaterialParamNameForMatEffects;
	params.EffectType = EffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.Server_TriggerPawnMovementSpeedModifyEffect
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSpeedEffectSettingsStruct SpeedEffectSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::Server_TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.Server_TriggerPawnMovementSpeedModifyEffect");

	UBP_StatusEffectsBaseComponent_C_Server_TriggerPawnMovementSpeedModifyEffect_Params params;
	params.SpeedEffectSettings = SpeedEffectSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.OnPlayerUnconscious_Event_1
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::OnPlayerUnconscious_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.OnPlayerUnconscious_Event_1");

	UBP_StatusEffectsBaseComponent_C_OnPlayerUnconscious_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.AiOnDeath_Event_2
// (BlueprintCallable, BlueprintEvent)
void UBP_StatusEffectsBaseComponent_C::AiOnDeath_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.AiOnDeath_Event_2");

	UBP_StatusEffectsBaseComponent_C_AiOnDeath_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ExecuteUbergraph_BP_StatusEffectsBaseComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::ExecuteUbergraph_BP_StatusEffectsBaseComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.ExecuteUbergraph_BP_StatusEffectsBaseComponent");

	UBP_StatusEffectsBaseComponent_C_ExecuteUbergraph_BP_StatusEffectsBaseComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpeedMultiplierOfStartedEffect (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::SpeedModifyEffectStarted__DelegateSignature(float SpeedMultiplierOfStartedEffect, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectStarted__DelegateSignature");

	UBP_StatusEffectsBaseComponent_C_SpeedModifyEffectStarted__DelegateSignature_Params params;
	params.SpeedMultiplierOfStartedEffect = SpeedMultiplierOfStartedEffect;
	params.EffectType = EffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedStatusModfied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSpeedModifer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AlphaBetweenNormalStateAndEffectState (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusEffectsBaseComponent_C::SpeedStatusModfied__DelegateSignature(float CurrentSpeedModifer, float AlphaBetweenNormalStateAndEffectState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedStatusModfied__DelegateSignature");

	UBP_StatusEffectsBaseComponent_C_SpeedStatusModfied__DelegateSignature_Params params;
	params.CurrentSpeedModifer = CurrentSpeedModifer;
	params.AlphaBetweenNormalStateAndEffectState = AlphaBetweenNormalStateAndEffectState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StatusEffectsBaseComponent_C::SpeedModifyEffectEnded__DelegateSignature(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatusEffectsBaseComponent.BP_StatusEffectsBaseComponent_C.SpeedModifyEffectEnded__DelegateSignature");

	UBP_StatusEffectsBaseComponent_C_SpeedModifyEffectEnded__DelegateSignature_Params params;
	params.EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut = EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
