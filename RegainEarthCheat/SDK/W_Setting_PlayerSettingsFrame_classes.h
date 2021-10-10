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

// WidgetBlueprintGeneratedClass W_Setting_PlayerSettingsFrame.W_Setting_PlayerSettingsFrame_C
// 0x0079 (FullSize[0x0309] - InheritedSize[0x0290])
class UW_Setting_PlayerSettingsFrame_C : public UW_ParentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    Overlay_2;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_Back;                                                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_PlayerModelSkin;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResChang;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResDef;                                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TimerWarningFrame_C*                      W_WarningFrame;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Save_Player_Settings_C*                  SaveSettings;                                              // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Player                           SettingsBufer;                                             // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ConstructorRunAlready;                                     // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Setting_PlayerSettingsFrame.W_Setting_PlayerSettingsFrame_C");
		return ptr;
	}



	void FillButtonWithAvailableModelSkins(bool* NewParam);
	float CalcAndClampSound(int inInt);
	void RestoreButtonsVisibility();
	bool IsSettingsEqual(const struct FSSettings_Player& A, const struct FSSettings_Player& B);
	void Save_SaveSettings();
	void ApplySettings(const struct FSSettings_Player& SSettings_Sounds);
	void RestoreValues(const struct FSSettings_Player& SSettings_Sounds);
	void Construct();
	void BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void ActiveWidget(bool IsActive);
	void OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature();
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature();
	void AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_PlayerModelSkin_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void ExecuteUbergraph_W_Setting_PlayerSettingsFrame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
