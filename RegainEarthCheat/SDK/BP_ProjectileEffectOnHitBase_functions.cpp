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

// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsOnPlayersSideAndAttackable");

	ABP_ProjectileEffectOnHitBase_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsEnemiesSideAndAttackable");

	ABP_ProjectileEffectOnHitBase_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetMeshAndBoneToAimFor");

	ABP_ProjectileEffectOnHitBase_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetSelfName");

	ABP_ProjectileEffectOnHitBase_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsProjectile                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProjectileEffectOnHitBase_C::IsProjectile(bool* IsProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.IsProjectile");

	ABP_ProjectileEffectOnHitBase_C_IsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsProjectile != nullptr)
		*IsProjectile = params.IsProjectile;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetInvestigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnInvestigator               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::GetInvestigator(class APawn** PawnInvestigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.GetInvestigator");

	ABP_ProjectileEffectOnHitBase_C_GetInvestigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PawnInvestigator != nullptr)
		*PawnInvestigator = params.PawnInvestigator;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.UserConstructionScript");

	ABP_ProjectileEffectOnHitBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit__FinishedFunc
// (BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::Timeline_WhenDestoryAfterHit__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit__FinishedFunc");

	ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit__UpdateFunc
// (BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::Timeline_WhenDestoryAfterHit__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit__UpdateFunc");

	ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit_ShortLifetime__FinishedFunc
// (BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::Timeline_WhenDestoryAfterHit_ShortLifetime__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit_ShortLifetime__FinishedFunc");

	ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit_ShortLifetime__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit_ShortLifetime__UpdateFunc
// (BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::Timeline_WhenDestoryAfterHit_ShortLifetime__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Timeline_WhenDestoryAfterHit_ShortLifetime__UpdateFunc");

	ABP_ProjectileEffectOnHitBase_C_Timeline_WhenDestoryAfterHit_ShortLifetime__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveBeginPlay");

	ABP_ProjectileEffectOnHitBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveTick");

	ABP_ProjectileEffectOnHitBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_ProjectileEffectOnHitBase_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ReceiveHit");

	ABP_ProjectileEffectOnHitBase_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.MulticastAddImpusle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::MulticastAddImpusle(class UPrimitiveComponent* Target, const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.MulticastAddImpusle");

	ABP_ProjectileEffectOnHitBase_C_MulticastAddImpusle_Params params;
	params.Target = Target;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.SetProjectileDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::SetProjectileDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.SetProjectileDamage");

	ABP_ProjectileEffectOnHitBase_C_SetProjectileDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.EndVisualizeToAll
// (BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::EndVisualizeToAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.EndVisualizeToAll");

	ABP_ProjectileEffectOnHitBase_C_EndVisualizeToAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_EndVisualizeToAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::Multicast_EndVisualizeToAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_EndVisualizeToAll");

	ABP_ProjectileEffectOnHitBase_C_Multicast_EndVisualizeToAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_HitImpactVisuals
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_ProjectileEffectOnHitBase_C::Multicast_HitImpactVisuals(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_HitImpactVisuals");

	ABP_ProjectileEffectOnHitBase_C_Multicast_HitImpactVisuals_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_EndVisualizeToAll_ShortProjLifetime
// (BlueprintCallable, BlueprintEvent)
void ABP_ProjectileEffectOnHitBase_C::Multicast_EndVisualizeToAll_ShortProjLifetime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.Multicast_EndVisualizeToAll_ShortProjLifetime");

	ABP_ProjectileEffectOnHitBase_C_Multicast_EndVisualizeToAll_ShortProjLifetime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.SetProjectileSizeScaleFactor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SizeScaleFactor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::SetProjectileSizeScaleFactor(float SizeScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.SetProjectileSizeScaleFactor");

	ABP_ProjectileEffectOnHitBase_C_SetProjectileSizeScaleFactor_Params params;
	params.SizeScaleFactor = SizeScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.TriggerProjectileCustomHitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_ProjectileEffectOnHitBase_C::TriggerProjectileCustomHitEvent(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.TriggerProjectileCustomHitEvent");

	ABP_ProjectileEffectOnHitBase_C_TriggerProjectileCustomHitEvent_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileEffectOnHitBase_C::ExecuteUbergraph_BP_ProjectileEffectOnHitBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileEffectOnHitBase.BP_ProjectileEffectOnHitBase_C.ExecuteUbergraph_BP_ProjectileEffectOnHitBase");

	ABP_ProjectileEffectOnHitBase_C_ExecuteUbergraph_BP_ProjectileEffectOnHitBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
