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

// Function BPI_Dissolvable.BPI_Dissolvable_C.HitByDissolveWeaponHit
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Dissolvable_C::HitByDissolveWeaponHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Dissolvable.BPI_Dissolvable_C.HitByDissolveWeaponHit");

	UBPI_Dissolvable_C_HitByDissolveWeaponHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Dissolvable.BPI_Dissolvable_C.ForceFullDissolve
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Dissolvable_C::ForceFullDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Dissolvable.BPI_Dissolvable_C.ForceFullDissolve");

	UBPI_Dissolvable_C_ForceFullDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
