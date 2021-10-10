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

// WidgetBlueprintGeneratedClass WB_Options_Audio.WB_Options_Audio_C
// 0x00B1 (FullSize[0x0311] - InheritedSize[0x0260])
class UWB_Options_Audio_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            Fade;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           Button_Back;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           Button_ResetDefault;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           InfoButton_LB;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           InfoButton_RB;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_AudioProfile;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ProgressButton_C*                        Option_DialogueVolume;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ProgressButton_C*                        Option_EffectsVolume;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ProgressButton_C*                        Option_MasterVolume;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_Music;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ProgressButton_C*                        Option_MusicVolume;                                        // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_StateButton_C*                           Option_Subtitles;                                          // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Tabs;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_KeyBindings;                                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_MainMenu;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_Options;                                        // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Foreground_C*                            WB_Foreground;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked_Back;                                            // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                FocusTimer;                                                // 0x0308(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsMainMenu;                                               // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Options_Audio.WB_Options_Audio_C");
		return ptr;
	}



	bool GetIsGamepad();
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
	void BndEvt__Option_MasterVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature(float Value);
	void BndEvt__Option_MusicVolume_K2Node_ComponentBoundEvent_1_OnProgressChanged__DelegateSignature(float Value);
	void BndEvt__Option_DialogueVolume_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature(float Value);
	void BndEvt__Option_EffectsVolume_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature(float Value);
	void BndEvt__Option_AudioProfile_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_Music_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void BndEvt__Option_Subtitles_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex);
	void SetupButtons();
	void OnCancelRequest();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Options_Audio(int EntryPoint);
	void OnClicked_Back__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
