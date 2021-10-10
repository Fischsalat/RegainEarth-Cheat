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

// Function BP_Turret_Base.BP_Turret_Base_C.IsProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsProjectile                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Base_C::IsProjectile(bool* IsProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.IsProjectile");

	ABP_Turret_Base_C_IsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsProjectile != nullptr)
		*IsProjectile = params.IsProjectile;

}


// Function BP_Turret_Base.BP_Turret_Base_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Base_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.IsOnPlayersSideAndAttackable");

	ABP_Turret_Base_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


// Function BP_Turret_Base.BP_Turret_Base_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Base_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.IsEnemiesSideAndAttackable");

	ABP_Turret_Base_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function BP_Turret_Base.BP_Turret_Base_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.GetMeshAndBoneToAimFor");

	ABP_Turret_Base_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function BP_Turret_Base.BP_Turret_Base_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.GetSelfName");

	ABP_Turret_Base_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BP_Turret_Base.BP_Turret_Base_C.OnRep_IsOnPause?
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::OnRep_IsOnPause_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.OnRep_IsOnPause?");

	ABP_Turret_Base_C_OnRep_IsOnPause__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.GetIsUnconsciousOrDeadOrSimilar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnconscious_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Base_C::GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.GetIsUnconsciousOrDeadOrSimilar");

	ABP_Turret_Base_C_GetIsUnconsciousOrDeadOrSimilar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnconscious_ != nullptr)
		*IsUnconscious_ = params.IsUnconscious_;

}


// Function BP_Turret_Base.BP_Turret_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.UserConstructionScript");

	ABP_Turret_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.StartSphereDetectionLoop
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::StartSphereDetectionLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.StartSphereDetectionLoop");

	ABP_Turret_Base_C_StartSphereDetectionLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.CheckForOverlappingActors
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::CheckForOverlappingActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.CheckForOverlappingActors");

	ABP_Turret_Base_C_CheckForOverlappingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Turret_Base_C::BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Turret_Base_C_BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Turret_Base.BP_Turret_Base_C.CheckIsDetectedActorAttackable
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToCheck                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasDetectedViaOverlapBeginEvent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Turret_Base_C::CheckIsDetectedActorAttackable(class AActor* ActorToCheck, bool WasDetectedViaOverlapBeginEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.CheckIsDetectedActorAttackable");

	ABP_Turret_Base_C_CheckIsDetectedActorAttackable_Params params;
	params.ActorToCheck = ActorToCheck;
	params.WasDetectedViaOverlapBeginEvent = WasDetectedViaOverlapBeginEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.OnActorDetectedAndAttackableAndInLOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DetectedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::OnActorDetectedAndAttackableAndInLOS(class AActor* DetectedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.OnActorDetectedAndAttackableAndInLOS");

	ABP_Turret_Base_C_OnActorDetectedAndAttackableAndInLOS_Params params;
	params.DetectedActor = DetectedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.CheckIsDetectedActorInLOS
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToCheck                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::CheckIsDetectedActorInLOS(class AActor* ActorToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.CheckIsDetectedActorInLOS");

	ABP_Turret_Base_C_CheckIsDetectedActorInLOS_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.OnActorLeftRange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LeftActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::OnActorLeftRange(class AActor* LeftActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.OnActorLeftRange");

	ABP_Turret_Base_C_OnActorLeftRange_Params params;
	params.LeftActor = LeftActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Turret_Base_C_BndEvt__BP_Turret_Base_SphereRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.SynchonizeOverlappedActors
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::SynchonizeOverlappedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.SynchonizeOverlappedActors");

	ABP_Turret_Base_C_SynchonizeOverlappedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.StopEventTickGateAndShutDownCompletly
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::StopEventTickGateAndShutDownCompletly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.StopEventTickGateAndShutDownCompletly");

	ABP_Turret_Base_C_StopEventTickGateAndShutDownCompletly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.StartEventTickGateAndStartFullFunctionsAgain
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::StartEventTickGateAndStartFullFunctionsAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.StartEventTickGateAndStartFullFunctionsAgain");

	ABP_Turret_Base_C_StartEventTickGateAndStartFullFunctionsAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.Server_StopEventTickGateAndShutDownCompletlyAndReplicate
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::Server_StopEventTickGateAndShutDownCompletlyAndReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.Server_StopEventTickGateAndShutDownCompletlyAndReplicate");

	ABP_Turret_Base_C_Server_StopEventTickGateAndShutDownCompletlyAndReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate
// (BlueprintCallable, BlueprintEvent)
void ABP_Turret_Base_C::Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate");

	ABP_Turret_Base_C_Server_StartEventTickGateAndStartFullFunctionsAgainAndReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Turret_Base.BP_Turret_Base_C.ExecuteUbergraph_BP_Turret_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Turret_Base_C::ExecuteUbergraph_BP_Turret_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Base.BP_Turret_Base_C.ExecuteUbergraph_BP_Turret_Base");

	ABP_Turret_Base_C_ExecuteUbergraph_BP_Turret_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
