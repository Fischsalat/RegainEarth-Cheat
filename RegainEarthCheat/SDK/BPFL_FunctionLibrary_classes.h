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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFL_FunctionLibrary.BPFL_FunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFL_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_FunctionLibrary.BPFL_FunctionLibrary_C");
		return ptr;
	}



	void STATIC_GetSkelMeshModelSkinOfIndex(int Index, class UObject* __WorldContext, class USkeletalMesh** SkelMeshInclSkinTexture);
	float STATIC_GetCalculatedSensitivityFromGameInstance(bool ForMouse_, bool FoInvertableitch_, class UObject* __WorldContext);
	void STATIC_SetAchievementPassedWhenParamSumOverBoundaryNoGate(TEnumAsByte<EAchievementIDs_EAchievementIDs> AchievementID, int BoundaryMinToSetAchievementPassed, int SummarizeParam1, int SummarizeParam2, class UObject* __WorldContext, bool* AchievementSetPassed_);
	void STATIC_GetNavDataForClass_UseWithCaution(class UClass* PawnClass, class UObject* __WorldContext, class ANavigationData** NavData);
	void STATIC_GetTargetBuildConfiguration(class UObject* __WorldContext, TEnumAsByte<ETargetBuildConfiguration_ETargetBuildConfiguration>* TargetBuildConfig);
	void STATIC_GetPlayerControllerReWavePureF(class UObject* __WorldContext, class ABP_Wave_REHR_PlayerController_C** CastedREWavePlayerController);
	void STATIC_GetIsDemoBuildFunc(class UObject* __WorldContext, bool* IsDemoBuild);
	void STATIC_Active_Player_Controller_Is_Local_Player_Controller(class UObject* __WorldContext, bool* PcIsLocalAndPlayerController);
	void STATIC_IsNotStandAloneGame(class UObject* __WorldContext, bool* ItIsNotStandAloneGame);
	void STATIC_GetGameModeKnownGmPlayersServerUsedOnly(class UObject* __WorldContext, TArray<class AController*>* Controller);
	void STATIC_IsLobbyLevel(class UObject* __WorldContext, bool* CurrentLevelIsLobbyLevel_);
	void STATIC_GetGameStateReWavePure(class UObject* __WorldContext, class ABP_Wave_GameState_C** AsBP_Wave_Gamestate);
	void STATIC_GetGameStateReWave(class UObject* __WorldContext, class ABP_Wave_GameState_C** AsBP_Wave_Gamestate);
	void STATIC_GetGameInstanceReWavePure(class UObject* __WorldContext, class UBP_GameInstance_RE_C** GameInstance);
	void STATIC_GetGameModeReWavePure(class UObject* __WorldContext, class ABP_Wave_Gamemode_C** AsBP_Wave_Gamemode);
	void STATIC_GetGameModeReWave(class UObject* __WorldContext, class ABP_Wave_Gamemode_C** AsBP_Wave_Gamemode);
	void STATIC_GetHudReWave(class UObject* __WorldContext, class AHUD_ShootingGameplay_C** HUDRef);
	void STATIC_CheckIsControlledPlayerPawnOfLocalPlayer(class UObject* Actor, class UObject* __WorldContext, bool* IsPlayer);
	struct FString STATIC_SetNewPlayerNameToSaveGameSlot(const struct FString& SlotName, const struct FString& PlayerName, class UObject* __WorldContext);
	struct FString STATIC_SaveGameSlotNameGenerator(TEnumAsByte<ESaveGameType_ESaveGameType> SaveType, class UObject* __WorldContext);
	struct FString STATIC_CutString(const struct FString& String, int MaxLenght, bool Upper, class UObject* __WorldContext, struct FText* ToText);
	void STATIC_GetGameInstanceReWaveBoolNoError(class UObject* __WorldContext, bool* IsSuccess, class UBP_GameInstance_RE_C** GameInstance);
	void STATIC_GetGameInstanceReWaveBool(class UObject* __WorldContext, bool* IsSuccess, class UBP_GameInstance_RE_C** GameInstance);
	class UTexture2D* STATIC_Get_Keys_Icon(struct FSInputKey_ConfigAndGraphics* SInputKey, class UObject* __WorldContext);
	void STATIC_PrintImportantLonglastingErrorMessage(const struct FString& Message, class UObject* __WorldContext);
	void STATIC_GetSlotName(const struct FString& SlotName, class UObject* __WorldContext, struct FText* SlotType, struct FText* PlayerName, struct FText* SaveDate);
	struct FString STATIC_DescramblerSymbol(const struct FString& SourceString, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
