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

// BlueprintGeneratedClass BP_PauseMenu_Functions.BP_PauseMenu_Functions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_PauseMenu_Functions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PauseMenu_Functions.BP_PauseMenu_Functions_C");
		return ptr;
	}



	void STATIC_HandlePauseMenu(class UObject* Player_Character_or_Pawn, bool Set_Game_Paused, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
