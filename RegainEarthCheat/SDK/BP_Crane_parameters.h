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

// Function BP_Crane.BP_Crane_C.UpdateHook
struct ABP_Crane_C_UpdateHook_Params
{
	bool                                               ForceFunctionParam;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Crane.BP_Crane_C.EndControl
struct ABP_Crane_C_EndControl_Params
{
};

// Function BP_Crane.BP_Crane_C.StartControl
struct ABP_Crane_C_StartControl_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.DetachHookRef
struct ABP_Crane_C_DetachHookRef_Params
{
};

// Function BP_Crane.BP_Crane_C.UserConstructionScript
struct ABP_Crane_C_UserConstructionScript_Params
{
};

// Function BP_Crane.BP_Crane_C.InpActEvt_CraneHookAction_K2Node_InputActionEvent_6
struct ABP_Crane_C_InpActEvt_CraneHookAction_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpActEvt_CraneHookAction_K2Node_InputActionEvent_5
struct ABP_Crane_C_InpActEvt_CraneHookAction_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_4
struct ABP_Crane_C_InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_3
struct ABP_Crane_C_InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpActEvt_EndControlCrane_K2Node_InputActionEvent_2
struct ABP_Crane_C_InpActEvt_EndControlCrane_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpActEvt_NextHook_K2Node_InputActionEvent_1
struct ABP_Crane_C_InpActEvt_NextHook_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpAxisEvt_PitchCraneArrow_K2Node_InputAxisEvent_4
struct ABP_Crane_C_InpAxisEvt_PitchCraneArrow_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
struct ABP_Crane_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.ReceiveBeginPlay
struct ABP_Crane_C_ReceiveBeginPlay_Params
{
};

// Function BP_Crane.BP_Crane_C.ReceiveTick
struct ABP_Crane_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpAxisEvt_TurnCameraCrane_K2Node_InputAxisEvent_2
struct ABP_Crane_C_InpAxisEvt_TurnCameraCrane_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpAxisEvt_TurnCrane_K2Node_InputAxisEvent_1
struct ABP_Crane_C_InpAxisEvt_TurnCrane_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpAxisEvt_LookUpCameraCrane_K2Node_InputAxisEvent_5
struct ABP_Crane_C_InpAxisEvt_LookUpCameraCrane_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.InpAxisEvt_CableLenghtGamepad_K2Node_InputAxisEvent_6
struct ABP_Crane_C_InpAxisEvt_CableLenghtGamepad_K2Node_InputAxisEvent_6_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crane.BP_Crane_C.RunBeginPlayManually
struct ABP_Crane_C_RunBeginPlayManually_Params
{
};

// Function BP_Crane.BP_Crane_C.ExecuteUbergraph_BP_Crane
struct ABP_Crane_C_ExecuteUbergraph_BP_Crane_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
