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

// Function BPI_StatusEffects.BPI_StatusEffects_C.GetMeshForEffects
struct UBPI_StatusEffects_C_GetMeshForEffects_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_StatusEffects.BPI_StatusEffects_C.TriggerPawnMovementSpeedModifyEffect
struct UBPI_StatusEffects_C_TriggerPawnMovementSpeedModifyEffect_Params
{
	struct FSSpeedEffectSettingsStruct                 SpeedEffectSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_StatusEffects.BPI_StatusEffects_C.SetModifiedSpeed
struct UBPI_StatusEffects_C_SetModifiedSpeed_Params
{
	float                                              CurrentSpeedModifier;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_StatusEffects.BPI_StatusEffects_C.GetStatusEffectComponent
struct UBPI_StatusEffects_C_GetStatusEffectComponent_Params
{
	bool                                               HasStatusEffectComponent;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_StatusEffectsBaseComponent_C*            StatusEffectComponentRef;                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
