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

// WidgetBlueprintGeneratedClass W_Setting_QualityFrame.W_Setting_QualityFrame_C
// 0x0124 (FullSize[0x03B4] - InheritedSize[0x0290])
class UW_Setting_QualityFrame_C : public UW_ParentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    Overlay_2;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBoxLeft;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBoxRight;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_AA;                                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_Back;                                                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Bloom;                                                   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_DepthOfField;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Effects;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Foll;                                                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_GiveMeExtremSettings;                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_JitterGrain;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Lensflare;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_MainFrameButton_1;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_MotionBlur;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_PP;                                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResChang;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResDef;                                                  // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_RS;                                                      // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Shad;                                                    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Textures;                                                // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_VD;                                                      // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TimerWarningFrame_C*                      W_WarningFrame;                                            // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Save_QualityUe4Scalability_Settings_C*   SaveSettingsQualityUe4Scalability;                         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Save_QualityCustom_Settings_C*           SaveSettingsQualityCustom;                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Quality                          SettingsBufferQualiScalability;                            // 0x0368(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_QualityCustom                    SettingsBufferQualiCustom;                                 // 0x038C(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowMeExtremeHighSettings;                                 // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ConstructorRunAlready;                                     // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RemoveIntOfIgnoreAlreadyRun_;                              // 0x03B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AddIntToIgnoreAlreadyRun_;                                 // 0x03B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Setting_QualityFrame.W_Setting_QualityFrame_C");
		return ptr;
	}



	void RestoreButtonsVisibility();
	bool IsSettingsEqual(const struct FSSettings_Quality& Q1, const struct FSSettings_Quality& Q1_defaults, const struct FSSettings_QualityCustom& Q2, const struct FSSettings_QualityCustom& Q2_defaults);
	void Save_SaveSettings();
	void MyApplySetting(const struct FSSettings_Quality& SSettings_Quality_Scalability, const struct FSSettings_QualityCustom& SSettings_Quality_Custom);
	void RestoreValues(const struct FSSettings_Quality& SSettings_Quality_Scalability, const struct FSSettings_QualityCustom& SSettings_Quality_Custom);
	int ParamToIntQualityNames(const struct FName& Selection);
	void Construct();
	void BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void ActiveWidget(bool IsActive);
	void OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature();
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature();
	void AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void OnInitialized();
	void BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void ExecuteUbergraph_W_Setting_QualityFrame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
