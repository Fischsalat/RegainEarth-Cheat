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

// BlueprintGeneratedClass BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerControllerREWave_Intertface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerControllerREWave_Intertface.BPI_PlayerControllerREWave_Intertface_C");
		return ptr;
	}



	void SwitchActiveGrenadeSlot(bool FirstSlotIsActive);
	void SetPercentForShieldToHud(float ShieldPerc);
	void SetNewOrActiveWeaponIconToHud(class UBP_Weapon_C* NewEquippedWeapon, bool SkipToShowPassedWeaponAsActiveWeapon);
	void SwitchToPreviousPlayerSpectating();
	void SwitchToNextPlayerSpectating();
	void SetAmmoInClipToHud_grenade(int NewAmmoInClip, class UTexture2D* Icon, bool IsFirstSlot);
	void ToggleSpectatorCamOtherPlayersFollow(bool SetSpectatorCamOtherPlayersFollow_);
	void SetEnemiesLeftToHud(int NewEnemiesLeft);
	void SetPercentForHealthToHud(float HealthPerc);
	void SetAmmoInClipToHud(int NewAmmoInClip);
	void SetPercentForScannerEnergyToHUD(float EnergyPerc);
	void StartDisplayLootOrScoreNotifyWithScoreEval(int ScoreValue, TEnumAsByte<EScoreTypesReasons_EScoreTypesReasons> ScoreType, class UClass* KilledByDamageType, class AActor* KilledActor);
	void StartDisplayLootOrScoreNotifyCustom(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor);
	void UpdateAllPlayerNames();
	void UpdateAllPlayerAvatar();
	void UpdateAllPlayerKills();
	void UpdateAllPlayerUnconsciousStats();
	void UpdateTeamScore(int Score);
	void UpdateAllPlayerScores();
	void GetPlayerName(struct FString* PlayerName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
