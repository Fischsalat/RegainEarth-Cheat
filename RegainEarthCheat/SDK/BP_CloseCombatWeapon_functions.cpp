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

// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*          AsMesh_Component               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer(float ParameterValue, class UPrimitiveComponent* Object, class UMeshComponent** AsMesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer");

	UBP_CloseCombatWeapon_C_DriveDissolveVisualzeAndDestroyActorOnAlpha1AndInvalidateTimer_Params params;
	params.ParameterValue = ParameterValue;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsMesh_Component != nullptr)
		*AsMesh_Component = params.AsMesh_Component;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.CheckWeaponReloadPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Possible_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CloseCombatWeapon_C::CheckWeaponReloadPossible(bool* Possible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.CheckWeaponReloadPossible");

	UBP_CloseCombatWeapon_C_CheckWeaponReloadPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Possible_ != nullptr)
		*Possible_ = params.Possible_;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Is Allowed to Throw Grenade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CloseCombatWeapon_C::Is_Allowed_to_Throw_Grenade(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Is Allowed to Throw Grenade");

	UBP_CloseCombatWeapon_C_Is_Allowed_to_Throw_Grenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F");

	UBP_CloseCombatWeapon_C_OnNotifyEnd_C61657AA447BBDEB6A938CABC1B9F17F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F");

	UBP_CloseCombatWeapon_C_OnNotifyBegin_C61657AA447BBDEB6A938CABC1B9F17F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F");

	UBP_CloseCombatWeapon_C_OnInterrupted_C61657AA447BBDEB6A938CABC1B9F17F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F");

	UBP_CloseCombatWeapon_C_OnBlendOut_C61657AA447BBDEB6A938CABC1B9F17F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F");

	UBP_CloseCombatWeapon_C_OnCompleted_C61657AA447BBDEB6A938CABC1B9F17F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_CloseCombatWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ReceiveBeginPlay");

	UBP_CloseCombatWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_OnChargeLevelUp
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReachedChargeLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::Server_OnChargeLevelUp(int ReachedChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_OnChargeLevelUp");

	UBP_CloseCombatWeapon_C_Server_OnChargeLevelUp_Params params;
	params.ReachedChargeLevel = ReachedChargeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.CheckForHittedActors
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::CheckForHittedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.CheckForHittedActors");

	UBP_CloseCombatWeapon_C_CheckForHittedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_OnActorHitWithSwing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitRef                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int                            ChargedLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::Server_OnActorHitWithSwing(const struct FHitResult& HitRef, int ChargedLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_OnActorHitWithSwing");

	UBP_CloseCombatWeapon_C_Server_OnActorHitWithSwing_Params params;
	params.HitRef = HitRef;
	params.ChargedLevel = ChargedLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ShootPressed
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::ShootPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ShootPressed");

	UBP_CloseCombatWeapon_C_ShootPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ShootReleased
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::ShootReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ShootReleased");

	UBP_CloseCombatWeapon_C_ShootReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_ChargingStartEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::Multicast_ChargingStartEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_ChargingStartEffects");

	UBP_CloseCombatWeapon_C_Multicast_ChargingStartEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_OnChargeLevelUpEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReachedChargeLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::Multicast_OnChargeLevelUpEffects(int ReachedChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_OnChargeLevelUpEffects");

	UBP_CloseCombatWeapon_C_Multicast_OnChargeLevelUpEffects_Params params;
	params.ReachedChargeLevel = ReachedChargeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_ChargeReleaseEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentChargedLevel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::Multicast_ChargeReleaseEffects(int CurrentChargedLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_ChargeReleaseEffects");

	UBP_CloseCombatWeapon_C_Multicast_ChargeReleaseEffects_Params params;
	params.CurrentChargedLevel = CurrentChargedLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_ChargingStartEffects
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::Server_ChargingStartEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_ChargingStartEffects");

	UBP_CloseCombatWeapon_C_Server_ChargingStartEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_ChargeRelease
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentChargedLevel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::Server_ChargeRelease(int CurrentChargedLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_ChargeRelease");

	UBP_CloseCombatWeapon_C_Server_ChargeRelease_Params params;
	params.CurrentChargedLevel = CurrentChargedLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_DestroyChargeEffects
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::Server_DestroyChargeEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Server_DestroyChargeEffects");

	UBP_CloseCombatWeapon_C_Server_DestroyChargeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_DestroyChargeEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::Multicast_DestroyChargeEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_DestroyChargeEffects");

	UBP_CloseCombatWeapon_C_Multicast_DestroyChargeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.RepeatChargingPose
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::RepeatChargingPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.RepeatChargingPose");

	UBP_CloseCombatWeapon_C_RepeatChargingPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StopChargingPoseAnimation
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::StopChargingPoseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StopChargingPoseAnimation");

	UBP_CloseCombatWeapon_C_StopChargingPoseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.AddChargedTime
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::AddChargedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.AddChargedTime");

	UBP_CloseCombatWeapon_C_AddChargedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_DoHitVisual
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasFullChargedHit_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CloseCombatWeapon_C::Multicast_DoHitVisual(class UClass* DamageType, const struct FVector& Location, class AActor* HitActor, bool WasFullChargedHit_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.Multicast_DoHitVisual");

	UBP_CloseCombatWeapon_C_Multicast_DoHitVisual_Params params;
	params.DamageType = DamageType;
	params.Location = Location;
	params.HitActor = HitActor;
	params.WasFullChargedHit_ = WasFullChargedHit_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DissolveMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DissolveColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::DissolveMesh(class AActor* Actor, const struct FVector& DissolveColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DissolveMesh");

	UBP_CloseCombatWeapon_C_DissolveMesh_Params params;
	params.Actor = Actor;
	params.DissolveColor = DissolveColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DriveDissolve
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::DriveDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.DriveDissolve");

	UBP_CloseCombatWeapon_C_DriveDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.SetCollsionOff
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> TMP_SkelMeshAndMeshComponents  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UBP_CloseCombatWeapon_C::SetCollsionOff(TArray<class UPrimitiveComponent*>* TMP_SkelMeshAndMeshComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.SetCollsionOff");

	UBP_CloseCombatWeapon_C_SetCollsionOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TMP_SkelMeshAndMeshComponents != nullptr)
		*TMP_SkelMeshAndMeshComponents = params.TMP_SkelMeshAndMeshComponents;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ResetDoOnceSetCollisionOff
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::ResetDoOnceSetCollisionOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ResetDoOnceSetCollisionOff");

	UBP_CloseCombatWeapon_C_ResetDoOnceSetCollisionOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ForceReleaseChargedCloseCombat
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::ForceReleaseChargedCloseCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ForceReleaseChargedCloseCombat");

	UBP_CloseCombatWeapon_C_ForceReleaseChargedCloseCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StartExpandToFullSize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::StartExpandToFullSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StartExpandToFullSize");

	UBP_CloseCombatWeapon_C_StartExpandToFullSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StartShrinkToSmallSize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::StartShrinkToSmallSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.StartShrinkToSmallSize");

	UBP_CloseCombatWeapon_C_StartShrinkToSmallSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.SetIsNotFullChargeSwining
// (BlueprintCallable, BlueprintEvent)
void UBP_CloseCombatWeapon_C::SetIsNotFullChargeSwining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.SetIsNotFullChargeSwining");

	UBP_CloseCombatWeapon_C_SetIsNotFullChargeSwining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ExecuteUbergraph_BP_CloseCombatWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CloseCombatWeapon_C::ExecuteUbergraph_BP_CloseCombatWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseCombatWeapon.BP_CloseCombatWeapon_C.ExecuteUbergraph_BP_CloseCombatWeapon");

	UBP_CloseCombatWeapon_C_ExecuteUbergraph_BP_CloseCombatWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
