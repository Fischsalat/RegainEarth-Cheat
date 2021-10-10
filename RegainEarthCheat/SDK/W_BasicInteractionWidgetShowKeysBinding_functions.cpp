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

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.GetInputKeyAndText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ActionAndKeysBind    PossibleActionsAndTheirKeyBinds (Parm, OutParm, HasGetValueTypeHash)
void UW_BasicInteractionWidgetShowKeysBinding_C::GetInputKeyAndText(bool* Return_Value, struct FS_ActionAndKeysBind* PossibleActionsAndTheirKeyBinds)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.GetInputKeyAndText");

	UW_BasicInteractionWidgetShowKeysBinding_C_GetInputKeyAndText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (PossibleActionsAndTheirKeyBinds != nullptr)
		*PossibleActionsAndTheirKeyBinds = params.PossibleActionsAndTheirKeyBinds;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.Create Key Bind Widgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_BasicInteractionWidgetShowKeysBinding_C::Create_Key_Bind_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.Create Key Bind Widgets");

	UW_BasicInteractionWidgetShowKeysBinding_C_Create_Key_Bind_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_BasicInteractionWidgetShowKeysBinding_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.Construct");

	UW_BasicInteractionWidgetShowKeysBinding_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_BasicInteractionWidgetShowKeysBinding_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.OnInitialized");

	UW_BasicInteractionWidgetShowKeysBinding_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetActionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_BasicInteractionWidgetShowKeysBinding_C::SetActionText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetActionText");

	UW_BasicInteractionWidgetShowKeysBinding_C_SetActionText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetActionNameForInputKeySearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKeyName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BasicInteractionWidgetShowKeysBinding_C::SetActionNameForInputKeySearch(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetActionNameForInputKeySearch");

	UW_BasicInteractionWidgetShowKeysBinding_C_SetActionNameForInputKeySearch_Params params;
	params.ActionKeyName = ActionKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetTitleVisibleAndSetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_BasicInteractionWidgetShowKeysBinding_C::SetTitleVisibleAndSetTitleText(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetTitleVisibleAndSetTitleText");

	UW_BasicInteractionWidgetShowKeysBinding_C_SetTitleVisibleAndSetTitleText_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BasicInteractionWidgetShowKeysBinding_C::ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding");

	UW_BasicInteractionWidgetShowKeysBinding_C_ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
