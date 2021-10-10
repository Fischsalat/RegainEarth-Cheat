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

// BlueprintGeneratedClass BP_Keybinding_Functions.BP_Keybinding_Functions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_Keybinding_Functions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Keybinding_Functions.BP_Keybinding_Functions_C");
		return ptr;
	}



	void STATIC_CheckIsKeyInUse(const struct FKey& Key, class UObject* __WorldContext, bool* IsReserved, struct FName* MappingName);
	bool STATIC_FindAxisMappingKeyboardKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key, float* Scale);
	bool STATIC_FindAxisMappingGamepadKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key, float* Scale);
	bool STATIC_FindActionMappingKeyboardKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key);
	bool STATIC_FindActionMappingGamepadKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key);
	void STATIC_IsMouseKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsMouseKey);
	void STATIC_IsKeyboardKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsKeyboardKey);
	void STATIC_IsGamepadKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsGamepadKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
