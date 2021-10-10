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

// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerGotDamagedByHiddenTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TwigPeople_AI_Enemy_C::TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerGotDamagedByHiddenTargetSpecialEvent");

	ABP_TwigPeople_AI_Enemy_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine_ != nullptr)
		*DoneFine_ = params.DoneFine_;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TwigPeople_AI_Enemy_C::TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent");

	ABP_TwigPeople_AI_Enemy_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerSeeTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TwigPeople_AI_Enemy_C::TriggerSeeTargetSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggerSeeTargetSpecialEvent");

	ABP_TwigPeople_AI_Enemy_C_TriggerSeeTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TwigPeople_AI_Enemy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.ReceiveBeginPlay");

	ABP_TwigPeople_AI_Enemy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.AiOnDeath_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_TwigPeople_AI_Enemy_C::AiOnDeath_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.AiOnDeath_Event");

	ABP_TwigPeople_AI_Enemy_C_AiOnDeath_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggeredTeleportedNowTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_TwigPeople_AI_Enemy_C::TriggeredTeleportedNowTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TriggeredTeleportedNowTimer");

	ABP_TwigPeople_AI_Enemy_C_TriggeredTeleportedNowTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_TwigPeople_AI_Enemy_C::BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_TwigPeople_AI_Enemy_C_BndEvt__SphereColAIPredictPlayerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.Multicast_AiSuccessfulHitPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_BPBase_C* PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TwigPeople_AI_Enemy_C::Multicast_AiSuccessfulHitPlayer(class ABP_PlayerCharacter_BPBase_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.Multicast_AiSuccessfulHitPlayer");

	ABP_TwigPeople_AI_Enemy_C_Multicast_AiSuccessfulHitPlayer_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.Multicast_StartAIFirstSeePlayerAnim
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_TwigPeople_AI_Enemy_C::Multicast_StartAIFirstSeePlayerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.Multicast_StartAIFirstSeePlayerAnim");

	ABP_TwigPeople_AI_Enemy_C_Multicast_StartAIFirstSeePlayerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TeleportFinishedCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedFine_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TwigPeople_AI_Enemy_C::TeleportFinishedCallback(bool FinishedFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.TeleportFinishedCallback");

	ABP_TwigPeople_AI_Enemy_C_TeleportFinishedCallback_Params params;
	params.FinishedFine_ = FinishedFine_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.ExecuteUbergraph_BP_TwigPeople_AI_Enemy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TwigPeople_AI_Enemy_C::ExecuteUbergraph_BP_TwigPeople_AI_Enemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TwigPeople_AI_Enemy.BP_TwigPeople_AI_Enemy_C.ExecuteUbergraph_BP_TwigPeople_AI_Enemy");

	ABP_TwigPeople_AI_Enemy_C_ExecuteUbergraph_BP_TwigPeople_AI_Enemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
