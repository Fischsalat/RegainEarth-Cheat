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

// BlueprintGeneratedClass BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C
// 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
class UBP_SimpleReplicatedRagdollSystem_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FDateTime                                   RecoveryStartTime;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               RagdollEnabled;                                            // 0x00C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XZQ1[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  OwnerCharacter;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RagdollFaceUp;                                             // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RagdollOnGround;                                           // 0x00D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MHRM[0x2];                                     // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RagdollWorldRotationYaw;                                   // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRagdollRotation;                                     // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PelvisLocation;                                            // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxErrorInAir;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxErrorOnGround;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AutomaticRecoveryDelayWhenStill;                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RecoverAutomatically;                                      // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VB5V[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PelvisBoneName;                                            // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HeadBoneName;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ServerRateInHzSentUpdateFrequencyOverNet;                  // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldDrawErrorAmount;                                     // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PH5R[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                RecoveryAnimation_FaceDown;                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                RecoveryAnimation_FaceUp;                                  // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound_PlayerDown;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Sound_PlayerRecovered;                                     // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              BKP_MeshCollisionObjectType;                               // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionEnabled>              BKP_MeshCollisionEnable;                                   // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X1GG[0x2];                                     // 0x013A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BKP_CapsuleCollisionChannel;                               // 0x013C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RelativeMeshRotationBase;                                  // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    RelativeRotationBeforeStartReviveAnimation;                // 0x0154(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                                TimerDriveInterpolationRevive;                             // 0x0160(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C");
		return ptr;
	}



	void GetGetUpAnimation(bool FacingUp_, class UAnimMontage** AnimMontage);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PlayAudioMulticast(class USoundBase* Audio);
	void LocalUpdateRagdollOnServer();
	void UpdateRagdollLocalOnServer();
	void LimitRagdollSpeed();
	void UpdateRagdollServer();
	void DriveInterpolationRevive();
	void Server_StopRecovery();
	void Server_RecoverEvent();
	void Multicast_StopRecovery();
	void ToggleInput(bool On);
	void RagdollEndMulticast(const struct FRotator& ActorRotation, const struct FVector& ValidCapsuleLocationWithSpaceForRevive);
	void Impulse(bool RunOnServerOnly, const struct FVector& Impulse, const struct FName& Bone);
	void ImpulseMulticast(const struct FVector& Vector, const struct FName& Bone);
	void TraceForOtherCharacters(const struct FVector& TraceStart, const struct FVector& TraceEnd, float ImpulseStrength);
	void StartSimulatingPhysicsServer(const struct FVector& Velocity, bool AddNewImpulse);
	void StartSimulatingPhysicsMulticast(const struct FVector& Velocity, bool AddNewImpulse);
	void EnableRagdoll(const struct FVector& Impulse, bool AddNewImpulse);
	void PauseVelocityInterpolation(float Duration);
	void PauseLocationInterpolation(float Duration);
	void TryToInterpolateMeshLocation();
	void ToggleMeshAdjustment(bool On);
	void SetLocationVelocityAndRotationEventMulticast(const struct FVector& Location, const struct FVector& MeshVelocity, const struct FRotator& Rotation);
	void ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
