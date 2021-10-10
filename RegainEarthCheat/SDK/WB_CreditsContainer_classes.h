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

// WidgetBlueprintGeneratedClass WB_CreditsContainer.WB_CreditsContainer_C
// 0x0031 (FullSize[0x0291] - InheritedSize[0x0260])
class UWB_CreditsContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    OV_Content;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCreditsFinished;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_CreditEntry>                      CreditEntries;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsActive;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CreditsContainer.WB_CreditsContainer_C");
		return ptr;
	}



	void LaunchCredits();
	void RemoveCredits();
	void ClearCreditData();
	void AddCreditData(const struct FText& Field, TArray<struct FName> Names);
	void ExecuteUbergraph_WB_CreditsContainer(int EntryPoint);
	void OnCreditsFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
