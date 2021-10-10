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

// Function BPI_RunningMatchLibraryActorInterface.BPI_RunningMatchLibraryActorInterface_C.Test
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_RunningMatchLibraryActorInterface_C::Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RunningMatchLibraryActorInterface.BPI_RunningMatchLibraryActorInterface_C.Test");

	UBPI_RunningMatchLibraryActorInterface_C_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
