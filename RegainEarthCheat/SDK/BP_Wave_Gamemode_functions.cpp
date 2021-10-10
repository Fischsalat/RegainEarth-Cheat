// Name: RegainEart-FirtstStrike, Version: Version-1

#include "pch.h"

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

// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetAllGmKnownPlayerControllerServerUsedOnly
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AController*>     Controller                     (Parm, OutParm)
void ABP_Wave_Gamemode_C::GetAllGmKnownPlayerControllerServerUsedOnly(TArray<class AController*>* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetAllGmKnownPlayerControllerServerUsedOnly");

	ABP_Wave_Gamemode_C_GetAllGmKnownPlayerControllerServerUsedOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetCurrentRoundWave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentRound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::GetCurrentRoundWave(int* CurrentRound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetCurrentRoundWave");

	ABP_Wave_Gamemode_C_GetCurrentRoundWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentRound != nullptr)
		*CurrentRound = params.CurrentRound;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetCurrentElapsedRoundtime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurrentElapsedRoundtime        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::GetCurrentElapsedRoundtime(float* CurrentElapsedRoundtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetCurrentElapsedRoundtime");

	ABP_Wave_Gamemode_C_GetCurrentElapsedRoundtime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentElapsedRoundtime != nullptr)
		*CurrentElapsedRoundtime = params.CurrentElapsedRoundtime;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetRemainingRoundTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RemainingRoundTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::GetRemainingRoundTime(float* RemainingRoundTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetRemainingRoundTime");

	ABP_Wave_Gamemode_C_GetRemainingRoundTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemainingRoundTime != nullptr)
		*RemainingRoundTime = params.RemainingRoundTime;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetPlayerCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CountOfPlayers                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::GetPlayerCount(int* CountOfPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetPlayerCount");

	ABP_Wave_Gamemode_C_GetPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountOfPlayers != nullptr)
		*CountOfPlayers = params.CountOfPlayers;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetArrayOfWeaponIDsFitToValueMinMaxSettings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AiMinValueOfWeaponDrops        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiMaxValueOfWeaponDrops        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>> GeneratedArrayOfPossibleWeaponDrops1 (Parm, OutParm)
void ABP_Wave_Gamemode_C::GetArrayOfWeaponIDsFitToValueMinMaxSettings(float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>* GeneratedArrayOfPossibleWeaponDrops1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.GetArrayOfWeaponIDsFitToValueMinMaxSettings");

	ABP_Wave_Gamemode_C_GetArrayOfWeaponIDsFitToValueMinMaxSettings_Params params;
	params.AiMinValueOfWeaponDrops = AiMinValueOfWeaponDrops;
	params.AiMaxValueOfWeaponDrops = AiMaxValueOfWeaponDrops;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratedArrayOfPossibleWeaponDrops1 != nullptr)
		*GeneratedArrayOfPossibleWeaponDrops1 = params.GeneratedArrayOfPossibleWeaponDrops1;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Check If Known Player Alive And Not Dead Unconscious
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SomeoneStillAlive_             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_Gamemode_C::Check_If_Known_Player_Alive_And_Not_Dead_Unconscious(bool* SomeoneStillAlive_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Check If Known Player Alive And Not Dead Unconscious");

	ABP_Wave_Gamemode_C_Check_If_Known_Player_Alive_And_Not_Dead_Unconscious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SomeoneStillAlive_ != nullptr)
		*SomeoneStillAlive_ = params.SomeoneStillAlive_;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Handle Enemy Killed and Calculate Score
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnKilled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             KilledByController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScoreMultiplierOfEnemyKilled   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           KilledByHeadShotOrOtherGreatHit_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           KilledByExplosivesRadialDamage (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           KilledInAir                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_DamageType_BaseREWave_C* KilledByDamageType             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::Handle_Enemy_Killed_and_Calculate_Score(class APawn* PawnKilled, class AController* KilledByController, float ScoreMultiplierOfEnemyKilled, TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType, bool KilledByHeadShotOrOtherGreatHit_, bool KilledByExplosivesRadialDamage, bool KilledInAir, class UBP_DamageType_BaseREWave_C* KilledByDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Handle Enemy Killed and Calculate Score");

	ABP_Wave_Gamemode_C_Handle_Enemy_Killed_and_Calculate_Score_Params params;
	params.PawnKilled = PawnKilled;
	params.KilledByController = KilledByController;
	params.ScoreMultiplierOfEnemyKilled = ScoreMultiplierOfEnemyKilled;
	params.DistinctKilledByType = DistinctKilledByType;
	params.KilledByHeadShotOrOtherGreatHit_ = KilledByHeadShotOrOtherGreatHit_;
	params.KilledByExplosivesRadialDamage = KilledByExplosivesRadialDamage;
	params.KilledInAir = KilledInAir;
	params.KilledByDamageType = KilledByDamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ChoosePlayerStart
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* ABP_Wave_Gamemode_C::ChoosePlayerStart(class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ChoosePlayerStart");

	ABP_Wave_Gamemode_C_ChoosePlayerStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnFailure_9722B9E84179BFF2709AB98E37CD7DA4
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::OnFailure_9722B9E84179BFF2709AB98E37CD7DA4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnFailure_9722B9E84179BFF2709AB98E37CD7DA4");

	ABP_Wave_Gamemode_C_OnFailure_9722B9E84179BFF2709AB98E37CD7DA4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4");

	ABP_Wave_Gamemode_C_OnSuccess_9722B9E84179BFF2709AB98E37CD7DA4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Server_TestVarRepNotifyTesting2
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::Server_TestVarRepNotifyTesting2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Server_TestVarRepNotifyTesting2");

	ABP_Wave_Gamemode_C_Server_TestVarRepNotifyTesting2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::K2_OnLogout(class AController* ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.K2_OnLogout");

	ABP_Wave_Gamemode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.K2_PostLogin");

	ABP_Wave_Gamemode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.HandleStartingNewPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::HandleStartingNewPlayer(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.HandleStartingNewPlayer");

	ABP_Wave_Gamemode_C_HandleStartingNewPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.StartIterateOverAllPlayerControllerAndStartSyncPawnsTo Clients
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::StartIterateOverAllPlayerControllerAndStartSyncPawnsTo_Clients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.StartIterateOverAllPlayerControllerAndStartSyncPawnsTo Clients");

	ABP_Wave_Gamemode_C_StartIterateOverAllPlayerControllerAndStartSyncPawnsTo_Clients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Wave_Gamemode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ReceiveBeginPlay");

	ABP_Wave_Gamemode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_Event2
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::NewRoundTextSentToPlayersFinished_Event2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_Event2");

	ABP_Wave_Gamemode_C_NewRoundTextSentToPlayersFinished_Event2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OneEnemyKilled
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
void ABP_Wave_Gamemode_C::OneEnemyKilled(class APawn* PawnKilled, class AController* KilledByController, float ScoreMultiplierOfEnemyKilled, TEnumAsByte<EDistinctKilledByTypes_EDistinctKilledByTypes> DistinctKilledByType, bool KilledByHeadShotOrOtherGreatHit_, bool KilledByExplosivesRadialDamage_, bool KilledInAir, class UBP_DamageType_BaseREWave_C* KilledByDamageType, const struct FTransform& AiTransform, float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, float AiOptionalChanceForDroppingHealthPickup, float AiOptionalChanceForDroppingWeaponPickup, float AiOptionalChanceForDroppingGrenadePickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OneEnemyKilled");

	ABP_Wave_Gamemode_C_OneEnemyKilled_Params params;
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


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RegisterOneMoreEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::RegisterOneMoreEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RegisterOneMoreEnemy");

	ABP_Wave_Gamemode_C_RegisterOneMoreEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.AllPlayerShowBigMiddleScreenTextAndOnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SetTextMessageOn_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_Gamemode_C::AllPlayerShowBigMiddleScreenTextAndOnOff(const struct FText& Text, bool SetTextMessageOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.AllPlayerShowBigMiddleScreenTextAndOnOff");

	ABP_Wave_Gamemode_C_AllPlayerShowBigMiddleScreenTextAndOnOff_Params params;
	params.Text = Text;
	params.SetTextMessageOn_ = SetTextMessageOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CallPlayerShowBigMiddleScreenTextAndOnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SetTextMessageOn_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_Gamemode_C::CallPlayerShowBigMiddleScreenTextAndOnOff(class AController* Controller, const struct FText& Text, bool SetTextMessageOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CallPlayerShowBigMiddleScreenTextAndOnOff");

	ABP_Wave_Gamemode_C_CallPlayerShowBigMiddleScreenTextAndOnOff_Params params;
	params.Controller = Controller;
	params.Text = Text;
	params.SetTextMessageOn_ = SetTextMessageOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerCallActualRoundNumberToALLPlayerHUDs
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::PlayerCallActualRoundNumberToALLPlayerHUDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerCallActualRoundNumberToALLPlayerHUDs");

	ABP_Wave_Gamemode_C_PlayerCallActualRoundNumberToALLPlayerHUDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Wave_AllEnemiesCouldBeDead
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::Wave_AllEnemiesCouldBeDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.Wave_AllEnemiesCouldBeDead");

	ABP_Wave_Gamemode_C_Wave_AllEnemiesCouldBeDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.AllEnemyDead_CheckEndGameConditionsStartNextRound
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::AllEnemyDead_CheckEndGameConditionsStartNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.AllEnemyDead_CheckEndGameConditionsStartNextRound");

	ABP_Wave_Gamemode_C_AllEnemyDead_CheckEndGameConditionsStartNextRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ResetDoOnceStartNextRound
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::ResetDoOnceStartNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ResetDoOnceStartNextRound");

	ABP_Wave_Gamemode_C_ResetDoOnceStartNextRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RestartRoundTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::RestartRoundTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RestartRoundTimer");

	ABP_Wave_Gamemode_C_RestartRoundTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RoundTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::RoundTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.RoundTimer");

	ABP_Wave_Gamemode_C_RoundTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerIsDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerDead           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnDead                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::PlayerIsDead(class APlayerController* PlayerControllerDead, class APawn* PawnDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerIsDead");

	ABP_Wave_Gamemode_C_PlayerIsDead_Params params;
	params.PlayerControllerDead = PlayerControllerDead;
	params.PawnDead = PawnDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CallGameOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedWithWin_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wave_Gamemode_C::CallGameOver(bool FinishedWithWin_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CallGameOver");

	ABP_Wave_Gamemode_C_CallGameOver_Params params;
	params.FinishedWithWin_ = FinishedWithWin_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.InformGmBeginPlayPlayerControllerFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             ControllerFinishesBeginPlay    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::InformGmBeginPlayPlayerControllerFinished(class AController* ControllerFinishesBeginPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.InformGmBeginPlayPlayerControllerFinished");

	ABP_Wave_Gamemode_C_InformGmBeginPlayPlayerControllerFinished_Params params;
	params.ControllerFinishesBeginPlay = ControllerFinishesBeginPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerIsUnconscious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerUnconscious    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnUnconscious                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::PlayerIsUnconscious(class APlayerController* PlayerControllerUnconscious, class APawn* PawnUnconscious)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerIsUnconscious");

	ABP_Wave_Gamemode_C_PlayerIsUnconscious_Params params;
	params.PlayerControllerUnconscious = PlayerControllerUnconscious;
	params.PawnUnconscious = PawnUnconscious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerHitPlayerFriendlyFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerGotDamage      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnGotDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerControllerDoesDamage     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnDoesDamage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::PlayerHitPlayerFriendlyFire(class APlayerController* PlayerControllerGotDamage, class APawn* PawnGotDamage, class APlayerController* PlayerControllerDoesDamage, class APawn* PawnDoesDamage, int Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerHitPlayerFriendlyFire");

	ABP_Wave_Gamemode_C_PlayerHitPlayerFriendlyFire_Params params;
	params.PlayerControllerGotDamage = PlayerControllerGotDamage;
	params.PawnGotDamage = PawnGotDamage;
	params.PlayerControllerDoesDamage = PlayerControllerDoesDamage;
	params.PawnDoesDamage = PawnDoesDamage;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerRevived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerControllerRevived        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnRevived                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerControllerReviver        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnReviver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::PlayerRevived(class APlayerController* PlayerControllerRevived, class APawn* PawnRevived, class APlayerController* PlayerControllerReviver, class APawn* PawnReviver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PlayerRevived");

	ABP_Wave_Gamemode_C_PlayerRevived_Params params;
	params.PlayerControllerRevived = PlayerControllerRevived;
	params.PawnRevived = PawnRevived;
	params.PlayerControllerReviver = PlayerControllerReviver;
	params.PawnReviver = PawnReviver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.SentAllPlayersSetNewRoundNumber
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::SentAllPlayersSetNewRoundNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.SentAllPlayersSetNewRoundNumber");

	ABP_Wave_Gamemode_C_SentAllPlayersSetNewRoundNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut");

	ABP_Wave_Gamemode_C_CheckIfPlayerFoundDeadAndSetBackToUnconBleedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CheckAICountforSureAndStartNextRoundIfNoEnemyLeft
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::CheckAICountforSureAndStartNextRoundIfNoEnemyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.CheckAICountforSureAndStartNextRoundIfNoEnemyLeft");

	ABP_Wave_Gamemode_C_CheckAICountforSureAndStartNextRoundIfNoEnemyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.StartCheckerTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::StartCheckerTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.StartCheckerTimer");

	ABP_Wave_Gamemode_C_StartCheckerTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.DropLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              AiTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          AiMinValueOfWeaponDrops        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiMaxValueOfWeaponDrops        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiOptionalChanceForDroppingHealthPickup (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiOptionalChanceForDroppingWeaponPickup (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AiOptionalChanceForDroppingGrenadePickup (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PawnKilled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::DropLoot(const struct FTransform& AiTransform, float AiMinValueOfWeaponDrops, float AiMaxValueOfWeaponDrops, float AiOptionalChanceForDroppingHealthPickup, float AiOptionalChanceForDroppingWeaponPickup, float AiOptionalChanceForDroppingGrenadePickup, class APawn* PawnKilled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.DropLoot");

	ABP_Wave_Gamemode_C_DropLoot_Params params;
	params.AiTransform = AiTransform;
	params.AiMinValueOfWeaponDrops = AiMinValueOfWeaponDrops;
	params.AiMaxValueOfWeaponDrops = AiMaxValueOfWeaponDrops;
	params.AiOptionalChanceForDroppingHealthPickup = AiOptionalChanceForDroppingHealthPickup;
	params.AiOptionalChanceForDroppingWeaponPickup = AiOptionalChanceForDroppingWeaponPickup;
	params.AiOptionalChanceForDroppingGrenadePickup = AiOptionalChanceForDroppingGrenadePickup;
	params.PawnKilled = PawnKilled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.DeactivateReWaveGameModeChecks
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::DeactivateReWaveGameModeChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.DeactivateReWaveGameModeChecks");

	ABP_Wave_Gamemode_C_DeactivateReWaveGameModeChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PrepareNewWaveInformAllStartWave
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::PrepareNewWaveInformAllStartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.PrepareNewWaveInformAllStartWave");

	ABP_Wave_Gamemode_C_PrepareNewWaveInformAllStartWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::NewRoundTextSentToPlayersFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_Event");

	ABP_Wave_Gamemode_C_NewRoundTextSentToPlayersFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ForceToDropWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              AiTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ABP_Wave_Gamemode_C::ForceToDropWeapon(const struct FTransform& AiTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ForceToDropWeapon");

	ABP_Wave_Gamemode_C_ForceToDropWeapon_Params params;
	params.AiTransform = AiTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ForceToDropGrenade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              AiTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ABP_Wave_Gamemode_C::ForceToDropGrenade(const struct FTransform& AiTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ForceToDropGrenade");

	ABP_Wave_Gamemode_C_ForceToDropGrenade_Params params;
	params.AiTransform = AiTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ExecuteUbergraph_BP_Wave_Gamemode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::ExecuteUbergraph_BP_Wave_Gamemode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ExecuteUbergraph_BP_Wave_Gamemode");

	ABP_Wave_Gamemode_C_ExecuteUbergraph_BP_Wave_Gamemode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature");

	ABP_Wave_Gamemode_C_NewRoundTextSentToPlayersFinished_GModeServerOnly__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature(int ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature");

	ABP_Wave_Gamemode_C_ElapsedTimeInCurrentWaveRound_GModeServerOnly__DelegateSignature_Params params;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature(int RoundNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature");

	ABP_Wave_Gamemode_C_NextWaveRoundIsStarted_GModeServerOnly__DelegateSignature_Params params;
	params.RoundNumber = RoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameStarts_GModeServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Wave_Gamemode_C::OnGameStarts_GModeServerOnly__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameStarts_GModeServerOnly__DelegateSignature");

	ABP_Wave_Gamemode_C_OnGameStarts_GModeServerOnly__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameOverLoose_GModeServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::OnGameOverLoose_GModeServerOnly__DelegateSignature(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameOverLoose_GModeServerOnly__DelegateSignature");

	ABP_Wave_Gamemode_C_OnGameOverLoose_GModeServerOnly__DelegateSignature_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameOverWin_GModeServerOnly__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUntilPauseStarts           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wave_Gamemode_C::OnGameOverWin_GModeServerOnly__DelegateSignature(float TimeUntilPauseStarts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wave_Gamemode.BP_Wave_Gamemode_C.OnGameOverWin_GModeServerOnly__DelegateSignature");

	ABP_Wave_Gamemode_C_OnGameOverWin_GModeServerOnly__DelegateSignature_Params params;
	params.TimeUntilPauseStarts = TimeUntilPauseStarts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
