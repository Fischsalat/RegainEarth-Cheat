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

// Function BP_SaveSettings_Base.BP_SaveSettings_Base_C.GetSavedSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_SaveSettings_Base_C::GetSavedSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveSettings_Base.BP_SaveSettings_Base_C.GetSavedSettings");

	UBP_SaveSettings_Base_C_GetSavedSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SaveSettings_Base.BP_SaveSettings_Base_C.SetValuesToDefaultValues
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_SaveSettings_Base_C::SetValuesToDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveSettings_Base.BP_SaveSettings_Base_C.SetValuesToDefaultValues");

	UBP_SaveSettings_Base_C_SetValuesToDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
