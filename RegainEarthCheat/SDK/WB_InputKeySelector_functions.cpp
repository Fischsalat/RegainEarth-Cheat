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

// Function WB_InputKeySelector.WB_InputKeySelector_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_InputKeySelector_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnPreviewKeyDown");

	UWB_InputKeySelector_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              HoveredSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              ClickedSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputKeySelector_C::SetButtonSounds(class USoundBase* HoveredSound, class USoundBase* ClickedSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonSounds");

	UWB_InputKeySelector_C_SetButtonSounds_Params params;
	params.HoveredSound = HoveredSound;
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.UnhoverAllKeyButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::UnhoverAllKeyButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.UnhoverAllKeyButtons");

	UWB_InputKeySelector_C_UnhoverAllKeyButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.FindKeyboardKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInputChord             InputChord                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_InputKeySelector_C::FindKeyboardKey(struct FInputChord* InputChord)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.FindKeyboardKey");

	UWB_InputKeySelector_C_FindKeyboardKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputChord != nullptr)
		*InputChord = params.InputChord;


	return params.ReturnValue;
}


// Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateCombKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsCombKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_InputKeySelector_C::TranslateCombKey(const struct FKey& Key, bool IsCombKey, const struct FString& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateCombKey");

	UWB_InputKeySelector_C_TranslateCombKey_Params params;
	params.Key = Key;
	params.IsCombKey = IsCombKey;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateGamepadKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FText                   Key_Text                       (Parm, OutParm)
void UWB_InputKeySelector_C::TranslateGamepadKeys(const struct FKey& Key, struct FText* Key_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateGamepadKeys");

	UWB_InputKeySelector_C_TranslateGamepadKeys_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key_Text != nullptr)
		*Key_Text = params.Key_Text;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsGamepadKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           bIsGamepadKey                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::GetIsGamepadKey(const struct FKey& Key, bool* bIsGamepadKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsGamepadKey");

	UWB_InputKeySelector_C_GetIsGamepadKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsGamepadKey != nullptr)
		*bIsGamepadKey = params.bIsGamepadKey;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsKeyboardKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           bIsKeyboardKey                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::GetIsKeyboardKey(const struct FKey& Key, bool* bIsKeyboardKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsKeyboardKey");

	UWB_InputKeySelector_C_GetIsKeyboardKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsKeyboardKey != nullptr)
		*bIsKeyboardKey = params.bIsKeyboardKey;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetCurrentMappingByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MappingIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputKeySelector_C::SetCurrentMappingByIndex(int MappingIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetCurrentMappingByIndex");

	UWB_InputKeySelector_C_SetCurrentMappingByIndex_Params params;
	params.MappingIndex = MappingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsAxisMapping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsAxisMapping                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::GetIsAxisMapping(const struct FName& ItemToFind, bool* bIsAxisMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsAxisMapping");

	UWB_InputKeySelector_C_GetIsAxisMapping_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsAxisMapping != nullptr)
		*bIsAxisMapping = params.bIsAxisMapping;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsActionMapping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsActionMapping               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::GetIsActionMapping(const struct FName& ItemToFind, bool* bIsActionMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsActionMapping");

	UWB_InputKeySelector_C_GetIsActionMapping_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsActionMapping != nullptr)
		*bIsActionMapping = params.bIsActionMapping;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeymappingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   KeymappingText                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_InputKeySelector_C::SetKeymappingName(const struct FText& KeymappingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeymappingName");

	UWB_InputKeySelector_C_SetKeymappingName_Params params;
	params.KeymappingText = KeymappingText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Normal
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::SetInfo_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Normal");

	UWB_InputKeySelector_C_SetInfo_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::SetInfo_Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Hovered");

	UWB_InputKeySelector_C_SetInfo_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FillColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputKeySelector_C::SetButtonInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& TextColor, const struct FLinearColor& FrameColor, const struct FLinearColor& FillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonInfo");

	UWB_InputKeySelector_C_SetButtonInfo_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.TextColor = TextColor;
	params.FrameColor = FrameColor;
	params.FillColor = FillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.PreConstruct");

	UWB_InputKeySelector_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_InputKeySelector_C::BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature");

	UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
void UWB_InputKeySelector_C::BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature");

	UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.InitConstruct
// (BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::InitConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.InitConstruct");

	UWB_InputKeySelector_C_InitConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.CheckHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::CheckHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.CheckHovered");

	UWB_InputKeySelector_C_CheckHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetNoKeySpecifiedText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InNoKeySpecifiedText           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_InputKeySelector_C::SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetNoKeySpecifiedText");

	UWB_InputKeySelector_C_SetNoKeySpecifiedText_Params params;
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetSelectedKey
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             InSelectedKey                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWB_InputKeySelector_C::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetSelectedKey");

	UWB_InputKeySelector_C_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeyRebindingText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_InputKeySelector_C::SetKeyRebindingText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeyRebindingText");

	UWB_InputKeySelector_C_SetKeyRebindingText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeySelectionText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InKeySelectionText             (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_InputKeySelector_C::SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeySelectionText");

	UWB_InputKeySelector_C_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetEnabled");

	UWB_InputKeySelector_C_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowGamepadKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowGamepadKeys               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::SetAllowGamepadKeys(bool AllowGamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowGamepadKeys");

	UWB_InputKeySelector_C_SetAllowGamepadKeys_Params params;
	params.AllowGamepadKeys = AllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowModifierKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllowModifierKeys             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::SetAllowModifierKeys(bool bAllowModifierKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowModifierKeys");

	UWB_InputKeySelector_C_SetAllowModifierKeys_Params params;
	params.bAllowModifierKeys = bAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetEscapeKeys
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKey>            InKeys                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_InputKeySelector_C::SetEscapeKeys(TArray<struct FKey> InKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetEscapeKeys");

	UWB_InputKeySelector_C_SetEscapeKeys_Params params;
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.UpdateKeyInfo
// (BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::UpdateKeyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.UpdateKeyInfo");

	UWB_InputKeySelector_C_UpdateKeyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetResponsiveHovering
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResponsiveHovering            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputKeySelector_C::SetResponsiveHovering(bool bResponsiveHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetResponsiveHovering");

	UWB_InputKeySelector_C_SetResponsiveHovering_Params params;
	params.bResponsiveHovering = bResponsiveHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.SetLocalSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               LocalSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputKeySelector_C::SetLocalSize(const struct FVector2D& LocalSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetLocalSize");

	UWB_InputKeySelector_C_SetLocalSize_Params params;
	params.LocalSize = LocalSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputKeySelector_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.Tick");

	UWB_InputKeySelector_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.ExecuteUbergraph_WB_InputKeySelector
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputKeySelector_C::ExecuteUbergraph_WB_InputKeySelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.ExecuteUbergraph_WB_InputKeySelector");

	UWB_InputKeySelector_C_ExecuteUbergraph_WB_InputKeySelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_InputKeySelector_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnHovered__DelegateSignature");

	UWB_InputKeySelector_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeyEmptied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             LastSelectedKey                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_InputKeySelector_C::OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeyEmptied__DelegateSignature");

	UWB_InputKeySelector_C_OnKeyEmptied__DelegateSignature_Params params;
	params.LastSelectedKey = LastSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeySelected__DelegateSignature");

	UWB_InputKeySelector_C_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
