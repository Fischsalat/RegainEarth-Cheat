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

// Function BPI_StatusEffects.BPI_StatusEffects_C.GetMeshForEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_StatusEffects_C::GetMeshForEffects(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StatusEffects.BPI_StatusEffects_C.GetMeshForEffects");

	UBPI_StatusEffects_C_GetMeshForEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BPI_StatusEffects.BPI_StatusEffects_C.TriggerPawnMovementSpeedModifyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSpeedEffectSettingsStruct SpeedEffectSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_StatusEffects_C::TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StatusEffects.BPI_StatusEffects_C.TriggerPawnMovementSpeedModifyEffect");

	UBPI_StatusEffects_C_TriggerPawnMovementSpeedModifyEffect_Params params;
	params.SpeedEffectSettings = SpeedEffectSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_StatusEffects.BPI_StatusEffects_C.SetModifiedSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSpeedModifier           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_StatusEffects_C::SetModifiedSpeed(float CurrentSpeedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StatusEffects.BPI_StatusEffects_C.SetModifiedSpeed");

	UBPI_StatusEffects_C_SetModifiedSpeed_Params params;
	params.CurrentSpeedModifier = CurrentSpeedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_StatusEffects.BPI_StatusEffects_C.GetStatusEffectComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasStatusEffectComponent       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_StatusEffectsBaseComponent_C* StatusEffectComponentRef       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_StatusEffects_C::GetStatusEffectComponent(bool* HasStatusEffectComponent, class UBP_StatusEffectsBaseComponent_C** StatusEffectComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StatusEffects.BPI_StatusEffects_C.GetStatusEffectComponent");

	UBPI_StatusEffects_C_GetStatusEffectComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasStatusEffectComponent != nullptr)
		*HasStatusEffectComponent = params.HasStatusEffectComponent;
	if (StatusEffectComponentRef != nullptr)
		*StatusEffectComponentRef = params.StatusEffectComponentRef;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
