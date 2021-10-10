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

// Function BP_Save_QualityCustom_Settings.BP_Save_QualityCustom_Settings_C.SetValuesToDefaultValues
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Save_QualityCustom_Settings_C::SetValuesToDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Save_QualityCustom_Settings.BP_Save_QualityCustom_Settings_C.SetValuesToDefaultValues");

	UBP_Save_QualityCustom_Settings_C_SetValuesToDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
