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

// WidgetBlueprintGeneratedClass WB_Options_Video.WB_Options_Video_C
// 0x00F1 (FullSize[0x0351] - InheritedSize[0x0260])
class UWB_Options_Video_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            Fade;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           Button_Back;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           Button_ResetDefault;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           InfoButton_LB;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           InfoButton_RB;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_AA_Quality;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_DynamicResolution;                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_FoliageQuality;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_FrameRateLimit;                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_OverallQuality;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_PostProcessQuality;                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_Resolution;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_ResolutionScale;                                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_ShadowQuality;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_TextureQuality;                                     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_VerticalSync;                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_ViewDistance;                                       // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_VisualEffectsQuality;                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_WindowMode;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Tabs;                                                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  Scroll_VideoSettings;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_KeyBindings;                                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_MainMenu;                                       // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_Options;                                        // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Foreground_C*                            WB_Foreground;                                             // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked_Back;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                FocusTimer;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsMainMenu;                                               // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Options_Video.WB_Options_Video_C");
		return ptr;
	}



	void OnScalabilitySettingsDiffer(bool* bDiffer);
	void RunAndApplyHardwareBenchmark(int WorkScale);
	void IsCustom(int Index, bool* bIsCustom);
	void GetScalabilityButtons(TArray<class UWB_StateButton_C*>* Array);
	void SetPostProcessQuality(int Value);
	int GetPostProcessQuality();
	void SetViewDistanceQuality(int Value);
	int GetViewDistanceQuality();
	void SetFoliageQuality(int Value);
	int GetFoliageQuality();
	void SetAAQuality(int Value);
	int GetAAQuality();
	void SetVisualEffectsQuality(int Value);
	int GetVisualEffectsQuality();
	void SetShadowQuality(int Value);
	int GetShadowQuality();
	void SetTextureQuality(int Value);
	int GetTextureQuality();
	bool GetVsync();
	void SetVSync(bool bEnable);
	void GetFrameRateLimit(float* Limit);
	void SetFrameRateLimit(float NewLimit);
	void SetResolutionScaleNormalized(float NewScaleNormalized);
	void SetResolutionScale(float NewScaleValue);
	void GetResolutionScale(float* CurrentScaleNormalized, float* CurrentScaleValue);
	void SaveSettings();
	void ApplyAllSettings();
	void ApplySettings();
	void ApplyNonResolutionSettings();
	bool IsScreenResolutionDirty();
	bool IsFulllscreenModeDirty();
	void SetWindowMode(TEnumAsByte<Engine_EWindowMode> InFullscreenMode);
	TEnumAsByte<Engine_EWindowMode> GetWindowMode();
	void FindButtonResolutionState(const struct FIntPoint& Resolution, bool* Found, int* FoundIndex);
	void TranslateResolutionFromButton(const struct FName& InName, struct FIntPoint* IntPoint);
	struct FName GetScreenResolutionName();
	void HasState(class UWB_StateButton_C* Target, const struct FName& Name, bool* HasState);
	void ApplyResolutionSettings();
	void SetDynamicResolutionEnabled(bool bEnable);
	bool IsDynamicResolutionEnabled();
	bool IsDynamicResolutionDirty();
	struct FIntPoint GetLastConfirmedScreenResolution();
	void SetScreenResolution(const struct FIntPoint& Resolution);
	struct FIntPoint GetDesktopResolution();
	struct FIntPoint GetScreenResolution();
	class UGameUserSettings* GetUserSettings();
	bool GetIsGamepad();
	void ScrollToCurrentlyFocusedWidget();
	void NavToBackButton();
	void NavToOptionsButtons();
	void NavToTextButtons();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void ActivateWidget();
	void OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType);
	void CheckFocus();
	void BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ClickBack();
	void SetGamepadAppearance(bool Active);
	void HandleRemoveWidget();
	void BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnConfirmReset();
	void SetDefaultValues();
	void InitializeVideoSettings();
	void BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void SetupButtons();
	void CheckSettings();
	void SetSavedValues();
	void BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void OnCancelRequest();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Options_Video(int EntryPoint);
	void OnClicked_Back__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
