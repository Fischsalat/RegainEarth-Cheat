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

// Function WB_KeybindingButton.WB_KeybindingButton_C.GetSelectedKey
struct UWB_KeybindingButton_C_GetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             ESelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.GetHasFocus
struct UWB_KeybindingButton_C_GetHasFocus_Params
{
	class APlayerController*                           InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebindingJustification
struct UWB_KeybindingButton_C_SetKeyRebindingJustification_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetIsSelectingText
struct UWB_KeybindingButton_C_SetIsSelectingText_Params
{
	struct FText                                       InKeySelectionText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.HandleIsEnabled
struct UWB_KeybindingButton_C_HandleIsEnabled_Params
{
	bool                                               IsEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.FindKey
struct UWB_KeybindingButton_C_FindKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             ESelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_InputKeySelector_C*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetNoKeySpecifiedText
struct UWB_KeybindingButton_C_SetNoKeySpecifiedText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Hovered
struct UWB_KeybindingButton_C_SetKeybindingKeysButtonInfo_Hovered_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Normal
struct UWB_KeybindingButton_C_SetKeybindingKeysButtonInfo_Normal_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingText
struct UWB_KeybindingButton_C_SetKeybindingText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Hovered
struct UWB_KeybindingButton_C_SetKeyRebinding_OptionFont_Hovered_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Normal
struct UWB_KeybindingButton_C_SetKeyRebinding_OptionFont_Normal_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverAllOptionsButton
struct UWB_KeybindingButton_C_UnhoverAllOptionsButton_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetupSizes
struct UWB_KeybindingButton_C_SetupSizes_Params
{
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetUser_Focus
struct UWB_KeybindingButton_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetSelectedKey
struct UWB_KeybindingButton_C_SetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyEnabled
struct UWB_KeybindingButton_C_SetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeySelectionText
struct UWB_KeybindingButton_C_SetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey_ESelectedKey>             Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct
struct UWB_KeybindingButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.Construct
struct UWB_KeybindingButton_C_Construct_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature_Params
{
	struct FInputChord                                 LastSelectedKey;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature_Params
{
	struct FInputChord                                 LastSelectedKey;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverKeyRebindingButton
struct UWB_KeybindingButton_C_UnhoverKeyRebindingButton_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.Construct_KeyRebindingOption
struct UWB_KeybindingButton_C_Construct_KeyRebindingOption_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct_KeyRebindingOption
struct UWB_KeybindingButton_C_PreConstruct_KeyRebindingOption_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
struct UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.ResetHovered
struct UWB_KeybindingButton_C_ResetHovered_Params
{
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetBaseColor
struct UWB_KeybindingButton_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.SetupButtonSounds
struct UWB_KeybindingButton_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.ExecuteUbergraph_WB_KeybindingButton
struct UWB_KeybindingButton_C_ExecuteUbergraph_WB_KeybindingButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Right__DelegateSignature
struct UWB_KeybindingButton_C_On_Key_Emptied_Right__DelegateSignature_Params
{
	struct FInputChord                                 Last_Selected_Key;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Left__DelegateSignature
struct UWB_KeybindingButton_C_On_Key_Emptied_Left__DelegateSignature_Params
{
	struct FInputChord                                 Last_Selected_Key;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Right__DelegateSignature
struct UWB_KeybindingButton_C_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Left__DelegateSignature
struct UWB_KeybindingButton_C_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
