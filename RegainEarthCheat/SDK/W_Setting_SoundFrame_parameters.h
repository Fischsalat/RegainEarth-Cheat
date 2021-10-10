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

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.CalcAndClampSound
struct UW_Setting_SoundFrame_C_CalcAndClampSound_Params
{
	int                                                inInt;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.RestoreButtonsVisibility
struct UW_Setting_SoundFrame_C_RestoreButtonsVisibility_Params
{
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.IsSettingsEqual
struct UW_Setting_SoundFrame_C_IsSettingsEqual_Params
{
	struct FSSettings_Sounds                           A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSettings_Sounds                           B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.Save_SaveSettings
struct UW_Setting_SoundFrame_C_Save_SaveSettings_Params
{
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ApplySettings
struct UW_Setting_SoundFrame_C_ApplySettings_Params
{
	struct FSSettings_Sounds                           SSettings_Sounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Fade;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.RestoreValues
struct UW_Setting_SoundFrame_C_RestoreValues_Params
{
	struct FSSettings_Sounds                           SSettings_Sounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.Construct
struct UW_Setting_SoundFrame_C_Construct_Params
{
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Music_K2Node_ComponentBoundEvent_23_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Music_K2Node_ComponentBoundEvent_23_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Effects_K2Node_ComponentBoundEvent_24_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Effects_K2Node_ComponentBoundEvent_24_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Dial_K2Node_ComponentBoundEvent_25_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Dial_K2Node_ComponentBoundEvent_25_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Amb_K2Node_ComponentBoundEvent_26_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Amb_K2Node_ComponentBoundEvent_26_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Ex1_K2Node_ComponentBoundEvent_27_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Ex1_K2Node_ComponentBoundEvent_27_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Ex2_K2Node_ComponentBoundEvent_28_OnChangeValue__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_Ex2_K2Node_ComponentBoundEvent_28_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ActiveWidget
struct UW_Setting_SoundFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.OnHovered
struct UW_Setting_SoundFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params
{
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
struct UW_Setting_SoundFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params
{
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.AllButtonsPressedEvents
struct UW_Setting_SoundFrame_C_AllButtonsPressedEvents_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ExecuteUbergraph_W_Setting_SoundFrame
struct UW_Setting_SoundFrame_C_ExecuteUbergraph_W_Setting_SoundFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
