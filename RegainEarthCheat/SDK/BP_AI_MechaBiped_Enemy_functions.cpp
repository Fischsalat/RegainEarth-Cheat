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

// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	ABP_AI_MechaBiped_Enemy_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetMesh");

	ABP_AI_MechaBiped_Enemy_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetPiercedFireDirectionOfOwner");

	ABP_AI_MechaBiped_Enemy_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetAudioComponentForVentFireSound");

	ABP_AI_MechaBiped_Enemy_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetExplodableComponent");

	ABP_AI_MechaBiped_Enemy_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_MissleRocketsUsable?
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::OnRep_MissleRocketsUsable_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_MissleRocketsUsable?");

	ABP_AI_MechaBiped_Enemy_C_OnRep_MissleRocketsUsable__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_MechActivated
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::OnRep_MechActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_MechActivated");

	ABP_AI_MechaBiped_Enemy_C_OnRep_MechActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_JetFlaresActived
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::OnRep_JetFlaresActived()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_JetFlaresActived");

	ABP_AI_MechaBiped_Enemy_C_OnRep_JetFlaresActived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_BarrierShieldActivated
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::OnRep_BarrierShieldActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.OnRep_BarrierShieldActivated");

	ABP_AI_MechaBiped_Enemy_C_OnRep_BarrierShieldActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetCurrentWeaponSkelMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CurrentWeaponSkelMesh          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.GetCurrentWeaponSkelMesh");

	ABP_AI_MechaBiped_Enemy_C_GetCurrentWeaponSkelMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWeaponSkelMesh != nullptr)
		*CurrentWeaponSkelMesh = params.CurrentWeaponSkelMesh;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.UserConstructionScript");

	ABP_AI_MechaBiped_Enemy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ShrinkDeadMech__FinishedFunc
// (BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::ShrinkDeadMech__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ShrinkDeadMech__FinishedFunc");

	ABP_AI_MechaBiped_Enemy_C_ShrinkDeadMech__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ShrinkDeadMech__UpdateFunc
// (BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::ShrinkDeadMech__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ShrinkDeadMech__UpdateFunc");

	ABP_AI_MechaBiped_Enemy_C_ShrinkDeadMech__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.RefillShaderAnimation__FinishedFunc
// (BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::RefillShaderAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.RefillShaderAnimation__FinishedFunc");

	ABP_AI_MechaBiped_Enemy_C_RefillShaderAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.RefillShaderAnimation__UpdateFunc
