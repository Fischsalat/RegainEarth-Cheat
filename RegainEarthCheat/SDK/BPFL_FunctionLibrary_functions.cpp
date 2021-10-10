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

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetSkelMeshModelSkinOfIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           SkelMeshInclSkinTexture        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetSkelMeshModelSkinOfIndex(int Index, class UObject* __WorldContext, class USkeletalMesh** SkelMeshInclSkinTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetSkelMeshModelSkinOfIndex");

	UBPFL_FunctionLibrary_C_GetSkelMeshModelSkinOfIndex_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkelMeshInclSkinTexture != nullptr)
		*SkelMeshInclSkinTexture = params.SkelMeshInclSkinTexture;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetCalculatedSensitivityFromGameInstance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ForMouse_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FoInvertableitch_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBPFL_FunctionLibrary_C::STATIC_GetCalculatedSensitivityFromGameInstance(bool ForMouse_, bool FoInvertableitch_, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetCalculatedSensitivityFromGameInstance");

	UBPFL_FunctionLibrary_C_GetCalculatedSensitivityFromGameInstance_Params params;
	params.ForMouse_ = ForMouse_;
	params.FoInvertableitch_ = FoInvertableitch_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SetAchievementPassedWhenParamSumOverBoundaryNoGate
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievementID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            BoundaryMinToSetAchievementPassed (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SummarizeParam1                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SummarizeParam2                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AchievementSetPassed_          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_FunctionLibrary_C::STATIC_SetAchievementPassedWhenParamSumOverBoundaryNoGate(TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievementID, int BoundaryMinToSetAchievementPassed, int SummarizeParam1, int SummarizeParam2, class UObject* __WorldContext, bool* AchievementSetPassed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SetAchievementPassedWhenParamSumOverBoundaryNoGate");

	UBPFL_FunctionLibrary_C_SetAchievementPassedWhenParamSumOverBoundaryNoGate_Params params;
	params.AchievementID = AchievementID;
	params.BoundaryMinToSetAchievementPassed = BoundaryMinToSetAchievementPassed;
	params.SummarizeParam1 = SummarizeParam1;
	params.SummarizeParam2 = SummarizeParam2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AchievementSetPassed_ != nullptr)
		*AchievementSetPassed_ = params.AchievementSetPassed_;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetNavDataForClass_UseWithCaution
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  PawnClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANavigationData*         NavData                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetNavDataForClass_UseWithCaution(class UClass* PawnClass, class UObject* __WorldContext, class ANavigationData** NavData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetNavDataForClass_UseWithCaution");

	UBPFL_FunctionLibrary_C_GetNavDataForClass_UseWithCaution_Params params;
	params.PawnClass = PawnClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavData != nullptr)
		*NavData = params.NavData;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetTargetBuildConfiguration
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ETargetBuildConfiguration_ETargetBuildConfiguration> TargetBuildConfig              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetTargetBuildConfiguration(class UObject* __WorldContext, TEnumAsByte<ETargetBuildConfiguration_ETargetBuildConfiguration>* TargetBuildConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetTargetBuildConfiguration");

	UBPFL_FunctionLibrary_C_GetTargetBuildConfiguration_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetBuildConfig != nullptr)
		*TargetBuildConfig = params.TargetBuildConfig;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetPlayerControllerReWavePureF
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Wave_REHR_PlayerController_C* CastedREWavePlayerController   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetPlayerControllerReWavePureF(class UObject* __WorldContext, class ABP_Wave_REHR_PlayerController_C** CastedREWavePlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetPlayerControllerReWavePureF");

	UBPFL_FunctionLibrary_C_GetPlayerControllerReWavePureF_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CastedREWavePlayerController != nullptr)
		*CastedREWavePlayerController = params.CastedREWavePlayerController;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetIsDemoBuildFunc
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsDemoBuild                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_FunctionLibrary_C::STATIC_GetIsDemoBuildFunc(class UObject* __WorldContext, bool* IsDemoBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetIsDemoBuildFunc");

	UBPFL_FunctionLibrary_C_GetIsDemoBuildFunc_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDemoBuild != nullptr)
		*IsDemoBuild = params.IsDemoBuild;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.Active Player Controller Is Local Player Controller
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PcIsLocalAndPlayerController   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_FunctionLibrary_C::STATIC_Active_Player_Controller_Is_Local_Player_Controller(class UObject* __WorldContext, bool* PcIsLocalAndPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.Active Player Controller Is Local Player Controller");

	UBPFL_FunctionLibrary_C_Active_Player_Controller_Is_Local_Player_Controller_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PcIsLocalAndPlayerController != nullptr)
		*PcIsLocalAndPlayerController = params.PcIsLocalAndPlayerController;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.IsNotStandAloneGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ItIsNotStandAloneGame          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_FunctionLibrary_C::STATIC_IsNotStandAloneGame(class UObject* __WorldContext, bool* ItIsNotStandAloneGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.IsNotStandAloneGame");

	UBPFL_FunctionLibrary_C_IsNotStandAloneGame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItIsNotStandAloneGame != nullptr)
		*ItIsNotStandAloneGame = params.ItIsNotStandAloneGame;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeKnownGmPlayersServerUsedOnly
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AController*>     Controller                     (Parm, OutParm)
void UBPFL_FunctionLibrary_C::STATIC_GetGameModeKnownGmPlayersServerUsedOnly(class UObject* __WorldContext, TArray<class AController*>* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeKnownGmPlayersServerUsedOnly");

	UBPFL_FunctionLibrary_C_GetGameModeKnownGmPlayersServerUsedOnly_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.IsLobbyLevel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CurrentLevelIsLobbyLevel_      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_FunctionLibrary_C::STATIC_IsLobbyLevel(class UObject* __WorldContext, bool* CurrentLevelIsLobbyLevel_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.IsLobbyLevel");

	UBPFL_FunctionLibrary_C_IsLobbyLevel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentLevelIsLobbyLevel_ != nullptr)
		*CurrentLevelIsLobbyLevel_ = params.CurrentLevelIsLobbyLevel_;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameStateReWavePure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Wave_GameState_C*    AsBP_Wave_Gamestate            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameStateReWavePure(class UObject* __WorldContext, class ABP_Wave_GameState_C** AsBP_Wave_Gamestate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameStateReWavePure");

	UBPFL_FunctionLibrary_C_GetGameStateReWavePure_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBP_Wave_Gamestate != nullptr)
		*AsBP_Wave_Gamestate = params.AsBP_Wave_Gamestate;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameStateReWave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Wave_GameState_C*    AsBP_Wave_Gamestate            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameStateReWave(class UObject* __WorldContext, class ABP_Wave_GameState_C** AsBP_Wave_Gamestate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameStateReWave");

	UBPFL_FunctionLibrary_C_GetGameStateReWave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBP_Wave_Gamestate != nullptr)
		*AsBP_Wave_Gamestate = params.AsBP_Wave_Gamestate;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWavePure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_RE_C*   GameInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameInstanceReWavePure(class UObject* __WorldContext, class UBP_GameInstance_RE_C** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWavePure");

	UBPFL_FunctionLibrary_C_GetGameInstanceReWavePure_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameInstance != nullptr)
		*GameInstance = params.GameInstance;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeReWavePure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Wave_Gamemode_C*     AsBP_Wave_Gamemode             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameModeReWavePure(class UObject* __WorldContext, class ABP_Wave_Gamemode_C** AsBP_Wave_Gamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeReWavePure");

	UBPFL_FunctionLibrary_C_GetGameModeReWavePure_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBP_Wave_Gamemode != nullptr)
		*AsBP_Wave_Gamemode = params.AsBP_Wave_Gamemode;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeReWave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Wave_Gamemode_C*     AsBP_Wave_Gamemode             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameModeReWave(class UObject* __WorldContext, class ABP_Wave_Gamemode_C** AsBP_Wave_Gamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeReWave");

	UBPFL_FunctionLibrary_C_GetGameModeReWave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBP_Wave_Gamemode != nullptr)
		*AsBP_Wave_Gamemode = params.AsBP_Wave_Gamemode;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetHudReWave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_ShootingGameplay_C* HUDRef                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetHudReWave(class UObject* __WorldContext, class AHUD_ShootingGameplay_C** HUDRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetHudReWave");

	UBPFL_FunctionLibrary_C_GetHudReWave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HUDRef != nullptr)
		*HUDRef = params.HUDRef;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.CheckIsControlledPlayerPawnOfLocalPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPlayer                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFL_FunctionLibrary_C::STATIC_CheckIsControlledPlayerPawnOfLocalPlayer(class UObject* Actor, class UObject* __WorldContext, bool* IsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.CheckIsControlledPlayerPawnOfLocalPlayer");

	UBPFL_FunctionLibrary_C_CheckIsControlledPlayerPawnOfLocalPlayer_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPlayer != nullptr)
		*IsPlayer = params.IsPlayer;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SetNewPlayerNameToSaveGameSlot
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UBPFL_FunctionLibrary_C::STATIC_SetNewPlayerNameToSaveGameSlot(const struct FString& SlotName, const struct FString& PlayerName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SetNewPlayerNameToSaveGameSlot");

	UBPFL_FunctionLibrary_C_SetNewPlayerNameToSaveGameSlot_Params params;
	params.SlotName = SlotName;
	params.PlayerName = PlayerName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SaveGameSlotNameGenerator
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveGameType_ESaveGameType> SaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UBPFL_FunctionLibrary_C::STATIC_SaveGameSlotNameGenerator(TEnumAsByte<ESaveGameType_ESaveGameType> SaveType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SaveGameSlotNameGenerator");

	UBPFL_FunctionLibrary_C_SaveGameSlotNameGenerator_Params params;
	params.SaveType = SaveType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.CutString
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            MaxLenght                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Upper                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// struct FText                   ToText                         (Parm, OutParm)
struct FString UBPFL_FunctionLibrary_C::STATIC_CutString(const struct FString& String, int MaxLenght, bool Upper, class UObject* __WorldContext, struct FText* ToText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.CutString");

	UBPFL_FunctionLibrary_C_CutString_Params params;
	params.String = String;
	params.MaxLenght = MaxLenght;
	params.Upper = Upper;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToText != nullptr)
		*ToText = params.ToText;


	return params.ReturnValue;
}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWaveBoolNoError
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_RE_C*   GameInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameInstanceReWaveBoolNoError(class UObject* __WorldContext, bool* IsSuccess, class UBP_GameInstance_RE_C** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWaveBoolNoError");

	UBPFL_FunctionLibrary_C_GetGameInstanceReWaveBoolNoError_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (GameInstance != nullptr)
		*GameInstance = params.GameInstance;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWaveBool
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_RE_C*   GameInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_GetGameInstanceReWaveBool(class UObject* __WorldContext, bool* IsSuccess, class UBP_GameInstance_RE_C** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWaveBool");

	UBPFL_FunctionLibrary_C_GetGameInstanceReWaveBool_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (GameInstance != nullptr)
		*GameInstance = params.GameInstance;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.Get Keys Icon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSInputKey_ConfigAndGraphics SInputKey                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTexture2D* UBPFL_FunctionLibrary_C::STATIC_Get_Keys_Icon(struct FSInputKey_ConfigAndGraphics* SInputKey, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.Get Keys Icon");

	UBPFL_FunctionLibrary_C_Get_Keys_Icon_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SInputKey != nullptr)
		*SInputKey = params.SInputKey;


	return params.ReturnValue;
}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.PrintImportantLonglastingErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_FunctionLibrary_C::STATIC_PrintImportantLonglastingErrorMessage(const struct FString& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.PrintImportantLonglastingErrorMessage");

	UBPFL_FunctionLibrary_C_PrintImportantLonglastingErrorMessage_Params params;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetSlotName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   SlotType                       (Parm, OutParm)
// struct FText                   PlayerName                     (Parm, OutParm)
// struct FText                   SaveDate                       (Parm, OutParm)
void UBPFL_FunctionLibrary_C::STATIC_GetSlotName(const struct FString& SlotName, class UObject* __WorldContext, struct FText* SlotType, struct FText* PlayerName, struct FText* SaveDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetSlotName");

	UBPFL_FunctionLibrary_C_GetSlotName_Params params;
	params.SlotName = SlotName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotType != nullptr)
		*SlotType = params.SlotType;
	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
	if (SaveDate != nullptr)
		*SaveDate = params.SaveDate;

}


// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.DescramblerSymbol
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UBPFL_FunctionLibrary_C::STATIC_DescramblerSymbol(const struct FString& SourceString, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.DescramblerSymbol");

	UBPFL_FunctionLibrary_C_DescramblerSymbol_Params params;
	params.SourceString = SourceString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
