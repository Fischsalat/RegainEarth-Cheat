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

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetSkelMeshModelSkinOfIndex
struct UBPFL_FunctionLibrary_C_GetSkelMeshModelSkinOfIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SkelMeshInclSkinTexture;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetCalculatedSensitivityFromGameInstance
struct UBPFL_FunctionLibrary_C_GetCalculatedSensitivityFromGameInstance_Params
{
	bool                                               ForMouse_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FoInvertableitch_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SetAchievementPassedWhenParamSumOverBoundaryNoGate
struct UBPFL_FunctionLibrary_C_SetAchievementPassedWhenParamSumOverBoundaryNoGate_Params
{
	TEnumAsByte<EAchievementIDs_EAchievementIDs>       AchievementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundaryMinToSetAchievementPassed;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SummarizeParam1;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SummarizeParam2;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AchievementSetPassed_;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetNavDataForClass_UseWithCaution
struct UBPFL_FunctionLibrary_C_GetNavDataForClass_UseWithCaution_Params
{
	class UClass*                                      PawnClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANavigationData*                             NavData;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetTargetBuildConfiguration
struct UBPFL_FunctionLibrary_C_GetTargetBuildConfiguration_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETargetBuildConfiguration_ETargetBuildConfiguration> TargetBuildConfig;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetPlayerControllerReWavePureF
struct UBPFL_FunctionLibrary_C_GetPlayerControllerReWavePureF_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Wave_REHR_PlayerController_C*            CastedREWavePlayerController;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetIsDemoBuildFunc
struct UBPFL_FunctionLibrary_C_GetIsDemoBuildFunc_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDemoBuild;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.Active Player Controller Is Local Player Controller
struct UBPFL_FunctionLibrary_C_Active_Player_Controller_Is_Local_Player_Controller_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PcIsLocalAndPlayerController;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.IsNotStandAloneGame
struct UBPFL_FunctionLibrary_C_IsNotStandAloneGame_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ItIsNotStandAloneGame;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeKnownGmPlayersServerUsedOnly
struct UBPFL_FunctionLibrary_C_GetGameModeKnownGmPlayersServerUsedOnly_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AController*>                         Controller;                                                // (Parm, OutParm)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.IsLobbyLevel
struct UBPFL_FunctionLibrary_C_IsLobbyLevel_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CurrentLevelIsLobbyLevel_;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameStateReWavePure
struct UBPFL_FunctionLibrary_C_GetGameStateReWavePure_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Wave_GameState_C*                        AsBP_Wave_Gamestate;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameStateReWave
struct UBPFL_FunctionLibrary_C_GetGameStateReWave_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Wave_GameState_C*                        AsBP_Wave_Gamestate;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWavePure
struct UBPFL_FunctionLibrary_C_GetGameInstanceReWavePure_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeReWavePure
struct UBPFL_FunctionLibrary_C_GetGameModeReWavePure_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Wave_Gamemode_C*                         AsBP_Wave_Gamemode;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameModeReWave
struct UBPFL_FunctionLibrary_C_GetGameModeReWave_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Wave_Gamemode_C*                         AsBP_Wave_Gamemode;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetHudReWave
struct UBPFL_FunctionLibrary_C_GetHudReWave_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD_ShootingGameplay_C*                     HUDRef;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.CheckIsControlledPlayerPawnOfLocalPlayer
struct UBPFL_FunctionLibrary_C_CheckIsControlledPlayerPawnOfLocalPlayer_Params
{
	class UObject*                                     Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlayer;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SetNewPlayerNameToSaveGameSlot
struct UBPFL_FunctionLibrary_C_SetNewPlayerNameToSaveGameSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.SaveGameSlotNameGenerator
struct UBPFL_FunctionLibrary_C_SaveGameSlotNameGenerator_Params
{
	TEnumAsByte<ESaveGameType_ESaveGameType>           SaveType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.CutString
struct UBPFL_FunctionLibrary_C_CutString_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                MaxLenght;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Upper;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	struct FText                                       ToText;                                                    // (Parm, OutParm)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWaveBoolNoError
struct UBPFL_FunctionLibrary_C_GetGameInstanceReWaveBoolNoError_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetGameInstanceReWaveBool
struct UBPFL_FunctionLibrary_C_GetGameInstanceReWaveBool_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_GameInstance_RE_C*                       GameInstance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.Get Keys Icon
struct UBPFL_FunctionLibrary_C_Get_Keys_Icon_Params
{
	struct FSInputKey_ConfigAndGraphics                SInputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.PrintImportantLonglastingErrorMessage
struct UBPFL_FunctionLibrary_C_PrintImportantLonglastingErrorMessage_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.GetSlotName
struct UBPFL_FunctionLibrary_C_GetSlotName_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SlotType;                                                  // (Parm, OutParm)
	struct FText                                       PlayerName;                                                // (Parm, OutParm)
	struct FText                                       SaveDate;                                                  // (Parm, OutParm)
};

// Function BPFL_FunctionLibrary.BPFL_FunctionLibrary_C.DescramblerSymbol
struct UBPFL_FunctionLibrary_C_DescramblerSymbol_Params
{
	struct FString                                     SourceString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
