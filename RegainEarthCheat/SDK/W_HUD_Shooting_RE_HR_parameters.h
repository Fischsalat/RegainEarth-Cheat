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

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForShield
struct UW_HUD_Shooting_RE_HR_C_SetPercentForShield_Params
{
	float                                              percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetAmmoInClip_grenade
struct UW_HUD_Shooting_RE_HR_C_SetAmmoInClip_grenade_Params
{
	int                                                SetNewAmmoInClip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFirstSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.PlayRadialScanNotEnoughPowerAnim
struct UW_HUD_Shooting_RE_HR_C_PlayRadialScanNotEnoughPowerAnim_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.PlayRadialScanFullyLoadedAnim
struct UW_HUD_Shooting_RE_HR_C_PlayRadialScanFullyLoadedAnim_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForHealth
struct UW_HUD_Shooting_RE_HR_C_SetPercentForHealth_Params
{
	float                                              percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetAmmoInClip
struct UW_HUD_Shooting_RE_HR_C_SetAmmoInClip_Params
{
	int                                                SetNewAmmoInClip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetEnemiesLeft
struct UW_HUD_Shooting_RE_HR_C_SetEnemiesLeft_Params
{
	int                                                SetNewAmmoInClip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForScannerEnergy
struct UW_HUD_Shooting_RE_HR_C_SetPercentForScannerEnergy_Params
{
	float                                              percent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ShowNewScoreLootEventFeed
struct UW_HUD_Shooting_RE_HR_C_ShowNewScoreLootEventFeed_Params
{
	int                                                ScoreValueOfCurrentEvent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreTypeOfCurrentEvent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetTeamScoreOnHUD
struct UW_HUD_Shooting_RE_HR_C_SetTeamScoreOnHUD_Params
{
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetOwnPlayerScoreOnHUD 
struct UW_HUD_Shooting_RE_HR_C_SetOwnPlayerScoreOnHUD__Params
{
	int                                                PlayerScoreOverall;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetMiddleScreenMainText
struct UW_HUD_Shooting_RE_HR_C_SetMiddleScreenMainText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SetOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetRevivingElementsOnOff
struct UW_HUD_Shooting_RE_HR_C_SetRevivingElementsOnOff_Params
{
	bool                                               SetOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SequenceEvent_1
struct UW_HUD_Shooting_RE_HR_C_SequenceEvent_1_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.OnInitialized
struct UW_HUD_Shooting_RE_HR_C_OnInitialized_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.CountScoreNumers
struct UW_HUD_Shooting_RE_HR_C_CountScoreNumers_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayLootOrScoreNotifyWithScoreEval
struct UW_HUD_Shooting_RE_HR_C_DisplayLootOrScoreNotifyWithScoreEval_Params
{
	int                                                ScoreValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KilledByDamageType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      KilledActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.OpenGateToStartUpdateUINumberCounter
struct UW_HUD_Shooting_RE_HR_C_OpenGateToStartUpdateUINumberCounter_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayLootOrScoreNotifyCustom
struct UW_HUD_Shooting_RE_HR_C_DisplayLootOrScoreNotifyCustom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NotificationIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NotificationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NotificationValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ValuePositiveOrNegative;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DynamicBackground;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DynamicBackgroundColor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetRoundNumbers
struct UW_HUD_Shooting_RE_HR_C_SetRoundNumbers_Params
{
	int                                                CurrentRound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxRounds;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayButtonToolTip_Side
struct UW_HUD_Shooting_RE_HR_C_DisplayButtonToolTip_Side_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.RemoveToolTip_Side
struct UW_HUD_Shooting_RE_HR_C_RemoveToolTip_Side_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayCustomMessageToolTip_Side
struct UW_HUD_Shooting_RE_HR_C_DisplayCustomMessageToolTip_Side_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayCustomMessageTutorial_Bottom
struct UW_HUD_Shooting_RE_HR_C_DisplayCustomMessageTutorial_Bottom_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                           Row2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.RemoveTutorial_Bottom
struct UW_HUD_Shooting_RE_HR_C_RemoveTutorial_Bottom_Params
{
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ChangeWeaponIconTexture
struct UW_HUD_Shooting_RE_HR_C_ChangeWeaponIconTexture_Params
{
	class UTexture2D*                                  NewIconTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ChangeHighlightedWeaponIcon
struct UW_HUD_Shooting_RE_HR_C_ChangeHighlightedWeaponIcon_Params
{
	int                                                OldIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SwitchActiveGrenadeIcon
struct UW_HUD_Shooting_RE_HR_C_SwitchActiveGrenadeIcon_Params
{
	bool                                               FirstIsActive;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ExecuteUbergraph_W_HUD_Shooting_RE_HR
struct UW_HUD_Shooting_RE_HR_C_ExecuteUbergraph_W_HUD_Shooting_RE_HR_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
