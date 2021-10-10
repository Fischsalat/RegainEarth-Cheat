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

// Class AdvancedThirdPersonCamera.ATPCArrowDebugActor
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class AATPCArrowDebugActor : public AActor
{
public:
	class USceneComponent*                             SceneRootcomponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                             ArrowComponent;                                            // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIV0[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCArrowDebugActor");
		return ptr;
	}



	void PickActor(class AActor* Actor);
};

// Class AdvancedThirdPersonCamera.ATPCCameraBaseObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UATPCCameraBaseObject : public UObject
{
public:
	class UATPCCameraComponent*                        OwningCamera;                                              // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraBaseObject");
		return ptr;
	}



	void Validate(bool bWithInterpolation);
	void K2_Validate(bool bWithInterpolation);
	void K2_Tick(float DeltaSeconds);
	void K2_OnExitCameraMode();
	void K2_OnEnterCameraMode(bool bWithInterpolation);
	class APlayerController* GetPlayerController();
	class APlayerCameraManager* GetPlayerCameraManager();
	class APawn* GetOwningPawn();
	class UATPCCameraComponent* GetOwningCamera();
	class AActor* GetOwningActor();
};

// Class AdvancedThirdPersonCamera.ATPCCameraComponent
// 0x0408 (FullSize[0x0600] - InheritedSize[0x01F8])
class UATPCCameraComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnCameraModeChangedDelegate;                               // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FATPCCameraDebugRules                       DebugRules;                                                // 0x0208(0x0007) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1JH[0x1];                                     // 0x020F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                DefaultCameraModeTag;                                      // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UATPCCameraModeDataAsset*>            CameraModesAssets;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UATPCCameraModeDataAsset*> SortedCameraModes;                                         // 0x0228(0x0050) (Protected, NativeAccessSpecifierProtected)
	class UATPCCameraModeDataAsset*                    CustomCameraMode;                                          // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HWWJ[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LocationObjectClass;                                       // 0x0288(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FOVObjectClass;                                            // 0x0290(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FadingObjectClass;                                         // 0x0298(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FollowTerrainObjectClass;                                  // 0x02A0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CameraShakesObjectClass;                                   // 0x02A8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LockOnTargetObjectClass;                                   // 0x02B0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLocationObject*                   LocationObject;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFOVObject*                        FOVObject;                                                 // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFadingObject*                     FadingObject;                                              // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFollowTerrainObject*              FollowTerrainObject;                                       // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraShakesObject*                     CameraShakesObject;                                        // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLockOnTargetObject*               LockOnTargetObject;                                        // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UATPCCameraBaseObject*>               CameraObjList;                                             // 0x02E8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NB6Q[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UATPCCameraModeDataAsset*                    EmptyCameraMode;                                           // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FATPCCameraMode                             CameraModeDEV;                                             // 0x0308(0x02F8) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraComponent");
		return ptr;
	}



	void ZoomOut();
	void ZoomIn();
	void ValidateComponents(bool bWithInterpolation);
	void SetCustomCameraMode(class UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation);
	void SetCameraMode(const struct FGameplayTag& CameraModeTag, bool bWithInterpolation, bool bForceSet);
	void SetCameraDistance(float NewDistance, bool bInterpolate);
	void ResetCustomCameraMode(bool bWithInterpolation);
	void RemoveCameraMode(const struct FGameplayTag& CameraModeName);
	void OnCameraModeChangedDelegate__DelegateSignature();
	bool IsSetCustomCameraMode();
	bool IsCineCameraActive();
	bool HasCameraMode(const struct FGameplayTag& CameraModeName);
	class APlayerController* GetPlayerController();
	class APlayerCameraManager* GetPlayerCameraManager();
	class APawn* GetOwningPawn();
	struct FGameplayTag GetInitialCameraModeTag();
	struct FGameplayTag GetDesiredCameraModeTag();
	struct FGameplayTag GetCurrentCameraModeTag();
	class UATPCCameraModeDataAsset* GetCurrentCameraMode();
	class UATPCCameraShakesObject* GetCameraShakesObject();
	struct FRotator GetCameraRotation();
	struct FGameplayTag GetCameraModeTagFromOverlapCameraVolume();
	class UATPCCameraModeDataAsset* GetCameraMode(const struct FGameplayTag& CameraModeName);
	class UATPCCameraLockOnTargetObject* GetCameraLockOnTargetObject();
	class UATPCCameraLocationObject* GetCameraLocationObject();
	struct FVector GetCameraLocation();
	class UATPCCameraFOVObject* GetCameraFOVObject();
	class UATPCCameraFollowTerrainObject* GetCameraFollowTerrainObject();
	class UATPCCameraFadingObject* GetCameraFadingObject();
	float GetCameraDistance();
	class AATPCCameraVolume* FindOverlapCameraVolume();
	void ClearAllCameraModes();
	bool CanSetCameraMode(const struct FGameplayTag& CameraModeTag);
	void AddCameraMode(class UATPCCameraModeDataAsset* CameraMode);
};

// Class AdvancedThirdPersonCamera.ATPCCameraFadingObject
// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
class UATPCCameraFadingObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_BMWR[0xB0];                                    // 0x0030(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraFadingObject");
		return ptr;
	}



	void RemoveManualFadeActor(class AActor* Actor);
	void RemoveIgnoredActor(class AActor* Actor);
	void ClearManualFadeActors();
	void ClearIgnoredActors();
	void AddManualFadeActor(class AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime);
	void AddIgnoredActor(class AActor* Actor);
};

// Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UATPCCameraFollowTerrainObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_ZJ5T[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraFOVObject
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATPCCameraFOVObject : public UATPCCameraBaseObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraFOVObject");
		return ptr;
	}



	float GetCurrentFOV();
};

// Class AdvancedThirdPersonCamera.ATPCCameraLocationObject
// 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
class UATPCCameraLocationObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_25V1[0x230];                                   // 0x0030(0x0230) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraLocationObject");
		return ptr;
	}



	void SetViewRotation(const struct FRotator& Rotation);
	void SetOverrideCameraRotation(const struct FRotator& NewOverrideRotation, bool bClampByCameraModeRotationLimits);
	void SetCameraDistance(float NewDist, bool bInterpolate);
	void ResetOverrideCameraRotation();
	bool IsOverrideCameraRotation();
	struct FRotator GetViewRotation();
	struct FRotator GetTargetRotation();
	struct FVector GetTargetOffset();
	struct FVector GetSocketOffset();
	float GetRealCameraDistance();
	struct FRotator GetOverrideCameraRotation();
	struct FRotator GetDesiredRotation();
	float GetCameraTargetDistance();
	struct FRotator GetCameraRotation();
	struct FVector GetCameraLocation();
	float GetCameraDistance();
	struct FVector GetAllSocketOffsets();
	void AttachCameraToComponent(class USceneComponent* ParentComponent, const struct FVector& RelativeLocation, const struct FName& SocketName, bool bWithInterp, float InterpSpeed);
};

// Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UATPCCameraLockOnTargetObject : public UATPCCameraBaseObject
{
public:
	struct FScriptMulticastDelegate                    OnTargetChangeDelegate;                                    // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LWEY[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AATPCArrowDebugActor*                        TargetDebugActor;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_005W[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject");
		return ptr;
	}



	bool SetTargetActor(class AActor* NewTargetActor);
	void OnTargetChangeDelegate__DelegateSignature(class AActor* NewTarget, AdvancedThirdPersonCamera_EATPCChangeTargetReason ChangeTargetReason);
	class AActor* GetTargetActor();
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset
// 0x0310 (FullSize[0x0340] - InheritedSize[0x0030])
class UATPCCameraModeDataAsset : public UDataAsset
{
public:
	struct FGameplayTag                                CameraModeTag;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCCameraMode                             CameraModeSettings;                                        // 0x0038(0x02F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UATPCCameraModeScript*>               CameraModeScripts;                                         // 0x0330(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UATPCCameraModeScript : public UObject
{
public:
	class UATPCCameraComponent*                        OwningCamera;                                              // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableTick;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F68W[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup TickGroup;                                                 // 0x0034(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZU9P[0x3];                                     // 0x0031(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_QVK9[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript");
		return ptr;
	}



	void K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds);
	void K2_OnExitCameraMode(class UATPCCameraComponent* Camera);
	void K2_OnEnterCameraMode(class UATPCCameraComponent* Camera);
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UATPCCameraModeScript_ChangeMovementSpeed : public UATPCCameraModeScript
{
public:
	float                                              NewMaxMovementSpeed;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreOldMovementSpeedOnExitCameraMode;                  // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFR1[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OldMaxMovementSpeed;                                       // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5YR[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UATPCCameraModeScript_PawnUseControllerRotation : public UATPCCameraModeScript
{
public:
	bool                                               OrientRotationToMovement;                                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseControllerDesiredRotation;                              // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreOldValuesOnExitCameraMode;                         // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OldOrientRotationToMovement;                               // 0x0043(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OldUseControllerDesiredRotation;                           // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Q6G[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UATPCCameraModeScript_RotateActorToTarget : public UATPCCameraModeScript
{
public:
	float                                              RotationSpeed;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RD1[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraShakesObject
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UATPCCameraShakesObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_8J1K[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraShakesObject");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraVolume
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class AATPCCameraVolume : public AVolume
{
public:
	struct FGameplayTag                                CameraModeTag;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeCameraModeWithInterp;                               // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckFilterActorClassWithCamera;                          // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1AB3[0x6];                                     // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              FilterActorClassesWithCamera;                              // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraVolume");
		return ptr;
	}



	void OnVolumeEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// Class AdvancedThirdPersonCamera.ATPCFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UATPCFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCFunctionLibrary");
		return ptr;
	}



	bool STATIC_ReplaceSpringArmToATPCComponent(class AActor* Actor);
	struct FVector STATIC_InterpVector(const struct FVector& Current, const struct FVector& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget);
	struct FRotator STATIC_InterpRotator(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget);
	void STATIC_InterpolationSpeed_ResetSpeed(struct FATPCInterploationSpeed* InterpSpeed);
	void STATIC_InterpolationSpeed_InterpolateSpeed(struct FATPCInterploationSpeed* InterpSpeed, float DeltaTime);
	float STATIC_InterpolationSpeed_GetCurrentInterpolationSpeed(const struct FATPCInterploationSpeed& InterpSpeed);
	float STATIC_InterpFloat(float Current, float Target, float DeltaTime, struct FATPCInterploationSpeed* InterpSpeed, bool bResetSpeedIfResultEqualToTarget);
};

// Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UATPCLockOnTargetLocationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_FBMP[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent");
		return ptr;
	}



	struct FVector GetTargetLocation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
