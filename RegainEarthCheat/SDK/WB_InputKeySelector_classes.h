﻿#pragma once

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

// WidgetBlueprintGeneratedClass WB_InputKeySelector.WB_InputKeySelector_C
// 0x0158 (FullSize[0x03B8] - InheritedSize[0x0260])
class UWB_InputKeySelector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     B_KeyRebinding_FillColor;                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           Input_KeySelector;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Frame03_C*                               KeyRebinding_Frame;                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  KeyRebinding_Text;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Content;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFont*                                       Font_Normal;                                               // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFaceNormal;                                            // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSizeNormal;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColorNormal;                                           // 0x02A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColorNormal;                                          // 0x02B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColorNormal;                                           // 0x02C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q512[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       FontHovered;                                               // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFaceHovered;                                           // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSizeHovered;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColorHovered;                                          // 0x02EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColorHovered;                                         // 0x02FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColorHovered;                                          // 0x030C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       KeymappingName;                                            // 0x031C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActionMapping;                                          // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsAxisMapping;                                            // 0x0325(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSelecting;                                              // 0x0326(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5SPG[0x1];                                     // 0x0327(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKeySelected;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bEnabled;                                                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasKeySelected;                                           // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7BGN[0x6];                                     // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SelectedKeyText;                                           // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bResponsiveHovering;                                       // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GNWP[0x7];                                     // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ClickedSound;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HoveredSound;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnKeyEmptied;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInputChord                                 LastSelectedKey;                                           // 0x0380(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                                   LocalSize;                                                 // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_InputKeySelector.WB_InputKeySelector_C");
		return ptr;
	}



	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetButtonSounds(class USoundBase* HoveredSound, class USoundBase* ClickedSound);
	void UnhoverAllKeyButtons();
	struct FText FindKeyboardKey(struct FInputChord* InputChord);
	struct FText TranslateCombKey(const struct FKey& Key, bool IsCombKey, const struct FString& A);
	void TranslateGamepadKeys(const struct FKey& Key, struct FText* Key_Text);
	void GetIsGamepadKey(const struct FKey& Key, bool* bIsGamepadKey);
	void GetIsKeyboardKey(const struct FKey& Key, bool* bIsKeyboardKey);
	void SetCurrentMappingByIndex(int MappingIndex);
	void GetIsAxisMapping(const struct FName& ItemToFind, bool* bIsAxisMapping);
	void GetIsActionMapping(const struct FName& ItemToFind, bool* bIsActionMapping);
	void SetKeymappingName(const struct FText& KeymappingText);
	void SetInfo_Normal();
	void SetInfo_Hovered();
	void SetButtonInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& TextColor, const struct FLinearColor& FrameColor, const struct FLinearColor& FillColor);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature();
	void InitConstruct();
	void CheckHovered();
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetKeyRebindingText(const struct FText& InText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEnabled(bool bEnabled);
	void SetAllowGamepadKeys(bool AllowGamepadKeys);
	void SetAllowModifierKeys(bool bAllowModifierKeys);
	void SetEscapeKeys(TArray<struct FKey> InKeys);
	void UpdateKeyInfo();
	void SetResponsiveHovering(bool bResponsiveHovering);
	void SetLocalSize(const struct FVector2D& LocalSize);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_InputKeySelector(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
