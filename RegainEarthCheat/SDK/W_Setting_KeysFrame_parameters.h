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

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.CreateKeyWidget
struct UW_Setting_KeysFrame_C_CreateKeyWidget_Params
{
	class UW_KeysButton_C*                             WKeysButton;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.InitKeyWidgetsList
struct UW_Setting_KeysFrame_C_InitKeyWidgetsList_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.GetAllInputs
struct UW_Setting_KeysFrame_C_GetAllInputs_Params
{
	TArray<struct FInputAxisKeyMapping>                Local_Axis1;                                               // (Parm, OutParm)
	TArray<struct FInputActionKeyMapping>              Local_Actions1;                                            // (Parm, OutParm)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreButtonsVisibility
struct UW_Setting_KeysFrame_C_RestoreButtonsVisibility_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.IsSettingsEqual
struct UW_Setting_KeysFrame_C_IsSettingsEqual_Params
{
	TArray<struct FSSettings_InputKeys>                A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSSettings_InputKeys>                B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.Save_SaveSettings
struct UW_Setting_KeysFrame_C_Save_SaveSettings_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreValues
struct UW_Setting_KeysFrame_C_RestoreValues_Params
{
	TArray<struct FSSettings_InputKeys>                SSettings_InputKeys;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsBindKeys;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.Construct
struct UW_Setting_KeysFrame_C_Construct_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.ActiveWidget
struct UW_Setting_KeysFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnHovered
struct UW_Setting_KeysFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature
struct UW_Setting_KeysFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature
struct UW_Setting_KeysFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnChangeInputKeyValue
struct UW_Setting_KeysFrame_C_OnChangeInputKeyValue_Params
{
	struct FSSettings_InputKeys                        NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.AllButtonsPressedEvents
struct UW_Setting_KeysFrame_C_AllButtonsPressedEvents_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
struct UW_Setting_KeysFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
struct UW_Setting_KeysFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnClickOfButtonRowToSelectNewButton
struct UW_Setting_KeysFrame_C_OnClickOfButtonRowToSelectNewButton_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnCancel_SelectButtonEvent
struct UW_Setting_KeysFrame_C_OnCancel_SelectButtonEvent_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreDefaultButtonsAndSave
struct UW_Setting_KeysFrame_C_RestoreDefaultButtonsAndSave_Params
{
};

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.ExecuteUbergraph_W_Setting_KeysFrame
struct UW_Setting_KeysFrame_C_ExecuteUbergraph_W_Setting_KeysFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
