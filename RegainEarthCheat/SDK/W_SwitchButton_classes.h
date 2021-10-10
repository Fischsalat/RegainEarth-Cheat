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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_SwitchButton.W_SwitchButton_C
// 0x0154 (FullSize[0x03FE] - InheritedSize[0x02AA])
class UW_SwitchButton_C : public UW_ParentButtons_C
{
public:
	unsigned char                                      UnknownData_VQOD[0x6];                                     // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_22;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_Arrowleft;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_ArrowLeft;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_ArrowRight;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBoxSwitchIdTexts;                                     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBoxSelectedItem;                                       // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlockSwitchIdTexts;                                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlockTitle;                                            // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcherSimpleSwitchCombobox;                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Color;                                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                H_Color;                                                   // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Description;                                               // 0x0350(0x0018) (Edit, BlueprintVisible)
	TArray<struct FS_ID_Name>                          ID;                                                        // 0x0368(0x0010) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnChangeValue;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       CurrentChoosedID;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       CurrentChoosedName;                                        // 0x0390(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ResetValue;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SetDefaultSelectedItemNumber;                              // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartDeactivatedAndWithoutArrows;                          // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XHS4[0x7];                                     // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SkipOptionsSkipIntegerIDs;                                 // 0x03B8(0x0010) (Edit, BlueprintVisible)
	bool                                               UseComboBoxInsteadSimpleSwitch;                            // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7SL1[0x7];                                     // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ValueSetBeforeCombobBox;                                   // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               GateForExecututeOnValueChangeOpen_;                        // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4O3X[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ComboBoxSelectionChangeCallFinishedOpenGate;               // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              CustomSelectedItemWidthOverride;                           // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugPrintOutIfHovered;                                    // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DEPR_SetAllFontsToScifiIngameFont_;                        // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SwitchButton.W_SwitchButton_C");
		return ptr;
	}



	class UWidget* On_ComboBoxSwitchIdTexts_GenerateWidget_1(const struct FString& Item);
	void GetIdOfGivenNameValue(const struct FText& NameValueToChooseId, struct FName* ID, bool* FoundResult_);
	void GetNameValueAndIndexOfGivenId(const struct FName& IdToChooseName, struct FText* Name, bool* FoundResult_, int* Array_Index);
	void Remove_Int_Of_Skip_Options_Skip_Integer_Option_Index(int Item);
	void ClearSkipOptionsSkipIntegerOptionIndex();
	void Add_Int_to_Skip_Options_Skip_Integer_Option_Index(int NewItem);
	void SetSkipOptionsSkipIntegerOptionIndex(TArray<int> ReplaceSkipOptionsArrayArrayWithArrayParam);
	void GetCurrentIdAndName(struct FText* Name, struct FName* ID);
	void SetCustomFocus(bool* IsSuccess);
	void SetID(const struct FName& ID);
	void SetHovered(bool IsHovered, bool* IsSuccess);
	void Forward();
	void Backward();
	void SetItemOptionValueButNoExecuteIndex(int ResetValueIndex);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Left();
	void Right();
	void Cancel();
	void Accept();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetItemOptionValueAndExecuteIndex(int ResetValueIndex);
	void ForwardCombobox();
	void BackwardCombobox();
	void BndEvt__ComboBoxSwitchIdTexts_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void ForwardSimpleSwitch();
	void BackwardSimpleSwitch();
	void SetItemOptionValueButNoExecuteSimpleSwitchIndex(int ResetValue);
	void SetItemOptionValueAndExecuteSimpleSwitchIndex(int ResetValue);
	void SetItemOptionValueButNoExecuteComboboxIndex(int ResetValue);
	void SetItemOptionValueAndExecuteComboboxIndex(int ResetValue);
	void FillNewOptionEntriesAndSelectOptionIndexWithoutExecute(TArray<struct FS_ID_Name>* ID, int SelectedIndex);
	void AddItemToSelectableOptionList(const struct FS_ID_Name& NewItem);
	void SetItemOptionValueButNoExecuteId(const struct FName& ResetValueId);
	void ComboBoxSelectionChangeCallFinished_Event();
	void SetItemOptionValueAndExecuteId(const struct FName& ResetValueId);
	void TestfunctionTotestGetRootWidgetBP();
	void SetAllFontsToScifiIngameFont();
	void ExecuteUbergraph_W_SwitchButton(int EntryPoint);
	void ComboBoxSelectionChangeCallFinishedOpenGate__DelegateSignature();
	void OnChangeValue__DelegateSignature(const struct FName& NewValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
