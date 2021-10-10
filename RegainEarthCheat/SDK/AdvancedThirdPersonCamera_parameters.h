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

// Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor
struct AATPCArrowDebugActor_PickActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate
struct UATPCCameraBaseObject_Validate_Params
{
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate
struct UATPCCameraBaseObject_K2_Validate_Params
{
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick
struct UATPCCameraBaseObject_K2_Tick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode
struct UATPCCameraBaseObject_K2_OnExitCameraMode_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode
struct UATPCCameraBaseObject_K2_OnEnterCameraMode_Params
{
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController
struct UATPCCameraBaseObject_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager
struct UATPCCameraBaseObject_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn
struct UATPCCameraBaseObject_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera
struct UATPCCameraBaseObject_GetOwningCamera_Params
{
	class UATPCCameraComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor
struct UATPCCameraBaseObject_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut
struct UATPCCameraComponent_ZoomOut_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn
struct UATPCCameraComponent_ZoomIn_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents
struct UATPCCameraComponent_ValidateComponents_Params
{
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode
struct UATPCCameraComponent_SetCustomCameraMode_Params
{
	class UATPCCameraModeDataAsset*                    CameraMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode
struct UATPCCameraComponent_SetCameraMode_Params
{
	struct FGameplayTag                                CameraModeTag;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance
struct UATPCCameraComponent_SetCameraDistance_Params
{
	float                                              NewDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterpolate;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode
struct UATPCCameraComponent_ResetCustomCameraMode_Params
{
	bool                                               bWithInterpolation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode
struct UATPCCameraComponent_RemoveCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature
struct UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode
struct UATPCCameraComponent_IsSetCustomCameraMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsCineCameraActive
struct UATPCCameraComponent_IsCineCameraActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode
struct UATPCCameraComponent_HasCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerController
struct UATPCCameraComponent_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerCameraManager
struct UATPCCameraComponent_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetOwningPawn
struct UATPCCameraComponent_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag
struct UATPCCameraComponent_GetInitialCameraModeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag
struct UATPCCameraComponent_GetDesiredCameraModeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag
struct UATPCCameraComponent_GetCurrentCameraModeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode
struct UATPCCameraComponent_GetCurrentCameraMode_Params
{
	class UATPCCameraModeDataAsset*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject
struct UATPCCameraComponent_GetCameraShakesObject_Params
{
	class UATPCCameraShakesObject*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation
struct UATPCCameraComponent_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume
struct UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Params
{
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode
struct UATPCCameraComponent_GetCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UATPCCameraModeDataAsset*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject
struct UATPCCameraComponent_GetCameraLockOnTargetObject_Params
{
	class UATPCCameraLockOnTargetObject*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject
struct UATPCCameraComponent_GetCameraLocationObject_Params
{
	class UATPCCameraLocationObject*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation
struct UATPCCameraComponent_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject
struct UATPCCameraComponent_GetCameraFOVObject_Params
{
	class UATPCCameraFOVObject*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject
struct UATPCCameraComponent_GetCameraFollowTerrainObject_Params
{
	class UATPCCameraFollowTerrainObject*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject
struct UATPCCameraComponent_GetCameraFadingObject_Params
{
	class UATPCCameraFadingObject*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance
struct UATPCCameraComponent_GetCameraDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume
struct UATPCCameraComponent_FindOverlapCameraVolume_Params
{
	class AATPCCameraVolume*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes
struct UATPCCameraComponent_ClearAllCameraModes_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode
struct UATPCCameraComponent_CanSetCameraMode_Params
{
	struct FGameplayTag                                CameraModeTag;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode
struct UATPCCameraComponent_AddCameraMode_Params
{
	class UATPCCameraModeDataAsset*                    CameraMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor
struct UATPCCameraFadingObject_RemoveManualFadeActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor
struct UATPCCameraFadingObject_RemoveIgnoredActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors
struct UATPCCameraFadingObject_ClearManualFadeActors_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors
struct UATPCCameraFadingObject_ClearIgnoredActors_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor
struct UATPCCameraFadingObject_AddManualFadeActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithCustomTime;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomFadeOutTime;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor
struct UATPCCameraFadingObject_AddIgnoredActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV
struct UATPCCameraFOVObject_GetCurrentFOV_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation
struct UATPCCameraLocationObject_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation
struct UATPCCameraLocationObject_SetOverrideCameraRotation_Params
{
	struct FRotator                                    NewOverrideRotation;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bClampByCameraModeRotationLimits;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance
struct UATPCCameraLocationObject_SetCameraDistance_Params
{
	float                                              NewDist;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterpolate;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation
struct UATPCCameraLocationObject_ResetOverrideCameraRotation_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation
struct UATPCCameraLocationObject_IsOverrideCameraRotation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation
struct UATPCCameraLocationObject_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetRotation
struct UATPCCameraLocationObject_GetTargetRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset
struct UATPCCameraLocationObject_GetTargetOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset
struct UATPCCameraLocationObject_GetSocketOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance
struct UATPCCameraLocationObject_GetRealCameraDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation
struct UATPCCameraLocationObject_GetOverrideCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetDesiredRotation
struct UATPCCameraLocationObject_GetDesiredRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance
struct UATPCCameraLocationObject_GetCameraTargetDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation
struct UATPCCameraLocationObject_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation
struct UATPCCameraLocationObject_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance
struct UATPCCameraLocationObject_GetCameraDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets
struct UATPCCameraLocationObject_GetAllSocketOffsets_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent
struct UATPCCameraLocationObject_AttachCameraToComponent_Params
{
	class USceneComponent*                             ParentComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterp;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor
struct UATPCCameraLockOnTargetObject_SetTargetActor_Params
{
	class AActor*                                      NewTargetActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature
struct UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Params
{
	class AActor*                                      NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AdvancedThirdPersonCamera_EATPCChangeTargetReason  ChangeTargetReason;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor
struct UATPCCameraLockOnTargetObject_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick
struct UATPCCameraModeScript_K2_Tick_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode
struct UATPCCameraModeScript_K2_OnExitCameraMode_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode
struct UATPCCameraModeScript_K2_OnEnterCameraMode_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap
struct AATPCCameraVolume_OnVolumeEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap
struct AATPCCameraVolume_OnVolumeBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.ReplaceSpringArmToATPCComponent
struct UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpVector
struct UATPCFunctionLibrary_InterpVector_Params
{
	struct FVector                                     Current;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCInterploationSpeed                     InterpSpeed;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bResetSpeedIfResultEqualToTarget;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpRotator
struct UATPCFunctionLibrary_InterpRotator_Params
{
	struct FRotator                                    Current;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCInterploationSpeed                     InterpSpeed;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bResetSpeedIfResultEqualToTarget;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_ResetSpeed
struct UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Params
{
	struct FATPCInterploationSpeed                     InterpSpeed;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_InterpolateSpeed
struct UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Params
{
	struct FATPCInterploationSpeed                     InterpSpeed;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_GetCurrentInterpolationSpeed
struct UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Params
{
	struct FATPCInterploationSpeed                     InterpSpeed;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpFloat
struct UATPCFunctionLibrary_InterpFloat_Params
{
	float                                              Current;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCInterploationSpeed                     InterpSpeed;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bResetSpeedIfResultEqualToTarget;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation
struct UATPCLockOnTargetLocationComponent_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
