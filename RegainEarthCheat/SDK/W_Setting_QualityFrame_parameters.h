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

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.RestoreButtonsVisibility
struct UW_Setting_QualityFrame_C_RestoreButtonsVisibility_Params
{
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.IsSettingsEqual
struct UW_Setting_QualityFrame_C_IsSettingsEqual_Params
{
	struct FSSettings_Quality                          Q1;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Quality                          Q1_defaults;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_QualityCustom                    Q2;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_QualityCustom                    Q2_defaults;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.Save_SaveSettings
struct UW_Setting_QualityFrame_C_Save_SaveSettings_Params
{
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.MyApplySetting
struct UW_Setting_QualityFrame_C_MyApplySetting_Params
{
	struct FSSettings_Quality                          SSettings_Quality_Scalability;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_QualityCustom                    SSettings_Quality_Custom;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.RestoreValues
struct UW_Setting_QualityFrame_C_RestoreValues_Params
{
	struct FSSettings_Quality                          SSettings_Quality_Scalability;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_QualityCustom                    SSettings_Quality_Custom;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ParamToIntQualityNames
struct UW_Setting_QualityFrame_C_ParamToIntQualityNames_Params
{
	struct FName                                       Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.Construct
struct UW_Setting_QualityFrame_C_Construct_Params
{
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ActiveWidget
struct UW_Setting_QualityFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.OnHovered
struct UW_Setting_QualityFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params
{
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params
{
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.AllButtonsPressedEvents
struct UW_Setting_QualityFrame_C_AllButtonsPressedEvents_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.OnInitialized
struct UW_Setting_QualityFrame_C_OnInitialized_Params
{
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature
struct UW_Setting_QualityFrame_C_BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ExecuteUbergraph_W_Setting_QualityFrame
struct UW_Setting_QualityFrame_C_ExecuteUbergraph_W_Setting_QualityFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
