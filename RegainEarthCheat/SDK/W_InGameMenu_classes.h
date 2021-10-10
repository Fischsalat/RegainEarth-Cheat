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

// WidgetBlueprintGeneratedClass W_InGameMenu.W_InGameMenu_C
// 0x00A0 (FullSize[0x0310] - InheritedSize[0x0270])
class UW_InGameMenu_C : public UW_MasterWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UW_AnswerFrame_C*                            W_AnswerFrame;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InGameFrame_C*                            W_InGameFrame;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LeaderboardFrame_C*                       W_LeaderboardFrameEndGameScreen;                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LeaderboardFrame_C*                       W_LeaderboardFrameRunningGameStats;                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_BrightnessFrame_C*                W_Setting_BrightnessFrame;                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_ControlsFrame_C*                  W_Setting_ControlsFrame;                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_DisplayFrame_C*                   W_Setting_DisplayFrame;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_GameplayFrame_C*                  W_Setting_GameplayFrame;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_KeysFrame_C*                      W_Setting_KeysFrame;                                       // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_PlayerSettingsFrame_C*            W_Setting_PlayerSettingsFrame;                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_QualityFrame_C*                   W_Setting_ScreenFrame;                                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Setting_SoundFrame_C*                     W_Setting_SoundFrame;                                      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SettingsFrame_C*                          W_SettingsFrame;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ParentWidget_C*                           CurrentActiveWidget;                                       // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                        Sequncer;                                                  // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnResume;                                                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       ButtonID;                                                  // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InGameMenu.W_InGameMenu_C");
		return ptr;
	}



	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetActiveFrame(class UW_ParentWidget_C* ActiveWidget);
	void BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void SetVisibilityMenu(bool IsVisibility);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void SentButtonPress(const struct FName& ID);
	void BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void Construct();
	void BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature(const struct FName& ID);
	void ExecuteUbergraph_W_InGameMenu(int EntryPoint);
	void OnResume__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
