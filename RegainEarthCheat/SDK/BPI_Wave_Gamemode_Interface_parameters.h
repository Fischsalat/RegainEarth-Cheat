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

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.DeactivateReWaveGameModeChecks
struct UBPI_Wave_Gamemode_Interface_C_DeactivateReWaveGameModeChecks_Params
{
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.GetAllGmKnownPlayerControllerServerUsedOnly
struct UBPI_Wave_Gamemode_Interface_C_GetAllGmKnownPlayerControllerServerUsedOnly_Params
{
	TArray<class AController*>                         Controller;                                                // (Parm, OutParm)
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerHitPlayerFriendlyFire
struct UBPI_Wave_Gamemode_Interface_C_PlayerHitPlayerFriendlyFire_Params
{
	class APlayerController*                           PlayerControllerGotDamage;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnGotDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerControllerDoesDamage;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnDoesDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerRevived
struct UBPI_Wave_Gamemode_Interface_C_PlayerRevived_Params
{
	class APlayerController*                           PlayerControllerRevived;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnRevived;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerControllerReviver;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnReviver;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerIsUnconscious
struct UBPI_Wave_Gamemode_Interface_C_PlayerIsUnconscious_Params
{
	class APlayerController*                           PlayerControllerUnconscious;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnUnconscious;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.InformGmBeginPlayPlayerControllerFinished
struct UBPI_Wave_Gamemode_Interface_C_InformGmBeginPlayPlayerControllerFinished_Params
{
	class AController*                                 ControllerFinishesBeginPlay;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerIsDead
struct UBPI_Wave_Gamemode_Interface_C_PlayerIsDead_Params
{
	class APlayerController*                           PlayerControllerDead;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PawnDead;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.Wave_AllEnemiesCouldBeDead
struct UBPI_Wave_Gamemode_Interface_C_Wave_AllEnemiesCouldBeDead_Params
{
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.RegisterOneMoreEnemy
struct UBPI_Wave_Gamemode_Interface_C_RegisterOneMoreEnemy_Params
{
};

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.OneEnemyKilled
struct UBPI_Wave_Gamemode_Interface_C_OneEnemyKilled_Params
{
	class APawn*                                       PawnKilled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 KilledByController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreMultiplierOfEnemyKilled;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KilledByHeadShotOrOtherGreatHit_;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               KilledByExplosivesRadialDamage_;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               KilledInAir;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_DamageType_BaseREWave_C*                 KilledByDamageType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  AiTransform;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              AiMinValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiMaxValueOfWeaponDrops;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingHealthPickup;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingWeaponPickup;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AiOptionalChanceForDroppingGrenadePickup;                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
