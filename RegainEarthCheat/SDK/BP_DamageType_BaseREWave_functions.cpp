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

// Function BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C.GetDamageForceAndVisualEffectType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType> DamageForceAndVisualEffectType (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DamageType_BaseREWave_C::GetDamageForceAndVisualEffectType(TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType>* DamageForceAndVisualEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C.GetDamageForceAndVisualEffectType");

	UBP_DamageType_BaseREWave_C_GetDamageForceAndVisualEffectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageForceAndVisualEffectType != nullptr)
		*DamageForceAndVisualEffectType = params.DamageForceAndVisualEffectType;

}


// Function BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C.GetPercentageDamageAbsorptionOfBodyShield
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PercentageDamageAbsorption     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DamageType_BaseREWave_C::GetPercentageDamageAbsorptionOfBodyShield(float* PercentageDamageAbsorption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C.GetPercentageDamageAbsorptionOfBodyShield");

	UBP_DamageType_BaseREWave_C_GetPercentageDamageAbsorptionOfBodyShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PercentageDamageAbsorption != nullptr)
		*PercentageDamageAbsorption = params.PercentageDamageAbsorption;

}


// Function BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C.GetDamageForceAndVisualEffectTypePure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType> DamageForceAndVisualEffectType (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DamageType_BaseREWave_C::GetDamageForceAndVisualEffectTypePure(TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType>* DamageForceAndVisualEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C.GetDamageForceAndVisualEffectTypePure");

	UBP_DamageType_BaseREWave_C_GetDamageForceAndVisualEffectTypePure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageForceAndVisualEffectType != nullptr)
		*DamageForceAndVisualEffectType = params.DamageForceAndVisualEffectType;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
