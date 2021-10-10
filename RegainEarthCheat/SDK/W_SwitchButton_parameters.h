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

// Function W_SwitchButton.W_SwitchButton_C.On_ComboBoxSwitchIdTexts_GenerateWidget_1
struct UW_SwitchButton_C_On_ComboBoxSwitchIdTexts_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.GetIdOfGivenNameValue
struct UW_SwitchButton_C_GetIdOfGivenNameValue_Params
{
	struct FText                                       NameValueToChooseId;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundResult_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SwitchButton.W_SwitchButton_C.GetNameValueAndIndexOfGivenId
struct UW_SwitchButton_C_GetNameValueAndIndexOfGivenId_Params
{
	struct FName                                       IdToChooseName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (Parm, OutParm)
	bool                                               FoundResult_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.Remove Int Of Skip Options Skip Integer Option Index
struct UW_SwitchButton_C_Remove_Int_Of_Skip_Options_Skip_Integer_Option_Index_Params
{
	int                                                Item;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.ClearSkipOptionsSkipIntegerOptionIndex
struct UW_SwitchButton_C_ClearSkipOptionsSkipIntegerOptionIndex_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Add Int to Skip Options Skip Integer Option Index
struct UW_SwitchButton_C_Add_Int_to_Skip_Options_Skip_Integer_Option_Index_Params
{
	int                                                NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetSkipOptionsSkipIntegerOptionIndex
struct UW_SwitchButton_C_SetSkipOptionsSkipIntegerOptionIndex_Params
{
	TArray<int>                                        ReplaceSkipOptionsArrayArrayWithArrayParam;                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_SwitchButton.W_SwitchButton_C.GetCurrentIdAndName
struct UW_SwitchButton_C_GetCurrentIdAndName_Params
{
	struct FText                                       Name;                                                      // (Parm, OutParm)
	struct FName                                       ID;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetCustomFocus
struct UW_SwitchButton_C_SetCustomFocus_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SwitchButton.W_SwitchButton_C.SetID
struct UW_SwitchButton_C_SetID_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetHovered
struct UW_SwitchButton_C_SetHovered_Params
{
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SwitchButton.W_SwitchButton_C.Forward
struct UW_SwitchButton_C_Forward_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Backward
struct UW_SwitchButton_C_Backward_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteIndex
struct UW_SwitchButton_C_SetItemOptionValueButNoExecuteIndex_Params
{
	int                                                ResetValueIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_SwitchButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UW_SwitchButton_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Left
struct UW_SwitchButton_C_Left_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Right
struct UW_SwitchButton_C_Right_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Cancel
struct UW_SwitchButton_C_Cancel_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Accept
struct UW_SwitchButton_C_Accept_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.PreConstruct
struct UW_SwitchButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_SwitchButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.Tick
struct UW_SwitchButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteIndex
struct UW_SwitchButton_C_SetItemOptionValueAndExecuteIndex_Params
{
	int                                                ResetValueIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.ForwardCombobox
struct UW_SwitchButton_C_ForwardCombobox_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.BackwardCombobox
struct UW_SwitchButton_C_BackwardCombobox_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
struct UW_SwitchButton_C_BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.ForwardSimpleSwitch
struct UW_SwitchButton_C_ForwardSimpleSwitch_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.BackwardSimpleSwitch
struct UW_SwitchButton_C_BackwardSimpleSwitch_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteSimpleSwitchIndex
struct UW_SwitchButton_C_SetItemOptionValueButNoExecuteSimpleSwitchIndex_Params
{
	int                                                ResetValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteSimpleSwitchIndex
struct UW_SwitchButton_C_SetItemOptionValueAndExecuteSimpleSwitchIndex_Params
{
	int                                                ResetValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteComboboxIndex
struct UW_SwitchButton_C_SetItemOptionValueButNoExecuteComboboxIndex_Params
{
	int                                                ResetValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteComboboxIndex
struct UW_SwitchButton_C_SetItemOptionValueAndExecuteComboboxIndex_Params
{
	int                                                ResetValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.FillNewOptionEntriesAndSelectOptionIndexWithoutExecute
struct UW_SwitchButton_C_FillNewOptionEntriesAndSelectOptionIndexWithoutExecute_Params
{
	TArray<struct FS_ID_Name>                          ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                SelectedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.AddItemToSelectableOptionList
struct UW_SwitchButton_C_AddItemToSelectableOptionList_Params
{
	struct FS_ID_Name                                  NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteId
struct UW_SwitchButton_C_SetItemOptionValueButNoExecuteId_Params
{
	struct FName                                       ResetValueId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.ComboBoxSelectionChangeCallFinished_Event
struct UW_SwitchButton_C_ComboBoxSelectionChangeCallFinished_Event_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteId
struct UW_SwitchButton_C_SetItemOptionValueAndExecuteId_Params
{
	struct FName                                       ResetValueId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.TestfunctionTotestGetRootWidgetBP
struct UW_SwitchButton_C_TestfunctionTotestGetRootWidgetBP_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.SetAllFontsToScifiIngameFont
struct UW_SwitchButton_C_SetAllFontsToScifiIngameFont_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.ExecuteUbergraph_W_SwitchButton
struct UW_SwitchButton_C_ExecuteUbergraph_W_SwitchButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SwitchButton.W_SwitchButton_C.ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature
struct UW_SwitchButton_C_ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature_Params
{
};

// Function W_SwitchButton.W_SwitchButton_C.OnChangeValue__DelegateSignature
struct UW_SwitchButton_C_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
