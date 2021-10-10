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

// WidgetBlueprintGeneratedClass W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C
// 0x0048 (FullSize[0x02B8] - InheritedSize[0x0270])
class UW_BasicInteractionWidgetShowKeysBinding_C : public UW_MasterInteractionWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     KeyBindsBorder;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           KeyBindsGrid;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TB_Title;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                Colums;                                                    // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Key_Bind_Text_Size;                                        // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionNameForInputKeySearch;                               // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MZDK[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ActionText;                                                // 0x02A0(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C");
		return ptr;
	}



	void GetInputKeyAndText(bool* Return_Value, struct FS_ActionAndKeysBind* PossibleActionsAndTheirKeyBinds);
	void Create_Key_Bind_Widgets();
	void Construct();
	void OnInitialized();
	void SetActionText(const struct FText& Text);
	void SetActionNameForInputKeySearch(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKeyName);
	void SetTitleVisibleAndSetTitleText(const struct FText& Title);
	void ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
