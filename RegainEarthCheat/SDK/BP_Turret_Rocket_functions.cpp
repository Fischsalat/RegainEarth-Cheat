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

// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetMesh");

	ABP_Turret_Rocket_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetPiercedFireDirectionOfOwner");

	ABP_Turret_Rocket_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetAudioComponentForVentFireSound");

	ABP_Turret_Rocket_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.GetExplodableComponent");

	ABP_Turret_Rocket_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.UserConstructionScript");

	ABP_Turret_Rocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.TimelineReloadRocket__FinishedFunc
// (BlueprintEvent)
void ABP_Turret_Rocket_C::TimelineReloadRocket__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.TimelineReloadRocket__FinishedFunc");

	ABP_Turret_Rocket_C_TimelineReloadRocket__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.TimelineReloadRocket__UpdateFunc
// (BlueprintEvent)
void ABP_Turret_Rocket_C::TimelineReloadRocket__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.TimelineReloadRocket__UpdateFunc");

	ABP_Turret_Rocket_C_TimelineReloadRocket__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Turret_Rocket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.ReceiveBeginPlay");

	ABP_Turret_Rocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.CheckIfDeploymentFinished
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::CheckIfDeploymentFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.CheckIfDeploymentFinished");

	ABP_Turret_Rocket_C_CheckIfDeploymentFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ClearInvalidDetectedTargets
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::ClearInvalidDetectedTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.ClearInvalidDetectedTargets");

	ABP_Turret_Rocket_C_ClearInvalidDetectedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Server_ShootRocketToTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  RocketTargetActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LauncherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::Server_ShootRocketToTarget(class AActor* RocketTargetActor, int LauncherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.Server_ShootRocketToTarget");

	ABP_Turret_Rocket_C_Server_ShootRocketToTarget_Params params;
	params.RocketTargetActor = RocketTargetActor;
	params.LauncherIndex = LauncherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartFiringRocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TargetIsRocket                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Rocket_C::StartFiringRocket(class AActor* TargetActor, bool TargetIsRocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartFiringRocket");

	ABP_Turret_Rocket_C_StartFiringRocket_Params params;
	params.TargetActor = TargetActor;
	params.TargetIsRocket = TargetIsRocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Multicast_DoRocketFireVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::Multicast_DoRocketFireVisuals(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.Multicast_DoRocketFireVisuals");

	ABP_Turret_Rocket_C_Multicast_DoRocketFireVisuals_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ReloadCountdown_OnlyOnServer
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::ReloadCountdown_OnlyOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.ReloadCountdown_OnlyOnServer");

	ABP_Turret_Rocket_C_ReloadCountdown_OnlyOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartReloadTimer_OnlyOnServer
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::StartReloadTimer_OnlyOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartReloadTimer_OnlyOnServer");

	ABP_Turret_Rocket_C_StartReloadTimer_OnlyOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Client_AddSpawnedRocketToMap
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TragetActor                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C* SpawnedHomingMissile           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::Client_AddSpawnedRocketToMap(class AActor* TragetActor, class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C* SpawnedHomingMissile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.Client_AddSpawnedRocketToMap");

	ABP_Turret_Rocket_C_Client_AddSpawnedRocketToMap_Params params;
	params.TragetActor = TragetActor;
	params.SpawnedHomingMissile = SpawnedHomingMissile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartDestroyedActorReferencesCleanerLoop
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::StartDestroyedActorReferencesCleanerLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartDestroyedActorReferencesCleanerLoop");

	ABP_Turret_Rocket_C_StartDestroyedActorReferencesCleanerLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.SetValuesOnRocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C* CreatedRocket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::SetValuesOnRocket(class ABP_ProjectileEffectOnHitBase_Rocket_Homing_C* CreatedRocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.SetValuesOnRocket");

	ABP_Turret_Rocket_C_SetValuesOnRocket_Params params;
	params.CreatedRocket = CreatedRocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.OnActorDetectedAndAttackableAndInLOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DetectedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::OnActorDetectedAndAttackableAndInLOS(class AActor* DetectedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.OnActorDetectedAndAttackableAndInLOS");

	ABP_Turret_Rocket_C_OnActorDetectedAndAttackableAndInLOS_Params params;
	params.DetectedActor = DetectedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartRocketReloadVisuals_OnlyOnServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::StartRocketReloadVisuals_OnlyOnServer(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.StartRocketReloadVisuals_OnlyOnServer");

	ABP_Turret_Rocket_C_StartRocketReloadVisuals_OnlyOnServer_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.Multicast_UpdateRocketReloadVisuals
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ValidSlotndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::Multicast_UpdateRocketReloadVisuals(int ValidSlotndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.Multicast_UpdateRocketReloadVisuals");

	ABP_Turret_Rocket_C_Multicast_UpdateRocketReloadVisuals_Params params;
	params.ValidSlotndex = ValidSlotndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.DestroyedExplodeFired_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Rocket_C::DestroyedExplodeFired_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.DestroyedExplodeFired_Event");

	ABP_Turret_Rocket_C_DestroyedExplodeFired_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Rocket.BP_Turret_Rocket_C.ExecuteUbergraph_BP_Turret_Rocket
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Rocket_C::ExecuteUbergraph_BP_Turret_Rocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Rocket.BP_Turret_Rocket_C.ExecuteUbergraph_BP_Turret_Rocket");

	ABP_Turret_Rocket_C_ExecuteUbergraph_BP_Turret_Rocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
