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

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.RestoreValues
struct UW_CreateSessionFrame_C_RestoreValues_Params
{
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.ActiveWidget
struct UW_CreateSessionFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.OnHovered
struct UW_CreateSessionFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.Construct
struct UW_CreateSessionFrame_C_Construct_Params
{
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_98_OnChangeValue__DelegateSignature
struct UW_CreateSessionFrame_C_BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_98_OnChangeValue__DelegateSignature_Params
{
	struct FName                                       NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_SliderButton_K2Node_ComponentBoundEvent_120_OnChangeValue__DelegateSignature
struct UW_CreateSessionFrame_C_BndEvt__W_SliderButton_K2Node_ComponentBoundEvent_120_OnChangeValue__DelegateSignature_Params
{
	int                                                NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_MainFrameButton_K2Node_ComponentBoundEvent_142_OnPressed__DelegateSignature
struct UW_CreateSessionFrame_C_BndEvt__W_MainFrameButton_K2Node_ComponentBoundEvent_142_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.PreConstruct
struct UW_CreateSessionFrame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.ExecuteUbergraph_W_CreateSessionFrame
struct UW_CreateSessionFrame_C_ExecuteUbergraph_W_CreateSessionFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
