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

// Function RegainEarth_FS.BPFunctionLibrary_C.SwitchSignYAxisValueOfCurveVector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCurveVector*            CurveVector                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchToNegative               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPFunctionLibrary_C::STATIC_SwitchSignYAxisValueOfCurveVector(class UCurveVector* CurveVector, bool SwitchToNegative)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.SwitchSignYAxisValueOfCurveVector");

	UBPFunctionLibrary_C_SwitchSignYAxisValueOfCurveVector_Params params;
	params.CurveVector = CurveVector;
	params.SwitchToNegative = SwitchToNegative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.SetSightRangeByAIPerceptionComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*  AIPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SightRange                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPFunctionLibrary_C::STATIC_SetSightRangeByAIPerceptionComponent(class UAIPerceptionComponent* AIPerceptionComponent, float SightRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.SetSightRangeByAIPerceptionComponent");

	UBPFunctionLibrary_C_SetSightRangeByAIPerceptionComponent_Params params;
	params.AIPerceptionComponent = AIPerceptionComponent;
	params.SightRange = SightRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.SetSightRangeByAiController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SightRange                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPFunctionLibrary_C::STATIC_SetSightRangeByAiController(class AAIController* Controller, float SightRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.SetSightRangeByAiController");

	UBPFunctionLibrary_C_SetSightRangeByAiController_Params params;
	params.Controller = Controller;
	params.SightRange = SightRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.SetHearingRangeByAIPerceptionComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*  AIPerceptionComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HearingRange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPFunctionLibrary_C::STATIC_SetHearingRangeByAIPerceptionComponent(class UAIPerceptionComponent* AIPerceptionComponent, float HearingRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.SetHearingRangeByAIPerceptionComponent");

	UBPFunctionLibrary_C_SetHearingRangeByAIPerceptionComponent_Params params;
	params.AIPerceptionComponent = AIPerceptionComponent;
	params.HearingRange = HearingRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.IsStandalone
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPFunctionLibrary_C::STATIC_IsStandalone()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.IsStandalone");

	UBPFunctionLibrary_C_IsStandalone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.IsNonNetworkGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBPFunctionLibrary_C::STATIC_IsNonNetworkGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.IsNonNetworkGame");

	UBPFunctionLibrary_C_IsNonNetworkGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetWorldType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBPFunctionLibrary_C::STATIC_GetWorldType()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetWorldType");

	UBPFunctionLibrary_C_GetWorldType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetRootWidgetBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             PUserWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UBPFunctionLibrary_C::STATIC_GetRootWidgetBP(class UUserWidget* PUserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetRootWidgetBP");

	UBPFunctionLibrary_C_GetRootWidgetBP_Params params;
	params.PUserWidget = PUserWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetNetMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBPFunctionLibrary_C::STATIC_GetNetMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetNetMode");

	UBPFunctionLibrary_C_GetNetMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForClass_NotWorking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  InActorClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ANavigationData* UBPFunctionLibrary_C::STATIC_GetNavDataForClass_NotWorking(class UObject* WorldContextObject, class UClass* InActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForClass_NotWorking");

	UBPFunctionLibrary_C_GetNavDataForClass_NotWorking_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InActorClass = InActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForAgentNameUE4
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AgentName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ANavigationData* UBPFunctionLibrary_C::STATIC_GetNavDataForAgentNameUE4(class UObject* WorldContextObject, const struct FName& AgentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForAgentNameUE4");

	UBPFunctionLibrary_C_GetNavDataForAgentNameUE4_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AgentName = AgentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForActorUE4
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ANavigationData* UBPFunctionLibrary_C::STATIC_GetNavDataForActorUE4(class UObject* WorldContextObject, class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForActorUE4");

	UBPFunctionLibrary_C_GetNavDataForActorUE4_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForActorSelfmade
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ANavigationData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ANavigationData* UBPFunctionLibrary_C::STATIC_GetNavDataForActorSelfmade(class UObject* WorldContextObject, class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForActorSelfmade");

	UBPFunctionLibrary_C_GetNavDataForActorSelfmade_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.GameInstance_RE_Base.ShowGlobalWidgetScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameInstance_RE_Base::ShowGlobalWidgetScreen(class UUserWidget* Widget, int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.GameInstance_RE_Base.ShowGlobalWidgetScreen");

	UGameInstance_RE_Base_ShowGlobalWidgetScreen_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.GameInstance_RE_Base.RemoveGlobalWidgetScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameInstance_RE_Base::RemoveGlobalWidgetScreen(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.GameInstance_RE_Base.RemoveGlobalWidgetScreen");

	UGameInstance_RE_Base_RemoveGlobalWidgetScreen_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.MyGetFriendsCallbackProxy.MyGetAndStoreFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMyGetFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMyGetFriendsCallbackProxy* UMyGetFriendsCallbackProxy::STATIC_MyGetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.MyGetFriendsCallbackProxy.MyGetAndStoreFriendsList");

	UMyGetFriendsCallbackProxy_MyGetAndStoreFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.MyGetLeaderBoardEntryIntegerCallbackProxy.MyCreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMyGetLeaderBoardEntryIntegerCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMyGetLeaderBoardEntryIntegerCallbackProxy* UMyGetLeaderBoardEntryIntegerCallbackProxy::STATIC_MyCreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.MyGetLeaderBoardEntryIntegerCallbackProxy.MyCreateProxyObjectForIntQuery");

	UMyGetLeaderBoardEntryIntegerCallbackProxy_MyCreateProxyObjectForIntQuery_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.Projectile_Base.OnProjectileImpact
// (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AProjectile_Base::OnProjectileImpact(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.Projectile_Base.OnProjectileImpact");

	AProjectile_Base_OnProjectileImpact_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.SetMaxHealth
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          healthValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATPS_PlayerCharacter_Base::SetMaxHealth(float healthValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.SetMaxHealth");

	ATPS_PlayerCharacter_Base_SetMaxHealth_Params params;
	params.healthValue = healthValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.SetCurrentHealth
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          healthValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATPS_PlayerCharacter_Base::SetCurrentHealth(float healthValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.SetCurrentHealth");

	ATPS_PlayerCharacter_Base_SetCurrentHealth_Params params;
	params.healthValue = healthValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRepCPP_MaxHealthBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ATPS_PlayerCharacter_Base::OnRepCPP_MaxHealthBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRepCPP_MaxHealthBP");

	ATPS_PlayerCharacter_Base_OnRepCPP_MaxHealthBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRepCPP_CurrentHealthBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void ATPS_PlayerCharacter_Base::OnRepCPP_CurrentHealthBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRepCPP_CurrentHealthBP");

	ATPS_PlayerCharacter_Base_OnRepCPP_CurrentHealthBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRep_MaxHealth
// (Final, Native, Protected)
void ATPS_PlayerCharacter_Base::OnRep_MaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRep_MaxHealth");

	ATPS_PlayerCharacter_Base_OnRep_MaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRep_CurrentHealth
// (Final, Native, Protected)
void ATPS_PlayerCharacter_Base::OnRep_CurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRep_CurrentHealth");

	ATPS_PlayerCharacter_Base_OnRep_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.GetMaxHealth
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ATPS_PlayerCharacter_Base::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.GetMaxHealth");

	ATPS_PlayerCharacter_Base_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RegainEarth_FS.TPS_PlayerCharacter_Base.GetCurrentHealth
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ATPS_PlayerCharacter_Base::GetCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegainEarth_FS.TPS_PlayerCharacter_Base.GetCurrentHealth");

	ATPS_PlayerCharacter_Base_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
