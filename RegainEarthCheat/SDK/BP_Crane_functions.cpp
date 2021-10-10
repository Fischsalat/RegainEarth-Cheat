// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Crane.BP_Crane_C.UpdateHook
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceFunctionParam             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Crane_C::UpdateHook(bool* ForceFunctionParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.UpdateHook");

	ABP_Crane_C_UpdateHook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ForceFunctionParam != nullptr)
		*ForceFunctionParam = params.ForceFunctionParam;

}


// Function BP_Crane.BP_Crane_C.EndControl
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Crane_C::EndControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.EndControl");

	ABP_Crane_C_EndControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.StartControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::StartControl(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.StartControl");

	ABP_Crane_C_StartControl_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.DetachHookRef
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Crane_C::DetachHookRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.DetachHookRef");

	ABP_Crane_C_DetachHookRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Crane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.UserConstructionScript");

	ABP_Crane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpActEvt_CraneHookAction_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Crane_C::InpActEvt_CraneHookAction_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpActEvt_CraneHookAction_K2Node_InputActionEvent_6");

	ABP_Crane_C_InpActEvt_CraneHookAction_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpActEvt_CraneHookAction_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Crane_C::InpActEvt_CraneHookAction_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpActEvt_CraneHookAction_K2Node_InputActionEvent_5");

	ABP_Crane_C_InpActEvt_CraneHookAction_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Crane_C::InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_4");

	ABP_Crane_C_InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Crane_C::InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_3");

	ABP_Crane_C_InpActEvt_CraneUnhookAction_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpActEvt_EndControlCrane_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Crane_C::InpActEvt_EndControlCrane_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpActEvt_EndControlCrane_K2Node_InputActionEvent_2");

	ABP_Crane_C_InpActEvt_EndControlCrane_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpActEvt_NextHook_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Crane_C::InpActEvt_NextHook_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpActEvt_NextHook_K2Node_InputActionEvent_1");

	ABP_Crane_C_InpActEvt_NextHook_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpAxisEvt_PitchCraneArrow_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::InpAxisEvt_PitchCraneArrow_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpAxisEvt_PitchCraneArrow_K2Node_InputAxisEvent_4");

	ABP_Crane_C_InpAxisEvt_PitchCraneArrow_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");

	ABP_Crane_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Crane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.ReceiveBeginPlay");

	ABP_Crane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.ReceiveTick");

	ABP_Crane_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpAxisEvt_TurnCameraCrane_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::InpAxisEvt_TurnCameraCrane_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpAxisEvt_TurnCameraCrane_K2Node_InputAxisEvent_2");

	ABP_Crane_C_InpAxisEvt_TurnCameraCrane_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpAxisEvt_TurnCrane_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::InpAxisEvt_TurnCrane_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpAxisEvt_TurnCrane_K2Node_InputAxisEvent_1");

	ABP_Crane_C_InpAxisEvt_TurnCrane_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpAxisEvt_LookUpCameraCrane_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::InpAxisEvt_LookUpCameraCrane_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpAxisEvt_LookUpCameraCrane_K2Node_InputAxisEvent_5");

	ABP_Crane_C_InpAxisEvt_LookUpCameraCrane_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.InpAxisEvt_CableLenghtGamepad_K2Node_InputAxisEvent_6
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::InpAxisEvt_CableLenghtGamepad_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.InpAxisEvt_CableLenghtGamepad_K2Node_InputAxisEvent_6");

	ABP_Crane_C_InpAxisEvt_CableLenghtGamepad_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.RunBeginPlayManually
// (BlueprintCallable, BlueprintEvent)
void ABP_Crane_C::RunBeginPlayManually()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.RunBeginPlayManually");

	ABP_Crane_C_RunBeginPlayManually_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crane.BP_Crane_C.ExecuteUbergraph_BP_Crane
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crane_C::ExecuteUbergraph_BP_Crane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crane.BP_Crane_C.ExecuteUbergraph_BP_Crane");

	ABP_Crane_C_ExecuteUbergraph_BP_Crane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
