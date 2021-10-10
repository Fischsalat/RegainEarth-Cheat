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

// BlueprintGeneratedClass BPFL_MapLevelScriptLibrary.BPFL_MapLevelScriptLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFL_MapLevelScriptLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_MapLevelScriptLibrary.BPFL_MapLevelScriptLibrary_C");
		return ptr;
	}



	void STATIC_MultiplyDifficultyWithFactorWhenDiffiHardcoreOrHigher(float BaseValue, float BaseFactorPerLevel, class UObject* __WorldContext, float* FactorMultipliedResult);
	void STATIC_MultiplyPlayerMoreThenOneWithFactor(float BaseValue, float BaseFactorPerPlayer, class ABP_Wave_Gamemode_C* GameMode, class UObject* __WorldContext, float* FactorMultipliedResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
