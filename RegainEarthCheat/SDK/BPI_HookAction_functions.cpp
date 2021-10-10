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

// Function BPI_HookAction.BPI_HookAction_C.LadleOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_HookAction_C::LadleOpen(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HookAction.BPI_HookAction_C.LadleOpen");

	UBPI_HookAction_C_LadleOpen_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HookAction.BPI_HookAction_C.LadleClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_HookAction_C::LadleClose(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HookAction.BPI_HookAction_C.LadleClose");

	UBPI_HookAction_C_LadleClose_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HookAction.BPI_HookAction_C.UnhookAction
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HookAction_C::UnhookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HookAction.BPI_HookAction_C.UnhookAction");

	UBPI_HookAction_C_UnhookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_HookAction.BPI_HookAction_C.HookAction
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_HookAction_C::HookAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HookAction.BPI_HookAction_C.HookAction");

	UBPI_HookAction_C_HookAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
