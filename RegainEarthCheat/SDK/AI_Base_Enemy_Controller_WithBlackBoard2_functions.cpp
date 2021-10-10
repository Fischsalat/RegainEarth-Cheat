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

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.GetMindControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMindControlled               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DurationLeft                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DurationComplete               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MindControlSkillLevelOfController (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::GetMindControlled(bool* IsMindControlled, float* DurationLeft, float* DurationComplete, float* MindControlSkillLevelOfController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.GetMindControlled");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_GetMindControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsMindControlled != nullptr)
		*IsMindControlled = params.IsMindControlled;
	if (DurationLeft != nullptr)
		*DurationLeft = params.DurationLeft;
	if (DurationComplete != nullptr)
		*DurationComplete = params.DurationComplete;
	if (MindControlSkillLevelOfController != nullptr)
		*MindControlSkillLevelOfController = params.MindControlSkillLevelOfController;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.SetMindControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToIsMindControlled          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MindControllerSkillLevel       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PassedMindControllingChange_   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::SetMindControlled(bool SetToIsMindControlled, float Duration, float MindControllerSkillLevel, bool* PassedMindControllingChange_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.SetMindControlled");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_SetMindControlled_Params params;
	params.SetToIsMindControlled = SetToIsMindControlled;
	params.Duration = Duration;
	params.MindControllerSkillLevel = MindControllerSkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PassedMindControllingChange_ != nullptr)
		*PassedMindControllingChange_ = params.PassedMindControllingChange_;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.GetDirectionAngleYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Z___Yaw                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::GetDirectionAngleYaw(float* Z___Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.GetDirectionAngleYaw");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_GetDirectionAngleYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z___Yaw != nullptr)
		*Z___Yaw = params.Z___Yaw;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceiveTick");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceiveBeginPlay");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceivePossess");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base_Enemy_Controller_WithBlackBoard2_C::ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2");

	AAI_Base_Enemy_Controller_WithBlackBoard2_C_ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
