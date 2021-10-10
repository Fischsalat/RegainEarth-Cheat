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

// Function ExplosionShake.ExplosionShake_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)
void UExplosionShake_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionShake.ExplosionShake_C.NewFunction_1");

	UExplosionShake_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
