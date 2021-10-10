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

// WidgetBlueprintGeneratedClass W_Setting_DisplayFrame.W_Setting_DisplayFrame_C
// 0x00EB (FullSize[0x037B] - InheritedSize[0x0290])
class UW_Setting_DisplayFrame_C : public UW_ParentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    Overlay_2;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SliderButton_C*                           W_Fov;                                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Lim;                                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_MainFrameButton;                                         // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_Res;                                                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResChang;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainFrameButton_C*                        W_ResDef;                                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_SM;                                                      // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SwitchButton_C*                           W_VS;                                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TimerWarningFrame_C*                      W_WarningFrame;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Save_DisplayImportant_Settings_C*        SaveSettings;                                              // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Display                          SettingsBuffer;                                            // 0x0308(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TFVO[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           CustomListOfGameSupportedPossibleResolutions;              // 0x0330(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                           UE4_ListOfGameSupportedResolutionsByMonitor;               // 0x0340(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_ID_Name>                          ResultListOfResolutionsToChooseFrom;                       // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ConstructorRunAlready;                                     // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FoundSupportedDisplayResolutionsByMonitor_;                // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GWAB[0x2];                                     // 0x036A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentDisplayDefaultResolutionIdOfResolutionsArray;       // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   FoundDefaultResolutionCurrent;                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefaultResolutionIsStillTheSameAsLastGameStart;            // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SavedResolutionIsValid;                                    // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DefaultResolutionIsValid;                                  // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Setting_DisplayFrame.W_Setting_DisplayFrame_C");
		return ptr;
	}



	bool CheckResolutionIsValids(const struct FIntPoint& IntPoint);
	void GetDefaultScreenReslotion(int* DefaultResolutionIndex, struct FIntPoint* DefaultResolution, bool* DefaultResolutionIndexFoundValidIndex);
	void Create_Screen_Resolutions_List();
	void Find_GDC_recursive(int A, int B, int* A1);
	void RestoreButtonsVisibility();
	bool IsSettingsEqual(const struct FSSettings_Display& A, const struct FSSettings_Display& B);
	void Save_SaveSettings();
	void ApplySettings(const struct FSSettings_Display& SSettings_Display);
	void RestoreValues(const struct FSSettings_Display& SSettings_Display);
	struct FIntPoint GetScreenResolutionFromCustomResolutionList(int Index);
	void Construct();
	void BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature(int NewValue);
	void BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature(const struct FName& NewValue);
	void ActiveWidget(bool IsActive);
	void OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature();
	void BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature();
	void AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void ExecuteUbergraph_W_Setting_DisplayFrame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
