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

// WidgetBlueprintGeneratedClass WB_SelectChapter.WB_SelectChapter_C
// 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
class UWB_SelectChapter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            Fade;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_TabButton02_C*                           Button_Back;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_11;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_12;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_13;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_14;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_15;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_16;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_17;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_18;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_19;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_01;                                         // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_02;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_03;                                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_04;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_05;                                         // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_06;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_07;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_08;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ChapterButton_C*                         Button_Chapter_09;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SB_Tabs;                                                   // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_MainMenu;                                       // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_Play;                                           // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TextButton_C*                            TextButton_SelectChapter;                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Foreground_C*                            WB_Foreground;                                             // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked_Back;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                                FocusTimer;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_SelectChapter.WB_SelectChapter_C");
		return ptr;
	}



	void NavToChapterButton();
	void NavToTextButton();
	bool GetIsGamepad();
	void NavToBackButton();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void ActivateWidget();
	void OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType);
	void CheckFocus();
	void ClickBack();
	void SetGamepadAppearance(bool Active);
	void HandleRemoveWidget();
	void BndEvt__Button_Chapter_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_03_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_04_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_05_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_06_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_07_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_08_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_09_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_10_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_11_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_12_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_13_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_14_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_15_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_16_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_17_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
	void BndEvt__Button_Chapter_18_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
	void BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__TextButton_Play_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_SelectChapter(int EntryPoint);
	void OnClicked_Back__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
