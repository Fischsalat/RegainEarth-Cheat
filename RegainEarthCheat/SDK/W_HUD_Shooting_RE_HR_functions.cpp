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

// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetPercentForShield(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForShield");

	UW_HUD_Shooting_RE_HR_C_SetPercentForShield_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetAmmoInClip_grenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetNewAmmoInClip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFirstSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HUD_Shooting_RE_HR_C::SetAmmoInClip_grenade(int SetNewAmmoInClip, class UTexture2D* Icon, bool IsFirstSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetAmmoInClip_grenade");

	UW_HUD_Shooting_RE_HR_C_SetAmmoInClip_grenade_Params params;
	params.SetNewAmmoInClip = SetNewAmmoInClip;
	params.Icon = Icon;
	params.IsFirstSlot = IsFirstSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.PlayRadialScanNotEnoughPowerAnim
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::PlayRadialScanNotEnoughPowerAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.PlayRadialScanNotEnoughPowerAnim");

	UW_HUD_Shooting_RE_HR_C_PlayRadialScanNotEnoughPowerAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.PlayRadialScanFullyLoadedAnim
// (Public, BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::PlayRadialScanFullyLoadedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.PlayRadialScanFullyLoadedAnim");

	UW_HUD_Shooting_RE_HR_C_PlayRadialScanFullyLoadedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetPercentForHealth(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForHealth");

	UW_HUD_Shooting_RE_HR_C_SetPercentForHealth_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetAmmoInClip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetNewAmmoInClip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetAmmoInClip(int SetNewAmmoInClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetAmmoInClip");

	UW_HUD_Shooting_RE_HR_C_SetAmmoInClip_Params params;
	params.SetNewAmmoInClip = SetNewAmmoInClip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetEnemiesLeft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetNewAmmoInClip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetEnemiesLeft(int SetNewAmmoInClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetEnemiesLeft");

	UW_HUD_Shooting_RE_HR_C_SetEnemiesLeft_Params params;
	params.SetNewAmmoInClip = SetNewAmmoInClip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForScannerEnergy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetPercentForScannerEnergy(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetPercentForScannerEnergy");

	UW_HUD_Shooting_RE_HR_C_SetPercentForScannerEnergy_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ShowNewScoreLootEventFeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreValueOfCurrentEvent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreTypeOfCurrentEvent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::ShowNewScoreLootEventFeed(int ScoreValueOfCurrentEvent, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreTypeOfCurrentEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ShowNewScoreLootEventFeed");

	UW_HUD_Shooting_RE_HR_C_ShowNewScoreLootEventFeed_Params params;
	params.ScoreValueOfCurrentEvent = ScoreValueOfCurrentEvent;
	params.ScoreTypeOfCurrentEvent = ScoreTypeOfCurrentEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetTeamScoreOnHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetTeamScoreOnHUD(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetTeamScoreOnHUD");

	UW_HUD_Shooting_RE_HR_C_SetTeamScoreOnHUD_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetOwnPlayerScoreOnHUD 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerScoreOverall             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetOwnPlayerScoreOnHUD_(int PlayerScoreOverall)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetOwnPlayerScoreOnHUD ");

	UW_HUD_Shooting_RE_HR_C_SetOwnPlayerScoreOnHUD__Params params;
	params.PlayerScoreOverall = PlayerScoreOverall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetMiddleScreenMainText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SetOn_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HUD_Shooting_RE_HR_C::SetMiddleScreenMainText(const struct FText& Text, bool SetOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetMiddleScreenMainText");

	UW_HUD_Shooting_RE_HR_C_SetMiddleScreenMainText_Params params;
	params.Text = Text;
	params.SetOn_ = SetOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetRevivingElementsOnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetOn_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HUD_Shooting_RE_HR_C::SetRevivingElementsOnOff(bool SetOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetRevivingElementsOnOff");

	UW_HUD_Shooting_RE_HR_C_SetRevivingElementsOnOff_Params params;
	params.SetOn_ = SetOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SequenceEvent_1");

	UW_HUD_Shooting_RE_HR_C_SequenceEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.OnInitialized");

	UW_HUD_Shooting_RE_HR_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.CountScoreNumers
// (BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::CountScoreNumers()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.CountScoreNumers");

	UW_HUD_Shooting_RE_HR_C_CountScoreNumers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayLootOrScoreNotifyWithScoreEval
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  KilledByDamageType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  KilledActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::DisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayLootOrScoreNotifyWithScoreEval");

	UW_HUD_Shooting_RE_HR_C_DisplayLootOrScoreNotifyWithScoreEval_Params params;
	params.ScoreValue = ScoreValue;
	params.ScoreType = ScoreType;
	params.KilledByDamageType = KilledByDamageType;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.OpenGateToStartUpdateUINumberCounter
// (BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::OpenGateToStartUpdateUINumberCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.OpenGateToStartUpdateUINumberCounter");

	UW_HUD_Shooting_RE_HR_C_OpenGateToStartUpdateUINumberCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayLootOrScoreNotifyCustom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 NotificationIcon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NotificationValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ValuePositiveOrNegative        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DynamicBackground              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            DynamicBackgroundColor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::DisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayLootOrScoreNotifyCustom");

	UW_HUD_Shooting_RE_HR_C_DisplayLootOrScoreNotifyCustom_Params params;
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


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetRoundNumbers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentRound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxRounds                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::SetRoundNumbers(int CurrentRound, int MaxRounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SetRoundNumbers");

	UW_HUD_Shooting_RE_HR_C_SetRoundNumbers_Params params;
	params.CurrentRound = CurrentRound;
	params.MaxRounds = MaxRounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayButtonToolTip_Side
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::DisplayButtonToolTip_Side(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayButtonToolTip_Side");

	UW_HUD_Shooting_RE_HR_C_DisplayButtonToolTip_Side_Params params;
	params.ActionKey = ActionKey;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.RemoveToolTip_Side
// (BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::RemoveToolTip_Side()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.RemoveToolTip_Side");

	UW_HUD_Shooting_RE_HR_C_RemoveToolTip_Side_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayCustomMessageToolTip_Side
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::DisplayCustomMessageToolTip_Side(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayCustomMessageToolTip_Side");

	UW_HUD_Shooting_RE_HR_C_DisplayCustomMessageToolTip_Side_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayCustomMessageTutorial_Bottom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::DisplayCustomMessageTutorial_Bottom(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.DisplayCustomMessageTutorial_Bottom");

	UW_HUD_Shooting_RE_HR_C_DisplayCustomMessageTutorial_Bottom_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.RemoveTutorial_Bottom
// (BlueprintCallable, BlueprintEvent)
void UW_HUD_Shooting_RE_HR_C::RemoveTutorial_Bottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.RemoveTutorial_Bottom");

	UW_HUD_Shooting_RE_HR_C_RemoveTutorial_Bottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ChangeWeaponIconTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              NewIconTexture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WeaponSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::ChangeWeaponIconTexture(class UTexture2D* NewIconTexture, int WeaponSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ChangeWeaponIconTexture");

	UW_HUD_Shooting_RE_HR_C_ChangeWeaponIconTexture_Params params;
	params.NewIconTexture = NewIconTexture;
	params.WeaponSlotIndex = WeaponSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ChangeHighlightedWeaponIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::ChangeHighlightedWeaponIcon(int OldIndex, int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ChangeHighlightedWeaponIcon");

	UW_HUD_Shooting_RE_HR_C_ChangeHighlightedWeaponIcon_Params params;
	params.OldIndex = OldIndex;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SwitchActiveGrenadeIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstIsActive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HUD_Shooting_RE_HR_C::SwitchActiveGrenadeIcon(bool FirstIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.SwitchActiveGrenadeIcon");

	UW_HUD_Shooting_RE_HR_C_SwitchActiveGrenadeIcon_Params params;
	params.FirstIsActive = FirstIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ExecuteUbergraph_W_HUD_Shooting_RE_HR
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HUD_Shooting_RE_HR_C::ExecuteUbergraph_W_HUD_Shooting_RE_HR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HUD_Shooting_RE_HR.W_HUD_Shooting_RE_HR_C.ExecuteUbergraph_W_HUD_Shooting_RE_HR");

	UW_HUD_Shooting_RE_HR_C_ExecuteUbergraph_W_HUD_Shooting_RE_HR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
