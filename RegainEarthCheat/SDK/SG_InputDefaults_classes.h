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

// BlueprintGeneratedClass SG_InputDefaults.SG_InputDefaults_C
// 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
class USG_InputDefaults_C : public USaveGame
{
public:
	TMap<struct FName, struct FKey>                    ActionMappings_KeyboardMouse;                              // 0x0028(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, struct FKey>                    AxisMappings_KeyboardMouse;                                // 0x0078(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, struct FKey>                    ActionMappings_Gamepad;                                    // 0x00C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, struct FKey>                    AxisMappings_Gamepad;                                      // 0x0118(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      AxisMappingScales_KeyboardMouse;                           // 0x0168(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      AxisMappingScales_Gamepad;                                 // 0x0178(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SG_InputDefaults.SG_InputDefaults_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
