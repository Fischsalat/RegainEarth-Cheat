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
// Parameters
//---------------------------------------------------------------------------

// Function W_SettingsFrame.W_SettingsFrame_C.GetAllButtons
struct UW_SettingsFrame_C_GetAllButtons_Params
{
	TArray<class UW_MainFrameButton_C*>                Buttons;                                                   // (Parm, OutParm, ContainsInstancedReference)
};

// Function W_SettingsFrame.W_SettingsFrame_C.ActiveWidget
struct UW_SettingsFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_SettingsFrame.W_SettingsFrame_C.OnHovered
struct UW_SettingsFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_SettingsFrame.W_SettingsFrame_C.ExecuteUbergraph_W_SettingsFrame
struct UW_SettingsFrame_C_ExecuteUbergraph_W_SettingsFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
