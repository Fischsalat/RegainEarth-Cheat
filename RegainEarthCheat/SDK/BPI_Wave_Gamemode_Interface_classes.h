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

// BlueprintGeneratedClass BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Wave_Gamemode_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C");
		return ptr;
	}



	void DeactivateReWaveGameModeChecks();
	void GetAllGmKnownPlayerControllerServerUsedOnly(TArray<class AController*>* Controller);
	void PlayerHitPlayerFriendlyFire(class APlayerController* PlayerControllerGotDamage, class APawn* PawnGotDamage, class APlayerController* PlayerControllerDoesDamage, class APawn* PawnDoesDamage, int Damage);
	void PlayerRevived(class APlayerController* PlayerControllerRevived, class APawn* PawnRevived, class APlayerController* PlayerControllerReviver, class APawn* PawnReviver);
	void PlayerIsUnconscious(class APlayerController* PlayerControllerUnconscious, class APawn* PawnUnconscious);
	void InformGmBeginPlayPlayerControllerFinished(class AController* ControllerFinishesBeginPlay);
	void PlayerIsDead(class APlayerController* PlayerControllerDead, class APawn* PawnDead);
	void Wave_AllEnemiesCouldBeDead();
	void RegisterOneMoreEnemy();
	void OneEnemyKilled(class APawn* PawnKilled, class AController* KilledByController, float ScoreMultiplierOfEnemyKilled, TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType, bool KilledByHeadShotOrOtherGreatHit_, bool KilledByExplosivesRadialDamage_, bool KilledInAir, class UBP_DamageType_BaseREWave_C* KilledByDamageType, const struct FTransform& AiTransform, float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, float AiOptionalChanceForDroppingHealthPickup, float AiOptionalChanceForDroppingWeaponPickup, float AiOptionalChanceForDroppingGrenadePickup);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
