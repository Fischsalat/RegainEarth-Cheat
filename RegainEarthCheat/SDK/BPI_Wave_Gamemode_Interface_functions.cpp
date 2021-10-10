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

// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.DeactivateReWaveGameModeChecks
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Wave_Gamemode_Interface_C::DeactivateReWaveGameModeChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.DeactivateReWaveGameModeChecks");

	UBPI_Wave_Gamemode_Interface_C_DeactivateReWaveGameModeChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.GetAllGmKnownPlayerControllerServerUsedOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AController*>     Controller                     (Parm, OutParm)
void UBPI_Wave_Gamemode_Interface_C::GetAllGmKnownPlayerControllerServerUsedOnly(TArray<class AController*>* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.GetAllGmKnownPlayerControllerServerUsedOnly");

	UBPI_Wave_Gamemode_Interface_C_GetAllGmKnownPlayerControllerServerUsedOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerHitPlayerFriendlyFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerGotDamage      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnGotDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerControllerDoesDamage     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnDoesDamage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Wave_Gamemode_Interface_C::PlayerHitPlayerFriendlyFire(class APlayerController* PlayerControllerGotDamage, class APawn* PawnGotDamage, class APlayerController* PlayerControllerDoesDamage, class APawn* PawnDoesDamage, int Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerHitPlayerFriendlyFire");

	UBPI_Wave_Gamemode_Interface_C_PlayerHitPlayerFriendlyFire_Params params;
	params.PlayerControllerGotDamage = PlayerControllerGotDamage;
	params.PawnGotDamage = PawnGotDamage;
	params.PlayerControllerDoesDamage = PlayerControllerDoesDamage;
	params.PawnDoesDamage = PawnDoesDamage;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerRevived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerRevived        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnRevived                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerControllerReviver        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnReviver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Wave_Gamemode_Interface_C::PlayerRevived(class APlayerController* PlayerControllerRevived, class APawn* PawnRevived, class APlayerController* PlayerControllerReviver, class APawn* PawnReviver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerRevived");

	UBPI_Wave_Gamemode_Interface_C_PlayerRevived_Params params;
	params.PlayerControllerRevived = PlayerControllerRevived;
	params.PawnRevived = PawnRevived;
	params.PlayerControllerReviver = PlayerControllerReviver;
	params.PawnReviver = PawnReviver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerIsUnconscious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerUnconscious    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnUnconscious                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Wave_Gamemode_Interface_C::PlayerIsUnconscious(class APlayerController* PlayerControllerUnconscious, class APawn* PawnUnconscious)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerIsUnconscious");

	UBPI_Wave_Gamemode_Interface_C_PlayerIsUnconscious_Params params;
	params.PlayerControllerUnconscious = PlayerControllerUnconscious;
	params.PawnUnconscious = PawnUnconscious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.InformGmBeginPlayPlayerControllerFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ControllerFinishesBeginPlay    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Wave_Gamemode_Interface_C::InformGmBeginPlayPlayerControllerFinished(class AController* ControllerFinishesBeginPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.InformGmBeginPlayPlayerControllerFinished");

	UBPI_Wave_Gamemode_Interface_C_InformGmBeginPlayPlayerControllerFinished_Params params;
	params.ControllerFinishesBeginPlay = ControllerFinishesBeginPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerIsDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerDead           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnDead                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Wave_Gamemode_Interface_C::PlayerIsDead(class APlayerController* PlayerControllerDead, class APawn* PawnDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.PlayerIsDead");

	UBPI_Wave_Gamemode_Interface_C_PlayerIsDead_Params params;
	params.PlayerControllerDead = PlayerControllerDead;
	params.PawnDead = PawnDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.Wave_AllEnemiesCouldBeDead
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Wave_Gamemode_Interface_C::Wave_AllEnemiesCouldBeDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.Wave_AllEnemiesCouldBeDead");

	UBPI_Wave_Gamemode_Interface_C_Wave_AllEnemiesCouldBeDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.RegisterOneMoreEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Wave_Gamemode_Interface_C::RegisterOneMoreEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.RegisterOneMoreEnemy");

	UBPI_Wave_Gamemode_Interface_C_RegisterOneMoreEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.OneEnemyKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnKilled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             KilledByController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScoreMultiplierOfEnemyKilled   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           KilledByHeadShotOrOtherGreatHit_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           KilledByExplosivesRadialDamage_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           KilledInAir                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_DamageType_BaseREWave_C* KilledByDamageType             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              AiTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          AiMinValueOfWeaponDrops        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiMaxValueOfWeaponDrops        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiOptionalChanceForDroppingHealthPickup (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiOptionalChanceForDroppingWeaponPickup (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiOptionalChanceForDroppingGrenadePickup (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Wave_Gamemode_Interface_C::OneEnemyKilled(class APawn* PawnKilled, class AController* KilledByController, float ScoreMultiplierOfEnemyKilled, TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType, bool KilledByHeadShotOrOtherGreatHit_, bool KilledByExplosivesRadialDamage_, bool KilledInAir, class UBP_DamageType_BaseREWave_C* KilledByDamageType, const struct FTransform& AiTransform, float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, float AiOptionalChanceForDroppingHealthPickup, float AiOptionalChanceForDroppingWeaponPickup, float AiOptionalChanceForDroppingGrenadePickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Wave_Gamemode_Interface.BPI_Wave_Gamemode_Interface_C.OneEnemyKilled");

	UBPI_Wave_Gamemode_Interface_C_OneEnemyKilled_Params params;
	params.PawnKilled = PawnKilled;
	params.KilledByController = KilledByController;
	params.ScoreMultiplierOfEnemyKilled = ScoreMultiplierOfEnemyKilled;
	params.DistinctKilledByType = DistinctKilledByType;
	params.KilledByHeadShotOrOtherGreatHit_ = KilledByHeadShotOrOtherGreatHit_;
	params.KilledByExplosivesRadialDamage_ = KilledByExplosivesRadialDamage_;
	params.KilledInAir = KilledInAir;
	params.KilledByDamageType = KilledByDamageType;
	params.AiTransform = AiTransform;
	params.AiMinValueOfWeaponDrops = AiMinValueOfWeaponDrops;
	params.AiMaxValueOfWeaponDrops = AiMaxValueOfWeaponDrops;
	params.AiOptionalChanceForDroppingHealthPickup = AiOptionalChanceForDroppingHealthPickup;
	params.AiOptionalChanceForDroppingWeaponPickup = AiOptionalChanceForDroppingWeaponPickup;
	params.AiOptionalChanceForDroppingGrenadePickup = AiOptionalChanceForDroppingGrenadePickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
