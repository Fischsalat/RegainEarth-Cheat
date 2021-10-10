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

// Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.CreateMainMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_ProMainMenu_C*       WB_ProMainMenu                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_MainMenu_C::CreateMainMenu(class UWB_ProMainMenu_C** WB_ProMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.CreateMainMenu");

	ABP_HUD_MainMenu_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WB_ProMainMenu != nullptr)
		*WB_ProMainMenu = params.WB_ProMainMenu;

}


// Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_HUD_MainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay");

	ABP_HUD_MainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HUD_MainMenu_C::ExecuteUbergraph_BP_HUD_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu");

	ABP_HUD_MainMenu_C_ExecuteUbergraph_BP_HUD_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
