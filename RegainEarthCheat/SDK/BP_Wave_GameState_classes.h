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

// BlueprintGeneratedClass BP_Wave_GameState.BP_Wave_GameState_C
// 0x00C0 (FullSize[0x0330] - InheritedSize[0x0270])
class ABP_Wave_GameState_C : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                CountEnemiesLeft;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreOverallAsTeam;                                        // 0x0284(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             AllPlayersSteamIDsArray;                                   // 0x0288(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnGameOverWin_GStateReplicated;                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnGameOverLoose_GStateReplicated;                          // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               AtLeastOnePlayerCheated;                                   // 0x02B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A7S0[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameStarts_GStateReplicated;                             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               GameRoundIsStarted;                                        // 0x02D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YOFA[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SelectedMapKey_Server;                                     // 0x02D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	TArray<class AController*>                         PlayersControllersList_OnlyForServerUseable;               // 0x02E8(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	TArray<class APawn*>                               PlayersPawnList;                                           // 0x02F8(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	struct FScriptMulticastDelegate                    OnOnlyFewEnemiesLeft;                                      // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               GameIsPaused;                                              // 0x0318(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_8SNP[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentRoundSyncFromGameMode;                              // 0x031C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountOfActivePlayers;                                      // 0x0320(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                HighestPlayerCountInMatch;                                 // 0x0324(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElapsedRoundtime;                                          // 0x0328(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                ElapsedMatchtime;                                          // 0x032C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wave_GameState.BP_Wave_GameState_C");
		return ptr;
	}



	void GetSelectedMapServer(struct FString* SelectedMapServer);
	void GetSteamIDPlayerArrayAsSteamIdObject(TArray<struct FSteamID>* SteamIdArray);
	void GetTeamScore(int* Score);
	void OnRep_ElapsedMatchtime();
	void OnRep_ElapsedRoundtime();
	void GetHighestPlayerCountInMatch(int* HighestPlayerCountInMatch);
	void GetCountOfActivePlayers(int* CountOfActivePlayers);
	void OnRep_CountOfActivePlayers();
	void GetCurrentRoundGS(int* CurrentRoundSyncFromGameMode);
	void OnRep_GameIsPaused();
	void OnRep_CountEnemiesLeft();
	void OnRep_PlayersPawnList();
	void OnRep_SelectedMapKey_Server();
	void OnRep_PlayersControllersList_OnlyForServerUseable();
	void FUpdateTeamScoreBySumPlayerScore();
	void OnRep_ScoreOverallAsTeam();
	void GetCountEnemiesLeft(int* CountEnemiesLeft);
	void SetSelectedMapServer(const struct FString& SetMapKey);
	void SetPlayerControllerList();
	void SetPlayerPawnList(TArray<class APawn*> PlayerPawnList);
	void ReceiveBeginPlay();
	void DecreaseEnemyCount();
	void IncreaseEnemyCount();
	void ResetEnemyCount(int NewEnemyCount);
	void AddSteamIdToPlayerSteamIdList(const struct FString& NewSteamId);
	void Multicast_GameModeCallsGameOverWin(float TimeUntilPauseStarts);
	void Multicast_GameModeCallsGameOverLoose(float TimeUntilPauseStarts);
	void UpdateTeamScoreBySumPlayerScores();
	void Multicast_GameModeCallsGameStarts();
	void Server_PauseGameOnClientsAndServer(bool PauseGame);
	void PauseGameLocally(float DelayBeforePause, bool bSetPaused);
	void SetSyncCurrentRoundToGameState(int CurrentRoundSyncFromGameMode);
	void SetCountOfActivePlayers(int CountOfActivePlayers);
	void SetElapsedRoundtime(int ElapsedRoundtime);
	void AddToElapsedMatchtime(int ElapsedMatchtime);
	void ExecuteUbergraph_BP_Wave_GameState(int EntryPoint);
	void OnOnlyFewEnemiesLeft__DelegateSignature();
	void OnGameStarts_GStateReplicated__DelegateSignature();
	void OnGameOverLoose_GStateReplicated__DelegateSignature(float TimeUntilPauseStarts);
	void OnGameOverWin_GStateReplicated__DelegateSignature(float TimeUntilPauseStarts);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
