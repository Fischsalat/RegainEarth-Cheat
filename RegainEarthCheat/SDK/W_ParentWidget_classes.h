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

// WidgetBlueprintGeneratedClass W_ParentWidget.W_ParentWidget_C
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UW_ParentWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               IsActive;                                                  // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2ZTH[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPressedButtons;                                          // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHoveredButtons;                                          // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ParentWidget.W_ParentWidget_C");
		return ptr;
	}



	void Construct();
	void ActiveWidget(bool IsActive);
	void OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton);
	void AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton);
	void OnBack(class UW_ParentButtons_C* ParentButton);
	void OnInitialized();
	void ExecuteUbergraph_W_ParentWidget(int EntryPoint);
	void OnHoveredButtons__DelegateSignature(const struct FText& Description);
	void OnPressedButtons__DelegateSignature(const struct FName& ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
