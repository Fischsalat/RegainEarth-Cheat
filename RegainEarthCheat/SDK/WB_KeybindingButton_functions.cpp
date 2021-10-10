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

// Function WB_KeybindingButton.WB_KeybindingButton_C.GetSelectedKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESelectedKey_ESelectedKey> ESelectedKey                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             SelectedKey                    (Parm, OutParm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::GetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> ESelectedKey, struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.GetSelectedKey");

	UWB_KeybindingButton_C_GetSelectedKey_Params params;
	params.ESelectedKey = ESelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.GetHasFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_KeybindingButton_C::GetHasFocus(class APlayerController* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.GetHasFocus");

	UWB_KeybindingButton_C_GetHasFocus_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebindingJustification
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::SetKeyRebindingJustification()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebindingJustification");

	UWB_KeybindingButton_C_SetKeyRebindingJustification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetIsSelectingText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InKeySelectionText             (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeybindingButton_C::SetIsSelectingText(const struct FText& InKeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetIsSelectingText");

	UWB_KeybindingButton_C_SetIsSelectingText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.HandleIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeybindingButton_C::HandleIsEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.HandleIsEnabled");

	UWB_KeybindingButton_C_HandleIsEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.FindKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESelectedKey_ESelectedKey> ESelectedKey                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InputKeySelector_C*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWB_InputKeySelector_C* UWB_KeybindingButton_C::FindKey(TEnumAsByte<ESelectedKey_ESelectedKey> ESelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.FindKey");

	UWB_KeybindingButton_C_FindKey_Params params;
	params.ESelectedKey = ESelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetNoKeySpecifiedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeybindingButton_C::SetNoKeySpecifiedText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetNoKeySpecifiedText");

	UWB_KeybindingButton_C_SetNoKeySpecifiedText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::SetKeybindingKeysButtonInfo_Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Hovered");

	UWB_KeybindingButton_C_SetKeybindingKeysButtonInfo_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Normal
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::SetKeybindingKeysButtonInfo_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Normal");

	UWB_KeybindingButton_C_SetKeybindingKeysButtonInfo_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeybindingButton_C::SetKeybindingText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingText");

	UWB_KeybindingButton_C_SetKeybindingText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Hovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::SetKeyRebinding_OptionFont_Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Hovered");

	UWB_KeybindingButton_C_SetKeyRebinding_OptionFont_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Normal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::SetKeyRebinding_OptionFont_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Normal");

	UWB_KeybindingButton_C_SetKeyRebinding_OptionFont_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverAllOptionsButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::UnhoverAllOptionsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverAllOptionsButton");

	UWB_KeybindingButton_C_UnhoverAllOptionsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetupSizes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::SetupSizes(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetupSizes");

	UWB_KeybindingButton_C_SetupSizes_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetUser_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::SetUser_Focus(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetUser_Focus");

	UWB_KeybindingButton_C_SetUser_Focus_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetSelectedKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey_ESelectedKey> Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::SetSelectedKey(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetSelectedKey");

	UWB_KeybindingButton_C_SetSelectedKey_Params params;
	params.Key = Key;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey_ESelectedKey> Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeybindingButton_C::SetKeyEnabled(TEnumAsByte<ESelectedKey_ESelectedKey> Key, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyEnabled");

	UWB_KeybindingButton_C_SetKeyEnabled_Params params;
	params.Key = Key;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeySelectionText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey_ESelectedKey> Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   KeySelectionText               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_KeybindingButton_C::SetKeySelectionText(TEnumAsByte<ESelectedKey_ESelectedKey> Key, const struct FText& KeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeySelectionText");

	UWB_KeybindingButton_C_SetKeySelectionText_Params params;
	params.Key = Key;
	params.KeySelectionText = KeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeybindingButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct");

	UWB_KeybindingButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_KeybindingButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.Construct");

	UWB_KeybindingButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             LastSelectedKey                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature_Params params;
	params.LastSelectedKey = LastSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             LastSelectedKey                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature_Params params;
	params.LastSelectedKey = LastSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverKeyRebindingButton
// (BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::UnhoverKeyRebindingButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverKeyRebindingButton");

	UWB_KeybindingButton_C_UnhoverKeyRebindingButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_KeybindingButton_C::BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_KeybindingButton_C::BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.Construct_KeyRebindingOption
// (BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::Construct_KeyRebindingOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.Construct_KeyRebindingOption");

	UWB_KeybindingButton_C_Construct_KeyRebindingOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct_KeyRebindingOption
// (BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::PreConstruct_KeyRebindingOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct_KeyRebindingOption");

	UWB_KeybindingButton_C_PreConstruct_KeyRebindingOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (BlueprintEvent)
void UWB_KeybindingButton_C::BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
// (BlueprintEvent)
void UWB_KeybindingButton_C::BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");

	UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.ResetHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_KeybindingButton_C::ResetHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.ResetHovered");

	UWB_KeybindingButton_C_ResetHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseBaseColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Grad0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetBaseColor");

	UWB_KeybindingButton_C_SetBaseColor_Params params;
	params.bUseBaseColor = bUseBaseColor;
	params.Grad0 = Grad0;
	params.Grad1 = Grad1;
	params.Grad2 = Grad2;
	params.Grad3 = Grad3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.SetupButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseButtonSounds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.SetupButtonSounds");

	UWB_KeybindingButton_C_SetupButtonSounds_Params params;
	params.bUseButtonSounds = bUseButtonSounds;
	params.Clicked = Clicked;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.ExecuteUbergraph_WB_KeybindingButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::ExecuteUbergraph_WB_KeybindingButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.ExecuteUbergraph_WB_KeybindingButton");

	UWB_KeybindingButton_C_ExecuteUbergraph_WB_KeybindingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Right__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             Last_Selected_Key              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::On_Key_Emptied_Right__DelegateSignature(const struct FInputChord& Last_Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Right__DelegateSignature");

	UWB_KeybindingButton_C_On_Key_Emptied_Right__DelegateSignature_Params params;
	params.Last_Selected_Key = Last_Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Left__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             Last_Selected_Key              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeybindingButton_C::On_Key_Emptied_Left__DelegateSignature(const struct FInputChord& Last_Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Left__DelegateSignature");

	UWB_KeybindingButton_C_On_Key_Emptied_Left__DelegateSignature_Params params;
	params.Last_Selected_Key = Last_Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Right__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWB_KeybindingButton_C*  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::On_Selected_Key_Right__DelegateSignature(const struct FInputChord& SelectedKey, class UWB_KeybindingButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Right__DelegateSignature");

	UWB_KeybindingButton_C_On_Selected_Key_Right__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Left__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWB_KeybindingButton_C*  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeybindingButton_C::On_Selected_Key_Left__DelegateSignature(const struct FInputChord& SelectedKey, class UWB_KeybindingButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Left__DelegateSignature");

	UWB_KeybindingButton_C_On_Selected_Key_Left__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
