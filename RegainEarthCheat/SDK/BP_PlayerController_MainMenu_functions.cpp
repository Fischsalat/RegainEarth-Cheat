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

// Function BP_PlayerController_MainMenu.BP_PlayerController_MainMenu_C.UpdateInputMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowMouseCursor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                 InWidgetToFocus                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_MainMenu_C::UpdateInputMode(bool ShowMouseCursor, class UWidget* InWidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_MainMenu.BP_PlayerController_MainMenu_C.UpdateInputMode");

	ABP_PlayerController_MainMenu_C_UpdateInputMode_Params params;
	params.ShowMouseCursor = ShowMouseCursor;
	params.InWidgetToFocus = InWidgetToFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController_MainMenu.BP_PlayerController_MainMenu_C.ExecuteUbergraph_BP_PlayerController_MainMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_MainMenu_C::ExecuteUbergraph_BP_PlayerController_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_MainMenu.BP_PlayerController_MainMenu_C.ExecuteUbergraph_BP_PlayerController_MainMenu");

	ABP_PlayerController_MainMenu_C_ExecuteUbergraph_BP_PlayerController_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
