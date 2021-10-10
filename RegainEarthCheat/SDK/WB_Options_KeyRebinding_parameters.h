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

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Remap_GamepadKey_Mappings
struct UWB_Options_KeyRebinding_C_Remap_GamepadKey_Mappings_Params
{
	struct FInputChord                                 SelectedKey;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      KeybindingButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxisScale_Gamepad
struct UWB_Options_KeyRebinding_C_FindAxisScale_Gamepad_Params
{
	struct FName                                       ItemToFind;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxisScale_KeyboardMouse
struct UWB_Options_KeyRebinding_C_FindAxisScale_KeyboardMouse_Params
{
	struct FName                                       ItemToFind;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.IsAxisMapping
struct UWB_Options_KeyRebinding_C_IsAxisMapping_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsAxisMapping;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.IsActionMapping
struct UWB_Options_KeyRebinding_C_IsActionMapping_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsActionMapping;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxis_GamepadKey
struct UWB_Options_KeyRebinding_C_FindAxis_GamepadKey_Params
{
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAction_GamepadKey
struct UWB_Options_KeyRebinding_C_FindAction_GamepadKey_Params
{
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxis_KeyboardKey
struct UWB_Options_KeyRebinding_C_FindAxis_KeyboardKey_Params
{
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAction_KeyboardKey
struct UWB_Options_KeyRebinding_C_FindAction_KeyboardKey_Params
{
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.RemoveMapping
struct UWB_Options_KeyRebinding_C_RemoveMapping_Params
{
	struct FInputChord                                 InputChord;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.HandleOnKeyReserved
struct UWB_Options_KeyRebinding_C_HandleOnKeyReserved_Params
{
	struct FInputChord                                 InputChord;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanRebind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Remap_KeyboardKey_Mappings
struct UWB_Options_KeyRebinding_C_Remap_KeyboardKey_Mappings_Params
{
	struct FInputChord                                 SelectedKey;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      KeybindingButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.IsAnyKeybindingButtonSelected
struct UWB_Options_KeyRebinding_C_IsAnyKeybindingButtonSelected_Params
{
	bool                                               IsSelected;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveAxisMappings_Gamepad
struct UWB_Options_KeyRebinding_C_SaveAxisMappings_Gamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveAxisMappings_KeyboardMouse
struct UWB_Options_KeyRebinding_C_SaveAxisMappings_KeyboardMouse_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveActionMappings_Gamepad
struct UWB_Options_KeyRebinding_C_SaveActionMappings_Gamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveActionMappings_KeyboardMouse
struct UWB_Options_KeyRebinding_C_SaveActionMappings_KeyboardMouse_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.GetAllAxisMappingButtons
struct UWB_Options_KeyRebinding_C_GetAllAxisMappingButtons_Params
{
	TArray<class UWB_KeybindingButton_C*>              Array;                                                     // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.GetAllActionMappingButtons
struct UWB_Options_KeyRebinding_C_GetAllActionMappingButtons_Params
{
	TArray<class UWB_KeybindingButton_C*>              Array;                                                     // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ScrollToCurrentlyFocusedWidget
struct UWB_Options_KeyRebinding_C_ScrollToCurrentlyFocusedWidget_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.GetIsGamepad
struct UWB_Options_KeyRebinding_C_GetIsGamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.NavToBackButton
struct UWB_Options_KeyRebinding_C_NavToBackButton_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.NavToOptionsButtons
struct UWB_Options_KeyRebinding_C_NavToOptionsButtons_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.NavToTextButtons
struct UWB_Options_KeyRebinding_C_NavToTextButtons_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnPreviewKeyDown
struct UWB_Options_KeyRebinding_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ActivateWidget
struct UWB_Options_KeyRebinding_C_ActivateWidget_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnInputSwitched
struct UWB_Options_KeyRebinding_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.CheckFocus
struct UWB_Options_KeyRebinding_C_CheckFocus_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ClickBack
struct UWB_Options_KeyRebinding_C_ClickBack_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SetGamepadAppearance
struct UWB_Options_KeyRebinding_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_0_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_0_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_1_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_1_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.HandleRemoveWidget
struct UWB_Options_KeyRebinding_C_HandleRemoveWidget_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SetupKeybindings
struct UWB_Options_KeyRebinding_C_SetupKeybindings_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Setup_ActionMappingKeys
struct UWB_Options_KeyRebinding_C_Setup_ActionMappingKeys_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Setup_AxisMappingKeys
struct UWB_Options_KeyRebinding_C_Setup_AxisMappingKeys_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveDefaultValues
struct UWB_Options_KeyRebinding_C_SaveDefaultValues_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ResetDefaultValues
struct UWB_Options_KeyRebinding_C_ResetDefaultValues_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Construct
struct UWB_Options_KeyRebinding_C_Construct_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnConfirmReset
struct UWB_Options_KeyRebinding_C_OnConfirmReset_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_2_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_2_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_3_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_3_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping01_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping01_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping01_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping01_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping02_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping02_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping02_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping02_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping03_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping03_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping03_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping03_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping04_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping04_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping04_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping04_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping05_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping05_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping05_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping05_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping06_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping06_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping06_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping06_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping07_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping07_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping08_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping08_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping08_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping08_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping09_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping09_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping09_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping09_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping10_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnActionMapping10_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping10_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnActionMapping10_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping01_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping01_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping01_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping01_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_9_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_9_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping02_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping02_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping02_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping02_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_10_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_10_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_11_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_11_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_12_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_12_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_13_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_13_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_14_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_14_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_15_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_15_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_16_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_16_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_17_On Selected Key Left__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_17_On_Selected_Key_Left__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping03_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping03_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping03_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping03_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping04_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping04_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping04_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping04_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping05_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping05_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping05_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping05_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping06_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping06_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping06_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping06_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping07_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping07_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping07_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping07_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping08_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping08_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping08_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping08_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping09_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping09_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping09_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping09_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping10_RebindConfirmed
struct UWB_Options_KeyRebinding_C_OnAxisMapping10_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping10_RebindCancelled
struct UWB_Options_KeyRebinding_C_OnAxisMapping10_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping01_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping01_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping01_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping01_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping02_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping02_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping02_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping02_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping03_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping03_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping03_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping03_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping04_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping04_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping04_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping04_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping05_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping05_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping05_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping05_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping06_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping06_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping06_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping06_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping07_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping07_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping07_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping07_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping08_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping08_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping08_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping08_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping09_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping09_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping09_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping09_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping10_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping10_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping10_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping10_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping01_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping01_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping01_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping01_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_2632_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_2632_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping02_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping02_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping02_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping02_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_9_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_9_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_10_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_10_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_11_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_11_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_12_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_12_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_13_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_13_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_14_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_14_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_15_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_15_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_16_On Selected Key Right__DelegateSignature
struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_16_On_Selected_Key_Right__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWB_KeybindingButton_C*                      Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping03_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping03_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping03_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping03_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping04_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping04_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping04_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping04_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping05_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping05_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping05_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping05_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping06_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping06_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping06_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping06_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping07_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping07_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping07_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping07_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping08_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping08_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping08_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping08_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping09_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping09_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping09_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping09_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping10_RebindConfirmed
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping10_RebindConfirmed_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping10_RebindCancelled
struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping10_RebindCancelled_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnCancelReset
struct UWB_Options_KeyRebinding_C_OnCancelReset_Params
{
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Tick
struct UWB_Options_KeyRebinding_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ExecuteUbergraph_WB_Options_KeyRebinding
struct UWB_Options_KeyRebinding_C_ExecuteUbergraph_WB_Options_KeyRebinding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnClicked_Back__DelegateSignature
struct UWB_Options_KeyRebinding_C_OnClicked_Back__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
