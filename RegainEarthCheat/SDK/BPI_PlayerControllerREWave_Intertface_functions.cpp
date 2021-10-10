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

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchActiveGrenadeSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstSlotIsActive              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerControllerREWave_Intertface_C::SwitchActiveGrenadeSlot(bool FirstSlotIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchActiveGrenadeSlot");

	UBPI_PlayerControllerREWave_Intertface_C_SwitchActiveGrenadeSlot_Params params;
	params.FirstSlotIsActive = FirstSlotIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForShieldToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ShieldPerc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::SetPercentForShieldToHud(float ShieldPerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForShieldToHud");

	UBPI_PlayerControllerREWave_Intertface_C_SetPercentForShieldToHud_Params params;
	params.ShieldPerc = ShieldPerc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetNewOrActiveWeaponIconToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            NewEquippedWeapon              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SkipToShowPassedWeaponAsActiveWeapon (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerControllerREWave_Intertface_C::SetNewOrActiveWeaponIconToHud(class UBP_Weapon_C* NewEquippedWeapon, bool SkipToShowPassedWeaponAsActiveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetNewOrActiveWeaponIconToHud");

	UBPI_PlayerControllerREWave_Intertface_C_SetNewOrActiveWeaponIconToHud_Params params;
	params.NewEquippedWeapon = NewEquippedWeapon;
	params.SkipToShowPassedWeaponAsActiveWeapon = SkipToShowPassedWeaponAsActiveWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchToPreviousPlayerSpectating
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::SwitchToPreviousPlayerSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchToPreviousPlayerSpectating");

	UBPI_PlayerControllerREWave_Intertface_C_SwitchToPreviousPlayerSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchToNextPlayerSpectating
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::SwitchToNextPlayerSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchToNextPlayerSpectating");

	UBPI_PlayerControllerREWave_Intertface_C_SwitchToNextPlayerSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetAmmoInClipToHud_grenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoInClip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFirstSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerControllerREWave_Intertface_C::SetAmmoInClipToHud_grenade(int NewAmmoInClip, class UTexture2D* Icon, bool IsFirstSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetAmmoInClipToHud_grenade");

	UBPI_PlayerControllerREWave_Intertface_C_SetAmmoInClipToHud_grenade_Params params;
	params.NewAmmoInClip = NewAmmoInClip;
	params.Icon = Icon;
	params.IsFirstSlot = IsFirstSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.ToggleSpectatorCamOtherPlayersFollow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetSpectatorCamOtherPlayersFollow_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerControllerREWave_Intertface_C::ToggleSpectatorCamOtherPlayersFollow(bool SetSpectatorCamOtherPlayersFollow_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.ToggleSpectatorCamOtherPlayersFollow");

	UBPI_PlayerControllerREWave_Intertface_C_ToggleSpectatorCamOtherPlayersFollow_Params params;
	params.SetSpectatorCamOtherPlayersFollow_ = SetSpectatorCamOtherPlayersFollow_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetEnemiesLeftToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewEnemiesLeft                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::SetEnemiesLeftToHud(int NewEnemiesLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetEnemiesLeftToHud");

	UBPI_PlayerControllerREWave_Intertface_C_SetEnemiesLeftToHud_Params params;
	params.NewEnemiesLeft = NewEnemiesLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForHealthToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPerc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::SetPercentForHealthToHud(float HealthPerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForHealthToHud");

	UBPI_PlayerControllerREWave_Intertface_C_SetPercentForHealthToHud_Params params;
	params.HealthPerc = HealthPerc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetAmmoInClipToHud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoInClip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::SetAmmoInClipToHud(int NewAmmoInClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetAmmoInClipToHud");

	UBPI_PlayerControllerREWave_Intertface_C_SetAmmoInClipToHud_Params params;
	params.NewAmmoInClip = NewAmmoInClip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForScannerEnergyToHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnergyPerc                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::SetPercentForScannerEnergyToHUD(float EnergyPerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForScannerEnergyToHUD");

	UBPI_PlayerControllerREWave_Intertface_C_SetPercentForScannerEnergyToHUD_Params params;
	params.EnergyPerc = EnergyPerc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.StartDisplayLootOrScoreNotifyWithScoreEval
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  KilledByDamageType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  KilledActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::StartDisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.StartDisplayLootOrScoreNotifyWithScoreEval");

	UBPI_PlayerControllerREWave_Intertface_C_StartDisplayLootOrScoreNotifyWithScoreEval_Params params;
	params.ScoreValue = ScoreValue;
	params.ScoreType = ScoreType;
	params.KilledByDamageType = KilledByDamageType;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.StartDisplayLootOrScoreNotifyCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 NotificationIcon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NotificationValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ValuePositiveOrNegative        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DynamicBackground              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            DynamicBackgroundColor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::StartDisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.StartDisplayLootOrScoreNotifyCustom");

	UBPI_PlayerControllerREWave_Intertface_C_StartDisplayLootOrScoreNotifyCustom_Params params;
	params.DisplayTime = DisplayTime;
	params.NotificationIcon = NotificationIcon;
	params.NotificationText = NotificationText;
	params.NotificationValue = NotificationValue;
	params.ValuePositiveOrNegative = ValuePositiveOrNegative;
	params.DynamicBackground = DynamicBackground;
	params.DynamicBackgroundColor = DynamicBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerNames
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::UpdateAllPlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerNames");

	UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerAvatar
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::UpdateAllPlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerAvatar");

	UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerKills
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::UpdateAllPlayerKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerKills");

	UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerUnconsciousStats
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::UpdateAllPlayerUnconsciousStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerUnconsciousStats");

	UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerUnconsciousStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateTeamScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::UpdateTeamScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateTeamScore");

	UBPI_PlayerControllerREWave_Intertface_C_UpdateTeamScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerScores
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerREWave_Intertface_C::UpdateAllPlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerScores");

	UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.GetPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_PlayerControllerREWave_Intertface_C::GetPlayerName(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.GetPlayerName");

	UBPI_PlayerControllerREWave_Intertface_C_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
