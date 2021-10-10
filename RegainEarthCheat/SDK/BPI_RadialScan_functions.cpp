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

// Function BPI_RadialScan.BPI_RadialScan_C.ScanWaveFoundPawnOrImportantActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_RadialScan_C::ScanWaveFoundPawnOrImportantActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RadialScan.BPI_RadialScan_C.ScanWaveFoundPawnOrImportantActor");

	UBPI_RadialScan_C_ScanWaveFoundPawnOrImportantActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
