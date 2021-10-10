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

// Function BPI_UiUmgWidgets.BPI_UiUmgWidgets_C.SetAllFontsToScifiIngameFont
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_UiUmgWidgets_C::SetAllFontsToScifiIngameFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UiUmgWidgets.BPI_UiUmgWidgets_C.SetAllFontsToScifiIngameFont");

	UBPI_UiUmgWidgets_C_SetAllFontsToScifiIngameFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
