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

// Function RegainEarth_FS.BPFunctionLibrary_C.SwitchSignYAxisValueOfCurveVector
struct UBPFunctionLibrary_C_SwitchSignYAxisValueOfCurveVector_Params
{
	class UCurveVector*                                CurveVector;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SwitchToNegative;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.SetSightRangeByAIPerceptionComponent
struct UBPFunctionLibrary_C_SetSightRangeByAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      AIPerceptionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRange;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.SetSightRangeByAiController
struct UBPFunctionLibrary_C_SetSightRangeByAiController_Params
{
	class AAIController*                               Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRange;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.SetHearingRangeByAIPerceptionComponent
struct UBPFunctionLibrary_C_SetHearingRangeByAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      AIPerceptionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingRange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.IsStandalone
struct UBPFunctionLibrary_C_IsStandalone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.IsNonNetworkGame
struct UBPFunctionLibrary_C_IsNonNetworkGame_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetWorldType
struct UBPFunctionLibrary_C_GetWorldType_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetRootWidgetBP
struct UBPFunctionLibrary_C_GetRootWidgetBP_Params
{
	class UUserWidget*                                 PUserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetNetMode
struct UBPFunctionLibrary_C_GetNetMode_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForClass_NotWorking
struct UBPFunctionLibrary_C_GetNavDataForClass_NotWorking_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      InActorClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForAgentNameUE4
struct UBPFunctionLibrary_C_GetNavDataForAgentNameUE4_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AgentName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForActorUE4
struct UBPFunctionLibrary_C_GetNavDataForActorUE4_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.BPFunctionLibrary_C.GetNavDataForActorSelfmade
struct UBPFunctionLibrary_C_GetNavDataForActorSelfmade_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.GameInstance_RE_Base.ShowGlobalWidgetScreen
struct UGameInstance_RE_Base_ShowGlobalWidgetScreen_Params
{
	class UUserWidget*                                 Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.GameInstance_RE_Base.RemoveGlobalWidgetScreen
struct UGameInstance_RE_Base_RemoveGlobalWidgetScreen_Params
{
	class UUserWidget*                                 Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.MyGetFriendsCallbackProxy.MyGetAndStoreFriendsList
struct UMyGetFriendsCallbackProxy_MyGetAndStoreFriendsList_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMyGetFriendsCallbackProxy*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.MyGetLeaderBoardEntryIntegerCallbackProxy.MyCreateProxyObjectForIntQuery
struct UMyGetLeaderBoardEntryIntegerCallbackProxy_MyCreateProxyObjectForIntQuery_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StatName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMyGetLeaderBoardEntryIntegerCallbackProxy*  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.Projectile_Base.OnProjectileImpact
struct AProjectile_Base_OnProjectileImpact_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.SetMaxHealth
struct ATPS_PlayerCharacter_Base_SetMaxHealth_Params
{
	float                                              healthValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.SetCurrentHealth
struct ATPS_PlayerCharacter_Base_SetCurrentHealth_Params
{
	float                                              healthValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRepCPP_MaxHealthBP
struct ATPS_PlayerCharacter_Base_OnRepCPP_MaxHealthBP_Params
{
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRepCPP_CurrentHealthBP
struct ATPS_PlayerCharacter_Base_OnRepCPP_CurrentHealthBP_Params
{
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRep_MaxHealth
struct ATPS_PlayerCharacter_Base_OnRep_MaxHealth_Params
{
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.OnRep_CurrentHealth
struct ATPS_PlayerCharacter_Base_OnRep_CurrentHealth_Params
{
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.GetMaxHealth
struct ATPS_PlayerCharacter_Base_GetMaxHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RegainEarth_FS.TPS_PlayerCharacter_Base.GetCurrentHealth
struct ATPS_PlayerCharacter_Base_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
