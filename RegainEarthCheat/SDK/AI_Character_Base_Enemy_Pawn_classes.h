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

// BlueprintGeneratedClass AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C
// 0x0504 (FullSize[0x09CC] - InheritedSize[0x04C8])
class AAI_Character_Base_Enemy_Pawn_C : public AAll_Characters_Base_Class
{
public:
	unsigned char                                      UnknownData_GJWI[0x8];                                     // 0x04C8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             GunFirePivot;                                              // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DissolveComponent_C*                     BP_DissolveComponent;                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StatusEffectsBaseComponent_C*            BP_StatusEffectsBaseComponent;                             // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMeshSpcialEvent;                                     // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Rattle_Stereo;                                             // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Rattle_Jump_Stereo;                                        // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Rattle_Jump_Mono;                                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Jump_Voice_End;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Jump_Voice_Start;                                          // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Foot_Jump;                                                 // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Footsteps;                                                 // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              DissolveEffect_DissolveProgress_CEDBE9BB44F59558EE0F879AE810D29C; // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DissolveEffect__Direction_CEDBE9BB44F59558EE0F879AE810D29C; // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SX18[0x3];                                     // 0x053D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DissolveEffect;                                            // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhatBlend2_alpha_96B9E74541C02EBAEE3C458DD024A84C;         // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             PhatBlend2__Direction_96B9E74541C02EBAEE3C458DD024A84C;    // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_70QK[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PhatBlend2;                                                // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Footsteps_Volume;                                          // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rattle_Volume;                                             // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Type_of_Floor;                                             // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Voice_Jump_Volume;                                         // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMale;                                                    // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Footsteps_Play;                                            // 0x0569(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Rattle_Play;                                               // 0x056A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NRP8[0x1];                                     // 0x056B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LeanAngleInterp;                                           // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpawnLocation;                                             // 0x0570(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInCanNOTAttackState_;                                    // 0x057C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDead;                                                    // 0x057D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7Z3V[0x2];                                     // 0x057E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttackDamage;                                              // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              CurrentHealth;                                             // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BulletDirection;                                           // 0x0588(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Bullet_Hit_Bone;                                           // 0x0594(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackHitRangeFromPlayerToAttackStrikeBone;                // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Max_Health;                                                // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               CanBeKilledBySingleHeadShot_;                              // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_J8EW[0x3];                                     // 0x05A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GotHeadShotMultiplier;                                     // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1OYY[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AttackDamageType;                                          // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>                   Attack_Animations_Array;                                   // 0x05B8(0x0010) (Edit, BlueprintVisible)
	class UAnimSequenceBase*                           OptionalAnimationOnSeePlayer;                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShortlyDidPlayerSeeAnimation_;                             // 0x05D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AI_Settings___DoAnimationWhenFirstSeePlayer_;              // 0x05D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_M7MW[0x2];                                     // 0x05D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AI_Settings___Slower_Speed;                                // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AI_Settings___Walk_Speed;                                  // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AI_Settings___Run_Speed;                                   // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9G56[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerForNotSeenPlayerLongEnough;                           // 0x05E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              AI_Settings___RadiusOfWalkRandomPointAtSpawn;              // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Seconds_Chasing_behind_Not_seen_anymore_Target;            // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                        BlackBoardRef;                                             // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               Ai_Controller_Ref;                                         // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AI_Settings___Should_move_arround_on_Spawn_Location_;      // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_7LMU[0x3];                                     // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       HeavyImpulseBone;                                          // 0x060C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DamageCauserLocation;                                      // 0x0614(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseImpulseOnDeathHitWhenHeadshot;                         // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseImpulseOnDeathHit;                                     // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 BulletPowerImpulseCurve;                                   // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Investigator;                                              // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHeadShot;                                                // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChasingTarget;                                             // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_66W8[0x2];                                     // 0x0642(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavigatableRadiusForSpawnManager;                          // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnemyAISetBySpawnManager;                                 // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_31VT[0x3];                                     // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartAtNumberForSpawnManager;                              // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Path_Points_C*                           PathReferenceNeededForSpawnManagerPathFollow;              // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AI_Settings___SightRange;                                  // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              AI_Settings___HearingRange;                                // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                      ParentClassOfAllPlayers;                                   // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxImpulseLengthOverall;                                   // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AnimBPSlotFullBodyWhenNotMoving;                           // 0x066C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HESI[0x4];                                     // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TMP_NewAISensedFoe;                                        // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ESkeletons_ESkeletons>                 SkelletonType4HitReact;                                    // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EYJT[0x3];                                     // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       StartBoneOfPhysSimOnHit;                                   // 0x0684(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EndBoneOfPhysSimOnHit1;                                    // 0x068C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EndBoneOfPhysSimOnHit2;                                    // 0x0694(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseMultiplierCorrection;                               // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToGiveImpulseOnHit;                                    // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HitBone;                                                   // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceForDroppingHealthPickup;                             // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ChanceForDroppingWeaponPickup;                             // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceForDroppingGrenadePickup;                            // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreMultiplierOnGetKilledByPlayer_AsFactor;               // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValueOfWeaponDrops;                                     // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 TempWeaponIdForDrop;                                       // 0x06C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V7RP[0x3];                                     // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxValueOfWeaponDrops;                                     // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S8PT[0x4];                                     // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    MyUnpossesd_Event;                                         // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       BlackBoard___GotDamagedFromPossibleTarget2;                // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BlackBoard___Know_Target_actual_or_last_Location;          // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BlackBoard___TargetActor;                                  // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BlackBoard___AI_is_seeing_sense_valid_Target;              // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BlackBoard___LastSeenTargetLocation;                       // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BlackBoard___AiTemporarilyLostSightOfTarget;               // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      KnownTargetFoes[0x50];                                     // 0x0710(0x0050) UNKNOWN PROPERTY: SetProperty
	float                                              Min_ValueMultiplierRangeCalcForActualTarget;               // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EWeaponTypes                        AI_Settings___UsedWeaponType;                              // 0x0764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3EQA[0x3];                                     // 0x0765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AI_Settings___MaxDistanceToTargetAfterStopAttack;          // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AI_Settings___MinDistanceToTargetToStartAttack;            // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartWithDisabledAI;                                       // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               DebugOutputOn_;                                            // 0x0771(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DebugOutputNavigationOn_;                                  // 0x0772(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2BE6[0x1];                                     // 0x0773(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIStimulus                                 AiPerceptionStimulus;                                      // 0x0774(0x003C) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               DisabledAIAttacks;                                         // 0x07B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VQ33[0x7];                                     // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerCheckForNearestPlayer;                                // 0x07B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  ExtraFootstepsSoundOverSurface;                            // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          HitArrayRemovedDoubleActors;                               // 0x07C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                              TempHitActorList;                                          // 0x07D8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AController*                                 ControllerWhoKills;                                        // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    AiOnDeath;                                                 // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       LastSenseTag;                                              // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundImpactOnAttackHit;                                    // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  EasyAttackSoundWithoutAnimNotify;                          // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EasyAttackSoundWithoutAnimNotifyDelayBeforeSound;          // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableAIPawnMovement;                                     // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseAiMoveToTargetDebug;                                    // 0x081D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpawnWithAISensesOff;                                      // 0x081E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_3UZD[0x1];                                     // 0x081F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BKP_MeshCollisionProfileName;                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BKP_CapsuleCollisionProfileName;                           // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetToNotHitableByBulletStrikeAndProjectile_;               // 0x0830(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_FKM6[0x7];                                     // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SeeTargetSpecialEventFinished;                             // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    SensedTargetLocButTDoNotSeePlayerEventFinished;            // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    GotDamagedByHiddenTargetSpecialEventFinished;              // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              AI_Settings___TimerSecToDoAgainFirstSeePlayerAnim;         // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HitWasRadialDamage;                                        // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DY62[0x3];                                     // 0x086D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ShotComeFrom;                                              // 0x0870(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J0C9[0x4];                                     // 0x087C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPrimitiveComponent*>                 TMP_SkelMeshAndMeshComponents;                             // 0x0880(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	unsigned char                                      CounterIfStuck;                                            // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P984[0x7];                                     // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               BoneNamesCountAsHeadshot;                                  // 0x0898(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseAimingPitchCalcOfBaseAiAlgorithm;                       // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6YMW[0x3];                                     // 0x08A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TempNewAimingPitchClamped;                                 // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimPitchInterpSpeed;                                       // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlayerBoneAimForAimingPitch;                               // 0x08B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WDUK[0x4];                                     // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             WeaponSkelMeshRef;                                         // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                               AiBehaivorTreeUsed;                                        // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetFoe4SyncToClients;                                   // 0x08D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AiPercAndBtAreDisabled;                                    // 0x08D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_MJGF[0x7];                                     // 0x08D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_DamageType_BaseREWave_C*                 DamageTypeOfHit;                                           // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MindControlledBy[0x50];                                    // 0x08E8(0x0050) UNKNOWN PROPERTY: SetProperty
	float                                              MindControllDurationLeft;                                  // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControllDurationComplete;                              // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMindControlled;                                          // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XF86[0x3];                                     // 0x0941(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       IngameShortEnemyName;                                      // 0x0944(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_36T9[0x4];                                     // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TMP_SourceActorOrDamageCausedActor;                        // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSpeedMultiplierByEffect;                            // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActiveWalkingSpeedWithoutEffectsAffected;                  // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UBP_Weapon_C*, float>                   BkpWeaponComponentShotPerSeconds;                          // 0x0960(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               WeaponsAreSlowedDown;                                      // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowBlood;                                                 // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1H5R[0x6];                                     // 0x09B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraComponent*                           DissolveDebugTest;                                         // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseGunFirePivotInsteadWeapMeshLocAsPitchPivotCalcBase;     // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                               IgnoreAllSetFocusOnTargetFromBehaivorTree;                 // 0x09C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BHJP[0x2];                                     // 0x09C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketOrBoneToAttachGunFirePivot;                          // 0x09C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_Character_Base_Enemy_Pawn.AI_Character_Base_Enemy_Pawn_C");
		return ptr;
	}



	void IsProjectile(bool* IsProjectile);
	void GetSelfName(struct FName* Name);
	void IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar);
	void IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar);
	void GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim);
	void GetMeshForEffects(class UMeshComponent** Mesh);
	void GetStatusEffectComponent(bool* HasStatusEffectComponent, class UBP_StatusEffectsBaseComponent_C** StatusEffectComponentRef);
	void GetIgnoreAllSetFocusOnTargetFromBehaivorTree(bool* IgnoreAllSetFocusOnTargetFromBehaivorTree);
	void TriggerGotDamagedByHiddenTargetSpecialEvent(bool* DoneFine_);
	void TriggerTryDoingSpecialAttackEvent(bool* DoneFine);
	void TriggerSensedTargetLocButDoNotSeePlayerSpecialEvent(bool* DoneFine);
	void TriggerSeeTargetSpecialEvent(bool* DoneFine);
	void GetSeeingSenseValidTarget(bool* SenseValidTarget_);
	void GetLastKnownTargetLocation(struct FVector* LastKnownTargetLocation);
	void GetTargetFoeOnBB(class AActor** TargetFoe);
	void GetAIseePlayer(bool* SeePlayer_, class AActor** TargetFoe);
	void GetLaserDotRef(class UBP_LaserDotMarker_Component_C** LaserDotRef);
	void GetLaserDotLocation(struct FVector* Location);
	void GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh);
	void GetPlayerShootingCondition(bool* CharCanShoot);
	void GetCanNotAttack(bool* CanNotAttack);
	void GetName(struct FString* Name);
	void GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_);
	void IsAtMaxHealth(bool* IsAtMaxHealth_);
	void GetIsBleedingOut(bool* IsBleedingOut);
	void GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_);
	void GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_);
	void GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character);
	void GetIsDead(bool* IsDead_);
	void GetIsInteracting(bool* IsInteracting_);
	void OnRep_AiPercAndBtAreDisabled();
	void OnRep_SetToNotHitableByBulletStrikeAndProjectile_();
	void GetBlackboardFuncIn_Progresss(class UBlackboardComponent** BlackBoardRef);
	void GetSenseValidTargetPure(bool* SenseValidTarget_);
	void GetLastKnownTargetLocationPure(struct FVector* LastKnownTargetLocation);
	void Get_Target_Pawn(class AActor** TargetFoe, bool* FoundValidTargetFoe);
	void CheckForNearestPlayer();
	void Get_Array_Of_Weapon_IDs_Fit_to_Value_Min_Max_Settings(TArray<TEnumAsByte<EWeaponIDs_EWeaponIDs>>* GeneratedArrayOfPossibleWeaponDrops1);
	void Hit_Bones_Correction_Impulse_and_Phys_Blend(bool* Impulse);
	void GetControllerDirectionYawNegate(float* Yaw);
	void UserConstructionScript();
	void PhatBlend2__FinishedFunc();
	void PhatBlend2__UpdateFunc();
	void PhatBlend2__StartImpulse__EventFunc();
	void DissolveEffect__FinishedFunc();
	void DissolveEffect__UpdateFunc();
	void AttackDamageToTarget();
	void WalkToNextRandomPointInRange(bool RangeBasedOnSpawnPoint_);
	void StopChasingTarget();
	void StartGoToSpawnLocation();
	void StartLoopSearchAtLastPlayerLocation();
	void ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime();
	void SetWeapon(class USkeletalMesh* WeaponMesh, class UBP_Weapon_C* WeaponComponent, bool Primary);
	void ShootCharEffectsSingleShot();
	void GetHit(const struct FHitResult& Hit);
	void GetBulletDirection(const struct FVector& BulletDirection, const struct FName& Bone);
	void ShootCharEffectsAutofireStart();
	void ShootCharEffectsAutofireStop();
	void PickupWeapon(TEnumAsByte<EWeaponIDs_EWeaponIDs> WeaponID);
	void WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef);
	void AttachCurrentWeaponStopAimingState();
	void AttachCurrentWeaponToHandsAndStartAimingState();
	void DropCurrentWeapon();
	void SetLaserDotLocation(const struct FVector& Location);
	void SetNewIntensity(float NewIntensity);
	void SetNewColor(const struct FLinearColor& NewLightColor);
	void ThrowGrenade();
	void PickupGrenade(class UClass* PickupGrenadeType, int AddedAmount);
	void CancelPickupAndReplicate();
	void ToggleForceDancingPawn(bool SetDancing_);
	void SetMaxHealthInterf(float NewMaxHealth);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_113_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void Did_NOT_See_Player_for_some_Time();
	void ClearActualTargetPawnAndSetAISensedTargetOff();
	void ClearTargetLastKnownLocation();
	void StartTimerToCheckForNearestPlayer();
	void SetNewTarget(class AActor* FoundNewNearTarget);
	void UpdateLastSeenTargetLocationToActualTargetLocation();
	void ClearAISeeTargetSenseToFalseButDoNotClearTargetPawn();
	void TriggerDamagePerceptionStimulus(class AActor* SourceActorOrDamageCausedActor, const struct FAIStimulus& AI_Stimulus, float Damage, class AController* InvestigatorOnlyUsedWhenSourceActorNotValidForReaction);
	void SetTargetFoeOnBBandReplicate(class AActor* TargetFoe);
	void SetLastKnownTargetLocation(const struct FVector& LastKnownTargetLocation);
	void SetSeeingSenseValidTarget(bool SenseValidTarget_);
	void ClearTargetPawnButDoNotAISeeTargetSense();
	void ToggleAiTemporarilyLostSightOfTarget(bool AiTemporarilyLostSightOfTarget_);
	void AIPerceptionForgetAndResetLastStimulis();
	void OnCurrentTargetPlayerUnconscious_Event();
	void ClearKnownTargetsAndClearResetAIPerceptionStimulus();
	void OpenGateStartAiSense();
	void CloseGateStopAiSense();
	void OnCurrentTargetTurretDestroyded();
	void Attack();
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ManuallyTriggerDoOnDeath();
	void StartAttack();
	void Multicast_DoOnDeath(const struct FVector& BulletDirection, bool HeadShot, const struct FName& Hit_Bone_Name, const struct FVector& DamageCauseLocation, float Damage, bool HitWasRadialDamage, class UBP_DamageType_BaseREWave_C* DamageTypeRef);
	void Multicast_VisualImpactOnHit(const struct FVector& BulletDirection, bool HeadShot, const struct FName& Hit_Bone_Name, float Damage, class UBP_DamageType_BaseREWave_C* DamageTypeRef);
	void Despawn();
	void StrikeAttackDamageToTargetWithSocketname(const struct FName& SlotNameOfSlotWhichHits);
	void Multicast_PlayInteractionAnimation(class UAnimSequenceBase* Animation, const struct FName& Slot);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Server_ApplyDamageManually(const struct FVector& ShotFromDirection, class AActor* DamageCauser, class AController* Investigator, float Damage, const struct FName& HitBone, class UBP_DamageType_BaseREWave_C* DamageTypeOfManuallyDamage);
	void ApplyDamageManually(const struct FVector& ShotFromDirection, class AActor* DamageCauser, class AController* Investigator, float Damage);
	void DropOnDeathCalledOnAllClients_OnlyCallOnServer();
	void Multicast_AiSuccessfulHitPlayer(class ABP_PlayerCharacter_BPBase_C* PlayerPawn);
	void Multicast_HitPlayerVisualAndSound(class AActor* HitActor, const struct FName& HitBone);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void DissolveSelf();
	void ForceFullDissolve();
	void HitByDissolveWeaponHit();
	void PlayFootStepLocal();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetShortlyDidPlayerSeeAnimFalse();
	void StarTimerForShortlyDidFirstSeePlayerAnim();
	void Multicast_StartAIFirstSeePlayerAnim();
	void StartAIFirstSeePlayerAnim();
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void MyOnDestroyed_Event(class AActor* DestroyedActor);
	void ReceiveDestroyed();
	void MyUnpossesd_Event_Event();
	void InformGameModeEnemyGetsKilledOnlyServerCalled(class AController* ControllerWhoKills);
	void DebugOutput();
	void AiOnDeath_Event();
	void ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_);
	void SetToCanNotMove(bool SetToCanNotMove_);
	void SetToCanNotAttack(bool SetToCanNotAttack_);
	void PrintStringToLog(const struct FString& String);
	void SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn);
	void RunMoveToTargetPointDebug();
	void DoAJump();
	void LerpToTempAimPitchToActiveAimPitch();
	void Multicast_Pitch(float AimingPitchClamped);
	void CalculateAimingPicthAndDoMulticast();
	void HealSomeHealth(float AmountHealth);
	void Server_HealthSomeHealth(float healthValue);
	void SetModifiedSpeed(float CurrentSpeedModifier);
	void BindWeaponSlowDownStatusEffect();
	void SlowDownEffectEnded_Event2(bool EndAbruptBecauseNewSpeedEffectAndEndWithoutFadeOut);
	void SpeedModifyEffectStarted_Event_1(float SpeedMultiplierOfStartedEffect, TEnumAsByte<SpeedStatusEffectVisualTypes_ESpeedStatusEffectVisualTypes> EffectType);
	void TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings);
	void ExecuteUbergraph_AI_Character_Base_Enemy_Pawn(int EntryPoint);
	void GotDamagedByHiddenTargetSpecialEventFinished__DelegateSignature(bool FinishedFine_);
	void SensedTargetLocButTDoNotSeePlayerEventFinished__DelegateSignature(bool FinishedFine_);
	void SeeTargetSpecialEventFinished__DelegateSignature(bool FinishedFine_);
	void AiOnDeath__DelegateSignature();
	void MyUnpossesd_Event__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
