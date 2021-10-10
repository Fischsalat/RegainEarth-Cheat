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

// WidgetBlueprintGeneratedClass W_KeysButton.W_KeysButton_C
// 0x01B6 (FullSize[0x0460] - InheritedSize[0x02AA])
class UW_KeysButton_C : public UW_ParentButtons_C
{
public:
	unsigned char                                      UnknownData_EZP4[0x6];                                     // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_22;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_4;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                H_Color;                                                   // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnChangeValue;                                             // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsSelectKeyMode;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HY6L[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSInputKeys_RelatedInputKeys                ChosenInputKeys;                                           // 0x0348(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    M_GamepadInput;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    M_KeyboardInput1;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_InputKeys                        Setting_InputKeys;                                         // 0x03B0(0x0090) (Edit, BlueprintVisible, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    M_KeyboardInput2;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelectInputKeyStarted;                                   // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Setting_KeysFrame_C*                      Parent_KeyFrameWidget;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KeysButton.W_KeysButton_C");
		return ptr;
	}



	void SetCustomFocus(bool* IsSuccess);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	TArray<struct FKey> FindAxisKeyMapping(const struct FSInputKey_ConfigAndGraphics& SInputKey, bool* IsSuccess);
	void Add_New_Action_Mapping(struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics, int KeyIconColumn);
	void AddNewAxisMapping(struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics, int KeyIconColumn);
	void SetSelectKeyMode(bool IsSelectKeyMode);
	void SetNewTexture_Text(const struct FKey& Key, class UTexture* Texture, const struct FText& Text, int KeyIconColumn);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void CreateDynamicMaterials();
	void IsActionContains(const struct FName& InActionName, const struct FKey& Key, bool* IsSuccess);
	void IsAxisContains(const struct FName& InAxisName, const struct FKey& Key, bool* IsSuccess);
	void Remove_Input_Key_Action_Mapping(bool IsGamePad, int KeyIconColumn);
	void Set_New_Key_In_Input_Key_Parent_Widget(const struct FKey& Key, int KeyIconColumn);
	void Find_Equal_Keys(const struct FSInputKey_ConfigAndGraphics& SInputKey, int KeyIconColumn);
	void Get_Input_Key_Config_and_Graphics(const struct FKey& NewKey, bool* IsSuccess, struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics);
	struct FSInputKey_ConfigAndGraphics FindKeyInput(const struct FKey& Key, bool* IsSuccess);
	void SetHovered(bool IsHovered, bool* IsSuccess);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Cancel();
	void Accept();
	void SetNewInputKey(const struct FKey& Key, bool IsFindEquals, bool IsBindKeys, int KeyColumn);
	void Construct();
	void RestoreValues(const struct FSSettings_InputKeys& Setting_InputKey, bool IsBindKeys);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_W_KeysButton(int EntryPoint);
	void OnSelectInputKeyStarted__DelegateSignature();
	void OnChangeValue__DelegateSignature(const struct FSSettings_InputKeys& NewValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
