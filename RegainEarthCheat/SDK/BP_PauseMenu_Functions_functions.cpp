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

// Function BP_PauseMenu_Functions.BP_PauseMenu_Functions_C.HandlePauseMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Player_Character_or_Pawn       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Set_Game_Paused                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PauseMenu_Functions_C::STATIC_HandlePauseMenu(class UObject* Player_Character_or_Pawn, bool Set_Game_Paused, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseMenu_Functions.BP_PauseMenu_Functions_C.HandlePauseMenu");

	UBP_PauseMenu_Functions_C_HandlePauseMenu_Params params;
	params.Player_Character_or_Pawn = Player_Character_or_Pawn;
	params.Set_Game_Paused = Set_Game_Paused;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
