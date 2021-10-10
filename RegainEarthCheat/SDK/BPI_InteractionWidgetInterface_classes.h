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

// BlueprintGeneratedClass BPI_InteractionWidgetInterface.BPI_InteractionWidgetInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_InteractionWidgetInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InteractionWidgetInterface.BPI_InteractionWidgetInterface_C");
		return ptr;
	}



	void SetTitleVisibleAndSetTitleText(const struct FText& Title);
	void SetActionNameForInputKeySearch(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKeyName);
	void SetActionText(const struct FText& Text);
	void ParentActor(class AActor* Actor);
	void Interact(const struct FKey& Key, class APawn* Pawn);
	void Toggle_Widget(bool Widget);
	void Clear_Target_and_Stop_Show_Widget();
	void Start_Display_Widget_Set_Current_Target(class APawn* Pawn);
	void Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_ActionAndKeysBind>* Key_Binds);
	void Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
	void Set_Widget_Amount(bool* Return_Value, int* Amount_Value);
	void Set_Widget_Level(bool* Return_Value, struct FText* Level_Text);
	void Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text);
	void Set_Widget_Title(bool* Return_Value, struct FText* Title_Text);
	void Set_Widget_Type(TEnumAsByte<E_WidgetTypes_E_WidgetTypes>* Widget_Type);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
