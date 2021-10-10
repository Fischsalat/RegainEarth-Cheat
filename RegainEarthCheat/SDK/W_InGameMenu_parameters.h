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

// Function W_InGameMenu.W_InGameMenu_C.OnMouseButtonDown
struct UW_InGameMenu_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_InGameMenu.W_InGameMenu_C.SetActiveFrame
struct UW_InGameMenu_C_SetActiveFrame_Params
{
	class UW_ParentWidget_C*                           ActiveWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.SetVisibilityMenu
struct UW_InGameMenu_C_SetVisibilityMenu_Params
{
	bool                                               IsVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InGameMenu.W_InGameMenu_C.Tick
struct UW_InGameMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.SentButtonPress
struct UW_InGameMenu_C_SentButtonPress_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.Construct
struct UW_InGameMenu_C_Construct_Params
{
};

// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature
struct UW_InGameMenu_C_BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.ExecuteUbergraph_W_InGameMenu
struct UW_InGameMenu_C_ExecuteUbergraph_W_InGameMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameMenu.W_InGameMenu_C.OnResume__DelegateSignature
struct UW_InGameMenu_C_OnResume__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
