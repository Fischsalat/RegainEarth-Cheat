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

// BlueprintGeneratedClass Factory.Factory_C
// 0x00C8 (FullSize[0x02F0] - InheritedSize[0x0228])
class AFactory_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               GameStarted;                                               // 0x0230(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_71RE[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSTurretMostImportantSpawnSettings>  TurretsToSpawnSyncClient;                                  // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_Turret_Laser_Base_C*>             TMPTurretsTransformsToSpawn;                               // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                RandomFloat;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CamTag;                                                    // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6DYW[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACameraActor*>                        PerfCamsDefault;                                           // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACameraActor*>                        PerfCamsOutside;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACameraActor*>                        PerfCamsTopDown;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                CamIndex;                                                  // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B7SK[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    PerfTestFinished;                                          // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ABP_PlayerCharacter_BPBase_C*>        PlayerCamsArray;                                           // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                TestCounter;                                               // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrameCounter;                                              // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSFpsCountSeconds>                   FrameCounterCollector;                                     // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RecordDelayAfterShootActionActorsTests;                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecordLengthCameraTest;                                    // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastIndexShoots;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PauseBetweenShots;                                         // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                TestCameraActorStart_ExecuteUbergraph_Factory_RefProperty; // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Factory.Factory_C");
		return ptr;
	}



	void GetFirst2digitsAsNumber(const struct FString& String, int* NewParam);
	void SortCamArrayByName(TArray<class ACameraActor*>* PerfCams, TArray<class ACameraActor*>* SortedArray);
	void SortPlayerStartArrayByName(TArray<class APlayerStart*>* PerfCams, TArray<class APlayerStart*>* SortedArray);
	void OnRep_GameStarted();
	void PerfTest();
	void Server_PerfTest();
	void PrepareAndStartPerfCamTests(TArray<class ACameraActor*>* Array, const struct FString& TestName);
	void PerfTestFinished_Event1();
	void DrivePawn();
	void PlayerCharacterFinishedBeginPlay_Event_1();
	void Multicast_LoadActorLevelAndContinoue();
	void Roundtrip();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnGameStarts_GStateReplicated_Event_1();
	void OpenGateToStartShowFPSCount();
	void ResetFrameCounter();
	void sp();
	void ExecuteUbergraph_Factory(int EntryPoint);
	void PerfTestFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
