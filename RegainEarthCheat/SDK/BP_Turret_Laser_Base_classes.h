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

// BlueprintGeneratedClass BP_Turret_Laser_Base.BP_Turret_Laser_Base_C
// 0x0359 (FullSize[0x07AA] - InheritedSize[0x0451])
class ABP_Turret_Laser_Base_C : public ABP_Turret_Base_C
{
public:
	unsigned char                                      UnknownData_G5EM[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                        MuzzleEnd;                                                 // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SK_TurretGun;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Weapon_C*                                BP_Weapon;                                                 // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioIdleRotation;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        LaserLight;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        WarningLight;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Laser;                                                     // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        LaserHit;                                                  // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        LaserSource;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mount;                                                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              TimelineIdleRotation_Idle_7210E3DD446822833EEB8191BF201E61; // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineIdleRotation__Direction_7210E3DD446822833EEB8191BF201E61; // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TBKE[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineIdleRotation;                                      // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 TurretWeaponID;                                            // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               AutoActivateOnMapStart_;                                   // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LPFP[0x2];                                     // 0x04C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxRotSpeedWhenTargetLocked;                               // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LaserLocation;                                             // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IdleRotationDegreeClockwise;                               // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              BarrelLength_Pitch_Corrector;                              // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinLookAnglePitch;                                         // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLookAnglePicth;                                         // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InRangeAndOnSight;                                         // 0x04E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               UseActivationDeactivationTriggers_;                        // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseReTrigger_Switch_OFF_;                                  // 0x04EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q17O[0x1];                                     // 0x04EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Tag_Laser;                                                 // 0x04EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ActivateTriggerState;                                      // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JP7W[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RetriggerTurret_Delay;                                     // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A9X7[0x4];                                     // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         FoundTargetObjectComponent;                                // 0x0500(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  FoundTargetObjectHitResult;                                // 0x0508(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                                  ShotFireHitResult;                                         // 0x0594(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                                    StartRotBaseTurret;                                        // 0x0620(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    StartRotBaseMount;                                         // 0x062C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Clamp_Yaw_Min_on_Follow_target;                            // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Clamp_Yaw_Max_on_Follow_target;                            // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IdleDurationForCompleteRotateForwAndBack;                  // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              NewPlayRateForIdleRotation;                                // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Shell_Life_Time;                                           // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visialize_Shells_;                                         // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyFollowLockedTargetInMaxTurretIdleRotation_;            // 0x064D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MoveWhenIdle_;                                             // 0x064E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MoveWhenTargetOnSightEvenWhenNotMovingOnIdle;              // 0x064F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SimplyShootOnEveryTargetInAttackRangeWithoutUsingForwardLaserScannerCheck; // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LaserPointerOn__only_the_visual_effect;                    // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0S96[0x6];                                     // 0x0652(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                RangeTimer;                                                // 0x0658(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TraceStartLoc_LaserShootFire;                              // 0x0660(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TraceEndLoc_LaserShootFire;                                // 0x066C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseSphereTraceToSimulateConeOfView;                        // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_STO7[0x3];                                     // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SphereRadiusWhenUsingSphereTrace;                          // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UPrimitiveComponent*, struct FTransform> FoundPossibleActorsInSphereAndTransform;                   // 0x0680(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                                TimerForTestAllInSphereForTraceLine;                       // 0x06D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UPrimitiveComponent*, struct FTransform> FoundComponentsAndHitResult;                               // 0x06D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FHitResult>                          AllSphereTraceHits;                                        // 0x0728(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                     TraceStartLoc_Sphere;                                      // 0x0738(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TraceEndLoc_Sphere;                                        // 0x0744(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayEachSphereTraceEvaluation;                            // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UsedInterpSpeed;                                           // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TurretShoudRotateBackToX_;                                 // 0x0758(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PEHQ[0x3];                                     // 0x0759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    ActualRotForTurret_OnRotateBackToX;                        // 0x075C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    ActualRotForMount_OnRotateBackToX;                         // 0x0768(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ToleranceWhenGoBackToX;                                    // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShootEverythingMovingInForwardTunnel;                      // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K8HU[0x3];                                     // 0x0779(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Trace_Start_Loc_For_Check_Movments;                        // 0x077C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Trace_End_Loc_For_Check_Movments;                          // 0x0788(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShootOnlyPawns_;                                           // 0x0794(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6GAQ[0x3];                                     // 0x0795(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CounterForClearMap;                                        // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewTimeLineTime;                                           // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Investigator;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TargetInLaserDetectionAngle;                               // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ActorLeftRange;                                            // 0x07A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Turret_Laser_Base.BP_Turret_Laser_Base_C");
		return ptr;
	}



	void OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere);
	void GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim);
	void GetSelfName(struct FName* Name);
	void OnRep_IsOnPause__1();
	void GetAIseePlayer(bool* SeePlayer_, class APawn** TargetPawn);
	void GetTargetPawnOnBB(class ACharacter** TargetChararacter);
	void GetLastKnownTargetLocation(struct FVector* LastKnownTargetLocation);
	void GetSeeingSenseValidTarget(bool* SenseValidTarget_);
	void TriggerSeeTargetSpecialEvent(bool* DoneFine);
	void TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine);
	void TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_);
	void TriggerTryDoingSpecialAttackEvent(bool* DoneFine);
	void OnRep_InRangeAndOnSight();
	void OnRep_FoundTargetObjectComponent();
	void SyncStateToClientsWhenHaveAuthority();
	void DoLineTraceAndEvaluateHitTarget(const struct FVector& Start, const struct FVector& End, bool* Found_valid_target);
	void UserConstructionScript();
	void TimelineIdleRotation__FinishedFunc();
	void TimelineIdleRotation__UpdateFunc();
	void TimelineIdleRotation__NewTrack_0__EventFunc();
	void UpdateRotation();
	void ReceiveTick(float DeltaSeconds);
	void FireBullet();
	void LaserPointer();
	void TraceForTargetInForwardTraceLine();
	void UpdateStartTraceEndTrace();
	void DoFirstSpherTrace_Then_LineTraceForEveryFoundTargetInSphereTrace();
	void RestartEvaluateSphereHits();
	void DoFirstSpherTrace_ForGetMovingObjectsInForwardTunnel();
	void RestartEvaluateSphereHitsMovingObjectInTunnel();
	void Multicast_SyncStateToClients(const struct FRotator& MountRelRot, const struct FRotator& TurretRelRot);
	void SyncStart_UpdateRotationOnClients();
	void ReceiveBeginPlay();
	void StartTurretIdleRotationAgainFromStart();
	void StopTurretIdleRotation();
	void StartTurretIdleRotationPlayResume(float NewTimeLineTime);
	void ResetDoOnceStopTurretIdleRot();
	void DestroyedExplodeFired_Event();
	void CheckForOverlappingActors();
	void OnActorDetectedAndAttackableAndInLOS(class AActor* DetectedActor);
	void CheckIsDetectedActorAttackable(class AActor* ActorToCheck, bool WasDetectedViaOverlapBeginEvent);
	void OnActorLeftRange(class AActor* LeftActor);
	void StartEventTickGateAndStartFullFunctionsAgain();
	void StopEventTickGateAndShutDownCompletly();
	void ExecuteUbergraph_BP_Turret_Laser_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
