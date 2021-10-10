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

// Function W_KeyButtonSimpleDisplay.W_KeyButtonSimpleDisplay_C.SetButtonIconText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSInputKey_ConfigAndGraphics SInputKey_ConfigAndGraphics    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UW_KeyButtonSimpleDisplay_C::SetButtonIconText(const struct FSInputKey_ConfigAndGraphics& SInputKey_ConfigAndGraphics)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeyButtonSimpleDisplay.W_KeyButtonSimpleDisplay_C.SetButtonIconText");

	UW_KeyButtonSimpleDisplay_C_SetButtonIconText_Params params;
	params.SInputKey_ConfigAndGraphics = SInputKey_ConfigAndGraphics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeyButtonSimpleDisplay.W_KeyButtonSimpleDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeyButtonSimpleDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeyButtonSimpleDisplay.W_KeyButtonSimpleDisplay_C.PreConstruct");

	UW_KeyButtonSimpleDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeyButtonSimpleDisplay.W_KeyButtonSimpleDisplay_C.ExecuteUbergraph_W_KeyButtonSimpleDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeyButtonSimpleDisplay_C::ExecuteUbergraph_W_KeyButtonSimpleDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeyButtonSimpleDisplay.W_KeyButtonSimpleDisplay_C.ExecuteUbergraph_W_KeyButtonSimpleDisplay");

	UW_KeyButtonSimpleDisplay_C_ExecuteUbergraph_W_KeyButtonSimpleDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
