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

// BlueprintGeneratedClass BP_PlayerController_MainMenu.BP_PlayerController_MainMenu_C
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class ABP_PlayerController_MainMenu_C : public ABP_PC_InputDetect_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController_MainMenu.BP_PlayerController_MainMenu_C");
		return ptr;
	}



	void UpdateInputMode(bool ShowMouseCursor, class UWidget* InWidgetToFocus);
	void ExecuteUbergraph_BP_PlayerController_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
