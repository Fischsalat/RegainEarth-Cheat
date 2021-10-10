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

// WidgetBlueprintGeneratedClass W_Setting_ControlsFrame.W_Setting_ControlsFrame_C
// 0x0098 (FullSize[0x0328] - InheritedSize[0x0290])
class UW_Setting_ControlsFrame_C : public UW_ParentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    Overlay_2;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_Back;                                                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SliderButton_C*                           W_GamePadAxisSensi;                                        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_InverGamepad;                                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_InverMouse;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SliderButton_C*                           W_Master;                                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResChang;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResDef;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_SwitchButton;                                            // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TimerWarningFrame_C*                      W_WarningFrame;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Save_Controls_Settings_C*                SaveSettings;                                              // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Controls                         SettingsBufer;                                             // 0x0308(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Setting_ControlsFrame.W_Setting_ControlsFrame_C");
		return ptr;
	}



	void RestoreButtonsVisibility();
	bool IsSettingsEqual(const struct FSSettings_Controls& A, const struct FSSettings_Controls& B);
	void Save_SaveSettings();
	void ApplySettings(const struct FSSettings_Controls& SSettings_Controls);
	void RestoreValues(const struct FSSettings_Controls& SSettings_Controls);
	void BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature(int NewValue);
	void ActiveWidget(bool IsActive);
	void OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature();
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature();
	void AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void Construct();
	void BndEvt__W_InverMouse_K2Node_ComponentBoundEvent_0_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_47_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_GamePadAxisSensi_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature(int NewValue);
	void BndEvt__W_InverGamepad_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void ExecuteUbergraph_W_Setting_ControlsFrame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
