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

// BlueprintGeneratedClass BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C
// 0x00FC (FullSize[0x041C] - InheritedSize[0x0320])
class ABP_PlayerState_RE_Wave_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OwnPlayernameDEPR;                                         // 0x0330(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, Deprecated, HasGetValueTypeHash)
	int                                                PlayerScore;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerGotDeath;                                            // 0x0344(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerGotUnconscious;                                      // 0x0348(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKills;                                               // 0x034C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  PlayerAvatarTexture;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    PlayerStatsAvatarUpdated;                                  // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsScoresUpdated;                                  // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsNameUpdated;                                    // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsGotUnconsciousUpdated;                          // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FString                                     SteamID_depricated_notReplicatedAnymore;                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, HasGetValueTypeHash)
	bool                                               IsReady;                                                   // 0x03A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsInDeadSpectatorMode_1;                                   // 0x03A9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FX26[0x2];                                     // 0x03AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerKillsHeadshots;                                      // 0x03AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerKillsExplosives;                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerRevivedOtherPlayer;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    PlayerStatsGotDeathUpdated;                                // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsKillsUpdated;                                   // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsKillsHeadshotUpdated;                           // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsKillsExplosiveUpdated;                          // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsKillsInAirUpdated;                              // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PlayerStatsRevivedOtherPlayerUpdated;                      // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                PlayerKillsInAir;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState_RE_Wave.BP_PlayerState_RE_Wave_C");
		return ptr;
	}



	void IsInDeadSpectatorMode(bool* DeadSpectatorMode_);
	void GetPlayerStateIsReady(bool* ready_);
	void GetPlayerStateName(struct FString* player_name);
	void GetPlayerStatePing(int* ping_in_ms);
	void GetPlayerScore(int* PlayerScore);
	void GetOwnPlayername(struct FString* String);
	void OnRep_PlayerKillsInAir();
	void OnRep_PlayerRevivedOtherPlayer();
	void OnRep_PlayerKillsExplosives();
	void OnRep_PlayerKillsHeadshots();
	void OnRep_PlayerGotDeath();
	void OnRep_IsReady();
	void OnRep_SteamID();
	void OnRep_PlayerKills();
	void OnRep_PlayerUnconscious();
	void OnRep_PlayerScore();
	void AddPlayerKillCloseCombat();
	void AddPlayerKillWithPossessedAi();
	void AddPlayerKillWithLauncher();
	void SetPlayerStateIsReadyAndReplicate(bool SetReady_);
	void Server_SetPlayerStateIsReady(bool NewReadyState);
	void ReceiveBeginPlay();
	void SetOwnPlayernameDeprecated(const struct FString& String);
	void UpdatePlayerScore();
	void AddToPlayerScore(int ScoreToAddToPlayerScore);
	void AddPlayerKillByOne();
	void AddPlayerUnconsciousByOne();
	void PersonaStateChanged(const struct FPersonaStateChange& Data);
	void RetriveSteamUserData();
	void PersonaStateChangedManualCall();
	void SetSteamIDAndStartRepNotify(const struct FString& SteamID);
	void SubtractFromPlayerScore(int SubtractScore);
	void TriggerRequestUserInformationSteam();
	void SetDeadSpectatorMode(bool SetNewIsDeadSpectatorMode_);
	void AddPlayerDeathByOne();
	void AddPlayerKillByExplosiveByOne();
	void AddPlayerKillByHeadshotByOne();
	void AddPlayerRevivedOtherPlayerByOne();
	void AddPlayerKillInAir();
	void ExecuteUbergraph_BP_PlayerState_RE_Wave(int EntryPoint);
	void PlayerStatsKillsInAirUpdated__DelegateSignature();
	void PlayerStatsRevivedOtherPlayerUpdated__DelegateSignature();
	void PlayerStatsKillsExplosiveUpdated__DelegateSignature();
	void PlayerStatsKillsHeadshotUpdated__DelegateSignature();
	void PlayerStatsGotDeathUpdated__DelegateSignature();
	void PlayerStatsScoresUpdated__DelegateSignature();
	void PlayerStatsNameUpdated__DelegateSignature();
	void PlayerStatsAvatarUpdated__DelegateSignature();
	void PlayerStatsGotUnconsciousUpdated__DelegateSignature();
	void PlayerStatsKillsUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
