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

// Function W_InGameFrame.W_InGameFrame_C.ActiveWidget
struct UW_InGameFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_InGameFrame.W_InGameFrame_C.OnHovered
struct UW_InGameFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_AnswerFrame_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature
struct UW_InGameFrame_C_BndEvt__W_AnswerFrame_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature_Params
{
};

// Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_20_OnYes__DelegateSignature
struct UW_InGameFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_20_OnYes__DelegateSignature_Params
{
};

// Function W_InGameFrame.W_InGameFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_26_OnCancel__DelegateSignature
struct UW_InGameFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_26_OnCancel__DelegateSignature_Params
{
};

// Function W_InGameFrame.W_InGameFrame_C.AllButtonsPressedEvents
struct UW_InGameFrame_C_AllButtonsPressedEvents_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_InGameFrame.W_InGameFrame_C.ExecuteUbergraph_W_InGameFrame
struct UW_InGameFrame_C_ExecuteUbergraph_W_InGameFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
