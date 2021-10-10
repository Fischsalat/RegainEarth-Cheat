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

// BlueprintGeneratedClass BPI_PlayerState.BPI_PlayerState_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerState_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerState.BPI_PlayerState_C");
		return ptr;
	}



	void AddPlayerKillWithLauncher();
	void AddPlayerKillWithPossessedAi();
	void AddPlayerKillCloseCombat();
	void AddPlayerKillInAir();
	void AddPlayerRevivedOtherPlayerByOne();
	void AddPlayerKillByExplosiveByOne();
	void AddPlayerKillByHeadshotByOne();
	void AddPlayerKillByOne();
	void AddPlayerDeathByOne();
	void AddPlayerUnconsciousByOne();
	void SetDeadSpectatorMode(bool SetNewIsDeadSpectatorMode_);
	void IsInDeadSpectatorMode(bool* DeadSpectatorMode_);
	void TriggerRequestUserInformationSteam();
	void SubtractFromPlayerScore(int SubtractScore);
	void SetSteamIDAndStartRepNotify(const struct FString& SteamID);
	void SetPlayerStateIsReadyAndReplicate(bool SetReady_);
	void GetPlayerStateIsReady(bool* ready_);
	void GetPlayerStateName(struct FString* player_name);
	void GetPlayerStatePing(int* ping_in_ms);
	void AddToPlayerScore(int ScoreToAddToPlayerScore);
	void GetPlayerScore(int* PlayerScore);
	void GetOwnPlayername(struct FString* String);
	void SetOwnPlayername(const struct FString& String);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
