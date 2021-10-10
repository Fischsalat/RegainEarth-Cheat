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

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.CheckResolutionIsValids
struct UW_Setting_DisplayFrame_C_CheckResolutionIsValids_Params
{
	struct FIntPoint                                   IntPoint;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.GetDefaultScreenReslotion
struct UW_Setting_DisplayFrame_C_GetDefaultScreenReslotion_Params
{
	int                                                DefaultResolutionIndex;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   DefaultResolution;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefaultResolutionIndexFoundValidIndex;                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Create Screen Resolutions List
struct UW_Setting_DisplayFrame_C_Create_Screen_Resolutions_List_Params
{
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Find_GDC_recursive
struct UW_Setting_DisplayFrame_C_Find_GDC_recursive_Params
{
	int                                                A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                A1;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.RestoreButtonsVisibility
struct UW_Setting_DisplayFrame_C_RestoreButtonsVisibility_Params
{
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.IsSettingsEqual
struct UW_Setting_DisplayFrame_C_IsSettingsEqual_Params
{
	struct FSSettings_Display                          A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Display                          B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Save_SaveSettings
struct UW_Setting_DisplayFrame_C_Save_SaveSettings_Params
{
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ApplySettings
struct UW_Setting_DisplayFrame_C_ApplySettings_Params
{
	struct FSSettings_Display                          SSettings_Display;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.RestoreValues
struct UW_Setting_DisplayFrame_C_RestoreValues_Params
{
	struct FSSettings_Display                          SSettings_Display;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.GetScreenResolutionFromCustomResolutionList
struct UW_Setting_DisplayFrame_C_GetScreenResolutionFromCustomResolutionList_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Construct
struct UW_Setting_DisplayFrame_C_Construct_Params
{
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ActiveWidget
struct UW_Setting_DisplayFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.OnHovered
struct UW_Setting_DisplayFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params
{
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
struct UW_Setting_DisplayFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params
{
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.AllButtonsPressedEvents
struct UW_Setting_DisplayFrame_C_AllButtonsPressedEvents_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ExecuteUbergraph_W_Setting_DisplayFrame
struct UW_Setting_DisplayFrame_C_ExecuteUbergraph_W_Setting_DisplayFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
