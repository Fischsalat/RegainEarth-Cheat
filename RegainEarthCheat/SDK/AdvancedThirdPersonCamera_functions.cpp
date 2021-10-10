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

// Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATPCArrowDebugActor::PickActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor");

	AATPCArrowDebugActor_PickActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::Validate(bool bWithInterpolation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate");

	UATPCCameraBaseObject_Validate_Params params;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::K2_Validate(bool bWithInterpolation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate");

	UATPCCameraBaseObject_K2_Validate_Params params;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::K2_Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick");

	UATPCCameraBaseObject_K2_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode
// (Event, Public, BlueprintEvent)
void UATPCCameraBaseObject::K2_OnExitCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode");

	UATPCCameraBaseObject_K2_OnExitCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::K2_OnEnterCameraMode(bool bWithInterpolation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode");

	UATPCCameraBaseObject_K2_OnEnterCameraMode_Params params;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UATPCCameraBaseObject::GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController");

	UATPCCameraBaseObject_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerCameraManager* UATPCCameraBaseObject::GetPlayerCameraManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager");

	UATPCCameraBaseObject_GetPlayerCameraManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UATPCCameraBaseObject::GetOwningPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn");

	UATPCCameraBaseObject_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraComponent* UATPCCameraBaseObject::GetOwningCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera");

	UATPCCameraBaseObject_GetOwningCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UATPCCameraBaseObject::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor");

	UATPCCameraBaseObject_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut
// (Final, Native, Public, BlueprintCallable)
void UATPCCameraComponent::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut");

	UATPCCameraComponent_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn
// (Final, Native, Public, BlueprintCallable)
void UATPCCameraComponent::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn");

	UATPCCameraComponent_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::ValidateComponents(bool bWithInterpolation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents");

	UATPCCameraComponent_ValidateComponents_Params params;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode
// (Native, Public, BlueprintCallable)
// Parameters:
// class UATPCCameraModeDataAsset* CameraMode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::SetCustomCameraMode(class UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode");

	UATPCCameraComponent_SetCustomCameraMode_Params params;
	params.CameraMode = CameraMode;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            CameraModeTag                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceSet                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::SetCameraMode(const struct FGameplayTag& CameraModeTag, bool bWithInterpolation, bool bForceSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode");

	UATPCCameraComponent_SetCameraMode_Params params;
	params.CameraModeTag = CameraModeTag;
	params.bWithInterpolation = bWithInterpolation;
	params.bForceSet = bForceSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDistance                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterpolate                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::SetCameraDistance(float NewDistance, bool bInterpolate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance");

	UATPCCameraComponent_SetCameraDistance_Params params;
	params.NewDistance = NewDistance;
	params.bInterpolate = bInterpolate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithInterpolation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::ResetCustomCameraMode(bool bWithInterpolation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode");

	UATPCCameraComponent_ResetCustomCameraMode_Params params;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            CameraModeName                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::RemoveCameraMode(const struct FGameplayTag& CameraModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode");

	UATPCCameraComponent_RemoveCameraMode_Params params;
	params.CameraModeName = CameraModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UATPCCameraComponent::OnCameraModeChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature");

	UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::IsSetCustomCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode");

	UATPCCameraComponent_IsSetCustomCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsCineCameraActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::IsCineCameraActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsCineCameraActive");

	UATPCCameraComponent_IsCineCameraActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            CameraModeName                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::HasCameraMode(const struct FGameplayTag& CameraModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode");

	UATPCCameraComponent_HasCameraMode_Params params;
	params.CameraModeName = CameraModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UATPCCameraComponent::GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerController");

	UATPCCameraComponent_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerCameraManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerCameraManager* UATPCCameraComponent::GetPlayerCameraManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetPlayerCameraManager");

	UATPCCameraComponent_GetPlayerCameraManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetOwningPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UATPCCameraComponent::GetOwningPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetOwningPawn");

	UATPCCameraComponent_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetInitialCameraModeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag");

	UATPCCameraComponent_GetInitialCameraModeTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetDesiredCameraModeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag");

	UATPCCameraComponent_GetDesiredCameraModeTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetCurrentCameraModeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag");

	UATPCCameraComponent_GetCurrentCameraModeTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UATPCCameraModeDataAsset* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraModeDataAsset* UATPCCameraComponent::GetCurrentCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode");

	UATPCCameraComponent_GetCurrentCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraShakesObject* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraShakesObject* UATPCCameraComponent::GetCameraShakesObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject");

	UATPCCameraComponent_GetCameraShakesObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraComponent::GetCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation");

	UATPCCameraComponent_GetCameraRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetCameraModeTagFromOverlapCameraVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume");

	UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag            CameraModeName                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UATPCCameraModeDataAsset* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraModeDataAsset* UATPCCameraComponent::GetCameraMode(const struct FGameplayTag& CameraModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode");

	UATPCCameraComponent_GetCameraMode_Params params;
	params.CameraModeName = CameraModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraLockOnTargetObject* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraLockOnTargetObject* UATPCCameraComponent::GetCameraLockOnTargetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject");

	UATPCCameraComponent_GetCameraLockOnTargetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraLocationObject* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraLocationObject* UATPCCameraComponent::GetCameraLocationObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject");

	UATPCCameraComponent_GetCameraLocationObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraComponent::GetCameraLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation");

	UATPCCameraComponent_GetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraFOVObject*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraFOVObject* UATPCCameraComponent::GetCameraFOVObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject");

	UATPCCameraComponent_GetCameraFOVObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraFollowTerrainObject* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraFollowTerrainObject* UATPCCameraComponent::GetCameraFollowTerrainObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject");

	UATPCCameraComponent_GetCameraFollowTerrainObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UATPCCameraFadingObject* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraFadingObject* UATPCCameraComponent::GetCameraFadingObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject");

	UATPCCameraComponent_GetCameraFadingObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraComponent::GetCameraDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance");

	UATPCCameraComponent_GetCameraDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AATPCCameraVolume*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AATPCCameraVolume* UATPCCameraComponent::FindOverlapCameraVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume");

	UATPCCameraComponent_FindOverlapCameraVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes
// (Final, Native, Public, BlueprintCallable)
void UATPCCameraComponent::ClearAllCameraModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes");

	UATPCCameraComponent_ClearAllCameraModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            CameraModeTag                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::CanSetCameraMode(const struct FGameplayTag& CameraModeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode");

	UATPCCameraComponent_CanSetCameraMode_Params params;
	params.CameraModeTag = CameraModeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UATPCCameraModeDataAsset* CameraMode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::AddCameraMode(class UATPCCameraModeDataAsset* CameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode");

	UATPCCameraComponent_AddCameraMode_Params params;
	params.CameraMode = CameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::RemoveManualFadeActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor");

	UATPCCameraFadingObject_RemoveManualFadeActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::RemoveIgnoredActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor");

	UATPCCameraFadingObject_RemoveIgnoredActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors
// (Final, Native, Public, BlueprintCallable)
void UATPCCameraFadingObject::ClearManualFadeActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors");

	UATPCCameraFadingObject_ClearManualFadeActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors
// (Final, Native, Public, BlueprintCallable)
void UATPCCameraFadingObject::ClearIgnoredActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors");

	UATPCCameraFadingObject_ClearIgnoredActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWithCustomTime                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CustomFadeOutTime              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::AddManualFadeActor(class AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor");

	UATPCCameraFadingObject_AddManualFadeActor_Params params;
	params.Actor = Actor;
	params.bWithCustomTime = bWithCustomTime;
	params.CustomFadeOutTime = CustomFadeOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::AddIgnoredActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor");

	UATPCCameraFadingObject_AddIgnoredActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraFOVObject::GetCurrentFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV");

	UATPCCameraFOVObject_GetCurrentFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetViewRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation");

	UATPCCameraLocationObject_SetViewRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewOverrideRotation            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bClampByCameraModeRotationLimits (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetOverrideCameraRotation(const struct FRotator& NewOverrideRotation, bool bClampByCameraModeRotationLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation");

	UATPCCameraLocationObject_SetOverrideCameraRotation_Params params;
	params.NewOverrideRotation = NewOverrideRotation;
	params.bClampByCameraModeRotationLimits = bClampByCameraModeRotationLimits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDist                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterpolate                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetCameraDistance(float NewDist, bool bInterpolate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance");

	UATPCCameraLocationObject_SetCameraDistance_Params params;
	params.NewDist = NewDist;
	params.bInterpolate = bInterpolate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation
// (Final, Native, Public, BlueprintCallable)
void UATPCCameraLocationObject::ResetOverrideCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation");

	UATPCCameraLocationObject_ResetOverrideCameraRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::IsOverrideCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation");

	UATPCCameraLocationObject_IsOverrideCameraRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation");

	UATPCCameraLocationObject_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetRotation");

	UATPCCameraLocationObject_GetTargetRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetTargetOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset");

	UATPCCameraLocationObject_GetTargetOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetSocketOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset");

	UATPCCameraLocationObject_GetSocketOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetRealCameraDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance");

	UATPCCameraLocationObject_GetRealCameraDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetOverrideCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation");

	UATPCCameraLocationObject_GetOverrideCameraRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetDesiredRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetDesiredRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetDesiredRotation");

	UATPCCameraLocationObject_GetDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetCameraTargetDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance");

	UATPCCameraLocationObject_GetCameraTargetDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation");

	UATPCCameraLocationObject_GetCameraRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetCameraLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation");

	UATPCCameraLocationObject_GetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetCameraDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance");

	UATPCCameraLocationObject_GetCameraDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetAllSocketOffsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets");

	UATPCCameraLocationObject_GetAllSocketOffsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         ParentComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RelativeLocation               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWithInterp                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::AttachCameraToComponent(class USceneComponent* ParentComponent, const struct FVector& RelativeLocation, const struct FName& SocketName, bool bWithInterp, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent");

	UATPCCameraLocationObject_AttachCameraToComponent_Params params;
	params.ParentComponent = ParentComponent;
	params.RelativeLocation = RelativeLocation;
	params.SocketName = SocketName;
	params.bWithInterp = bWithInterp;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewTargetActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLockOnTargetObject::SetTargetActor(class AActor* NewTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor");

	UATPCCameraLockOnTargetObject_SetTargetActor_Params params;
	params.NewTargetActor = NewTargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AdvancedThirdPersonCamera_EATPCChangeTargetReason ChangeTargetReason             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLockOnTargetObject::OnTargetChangeDelegate__DelegateSignature(class AActor* NewTarget, AdvancedThirdPersonCamera_EATPCChangeTargetReason ChangeTargetReason)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature");

	UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Params params;
	params.NewTarget = NewTarget;
	params.ChangeTargetReason = ChangeTargetReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UATPCCameraLockOnTargetObject::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor");

	UATPCCameraLockOnTargetObject_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UATPCCameraComponent*    Camera                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraModeScript::K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick");

	UATPCCameraModeScript_K2_Tick_Params params;
	params.Camera = Camera;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UATPCCameraComponent*    Camera                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraModeScript::K2_OnExitCameraMode(class UATPCCameraComponent* Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode");

	UATPCCameraModeScript_K2_OnExitCameraMode_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UATPCCameraComponent*    Camera                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraModeScript::K2_OnEnterCameraMode(class UATPCCameraComponent* Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode");

	UATPCCameraModeScript_K2_OnEnterCameraMode_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATPCCameraVolume::OnVolumeEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap");

	AATPCCameraVolume_OnVolumeEndOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATPCCameraVolume::OnVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap");

	AATPCCameraVolume_OnVolumeBeginOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.ReplaceSpringArmToATPCComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCFunctionLibrary::STATIC_ReplaceSpringArmToATPCComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.ReplaceSpringArmToATPCComponent");

	UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Current                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FATPCInterploationSpeed InterpSpeed                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bResetSpeedIfResultEqualToTarget (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCFunctionLibrary::STATIC_InterpVector(const struct FVector& Current, const struct FVector& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpVector");

	UATPCFunctionLibrary_InterpVector_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.bResetSpeedIfResultEqualToTarget = bResetSpeedIfResultEqualToTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Current                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FATPCInterploationSpeed InterpSpeed                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bResetSpeedIfResultEqualToTarget (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCFunctionLibrary::STATIC_InterpRotator(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpRotator");

	UATPCFunctionLibrary_InterpRotator_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.bResetSpeedIfResultEqualToTarget = bResetSpeedIfResultEqualToTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_ResetSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FATPCInterploationSpeed InterpSpeed                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UATPCFunctionLibrary::STATIC_InterpolationSpeed_ResetSpeed(struct FATPCInterploationSpeed* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_ResetSpeed");

	UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;

}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_InterpolateSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FATPCInterploationSpeed InterpSpeed                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCFunctionLibrary::STATIC_InterpolationSpeed_InterpolateSpeed(struct FATPCInterploationSpeed* InterpSpeed, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_InterpolateSpeed");

	UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;

}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_GetCurrentInterpolationSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FATPCInterploationSpeed InterpSpeed                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCFunctionLibrary::STATIC_InterpolationSpeed_GetCurrentInterpolationSpeed(const struct FATPCInterploationSpeed& InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpolationSpeed_GetCurrentInterpolationSpeed");

	UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Params params;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Current                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FATPCInterploationSpeed InterpSpeed                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bResetSpeedIfResultEqualToTarget (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCFunctionLibrary::STATIC_InterpFloat(float Current, float Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCFunctionLibrary.InterpFloat");

	UATPCFunctionLibrary_InterpFloat_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.bResetSpeedIfResultEqualToTarget = bResetSpeedIfResultEqualToTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;


	return params.ReturnValue;
}


// Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCLockOnTargetLocationComponent::GetTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation");

	UATPCLockOnTargetLocationComponent_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
