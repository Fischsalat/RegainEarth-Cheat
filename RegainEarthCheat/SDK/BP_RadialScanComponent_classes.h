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

// BlueprintGeneratedClass BP_RadialScanComponent.BP_RadialScanComponent_C
// 0x0160 (FullSize[0x0358] - InheritedSize[0x01F8])
class UBP_RadialScanComponent_C : public USceneComponent
{
public:
	unsigned char                                      UnknownData_78GE[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ABP_RadialScanActor_C*                       LastRadialScanActor;                                       // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_RadialScanSettings                       RadialSettingsComponent;                                   // 0x0210(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntensityPostProcFillAndOutlineEffect;                     // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondsForDriveUpPostProcIntensity;                        // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntensitiyProIntervall;                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AXYF[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerDriveEffectIntensityUpDown;                           // 0x0250(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                CountOfRadarSonarWaves;                                    // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayInSecondsBetweenEachRadarWave;                        // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HoldEffectTimeInSecondsAfterLastRadarWave;                 // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6UZL[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorsCollectByRadialScan[0x50];                           // 0x0264(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FScriptMulticastDelegate                    IntensityIsZero;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      AllRadialScanActor[0x50];                                  // 0x02C8(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                RenderCustomDepthStenilValueForPostProc;                   // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanScan;                                                   // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S7CK[0x3];                                     // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxScannerEnergy;                                          // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScanEnergyCurrent;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurationNeededForEnergyToScanOnce;                         // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntervallTimerOfRegenerateEnergy;                          // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnergyNeededPerScan;                                       // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmountAddEnergyPerIntervall;                               // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ScanRegenerationTimer;                                     // 0x0338(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TakenDamageToEnergyFactor;                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2LH6[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             RechargeEnergyVisualEffect;                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  RechargeEnergySoundEffect;                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialScanComponent.BP_RadialScanComponent_C");
		return ptr;
	}



	void DriveEffectIntensityDown();
	void DriveEffectIntensityUp();
	void CheckScanConditionsAndSpawnRadialScanEffect();
	void StartLoopSonarRadarWaves();
	void ScanWaveFoundPawnOrImportantActor(class AActor* Actor);
	void IntensityIsZero_Event();
	void RaiseScannerEnergy();
	void ReceiveBeginPlay();
	void StartScanRegenratePowerTimer();
	void Server_SpawnRadialWaves();
	void Multicast_SpawnRadialWaves();
	void OwningClient_ChargeEnergy(float ElectricDamageFromHit);
	void Multicast_SpawnEnergyRechargeVisuals();
	void Server_SpawnEnergyRechargeVisuals_Replicated();
	void ExecuteUbergraph_BP_RadialScanComponent(int EntryPoint);
	void IntensityIsZero__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
