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

// Function BPFL_MapLevelScriptLibrary.BPFL_MapLevelScriptLibrary_C.MultiplyDifficultyWithFactorWhenDiffiHardcoreOrHigher
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BaseValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BaseFactorPerLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FactorMultipliedResult         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapLevelScriptLibrary_C::STATIC_MultiplyDifficultyWithFactorWhenDiffiHardcoreOrHigher(float BaseValue, float BaseFactorPerLevel, class UObject* __WorldContext, float* FactorMultipliedResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapLevelScriptLibrary.BPFL_MapLevelScriptLibrary_C.MultiplyDifficultyWithFactorWhenDiffiHardcoreOrHigher");

	UBPFL_MapLevelScriptLibrary_C_MultiplyDifficultyWithFactorWhenDiffiHardcoreOrHigher_Params params;
	params.BaseValue = BaseValue;
	params.BaseFactorPerLevel = BaseFactorPerLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FactorMultipliedResult != nullptr)
		*FactorMultipliedResult = params.FactorMultipliedResult;

}


// Function BPFL_MapLevelScriptLibrary.BPFL_MapLevelScriptLibrary_C.MultiplyPlayerMoreThenOneWithFactor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BaseValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BaseFactorPerPlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Wave_Gamemode_C*     GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FactorMultipliedResult         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_MapLevelScriptLibrary_C::STATIC_MultiplyPlayerMoreThenOneWithFactor(float BaseValue, float BaseFactorPerPlayer, class ABP_Wave_Gamemode_C* GameMode, class UObject* __WorldContext, float* FactorMultipliedResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_MapLevelScriptLibrary.BPFL_MapLevelScriptLibrary_C.MultiplyPlayerMoreThenOneWithFactor");

	UBPFL_MapLevelScriptLibrary_C_MultiplyPlayerMoreThenOneWithFactor_Params params;
	params.BaseValue = BaseValue;
	params.BaseFactorPerPlayer = BaseFactorPerPlayer;
	params.GameMode = GameMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FactorMultipliedResult != nullptr)
		*FactorMultipliedResult = params.FactorMultipliedResult;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
