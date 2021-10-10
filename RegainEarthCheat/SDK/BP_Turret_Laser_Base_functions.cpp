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

// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	ABP_Turret_Laser_Base_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetMeshAndBoneToAimFor");

	ABP_Turret_Laser_Base_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetSelfName");

	ABP_Turret_Laser_Base_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_IsOnPause?_1
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::OnRep_IsOnPause__1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_IsOnPause?_1");

	ABP_Turret_Laser_Base_C_OnRep_IsOnPause__1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetAIseePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SeePlayer_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                   TargetPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::GetAIseePlayer(bool* SeePlayer_, class APawn** TargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetAIseePlayer");

	ABP_Turret_Laser_Base_C_GetAIseePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeePlayer_ != nullptr)
		*SeePlayer_ = params.SeePlayer_;
	if (TargetPawn != nullptr)
		*TargetPawn = params.TargetPawn;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetTargetPawnOnBB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              TargetChararacter              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::GetTargetPawnOnBB(class ACharacter** TargetChararacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetTargetPawnOnBB");

	ABP_Turret_Laser_Base_C_GetTargetPawnOnBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetChararacter != nullptr)
		*TargetChararacter = params.TargetChararacter;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetLastKnownTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastKnownTargetLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::GetLastKnownTargetLocation(struct FVector* LastKnownTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetLastKnownTargetLocation");

	ABP_Turret_Laser_Base_C_GetLastKnownTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastKnownTargetLocation != nullptr)
		*LastKnownTargetLocation = params.LastKnownTargetLocation;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetSeeingSenseValidTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SenseValidTarget_              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::GetSeeingSenseValidTarget(bool* SenseValidTarget_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.GetSeeingSenseValidTarget");

	ABP_Turret_Laser_Base_C_GetSeeingSenseValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SenseValidTarget_ != nullptr)
		*SenseValidTarget_ = params.SenseValidTarget_;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerSeeTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::TriggerSeeTargetSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerSeeTargetSpecialEvent");

	ABP_Turret_Laser_Base_C_TriggerSeeTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent");

	ABP_Turret_Laser_Base_C_TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerGotDamagedByHiddenTargetSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerGotDamagedByHiddenTargetSpecialEvent");

	ABP_Turret_Laser_Base_C_TriggerGotDamagedByHiddenTargetSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine_ != nullptr)
		*DoneFine_ = params.DoneFine_;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerTryDoingSpecialAttackEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::TriggerTryDoingSpecialAttackEvent(bool* DoneFine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TriggerTryDoingSpecialAttackEvent");

	ABP_Turret_Laser_Base_C_TriggerTryDoingSpecialAttackEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoneFine != nullptr)
		*DoneFine = params.DoneFine;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_InRangeAndOnSight
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::OnRep_InRangeAndOnSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_InRangeAndOnSight");

	ABP_Turret_Laser_Base_C_OnRep_InRangeAndOnSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_FoundTargetObjectComponent
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::OnRep_FoundTargetObjectComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnRep_FoundTargetObjectComponent");

	ABP_Turret_Laser_Base_C_OnRep_FoundTargetObjectComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.SyncStateToClientsWhenHaveAuthority
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::SyncStateToClientsWhenHaveAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.SyncStateToClientsWhenHaveAuthority");

	ABP_Turret_Laser_Base_C_SyncStateToClientsWhenHaveAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoLineTraceAndEvaluateHitTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found_valid_target             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::DoLineTraceAndEvaluateHitTarget(const struct FVector& Start, const struct FVector& End, bool* Found_valid_target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoLineTraceAndEvaluateHitTarget");

	ABP_Turret_Laser_Base_C_DoLineTraceAndEvaluateHitTarget_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_valid_target != nullptr)
		*Found_valid_target = params.Found_valid_target;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UserConstructionScript");

	ABP_Turret_Laser_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__FinishedFunc
// (BlueprintEvent)
void ABP_Turret_Laser_Base_C::TimelineIdleRotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__FinishedFunc");

	ABP_Turret_Laser_Base_C_TimelineIdleRotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__UpdateFunc
// (BlueprintEvent)
void ABP_Turret_Laser_Base_C::TimelineIdleRotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__UpdateFunc");

	ABP_Turret_Laser_Base_C_TimelineIdleRotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__NewTrack_0__EventFunc
