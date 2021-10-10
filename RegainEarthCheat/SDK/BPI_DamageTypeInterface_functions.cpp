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

// Function BPI_DamageTypeInterface.BPI_DamageTypeInterface_C.GetDamageForceAndVisualEffectType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType> DamageForceAndVisualEffectType (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_DamageTypeInterface_C::GetDamageForceAndVisualEffectType(TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType>* DamageForceAndVisualEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DamageTypeInterface.BPI_DamageTypeInterface_C.GetDamageForceAndVisualEffectType");

	UBPI_DamageTypeInterface_C_GetDamageForceAndVisualEffectType_Params params;

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
