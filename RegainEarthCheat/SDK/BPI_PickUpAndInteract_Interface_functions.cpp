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

// Function BPI_PickUpAndInteract_Interface.BPI_PickUpAndInteract_Interface_C.PickItUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnWhoPicksItUp               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PickUpAndInteract_Interface_C::PickItUp(class APawn* PawnWhoPicksItUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PickUpAndInteract_Interface.BPI_PickUpAndInteract_Interface_C.PickItUp");

	UBPI_PickUpAndInteract_Interface_C_PickItUp_Params params;
	params.PawnWhoPicksItUp = PawnWhoPicksItUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
