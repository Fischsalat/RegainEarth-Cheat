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

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.GetMindControlled
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_GetMindControlled_Params
{
	bool                                               IsMindControlled;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DurationLeft;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurationComplete;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControlSkillLevelOfController;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.SetMindControlled
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_SetMindControlled_Params
{
	bool                                               SetToIsMindControlled;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControllerSkillLevel;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PassedMindControllingChange_;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.GetDirectionAngleYaw
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_GetDirectionAngleYaw_Params
{
	float                                              Z___Yaw;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceiveTick
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceiveBeginPlay
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_ReceiveBeginPlay_Params
{
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ReceivePossess
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Base_Enemy_Controller_WithBlackBoard2.AI_Base_Enemy_Controller_WithBlackBoard2_C.ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2
struct AAI_Base_Enemy_Controller_WithBlackBoard2_C_ExecuteUbergraph_AI_Base_Enemy_Controller_WithBlackBoard2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
