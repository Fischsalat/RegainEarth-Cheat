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

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.GetGetUpAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           FacingUp_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*            AnimMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::GetGetUpAnimation(bool FacingUp_, class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.GetGetUpAnimation");

	UBP_SimpleReplicatedRagdollSystem_Component_C_GetGetUpAnimation_Params params;
	params.FacingUp_ = FacingUp_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ReceiveBeginPlay");

	UBP_SimpleReplicatedRagdollSystem_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ReceiveTick");

	UBP_SimpleReplicatedRagdollSystem_Component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PlayAudioMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::PlayAudioMulticast(class USoundBase* Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PlayAudioMulticast");

	UBP_SimpleReplicatedRagdollSystem_Component_C_PlayAudioMulticast_Params params;
	params.Audio = Audio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.LocalUpdateRagdollOnServer
// (BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::LocalUpdateRagdollOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.LocalUpdateRagdollOnServer");

	UBP_SimpleReplicatedRagdollSystem_Component_C_LocalUpdateRagdollOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.UpdateRagdollLocalOnServer
// (BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::UpdateRagdollLocalOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.UpdateRagdollLocalOnServer");

	UBP_SimpleReplicatedRagdollSystem_Component_C_UpdateRagdollLocalOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.LimitRagdollSpeed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::LimitRagdollSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.LimitRagdollSpeed");

	UBP_SimpleReplicatedRagdollSystem_Component_C_LimitRagdollSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.UpdateRagdollServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::UpdateRagdollServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.UpdateRagdollServer");

	UBP_SimpleReplicatedRagdollSystem_Component_C_UpdateRagdollServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.DriveInterpolationRevive
// (BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::DriveInterpolationRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.DriveInterpolationRevive");

	UBP_SimpleReplicatedRagdollSystem_Component_C_DriveInterpolationRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Server_StopRecovery
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::Server_StopRecovery()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Server_StopRecovery");

	UBP_SimpleReplicatedRagdollSystem_Component_C_Server_StopRecovery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Server_RecoverEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::Server_RecoverEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Server_RecoverEvent");

	UBP_SimpleReplicatedRagdollSystem_Component_C_Server_RecoverEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Multicast_StopRecovery
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::Multicast_StopRecovery()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Multicast_StopRecovery");

	UBP_SimpleReplicatedRagdollSystem_Component_C_Multicast_StopRecovery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ToggleInput
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SimpleReplicatedRagdollSystem_Component_C::ToggleInput(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ToggleInput");

	UBP_SimpleReplicatedRagdollSystem_Component_C_ToggleInput_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.RagdollEndMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ActorRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ValidCapsuleLocationWithSpaceForRevive (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::RagdollEndMulticast(const struct FRotator& ActorRotation, const struct FVector& ValidCapsuleLocationWithSpaceForRevive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.RagdollEndMulticast");

	UBP_SimpleReplicatedRagdollSystem_Component_C_RagdollEndMulticast_Params params;
	params.ActorRotation = ActorRotation;
	params.ValidCapsuleLocationWithSpaceForRevive = ValidCapsuleLocationWithSpaceForRevive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Impulse
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RunOnServerOnly                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::Impulse(bool RunOnServerOnly, const struct FVector& Impulse, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Impulse");

	UBP_SimpleReplicatedRagdollSystem_Component_C_Impulse_Params params;
	params.RunOnServerOnly = RunOnServerOnly;
	params.Impulse = Impulse;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ImpulseMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::ImpulseMulticast(const struct FVector& Vector, const struct FName& Bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ImpulseMulticast");

	UBP_SimpleReplicatedRagdollSystem_Component_C_ImpulseMulticast_Params params;
	params.Vector = Vector;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.TraceForOtherCharacters
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TraceStart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TraceEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::TraceForOtherCharacters(const struct FVector& TraceStart, const struct FVector& TraceEnd, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.TraceForOtherCharacters");

	UBP_SimpleReplicatedRagdollSystem_Component_C_TraceForOtherCharacters_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.StartSimulatingPhysicsServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AddNewImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SimpleReplicatedRagdollSystem_Component_C::StartSimulatingPhysicsServer(const struct FVector& Velocity, bool AddNewImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.StartSimulatingPhysicsServer");

	UBP_SimpleReplicatedRagdollSystem_Component_C_StartSimulatingPhysicsServer_Params params;
	params.Velocity = Velocity;
	params.AddNewImpulse = AddNewImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.StartSimulatingPhysicsMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AddNewImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SimpleReplicatedRagdollSystem_Component_C::StartSimulatingPhysicsMulticast(const struct FVector& Velocity, bool AddNewImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.StartSimulatingPhysicsMulticast");

	UBP_SimpleReplicatedRagdollSystem_Component_C_StartSimulatingPhysicsMulticast_Params params;
	params.Velocity = Velocity;
	params.AddNewImpulse = AddNewImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.EnableRagdoll
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AddNewImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SimpleReplicatedRagdollSystem_Component_C::EnableRagdoll(const struct FVector& Impulse, bool AddNewImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.EnableRagdoll");

	UBP_SimpleReplicatedRagdollSystem_Component_C_EnableRagdoll_Params params;
	params.Impulse = Impulse;
	params.AddNewImpulse = AddNewImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PauseVelocityInterpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::PauseVelocityInterpolation(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PauseVelocityInterpolation");

	UBP_SimpleReplicatedRagdollSystem_Component_C_PauseVelocityInterpolation_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PauseLocationInterpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::PauseLocationInterpolation(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PauseLocationInterpolation");

	UBP_SimpleReplicatedRagdollSystem_Component_C_PauseLocationInterpolation_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.TryToInterpolateMeshLocation
// (BlueprintCallable, BlueprintEvent)
void UBP_SimpleReplicatedRagdollSystem_Component_C::TryToInterpolateMeshLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.TryToInterpolateMeshLocation");

	UBP_SimpleReplicatedRagdollSystem_Component_C_TryToInterpolateMeshLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ToggleMeshAdjustment
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SimpleReplicatedRagdollSystem_Component_C::ToggleMeshAdjustment(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ToggleMeshAdjustment");

	UBP_SimpleReplicatedRagdollSystem_Component_C_ToggleMeshAdjustment_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.SetLocationVelocityAndRotationEventMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 MeshVelocity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SimpleReplicatedRagdollSystem_Component_C::SetLocationVelocityAndRotationEventMulticast(const struct FVector& Location, const struct FVector& MeshVelocity, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.SetLocationVelocityAndRotationEventMulticast");

	UBP_SimpleReplicatedRagdollSystem_Component_C_SetLocationVelocityAndRotationEventMulticast_Params params;
	params.Location = Location;
	params.MeshVelocity = MeshVelocity;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SimpleReplicatedRagdollSystem_Component_C::ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component");

	UBP_SimpleReplicatedRagdollSystem_Component_C_ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
