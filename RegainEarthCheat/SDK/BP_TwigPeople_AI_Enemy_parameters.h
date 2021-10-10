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

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerGotDamagedByHiddenTargetSpecialEvent
struct ABP_TwigPeople_AI_Enemy_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params
{
	bool                                               DoneFine_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
struct ABP_TwigPeople_AI_Enemy_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerSeeTargetSpecialEvent
struct ABP_TwigPeople_AI_Enemy_C_TriggerSeeTargetSpecialEvent_Params
{
	bool                                               DoneFine;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.ReceiveBeginPlay
struct ABP_TwigPeople_AI_Enemy_C_ReceiveBeginPlay_Params
{
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.AiOnDeath_Event
struct ABP_TwigPeople_AI_Enemy_C_AiOnDeath_Event_Params
{
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggeredTeleportedNowTimer
struct ABP_TwigPeople_AI_Enemy_C_TriggeredTeleportedNowTimer_Params
{
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_TwigPeople_AI_Enemy_C_BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.Multicast_AiSuccessfulHitPlayer
struct ABP_TwigPeople_AI_Enemy_C_Multicast_AiSuccessfulHitPlayer_Params
{
	class ABP_PlayerCharacter_BPBase_C*                PlayerPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.Multicast_StartAIFirstSeePlayerAnim
struct ABP_TwigPeople_AI_Enemy_C_Multicast_StartAIFirstSeePlayerAnim_Params
{
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TeleportFinishedCallback
struct ABP_TwigPeople_AI_Enemy_C_TeleportFinishedCallback_Params
{
	bool                                               FinishedFine_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.ExecuteUbergraph_BP_TwigPeople_AI_Enemy
struct ABP_TwigPeople_AI_Enemy_C_ExecuteUbergraph_BP_TwigPeople_AI_Enemy_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
