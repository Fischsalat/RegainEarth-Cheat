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

// Function W_SwitchButton.W_SwitchButton_C.On_ComboBoxSwitchIdTexts_GenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_SwitchButton_C::On_ComboBoxSwitchIdTexts_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.On_ComboBoxSwitchIdTexts_GenerateWidget_1");

	UW_SwitchButton_C_On_ComboBoxSwitchIdTexts_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SwitchButton.W_SwitchButton_C.GetIdOfGivenNameValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NameValueToChooseId            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FoundResult_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SwitchButton_C::GetIdOfGivenNameValue(const struct FText& NameValueToChooseId, struct FName* ID, bool* FoundResult_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.GetIdOfGivenNameValue");

	UW_SwitchButton_C_GetIdOfGivenNameValue_Params params;
	params.NameValueToChooseId = NameValueToChooseId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
	if (FoundResult_ != nullptr)
		*FoundResult_ = params.FoundResult_;

}


// Function W_SwitchButton.W_SwitchButton_C.GetNameValueAndIndexOfGivenId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   IdToChooseName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (Parm, OutParm)
// bool                           FoundResult_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::GetNameValueAndIndexOfGivenId(const struct FName& IdToChooseName, struct FText* Name, bool* FoundResult_, int* Array_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.GetNameValueAndIndexOfGivenId");

	UW_SwitchButton_C_GetNameValueAndIndexOfGivenId_Params params;
	params.IdToChooseName = IdToChooseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (FoundResult_ != nullptr)
		*FoundResult_ = params.FoundResult_;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function W_SwitchButton.W_SwitchButton_C.Remove Int Of Skip Options Skip Integer Option Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::Remove_Int_Of_Skip_Options_Skip_Integer_Option_Index(int Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Remove Int Of Skip Options Skip Integer Option Index");

	UW_SwitchButton_C_Remove_Int_Of_Skip_Options_Skip_Integer_Option_Index_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.ClearSkipOptionsSkipIntegerOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::ClearSkipOptionsSkipIntegerOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.ClearSkipOptionsSkipIntegerOptionIndex");

	UW_SwitchButton_C_ClearSkipOptionsSkipIntegerOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Add Int to Skip Options Skip Integer Option Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::Add_Int_to_Skip_Options_Skip_Integer_Option_Index(int NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Add Int to Skip Options Skip Integer Option Index");

	UW_SwitchButton_C_Add_Int_to_Skip_Options_Skip_Integer_Option_Index_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetSkipOptionsSkipIntegerOptionIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ReplaceSkipOptionsArrayArrayWithArrayParam (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_SwitchButton_C::SetSkipOptionsSkipIntegerOptionIndex(TArray<int> ReplaceSkipOptionsArrayArrayWithArrayParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetSkipOptionsSkipIntegerOptionIndex");

	UW_SwitchButton_C_SetSkipOptionsSkipIntegerOptionIndex_Params params;
	params.ReplaceSkipOptionsArrayArrayWithArrayParam = ReplaceSkipOptionsArrayArrayWithArrayParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.GetCurrentIdAndName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::GetCurrentIdAndName(struct FText* Name, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.GetCurrentIdAndName");

	UW_SwitchButton_C_GetCurrentIdAndName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_SwitchButton.W_SwitchButton_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SwitchButton_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetCustomFocus");

	UW_SwitchButton_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_SwitchButton.W_SwitchButton_C.SetID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetID(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetID");

	UW_SwitchButton_C_SetID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SwitchButton_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetHovered");

	UW_SwitchButton_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_SwitchButton.W_SwitchButton_C.Forward
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Forward");

	UW_SwitchButton_C_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Backward
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Backward");

	UW_SwitchButton_C_Backward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResetValueIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueButNoExecuteIndex(int ResetValueIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteIndex");

	UW_SwitchButton_C_SetItemOptionValueButNoExecuteIndex_Params params;
	params.ResetValueIndex = ResetValueIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SwitchButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_SwitchButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SwitchButton_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_SwitchButton_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Left
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Left");

	UW_SwitchButton_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Right
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Right");

	UW_SwitchButton_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Cancel");

	UW_SwitchButton_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Accept");

	UW_SwitchButton_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SwitchButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.PreConstruct");

	UW_SwitchButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SwitchButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_SwitchButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.Tick");

	UW_SwitchButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResetValueIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueAndExecuteIndex(int ResetValueIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteIndex");

	UW_SwitchButton_C_SetItemOptionValueAndExecuteIndex_Params params;
	params.ResetValueIndex = ResetValueIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.ForwardCombobox
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::ForwardCombobox()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.ForwardCombobox");

	UW_SwitchButton_C_ForwardCombobox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.BackwardCombobox
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::BackwardCombobox()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.BackwardCombobox");

	UW_SwitchButton_C_BackwardCombobox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	UW_SwitchButton_C_BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.ForwardSimpleSwitch
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::ForwardSimpleSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.ForwardSimpleSwitch");

	UW_SwitchButton_C_ForwardSimpleSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.BackwardSimpleSwitch
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::BackwardSimpleSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.BackwardSimpleSwitch");

	UW_SwitchButton_C_BackwardSimpleSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteSimpleSwitchIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResetValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueButNoExecuteSimpleSwitchIndex(int ResetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteSimpleSwitchIndex");

	UW_SwitchButton_C_SetItemOptionValueButNoExecuteSimpleSwitchIndex_Params params;
	params.ResetValue = ResetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteSimpleSwitchIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResetValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueAndExecuteSimpleSwitchIndex(int ResetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteSimpleSwitchIndex");

	UW_SwitchButton_C_SetItemOptionValueAndExecuteSimpleSwitchIndex_Params params;
	params.ResetValue = ResetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteComboboxIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResetValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueButNoExecuteComboboxIndex(int ResetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteComboboxIndex");

	UW_SwitchButton_C_SetItemOptionValueButNoExecuteComboboxIndex_Params params;
	params.ResetValue = ResetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteComboboxIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResetValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueAndExecuteComboboxIndex(int ResetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteComboboxIndex");

	UW_SwitchButton_C_SetItemOptionValueAndExecuteComboboxIndex_Params params;
	params.ResetValue = ResetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.FillNewOptionEntriesAndSelectOptionIndexWithoutExecute
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ID_Name>      ID                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::FillNewOptionEntriesAndSelectOptionIndexWithoutExecute(TArray<struct FS_ID_Name>* ID, int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.FillNewOptionEntriesAndSelectOptionIndexWithoutExecute");

	UW_SwitchButton_C_FillNewOptionEntriesAndSelectOptionIndexWithoutExecute_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function W_SwitchButton.W_SwitchButton_C.AddItemToSelectableOptionList
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ID_Name              NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UW_SwitchButton_C::AddItemToSelectableOptionList(const struct FS_ID_Name& NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.AddItemToSelectableOptionList");

	UW_SwitchButton_C_AddItemToSelectableOptionList_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ResetValueId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueButNoExecuteId(const struct FName& ResetValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueButNoExecuteId");

	UW_SwitchButton_C_SetItemOptionValueButNoExecuteId_Params params;
	params.ResetValueId = ResetValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.ComboBoxSelectionChangeCallFinished_Event
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::ComboBoxSelectionChangeCallFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.ComboBoxSelectionChangeCallFinished_Event");

	UW_SwitchButton_C_ComboBoxSelectionChangeCallFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ResetValueId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::SetItemOptionValueAndExecuteId(const struct FName& ResetValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetItemOptionValueAndExecuteId");

	UW_SwitchButton_C_SetItemOptionValueAndExecuteId_Params params;
	params.ResetValueId = ResetValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.TestfunctionTotestGetRootWidgetBP
// (BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::TestfunctionTotestGetRootWidgetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.TestfunctionTotestGetRootWidgetBP");

	UW_SwitchButton_C_TestfunctionTotestGetRootWidgetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.SetAllFontsToScifiIngameFont
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::SetAllFontsToScifiIngameFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.SetAllFontsToScifiIngameFont");

	UW_SwitchButton_C_SetAllFontsToScifiIngameFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.ExecuteUbergraph_W_SwitchButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::ExecuteUbergraph_W_SwitchButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.ExecuteUbergraph_W_SwitchButton");

	UW_SwitchButton_C_ExecuteUbergraph_W_SwitchButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_SwitchButton_C::ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature");

	UW_SwitchButton_C_ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SwitchButton.W_SwitchButton_C.OnChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SwitchButton_C::OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SwitchButton.W_SwitchButton_C.OnChangeValue__DelegateSignature");

	UW_SwitchButton_C_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
