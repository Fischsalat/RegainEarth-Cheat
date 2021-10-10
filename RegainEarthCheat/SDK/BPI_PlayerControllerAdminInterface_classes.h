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

// BlueprintGeneratedClass BPI_PlayerControllerAdminInterface.BPI_PlayerControllerAdminInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerControllerAdminInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerControllerAdminInterface.BPI_PlayerControllerAdminInterface_C");
		return ptr;
	}



	void SetFinalRoundToRoundX(int Round);
	void SetActualRoundToRoundX(int RoundWave);
	void DropRandomGrenade();
	void ResetLeaderboardEntryOfRunningMatch();
	void ResetAllOnlineSubStats();
	void ResetAllOnlineSubStatsAndAchievements();
	void DropRandomWeapon();
	void GrantExtremeHighHealth();
	void SwitchToFreeSpectatorCam();
	void SpawnBoss();
	void SetActualRoundTotRound2();
	void SetNextRoundToLastRoundAndKillAllEnemies();
	void SetActualRoundToLastRound();
	void TriggerLooseGame();
	void TriggerWinGame();
	void ReviveSelf();
	void HeallSelfJustSetFullHealth();
	void KillAllEnemies();
	void TraceAllEnemies();
	void KillSelf();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