// (BlueprintEvent)
void ABP_Turret_Laser_Base_C::TimelineIdleRotation__NewTrack_0__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TimelineIdleRotation__NewTrack_0__EventFunc");

	ABP_Turret_Laser_Base_C_TimelineIdleRotation__NewTrack_0__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UpdateRotation
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::UpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UpdateRotation");

	ABP_Turret_Laser_Base_C_UpdateRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ReceiveTick");

	ABP_Turret_Laser_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.FireBullet
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::FireBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.FireBullet");

	ABP_Turret_Laser_Base_C_FireBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.LaserPointer
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::LaserPointer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.LaserPointer");

	ABP_Turret_Laser_Base_C_LaserPointer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TraceForTargetInForwardTraceLine
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::TraceForTargetInForwardTraceLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.TraceForTargetInForwardTraceLine");

	ABP_Turret_Laser_Base_C_TraceForTargetInForwardTraceLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UpdateStartTraceEndTrace
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::UpdateStartTraceEndTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.UpdateStartTraceEndTrace");

	ABP_Turret_Laser_Base_C_UpdateStartTraceEndTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace");

	ABP_Turret_Laser_Base_C_DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.RestartEvaluateSphereHits
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::RestartEvaluateSphereHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.RestartEvaluateSphereHits");

	ABP_Turret_Laser_Base_C_RestartEvaluateSphereHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel");

	ABP_Turret_Laser_Base_C_DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.RestartEvaluateSphereHitsMovingObjectInTunnel
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::RestartEvaluateSphereHitsMovingObjectInTunnel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.RestartEvaluateSphereHitsMovingObjectInTunnel");

	ABP_Turret_Laser_Base_C_RestartEvaluateSphereHitsMovingObjectInTunnel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.Multicast_SyncStateToClients
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                MountRelRot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                TurretRelRot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::Multicast_SyncStateToClients(const struct FRotator& MountRelRot, const struct FRotator& TurretRelRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.Multicast_SyncStateToClients");

	ABP_Turret_Laser_Base_C_Multicast_SyncStateToClients_Params params;
	params.MountRelRot = MountRelRot;
	params.TurretRelRot = TurretRelRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.SyncStart_UpdateRotationOnClients
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::SyncStart_UpdateRotationOnClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.SyncStart_UpdateRotationOnClients");

	ABP_Turret_Laser_Base_C_SyncStart_UpdateRotationOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Turret_Laser_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ReceiveBeginPlay");

	ABP_Turret_Laser_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartTurretIdleRotationAgainFromStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::StartTurretIdleRotationAgainFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartTurretIdleRotationAgainFromStart");

	ABP_Turret_Laser_Base_C_StartTurretIdleRotationAgainFromStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StopTurretIdleRotation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::StopTurretIdleRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StopTurretIdleRotation");

	ABP_Turret_Laser_Base_C_StopTurretIdleRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartTurretIdleRotationPlayResume
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTimeLineTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::StartTurretIdleRotationPlayResume(float NewTimeLineTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartTurretIdleRotationPlayResume");

	ABP_Turret_Laser_Base_C_StartTurretIdleRotationPlayResume_Params params;
	params.NewTimeLineTime = NewTimeLineTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ResetDoOnceStopTurretIdleRot
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::ResetDoOnceStopTurretIdleRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ResetDoOnceStopTurretIdleRot");

	ABP_Turret_Laser_Base_C_ResetDoOnceStopTurretIdleRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DestroyedExplodeFired_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::DestroyedExplodeFired_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.DestroyedExplodeFired_Event");

	ABP_Turret_Laser_Base_C_DestroyedExplodeFired_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.CheckForOverlappingActors
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::CheckForOverlappingActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.CheckForOverlappingActors");

	ABP_Turret_Laser_Base_C_CheckForOverlappingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnActorDetectedAndAttackableAndInLOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DetectedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::OnActorDetectedAndAttackableAndInLOS(class AActor* DetectedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnActorDetectedAndAttackableAndInLOS");

	ABP_Turret_Laser_Base_C_OnActorDetectedAndAttackableAndInLOS_Params params;
	params.DetectedActor = DetectedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.CheckIsDetectedActorAttackable
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToCheck                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasDetectedViaOverlapBeginEvent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Laser_Base_C::CheckIsDetectedActorAttackable(class AActor* ActorToCheck, bool WasDetectedViaOverlapBeginEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.CheckIsDetectedActorAttackable");

	ABP_Turret_Laser_Base_C_CheckIsDetectedActorAttackable_Params params;
	params.ActorToCheck = ActorToCheck;
	params.WasDetectedViaOverlapBeginEvent = WasDetectedViaOverlapBeginEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnActorLeftRange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LeftActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::OnActorLeftRange(class AActor* LeftActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.OnActorLeftRange");

	ABP_Turret_Laser_Base_C_OnActorLeftRange_Params params;
	params.LeftActor = LeftActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartEventTickGateAndStartFullFunctionsAgain
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::StartEventTickGateAndStartFullFunctionsAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StartEventTickGateAndStartFullFunctionsAgain");

	ABP_Turret_Laser_Base_C_StartEventTickGateAndStartFullFunctionsAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StopEventTickGateAndShutDownCompletly
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Laser_Base_C::StopEventTickGateAndShutDownCompletly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.StopEventTickGateAndShutDownCompletly");

	ABP_Turret_Laser_Base_C_StopEventTickGateAndShutDownCompletly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ExecuteUbergraph_BP_Turret_Laser_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Laser_Base_C::ExecuteUbergraph_BP_Turret_Laser_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Laser_Base.BP_Turret_Laser_Base_C.ExecuteUbergraph_BP_Turret_Laser_Base");

	ABP_Turret_Laser_Base_C_ExecuteUbergraph_BP_Turret_Laser_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
