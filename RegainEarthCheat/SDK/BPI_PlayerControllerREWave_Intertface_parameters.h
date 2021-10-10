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

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchActiveGrenadeSlot
struct UBPI_PlayerControllerREWave_Intertface_C_SwitchActiveGrenadeSlot_Params
{
	bool                                               FirstSlotIsActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForShieldToHud
struct UBPI_PlayerControllerREWave_Intertface_C_SetPercentForShieldToHud_Params
{
	float                                              ShieldPerc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetNewOrActiveWeaponIconToHud
struct UBPI_PlayerControllerREWave_Intertface_C_SetNewOrActiveWeaponIconToHud_Params
{
	class UBP_Weapon_C*                                NewEquippedWeapon;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkipToShowPassedWeaponAsActiveWeapon;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchToPreviousPlayerSpectating
struct UBPI_PlayerControllerREWave_Intertface_C_SwitchToPreviousPlayerSpectating_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SwitchToNextPlayerSpectating
struct UBPI_PlayerControllerREWave_Intertface_C_SwitchToNextPlayerSpectating_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetAmmoInClipToHud_grenade
struct UBPI_PlayerControllerREWave_Intertface_C_SetAmmoInClipToHud_grenade_Params
{
	int                                                NewAmmoInClip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFirstSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.ToggleSpectatorCamOtherPlayersFollow
struct UBPI_PlayerControllerREWave_Intertface_C_ToggleSpectatorCamOtherPlayersFollow_Params
{
	bool                                               SetSpectatorCamOtherPlayersFollow_;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetEnemiesLeftToHud
struct UBPI_PlayerControllerREWave_Intertface_C_SetEnemiesLeftToHud_Params
{
	int                                                NewEnemiesLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForHealthToHud
struct UBPI_PlayerControllerREWave_Intertface_C_SetPercentForHealthToHud_Params
{
	float                                              HealthPerc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetAmmoInClipToHud
struct UBPI_PlayerControllerREWave_Intertface_C_SetAmmoInClipToHud_Params
{
	int                                                NewAmmoInClip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.SetPercentForScannerEnergyToHUD
struct UBPI_PlayerControllerREWave_Intertface_C_SetPercentForScannerEnergyToHUD_Params
{
	float                                              EnergyPerc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.StartDisplayLootOrScoreNotifyWithScoreEval
struct UBPI_PlayerControllerREWave_Intertface_C_StartDisplayLootOrScoreNotifyWithScoreEval_Params
{
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KilledByDamageType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      KilledActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.StartDisplayLootOrScoreNotifyCustom
struct UBPI_PlayerControllerREWave_Intertface_C_StartDisplayLootOrScoreNotifyCustom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NotificationIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NotificationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NotificationValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ValuePositiveOrNegative;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DynamicBackground;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DynamicBackgroundColor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerNames
struct UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerNames_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerAvatar
struct UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerAvatar_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerKills
struct UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerKills_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerUnconsciousStats
struct UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerUnconsciousStats_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateTeamScore
struct UBPI_PlayerControllerREWave_Intertface_C_UpdateTeamScore_Params
{
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.UpdateAllPlayerScores
struct UBPI_PlayerControllerREWave_Intertface_C_UpdateAllPlayerScores_Params
{
};

// Function BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C.GetPlayerName
struct UBPI_PlayerControllerREWave_Intertface_C_GetPlayerName_Params
{
	struct FString                                     PlayerName;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