// (BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::RefillShaderAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.RefillShaderAnimation__UpdateFunc");

	ABP_AI_MechaBiped_Enemy_C_RefillShaderAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.FireRadialImpulse
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::FireRadialImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.FireRadialImpulse");

	ABP_AI_MechaBiped_Enemy_C_FireRadialImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ReceiveBeginPlay");

	ABP_AI_MechaBiped_Enemy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ReceiveTick");

	ABP_AI_MechaBiped_Enemy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.StartAttack
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.StartAttack");

	ABP_AI_MechaBiped_Enemy_C_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Start attack Event manual
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Start_attack_Event_manual()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Start attack Event manual");

	ABP_AI_MechaBiped_Enemy_C_Start_attack_Event_manual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.End Auto Shooting manually
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::End_Auto_Shooting_manually()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.End Auto Shooting manually");

	ABP_AI_MechaBiped_Enemy_C_End_Auto_Shooting_manually_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SwitchWeaponMovmentOn
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SwitchWeaponMovmentOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SwitchWeaponMovmentOn");

	ABP_AI_MechaBiped_Enemy_C_SwitchWeaponMovmentOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SwitchWeaponMovmentOff
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SwitchWeaponMovmentOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SwitchWeaponMovmentOff");

	ABP_AI_MechaBiped_Enemy_C_SwitchWeaponMovmentOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetDeactivatedMechProps
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SetDeactivatedMechProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetDeactivatedMechProps");

	ABP_AI_MechaBiped_Enemy_C_SetDeactivatedMechProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetActivateBarrierShieldProps
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SetActivateBarrierShieldProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetActivateBarrierShieldProps");

	ABP_AI_MechaBiped_Enemy_C_SetActivateBarrierShieldProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.MinimizeBarrierShield
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::MinimizeBarrierShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.MinimizeBarrierShield");

	ABP_AI_MechaBiped_Enemy_C_MinimizeBarrierShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoShutdownJetFlares
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Multicast_DoShutdownJetFlares()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoShutdownJetFlares");

	ABP_AI_MechaBiped_Enemy_C_Multicast_DoShutdownJetFlares_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AI_MechaBiped_Enemy_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ReceivePointDamage");

	ABP_AI_MechaBiped_Enemy_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoOnDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BulletDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HeadShot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Hit_Bone_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DamageCauseLocation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HitWasRadialDamage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_DamageType_BaseREWave_C* DamageTypeRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::Multicast_DoOnDeath(const struct FVector& BulletDirection, bool HeadShot, const struct FName& Hit_Bone_Name, const struct FVector& DamageCauseLocation, float Damage, bool HitWasRadialDamage, class UBP_DamageType_BaseREWave_C* DamageTypeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoOnDeath");

	ABP_AI_MechaBiped_Enemy_C_Multicast_DoOnDeath_Params params;
	params.BulletDirection = BulletDirection;
	params.HeadShot = HeadShot;
	params.Hit_Bone_Name = Hit_Bone_Name;
	params.DamageCauseLocation = DamageCauseLocation;
	params.Damage = Damage;
	params.HitWasRadialDamage = HitWasRadialDamage;
	params.DamageTypeRef = DamageTypeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetActivateBarrierShieldPropsNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_SetActivateBarrierShieldPropsNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetActivateBarrierShieldPropsNotify");

	ABP_AI_MechaBiped_Enemy_C_Server_SetActivateBarrierShieldPropsNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetDeactivateBarrierShieldNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_SetDeactivateBarrierShieldNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetDeactivateBarrierShieldNotify");

	ABP_AI_MechaBiped_Enemy_C_Server_SetDeactivateBarrierShieldNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetDeactivateMechPropsNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_SetDeactivateMechPropsNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetDeactivateMechPropsNotify");

	ABP_AI_MechaBiped_Enemy_C_Server_SetDeactivateMechPropsNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetActivatedMechPropsNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_SetActivatedMechPropsNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetActivatedMechPropsNotify");

	ABP_AI_MechaBiped_Enemy_C_Server_SetActivatedMechPropsNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetShutdownJetFlaresPropsNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_SetShutdownJetFlaresPropsNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetShutdownJetFlaresPropsNotify");

	ABP_AI_MechaBiped_Enemy_C_Server_SetShutdownJetFlaresPropsNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetDeactivateBarrierShieldProps
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SetDeactivateBarrierShieldProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetDeactivateBarrierShieldProps");

	ABP_AI_MechaBiped_Enemy_C_SetDeactivateBarrierShieldProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetActivatedMechProps
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SetActivatedMechProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetActivatedMechProps");

	ABP_AI_MechaBiped_Enemy_C_SetActivatedMechProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoDeactivateBarrierShield
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OptionalDelay_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::Multicast_DoDeactivateBarrierShield(float OptionalDelay_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoDeactivateBarrierShield");

	ABP_AI_MechaBiped_Enemy_C_Multicast_DoDeactivateBarrierShield_Params params;
	params.OptionalDelay_ = OptionalDelay_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetActiveJetFlaresPropsNotify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_SetActiveJetFlaresPropsNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_SetActiveJetFlaresPropsNotify");

	ABP_AI_MechaBiped_Enemy_C_Server_SetActiveJetFlaresPropsNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoStartUpFlares
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Multicast_DoStartUpFlares()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_DoStartUpFlares");

	ABP_AI_MechaBiped_Enemy_C_Multicast_DoStartUpFlares_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetShutdownJetFlaresProps
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SetShutdownJetFlaresProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetShutdownJetFlaresProps");

	ABP_AI_MechaBiped_Enemy_C_SetShutdownJetFlaresProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetActiveJetFlaresProps
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::SetActiveJetFlaresProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.SetActiveJetFlaresProps");

	ABP_AI_MechaBiped_Enemy_C_SetActiveJetFlaresProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.JetFlareShutdownNow_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::JetFlareShutdownNow_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.JetFlareShutdownNow_Event_1");

	ABP_AI_MechaBiped_Enemy_C_JetFlareShutdownNow_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.JetFlareActiveNow_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::JetFlareActiveNow_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.JetFlareActiveNow_Event_1");

	ABP_AI_MechaBiped_Enemy_C_JetFlareActiveNow_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_ActivateMechShutDownShieldDisableJetsEnableAi
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Server_ActivateMechShutDownShieldDisableJetsEnableAi()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Server_ActivateMechShutDownShieldDisableJetsEnableAi");

	ABP_AI_MechaBiped_Enemy_C_Server_ActivateMechShutDownShieldDisableJetsEnableAi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Mutlicast_DoActivateMechAnimAndEnableAi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::Mutlicast_DoActivateMechAnimAndEnableAi()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Mutlicast_DoActivateMechAnimAndEnableAi");

	ABP_AI_MechaBiped_Enemy_C_Mutlicast_DoActivateMechAnimAndEnableAi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ShootRocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::ShootRocket(class USkeletalMeshComponent* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ShootRocket");

	ABP_AI_MechaBiped_Enemy_C_ShootRocket_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_ReloadRocket
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::Multicast_ReloadRocket(class USkeletalMeshComponent* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_ReloadRocket");

	ABP_AI_MechaBiped_Enemy_C_Multicast_ReloadRocket_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_HideRocketOnShoot
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  RocketSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::Multicast_HideRocketOnShoot(class USkeletalMeshComponent* RocketSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.Multicast_HideRocketOnShoot");

	ABP_AI_MechaBiped_Enemy_C_Multicast_HideRocketOnShoot_Params params;
	params.RocketSlot = RocketSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.DriveTickWeaponPitchAndYawForSeperateWeaponMeshes
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::DriveTickWeaponPitchAndYawForSeperateWeaponMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.DriveTickWeaponPitchAndYawForSeperateWeaponMeshes");

	ABP_AI_MechaBiped_Enemy_C_DriveTickWeaponPitchAndYawForSeperateWeaponMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.DriveTickWeaponPitchAndYawWithAnimBpAimOffset2D
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::DriveTickWeaponPitchAndYawWithAnimBpAimOffset2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.DriveTickWeaponPitchAndYawWithAnimBpAimOffset2D");

	ABP_AI_MechaBiped_Enemy_C_DriveTickWeaponPitchAndYawWithAnimBpAimOffset2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.AiOnDeath_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaBiped_Enemy_C::AiOnDeath_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.AiOnDeath_Event_1");

	ABP_AI_MechaBiped_Enemy_C_AiOnDeath_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ExecuteUbergraph_BP_AI_MechaBiped_Enemy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaBiped_Enemy_C::ExecuteUbergraph_BP_AI_MechaBiped_Enemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaBiped_Enemy.BP_AI_MechaBiped_Enemy_C.ExecuteUbergraph_BP_AI_MechaBiped_Enemy");

	ABP_AI_MechaBiped_Enemy_C_ExecuteUbergraph_BP_AI_MechaBiped_Enemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
