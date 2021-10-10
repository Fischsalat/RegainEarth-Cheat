#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WB_InputKeySelector.WB_InputKeySelector_C.OnPreviewKeyDown
struct UWB_InputKeySelector_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonSounds
struct UWB_InputKeySelector_C_SetButtonSounds_Params
{
	class USoundBase*                                  HoveredSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ClickedSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.UnhoverAllKeyButtons
struct UWB_InputKeySelector_C_UnhoverAllKeyButtons_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.FindKeyboardKey
struct UWB_InputKeySelector_C_FindKeyboardKey_Params
{
	struct FInputChord                                 InputChord;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateCombKey
struct UWB_InputKeySelector_C_TranslateCombKey_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsCombKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateGamepadKeys
struct UWB_InputKeySelector_C_TranslateGamepadKeys_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FText                                       Key_Text;                                                  // (Parm, OutParm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsGamepadKey
struct UWB_InputKeySelector_C_GetIsGamepadKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsGamepadKey;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsKeyboardKey
struct UWB_InputKeySelector_C_GetIsKeyboardKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsKeyboardKey;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetCurrentMappingByIndex
struct UWB_InputKeySelector_C_SetCurrentMappingByIndex_Params
{
	int                                                MappingIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsAxisMapping
struct UWB_InputKeySelector_C_GetIsAxisMapping_Params
{
	struct FName                                       ItemToFind;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAxisMapping;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsActionMapping
struct UWB_InputKeySelector_C_GetIsActionMapping_Params
{
	struct FName                                       ItemToFind;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActionMapping;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeymappingName
struct UWB_InputKeySelector_C_SetKeymappingName_Params
{
	struct FText                                       KeymappingText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Normal
struct UWB_InputKeySelector_C_SetInfo_Normal_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Hovered
struct UWB_InputKeySelector_C_SetInfo_Hovered_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonInfo
struct UWB_InputKeySelector_C_SetButtonInfo_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.PreConstruct
struct UWB_InputKeySelector_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature
struct UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature
struct UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.InitConstruct
struct UWB_InputKeySelector_C_InitConstruct_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.CheckHovered
struct UWB_InputKeySelector_C_CheckHovered_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetNoKeySpecifiedText
struct UWB_InputKeySelector_C_SetNoKeySpecifiedText_Params
{
	struct FText                                       InNoKeySpecifiedText;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetSelectedKey
struct UWB_InputKeySelector_C_SetSelectedKey_Params
{
	struct FInputChord                                 InSelectedKey;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeyRebindingText
struct UWB_InputKeySelector_C_SetKeyRebindingText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeySelectionText
struct UWB_InputKeySelector_C_SetKeySelectionText_Params
{
	struct FText                                       InKeySelectionText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetEnabled
struct UWB_InputKeySelector_C_SetEnabled_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowGamepadKeys
struct UWB_InputKeySelector_C_SetAllowGamepadKeys_Params
{
	bool                                               AllowGamepadKeys;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowModifierKeys
struct UWB_InputKeySelector_C_SetAllowModifierKeys_Params
{
	bool                                               bAllowModifierKeys;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetEscapeKeys
struct UWB_InputKeySelector_C_SetEscapeKeys_Params
{
	TArray<struct FKey>                                InKeys;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.UpdateKeyInfo
struct UWB_InputKeySelector_C_UpdateKeyInfo_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetResponsiveHovering
struct UWB_InputKeySelector_C_SetResponsiveHovering_Params
{
	bool                                               bResponsiveHovering;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.SetLocalSize
struct UWB_InputKeySelector_C_SetLocalSize_Params
{
	struct FVector2D                                   LocalSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.Tick
struct UWB_InputKeySelector_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.ExecuteUbergraph_WB_InputKeySelector
struct UWB_InputKeySelector_C_ExecuteUbergraph_WB_InputKeySelector_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.OnHovered__DelegateSignature
struct UWB_InputKeySelector_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeyEmptied__DelegateSignature
struct UWB_InputKeySelector_C_OnKeyEmptied__DelegateSignature_Params
{
	struct FInputChord                                 LastSelectedKey;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeySelected__DelegateSignature
struct UWB_InputKeySelector_C_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
