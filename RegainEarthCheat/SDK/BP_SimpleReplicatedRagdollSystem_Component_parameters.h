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

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.GetGetUpAnimation
struct UBP_SimpleReplicatedRagdollSystem_Component_C_GetGetUpAnimation_Params
{
	bool                                               FacingUp_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                AnimMontage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ReceiveBeginPlay
struct UBP_SimpleReplicatedRagdollSystem_Component_C_ReceiveBeginPlay_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ReceiveTick
struct UBP_SimpleReplicatedRagdollSystem_Component_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PlayAudioMulticast
struct UBP_SimpleReplicatedRagdollSystem_Component_C_PlayAudioMulticast_Params
{
	class USoundBase*                                  Audio;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.LocalUpdateRagdollOnServer
struct UBP_SimpleReplicatedRagdollSystem_Component_C_LocalUpdateRagdollOnServer_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.UpdateRagdollLocalOnServer
struct UBP_SimpleReplicatedRagdollSystem_Component_C_UpdateRagdollLocalOnServer_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.LimitRagdollSpeed
struct UBP_SimpleReplicatedRagdollSystem_Component_C_LimitRagdollSpeed_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.UpdateRagdollServer
struct UBP_SimpleReplicatedRagdollSystem_Component_C_UpdateRagdollServer_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.DriveInterpolationRevive
struct UBP_SimpleReplicatedRagdollSystem_Component_C_DriveInterpolationRevive_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Server_StopRecovery
struct UBP_SimpleReplicatedRagdollSystem_Component_C_Server_StopRecovery_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Server_RecoverEvent
struct UBP_SimpleReplicatedRagdollSystem_Component_C_Server_RecoverEvent_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Multicast_StopRecovery
struct UBP_SimpleReplicatedRagdollSystem_Component_C_Multicast_StopRecovery_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ToggleInput
struct UBP_SimpleReplicatedRagdollSystem_Component_C_ToggleInput_Params
{
	bool                                               On;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.RagdollEndMulticast
struct UBP_SimpleReplicatedRagdollSystem_Component_C_RagdollEndMulticast_Params
{
	struct FRotator                                    ActorRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ValidCapsuleLocationWithSpaceForRevive;                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.Impulse
struct UBP_SimpleReplicatedRagdollSystem_Component_C_Impulse_Params
{
	bool                                               RunOnServerOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Impulse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ImpulseMulticast
struct UBP_SimpleReplicatedRagdollSystem_Component_C_ImpulseMulticast_Params
{
	struct FVector                                     Vector;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.TraceForOtherCharacters
struct UBP_SimpleReplicatedRagdollSystem_Component_C_TraceForOtherCharacters_Params
{
	struct FVector                                     TraceStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TraceEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseStrength;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.StartSimulatingPhysicsServer
struct UBP_SimpleReplicatedRagdollSystem_Component_C_StartSimulatingPhysicsServer_Params
{
	struct FVector                                     Velocity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AddNewImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.StartSimulatingPhysicsMulticast
struct UBP_SimpleReplicatedRagdollSystem_Component_C_StartSimulatingPhysicsMulticast_Params
{
	struct FVector                                     Velocity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AddNewImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.EnableRagdoll
struct UBP_SimpleReplicatedRagdollSystem_Component_C_EnableRagdoll_Params
{
	struct FVector                                     Impulse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AddNewImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PauseVelocityInterpolation
struct UBP_SimpleReplicatedRagdollSystem_Component_C_PauseVelocityInterpolation_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.PauseLocationInterpolation
struct UBP_SimpleReplicatedRagdollSystem_Component_C_PauseLocationInterpolation_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.TryToInterpolateMeshLocation
struct UBP_SimpleReplicatedRagdollSystem_Component_C_TryToInterpolateMeshLocation_Params
{
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ToggleMeshAdjustment
struct UBP_SimpleReplicatedRagdollSystem_Component_C_ToggleMeshAdjustment_Params
{
	bool                                               On;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.SetLocationVelocityAndRotationEventMulticast
struct UBP_SimpleReplicatedRagdollSystem_Component_C_SetLocationVelocityAndRotationEventMulticast_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MeshVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SimpleReplicatedRagdollSystem_Component.BP_SimpleReplicatedRagdollSystem_Component_C.ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component
struct UBP_SimpleReplicatedRagdollSystem_Component_C_ExecuteUbergraph_BP_SimpleReplicatedRagdollSystem_Component_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
