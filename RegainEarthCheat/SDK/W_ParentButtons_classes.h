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

// WidgetBlueprintGeneratedClass W_ParentButtons.W_ParentButtons_C
// 0x004A (FullSize[0x02AA] - InheritedSize[0x0260])
class UW_ParentButtons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsButtonHovered;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMouseHovered;                                            // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPaused;                                                  // 0x028A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TQPU[0x5];                                     // 0x028B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_MasterWidget_C*                           W_MasterWidget;                                            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnBack;                                                    // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<EButtonCategories_EButtonCategories>   ButtonStyleCategory;                                       // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInNonHoverModeWritingMode;                               // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ParentButtons.W_ParentButtons_C");
		return ptr;
	}



	void SetIsInNonHoverWritingMode(bool NewParam);
	void SetButtonAndTextColorToButtonCategory(class UTextBlock* TextBlock);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ClearMousePosition();
	void SetCustomFocus(bool* IsSuccess);
	void SetHovered(bool IsHovered, bool* IsSuccess);
	void Up();
	void Down();
	void Left();
	void Right();
	void Accept();
	void Cancel();
	void SetFocus_Delay();
	void Pause();
	void ExecuteUbergraph_W_ParentButtons(int EntryPoint);
	void OnBack__DelegateSignature(class UW_ParentButtons_C* ParentButton);
	void OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void OnHovered__DelegateSignature(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
