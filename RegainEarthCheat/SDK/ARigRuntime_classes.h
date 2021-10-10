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

// Class ARigRuntime.RigConstraint
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class ARigConstraint : public AActor
{
public:
	class UMaterialBillboardComponent*                 BillboardComponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bW2;                                                       // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bW3;                                                       // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bW4;                                                       // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bW5;                                                       // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              W1;                                                        // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              W2;                                                        // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              W3;                                                        // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              W4;                                                        // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              W5;                                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              TargetActors;                                              // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWithRig;                                               // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6USD[0x6];                                     // 0x0252(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.RigConstraint");
		return ptr;
	}



};

// Class ARigRuntime.AimConstraint
// 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
class AAimConstraint : public ARigConstraint
{
public:
	struct FAimSettings                                AimSettings;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     UpVector;                                                  // 0x0268(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class AActor>                       UpActor;                                                   // 0x0274(0x001C) (Edit, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RestPosition;                                              // 0x0290(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XW07[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.AimConstraint");
		return ptr;
	}



};

// Class ARigRuntime.ARControllerBase
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class AARControllerBase : public AActor
{
public:
	class USceneComponent*                             Scene;                                                     // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARControllerBase");
		return ptr;
	}



};

// Class ARigRuntime.ARController
// 0x0060 (FullSize[0x02A8] - InheritedSize[0x0248])
class AARController : public AARControllerBase
{
public:
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                           Limits;                                                    // 0x0250(0x004C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    LockedRotation;                                            // 0x029C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARController");
		return ptr;
	}



	void LimitTransformations();
};

// Class ARigRuntime.AnimOffset
// 0x0068 (FullSize[0x0310] - InheritedSize[0x02A8])
class AAnimOffset : public AARController
{
public:
	float                                              Weight;                                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverride;                                                 // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowTargetActor;                                          // 0x02AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VM5F[0x2];                                     // 0x02AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Source;                                                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Parent;                                                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5SZW[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  OverrideOffset;                                            // 0x02D0(0x0030) (Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RNBE[0xF];                                     // 0x0301(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.AnimOffset");
		return ptr;
	}



	void UpdateAnimOffset();
};

// Class ARigRuntime.ARControllerFk
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class AARControllerFk : public AARController
{
public:
	float                                              FollowParent;                                              // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYIO[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARControllerFk");
		return ptr;
	}



};

// Class ARigRuntime.ARControllerFkIk
// 0x0080 (FullSize[0x02C8] - InheritedSize[0x0248])
class AARControllerFkIk : public AARControllerBase
{
public:
	class UMaterialBillboardComponent*                 Billboard;                                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                            Sphere;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FkIk;                                                      // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFkIkAutoSnap;                                             // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowTwistControllers;                                     // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableFingers;                                            // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T5GY[0x1];                                     // 0x0263(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Curl;                                                      // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Relax;                                                     // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbCurl;                                                 // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbRoll;                                                 // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbPitch;                                                // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbYaw;                                                  // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableFoot;                                               // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZ42[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FootRoll;                                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToeRoll;                                                   // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeelTwist;                                                 // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToeTwist;                                                  // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ARigRuntime_EAxisEnum                              FingersAxis;                                               // 0x0294(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IUD0[0x3];                                     // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRotator>                            Offsets;                                                   // 0x0298(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FString                                     FingersReason;                                             // 0x02A8(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FootReason;                                                // 0x02B8(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARControllerFkIk");
		return ptr;
	}



};

// Class ARigRuntime.ARControllerIk
// 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
class AARControllerIk : public AARController
{
public:
	float                                              StretchScale;                                              // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStretching;                                          // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // 0x02AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WRJM[0x2];                                     // 0x02AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StretchSoftness;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoleVectorLock;                                            // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThreeBoneIkBend;                                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP6V[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARControllerIk");
		return ptr;
	}



};

// Class ARigRuntime.ARControllerPv
// 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
class AARControllerPv : public AARController
{
public:
	bool                                               bAttachToIk;                                               // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1RP7[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      IkController;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MainController;                                            // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      PvGroup;                                                   // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARControllerPv");
		return ptr;
	}



};

// Class ARigRuntime.ARControllerSplineIk
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class AARControllerSplineIk : public AARController
{
public:
	bool                                               bFkMode;                                                   // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSolveEnds;                                                // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F23U[0x2];                                     // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Curvature;                                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidParentWeight;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidParentLerp;                                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARControllerSplineIk");
		return ptr;
	}



};

// Class ARigRuntime.ARigFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARigFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARigFunctions");
		return ptr;
	}



	void STATIC_UpdateSkeletalMeshSection(class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SkelMeshActor, float Time);
	void STATIC_UpdateSkeletalMeshPose(class USkeletalMeshComponent* SkeletalMeshComponent);
	void STATIC_UpdateSequncerComponent(class UMovieScene3DTransformSection* TransformSection, class USceneComponent* SceneComponent, float Time);
	void STATIC_UpdateSequncer(class ULevelSequence* LevelSequence, float Time);
	void STATIC_UpdateSequencerActorTransform(class ULevelSequence* LevelSequence, class AActor* Actor, float Time);
	void STATIC_UpdateFloatSectionProperty(class UMovieSceneFloatSection* FloatSection, class AActor* Actor, const struct FName& PropertyName, float Time);
	void STATIC_UpdateAllConstraints();
	void STATIC_TwoBoneIkOpt(const struct FTransform& Effector, const struct FVector& PoleVector, const struct FVector& InRootPos, float UpperLimbLength, float LowerLimbLength, float StretchScale, bool bAutoStretch, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, struct FTransform* RootBone, struct FTransform* MidBone, struct FTransform* TipBone);
	void STATIC_TwoBoneIk(const struct FTransform& EffectorPos, const struct FVector& PoleVector, const struct FTransform& InUpBone, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, bool bUseAimSettings, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone);
	TArray<struct FName> STATIC_StringsToNames(TArray<struct FString> Strings);
	void STATIC_ShiftTransformSectionAnim(class UMovieScene3DTransformSection* TransformSection, float ShiftAnim);
	void STATIC_SetTransformSectionKey(class AActor* Actor, class UMovieScene3DTransformSection* TransformSection, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale, bool* Result);
	bool STATIC_SetTransformKey(class ULevelSequence* LevelSequence, class AActor* Actor, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale);
	void STATIC_SetSelectable(class UPrimitiveComponent* Component, bool bSelectable);
	void STATIC_SetSectionStartTime(class UMovieSceneSection* MovieSceneSection, float Time);
	void STATIC_SetSectionEndTime(class UMovieSceneSection* MovieSceneSection, float Time);
	void STATIC_SetMorphTarget(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FName& TargetName, float Weight);
	void STATIC_SetActorSelectable(class AActor* Actor, bool bSelectable);
	void STATIC_SelectActorInEditor(class AActor* Actor, bool IsSelected);
	void STATIC_RenameActor(class AActor* Actor, const struct FName& NewName);
	void STATIC_RemoveTrackFromBinding(class ULevelSequence* LevelSequence, class UClass* TrackClass, const struct FGuid& Guid);
	void STATIC_RemoveStaticCurvesForActors(class ULevelSequence* LevelSequence, TArray<class AActor*> Actors, bool bRemoveBinding);
	void STATIC_RemoveStaticCurves(class ULevelSequence* LevelSequence, bool bRemoveBinding);
	void STATIC_RemoveBindingFromSequencer(class ULevelSequence* LevelSequence, const struct FGuid& Guid);
	struct FVector STATIC_RemapVectorFromAim(float RollValue, const struct FVector& InVector, const struct FAimSettings& AimSettings);
	bool STATIC_PromtDialogue(const struct FString& Title, const struct FString& Message, const struct FString& Ok, const struct FString& Cancel, TArray<class UObject*> Objects);
	void STATIC_PreviewSetAnimPosition(class USkeletalMeshComponent* SkelMeshComp, int SequenceIndex, class UAnimSequenceBase* InAnimSequence, float InPosition, float Weight);
	void STATIC_PostProcessAnimSequence(class UAnimSequence* AnimSequence, class USkeletalMeshComponent* SkeletalMeshComponent);
	void STATIC_PostEditChange(class AActor* Actor);
	class UMovieScene3DTransformSection* STATIC_PasteKeysToActor(class ULevelSequence* LevelSequence, class AActor* Actor, class UMovieScene3DTransformSection* SourceSection, float PasteTime);
	struct FTransform STATIC_ParentConstraintLerp(const struct FTransform& A, const struct FTransform& B, const struct FTransform& OffsetA, const struct FTransform& OffsetB, float Alpha);
	void STATIC_Parent(class AActor* Child, class AActor* Parent);
	void STATIC_OpenEditorForAsset(class UObject* Asset);
	void STATIC_NotificationBox(const struct FString& String, float FadeIn, float Expire, float FadeOut, bool bOutputLog);
	void STATIC_ModifyObject(class UObject* Object);
	bool STATIC_MatchesWildcard(const struct FName& SourceName, const struct FName& Wildcard, TEnumAsByte<CoreUObject_ESearchCase> SearchCase);
	struct FVector STATIC_LerpVector(const struct FVector& A, const struct FVector& B, float Alpha);
	void STATIC_KeyAllActiveCurves(class USkeletalMeshComponent* SkelMeshComp, class UAnimSequence* AnimSequence, float Time);
	bool STATIC_IsSequencerHasBindingForActor(class AActor* Actor, class ULevelSequence* LevelSequence, struct FGuid* Guid);
	class AActor* STATIC_GroupController(class AActor* Controller);
	struct FVector STATIC_GetWeightedAverageVector(TArray<struct FVector> Vectors, TArray<float> Weights);
	struct FTransform STATIC_GetWeightedAverageTransform(TArray<struct FTransform> Transforms, TArray<struct FTransform> Offsets, TArray<float> Weights);
	struct FRotator STATIC_GetWeightedAverageRotator(TArray<struct FRotator> Rotators, TArray<float> Weights);
	TArray<class UMovieScene3DTransformSection*> STATIC_GetTransformSectionsForActors(class ULevelSequence* LevelSequence, TArray<class AActor*> Actors);
	class UMovieScene3DTransformSection* STATIC_GetTransformSectionFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid);
	class UMovieScene3DTransformSection* STATIC_GetTransformSectionFromActor(class ULevelSequence* LevelSequence, class AActor* Actor);
	void STATIC_GetSpaceBases(class USkinnedMeshComponent* SkinnedMeshComponent, TArray<struct FTransform>* SpaceBases);
	float STATIC_GetSoftIkStretchDistance(float Distance, float ChainLength, float SoftPoint);
	bool STATIC_GetSequencersWithActors(TArray<class AActor*> Actors, TArray<class UObject*>* LevelSequences);
	void STATIC_GetSequencerPlaybackRange(class ULevelSequence* LevelSequence, int* PlaybackStart, int* PlaybackEnd);
	float STATIC_GetSequencerFrameRate(class ULevelSequence* LevelSequence);
	float STATIC_GetSequencerFrameInterval(class ULevelSequence* LevelSequence);
	void STATIC_GetSequencerComponents(class ULevelSequence* LevelSequence, TArray<struct FGuid>* Guids, TArray<class USceneComponent*>* SceneComponents);
	void STATIC_GetRigMapping(class USkeleton* Skeleton, TArray<struct FName> BaseNames, TArray<struct FName>* RigNames);
	struct FVector STATIC_GetPoleVectorLocation(const struct FVector& Up, const struct FVector& Mid, const struct FVector& End, float Multiply);
	float STATIC_GetLastRenderTime(class UPrimitiveComponent* Component);
	void STATIC_GetFloatSectionsFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid, TArray<class UMovieSceneFloatSection*>* FloatSections, TArray<struct FName>* PropertyNames);
	class AActor* STATIC_GetControllerByName(const struct FName& Name, class AActor* Rig);
	void STATIC_GetClosestAxis(const struct FVector& TargetVector, const struct FTransform& Transform, struct FString* FirstAxis, struct FString* SecondAxis);
	struct FTransform STATIC_GetBoneSocketTransform(class USkeletalMeshComponent* SkelMeshComp, const struct FName& BoneName);
	TArray<struct FName> STATIC_GetBonesHierarchy(class USkeletalMeshComponent* SkelMeshComp, const struct FName& RootBone, const struct FName& TipBone);
	class UObject* STATIC_GetAssetWithOpenedEditor(class UClass* Class);
	TArray<class UObject*> STATIC_GetAssetsByClass(class UClass* Class);
	TArray<class UMovieSceneSkeletalAnimationSection*> STATIC_GetAnimSectionsFromActor(class ULevelSequence* LevelSequence, class AActor* Actor);
	struct FAimSettings STATIC_GetAimSettings(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform);
	struct FAimSettings STATIC_GetAimAxis(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform);
	struct FRotator STATIC_FilterAimOffsetAxis(ARigRuntime_EAxisEnum AimAxis, const struct FRotator& Offset);
	struct FTransform STATIC_EvaluateTransformSection(class UMovieScene3DTransformSection* TransformSection, float Time);
	float STATIC_EvaluateFloatSection(class UMovieSceneFloatSection* FloatSection, float Time);
	class AActor* STATIC_CreateEmptyController(class AActor* Rig, const struct FName& Name, const struct FTransform& Transform);
	void STATIC_CreateControllerFromSocket(class UClass* Class, class AActor* Rig, class USkeletalMeshComponent* SkelMeshComp, const struct FName& Name, const struct FName& Ending, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, class AActor** Controller, class AActor** Group, class AActor** Offset, bool bGroup, bool bWorldOrientation, bool bCreateOffset);
	class AActor* STATIC_CreateController(class UClass* Class, class AActor* Rig, const struct FName& Name, const struct FTransform& Transform, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, const struct FRotator& RelativeRotation);
	class ARigConstraint* STATIC_CreateConstraint(class UClass* Class, TArray<class AActor*> Targets, bool bVisibility, class AActor* UpActor);
	void STATIC_CreateAnimSequence(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence** AnimSequence);
	void STATIC_CopyTransformSectionCurve(class UMovieScene3DTransformSection* SourceTransformSection, class UMovieScene3DTransformSection* TargetTransformSection, ARigRuntime_ETransformType TransformType, TEnumAsByte<CoreUObject_EAxis> Axis);
	struct FTransform STATIC_ConvertTransformToRelativeReverse(const struct FTransform& WorldTransform, const struct FTransform& LocalTransform);
	void STATIC_CloseAllEditorsForAsset(class UObject* Asset);
	struct FName STATIC_AppendName(const struct FName& A, const struct FName& B);
	struct FRotator STATIC_AimConstraint(const struct FVector& Aim, const struct FVector& Up, const struct FVector& Target, const struct FAimSettings& AimSettings);
	class UMovieScene3DTransformSection* STATIC_AddTransformTrack(class ULevelSequence* LevelSequence, const struct FGuid& Guid, float StartFrame, float EndFrame);
	TArray<struct FName> STATIC_AddToArrayOfNames(const struct FName& AddName, TArray<struct FName> InNames);
	TArray<class AActor*> STATIC_AddToArrayOfActors(class AActor* AddActor, TArray<class AActor*> InActors);
	void STATIC_AddRawKeyFromPose(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence* AnimSequence, float FrameRate);
	void STATIC_AddCurveValue(class USkeletalMeshComponent* SkelMeshComp, const struct FName& CurveName, float Value);
	void STATIC_AddCurveKey(class UAnimSequence* AnimSequence, const struct FName& TargetName, float Time, float Value);
	struct FGuid STATIC_AddBindingToSequencer(class ULevelSequence* LevelSequence, class AActor* Actor);
	class UMovieSceneSkeletalAnimationSection* STATIC_AddAnimTrack(class ULevelSequence* LevelSequence, class UAnimSequence* AnimSequence, const struct FGuid& Guid, float StartTime);
};

// Class ARigRuntime.ARCustomCtrl
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARCustomCtrl : public UARigFunctions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARCustomCtrl");
		return ptr;
	}



	struct FBonesTransforms STATIC_UpdateCustomControllers(TArray<struct FCustomControllerData> CustomControllers, const struct FBonesTransforms& BonesTransforms);
	void STATIC_PoseCustomControllers(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FCustomControllerData> CustomControllers);
	void STATIC_ParentCustomControllers(TArray<struct FCustomControllerData> InCC, class AActor* Rig);
	void STATIC_KeyCustomControllers(TArray<struct FCustomControllerData> CustomControllers, class ULevelSequence* LevelSequence, float Time);
	TArray<struct FCustomControllerData> STATIC_CreateCustomControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, TArray<struct FCustomControllerData> InCC);
};

// Class ARigRuntime.ARFace
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARFace : public UARigFunctions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARFace");
		return ptr;
	}



	void STATIC_UpdateMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	struct FBonesTransforms STATIC_UpdateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms STATIC_UpdateEyes(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, TArray<struct FTransform>* EyesTransforms);
	struct FBonesTransforms STATIC_UpdateEyelids(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, TArray<struct FTransform> EyesTransforms);
	void STATIC_PoseMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void STATIC_PoseFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void STATIC_PoseEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void STATIC_PoseEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings);
	void STATIC_KeyMorphTargets(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyMorphTargetCurves(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class UAnimSequence* AnimSequence, float Time, bool bUpdateFromSource);
	void STATIC_KeyFaceRig(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyEyes(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyEyelids(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	struct FFaceSettings STATIC_InitFaceRigData(const struct FFaceSettings& FaceSettings);
	struct FRotator STATIC_GetEyelidsRotation(const struct FVector& CtrlPos, const struct FRotator& BoneSpaceR, const struct FAimSettings& AimSettings, float PosMult, float Follow);
	struct FFaceSettings STATIC_FaceParentController(const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings STATIC_CreateMorphControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings STATIC_CreateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings STATIC_CreateEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	struct FFaceSettings STATIC_CreateEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	TArray<float> STATIC_ConvertVectorToXZValues(const struct FVector& Vector, float Max);
};

// Class ARigRuntime.ARFkHierarchy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARFkHierarchy : public UARigFunctions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARFkHierarchy");
		return ptr;
	}



	struct FBonesTransforms STATIC_UpdateFkHierarchyRigs(TArray<struct FFkHierarchyData> FkHierarchy, const struct FBonesTransforms& BonesTransforms);
	void STATIC_PoseFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkHierarchyData> FkHierarchyRigs);
	void STATIC_PoseFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData);
	void STATIC_ParentFkHierarchyRigs(TArray<struct FFkHierarchyData>* FkHRigs, class AActor* Rig);
	void STATIC_KeyFkHierarchyRigs(TArray<struct FFkHierarchyData> FkHierarchyRigs, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyFkHierarchyRig(const struct FFkHierarchyData& FkHierarchyData, class ULevelSequence* LevelSequence, float Time);
	TArray<struct FFkHierarchyData> STATIC_CreateFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, TArray<struct FFkHierarchyData> FkHRigs);
	struct FFkHierarchyData STATIC_CreateFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkHierarchyData& FkH);
};

// Class ARigRuntime.ARFkIk
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARFkIk : public UARigFunctions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARFkIk");
		return ptr;
	}



	struct FBonesTransforms STATIC_UpdateTwoBoneTwistLimb(const struct FFkIkData& FkIkData, TArray<struct FTransform> InTransforms, float FkIk, const struct FBonesTransforms& BonesTransforms);
	void STATIC_UpdateTwoBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, const struct FVector& CharScale, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up);
	bool STATIC_UpdateTwistBones(const struct FTwistBonesData& TwistBonesData, const struct FTransform& UpperT, const struct FTransform& LowerT, struct FBonesTransforms* BonesTransforms, const struct FVector& Scale);
	struct FBonesTransforms STATIC_UpdateThreeBoneTwistLimb(const struct FFkIkData& FkIkData, TArray<struct FTransform> InTransforms, const struct FBonesTransforms& BonesTransforms);
	void STATIC_UpdateThreeBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, const struct FVector& CharScale, struct FTransform* Tip, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up);
	void STATIC_UpdateFootRig(const struct FFootControllersData& FootControllersData, float FootRoll, float ToeRoll, float HeelTwist, float ToeTwist, float FkIk);
	struct FBonesTransforms STATIC_UpdateFoot(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms STATIC_UpdateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkIkData> FkIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms STATIC_UpdateFkIkRig(const struct FFkIkData& FkIkData, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms);
	struct FBonesTransforms STATIC_UpdateFingersRig(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms);
	void STATIC_UpdateFingersGroups(const struct FFingersData& FingersData, bool bEnableFingers, float Curl, float Spread, float Relax, float ThumbCurl, float ThumbRoll, float ThumbPitch, float ThumbYaw, ARigRuntime_EAxisEnum FingersAxis, TArray<struct FRotator> Offsets);
	struct FBonesTransforms STATIC_UpdateFingers(const struct FFingersData& FingersData, const struct FBonesTransforms& BonesTransforms);
	void STATIC_ThreeBoneIkOpt(const struct FTransform& EffectorPos, const struct FTransform& RootPos, const struct FTransform& SecondIkPos, const struct FRotator& Roll, const struct FVector& UpPV, const struct FVector& LowPV, float UpLength, float MidLength, float LowLength, float StretchScale, bool bAllowStretching, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* TipBone);
	void STATIC_ThreeBoneIk(const struct FTransform& EffectorPos, const struct FVector& UpPV, const struct FVector& LowPV, const struct FTransform& UpBoneWorld, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, const struct FTransform& TipBoneLocal, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, const struct FAimSettings& LowAimSettings, const struct FRotator& Roll, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* Tip);
	void STATIC_SnapTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void STATIC_SnapThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void STATIC_SnapFkIkLimb(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, bool bForce);
	void STATIC_SnapFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData);
	void STATIC_SetFingersProperties(const struct FFingersData& FingersData, class AARControllerFkIk* FkIkController, class AActor* IkController);
	void STATIC_PoseTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void STATIC_PoseTwistControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FTwistBonesData& TwistBonesData);
	void STATIC_PoseThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData);
	void STATIC_PoseFoot(class USkeletalMeshComponent* SkelMeshComp, const struct FName& Toe, const struct FFootControllersData& FootControllersData);
	void STATIC_PoseFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkIkData> FkIkRigs);
	void STATIC_PoseFingers(class USkeletalMeshComponent* SkelMeshComp, const struct FFingersData& FingersData);
	void STATIC_ParentFkIkRigs(TArray<struct FFkIkData>* FkIkRigs, class AActor* Rig);
	void STATIC_KeyTwoBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyTwistControllers(const struct FTwistBonesData& TwistBonesData, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyThreeBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyFoot(const struct FFootControllersData& FootControllersData, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyFkIkRigs(TArray<struct FFkIkData> FkIkRigs, class ULevelSequence* LevelSequence, float Time);
	void STATIC_KeyFkIkLimb(class ULevelSequence* Sequencer, const struct FFkIkData& FkIkData, float Time);
	void STATIC_KeyFingers(const struct FFingersData& FingersData, class ULevelSequence* LevelSequence, float Time);
	void STATIC_GetTwoBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FTransform& PoleVectorT, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FAimSettings& AimSettings, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings);
	void STATIC_GetTwoBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk);
	void STATIC_GetTwistLimbSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkIkData& FkIkData, struct FTwistBonesData* TwistBonesA, struct FTwistBonesData* TwistBonesB, struct FTwistBonesData* TwistBonesC);
	struct FTwistBonesData STATIC_GetTwistBonesSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwistBonesData& TwistBonesData, const struct FAimSettings& AimSettings, const struct FTransform& UpBoneT, const struct FTransform& LowBoneT);
	void STATIC_GetThreeBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FVector& UpPoleVectorV, const struct FVector& LowPoleVectorV, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FTransform& TipBoneLocalT, const struct FTransform& MidBoneT, const struct FTransform& LowBoneT, const struct FAimSettings& AimSettingsA, const struct FAimSettings& AimSettingsB, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings, struct FAimSettings* LowAimSettings);
	void STATIC_GetThreeBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk);
	struct FVector STATIC_GetPvPosFromMesh(class USkeletalMeshComponent* SkelMeshComp, const struct FName& TipBone, float Multiply);
	struct FVector STATIC_GetPvPosFromDir(class USkeletalMeshComponent* SkelMeshComp, const struct FName& TipBone, float Multiply, bool bArm);
	ARigRuntime_EAxisEnum STATIC_GetFingersAxis(const struct FFingersData& FingersData, class AActor* IkController);
	struct FRotator STATIC_GetFingerRotation(float Curl, float Spread, ARigRuntime_EAxisEnum FingersAxis);
	void STATIC_FkIkVis(const struct FFkIkData& FkIkData);
	struct FTwoBoneIkData STATIC_CreateTwoBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	void STATIC_CreateTwoBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	struct FTwoBoneIkData STATIC_CreateThreeBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	void STATIC_CreateThreeBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk);
	void STATIC_CreatePoleVectorController(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, class AActor* IkController, const struct FTwoBoneIkData& TwoBoneIk, const struct FName& TipBone, bool bArm, class AActor** Controller, class AActor** Group);
	struct FFootControllersData STATIC_CreateFootRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig);
	TArray<struct FFkIkData> STATIC_CreateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkIkData> FkIkRigs, class AActor* Rig);
	struct FFkIkData STATIC_CreateFkIkRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig);
	class AActor* STATIC_CreateFkIkControllerRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwoBoneIkData& TwoBoneIk);
	class AActor* STATIC_CreateFkIkController(class AActor* Rig, const struct FName& Name, const struct FTransform& Transform, const struct FVector& Offset, const struct FLinearColor& Color, float Size);
	struct FFingersData STATIC_CreateFingersRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig);
	void STATIC_AimIkControllerToBone(class USkeletalMeshComponent* SkelMeshComp, class AActor* IkController, class AActor* IkOffset, const struct FName& Bone, bool bArms);
};

// Class ARigRuntime.ARMFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARMFunctions : public UARigFunctions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARMFunctions");
		return ptr;
	}



	void STATIC_UpdateRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ASkeletalMeshActor* SourceActor, class AActor* Rig, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
	struct FBonesTransforms STATIC_UpdatePoseFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData);
	struct FBonesTransforms STATIC_UpdateModularRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class AActor* Rig);
	void STATIC_UpdateCurvesFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData);
	void STATIC_PoseRig(class ASkeletalMeshActor* SourceActor, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings);
	void STATIC_KeyRig(const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time);
	struct FModularRigData STATIC_InitModularRigData(const struct FModularRigData& ModularRigData);
	void STATIC_CreateModularRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FModularRigData* ModularRigData, struct FFaceSettings* FaceSettings);
	bool STATIC_CheckSequencers(TArray<class AActor*> Controllers);
	void STATIC_BakeToAnimAssetInternal(float Time, float TimeZero, float FPS, class UAnimSequence* NewAnimSequence, class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
	class UAnimSequence* STATIC_BakeToAnimAsset(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
	void STATIC_BakeFromSequencer(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT);
};

// Class ARigRuntime.RigModular
// 0x04E8 (FullSize[0x0790] - InheritedSize[0x02A8])
class ARigModular : public ASkeletalMeshActor
{
public:
	bool                                               bTickInEditor;                                             // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateIfInFrustumOnly;                                    // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInFrustum;                                                // 0x02AA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceUpdate;                                              // 0x02AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastRenderTime;                                            // 0x02AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Prefix;                                                    // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // 0x02B8(0x0020) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            SourceBT;                                                  // 0x02D8(0x0020) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DA6P[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FModularRigData                             ModularRigData;                                            // 0x0300(0x0130) (Edit, BlueprintVisible, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceRigData;                                               // 0x0430(0x0300) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FParentControllers>                  PostParentControllersData;                                 // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FARigRuntime_FCreateConstraint>      PostCreateConstraintsData;                                 // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                          SourceActor;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsolateSelected;                                          // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KG9V[0x7];                                     // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicsAsset*                               MeshPhysicsAsset;                                          // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAnimOffset*>                         AnimOffsets;                                               // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Controllers;                                               // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MF8T[0x8];                                     // 0x0788(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.RigModular");
		return ptr;
	}



	void PostUpdateRig();
	void PostCreateRig();
	void PostBakeToAnim(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame, class UAnimSequence* NewAnimSequence);
	void PostBakeFromSequencer(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame);
	void OnUpdateRig();
	void EditorTick();
};

// Class ARigRuntime.OrientConstraint
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class AOrientConstraint : public ARigConstraint
{
public:
	struct FVector                                     Offset;                                                    // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RestPosition;                                              // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.OrientConstraint");
		return ptr;
	}



};

// Class ARigRuntime.ParentConstraint
// 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
class AParentConstraint : public ARigConstraint
{
public:
	TArray<struct FTransform>                          Offsets;                                                   // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Interp, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8A81[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RestPosition;                                              // 0x0270(0x0030) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ParentConstraint");
		return ptr;
	}



};

// Class ARigRuntime.PointConstraint
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class APointConstraint : public ARigConstraint
{
public:
	struct FVector                                     Offset;                                                    // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RestPosition;                                              // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.PointConstraint");
		return ptr;
	}



};

// Class ARigRuntime.ScaleConstraint
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class AScaleConstraint : public ARigConstraint
{
public:
	struct FVector                                     Offset;                                                    // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RestPosition;                                              // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ScaleConstraint");
		return ptr;
	}



};

// Class ARigRuntime.ARSplineIk
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UARSplineIk : public UARigFunctions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARSplineIk");
		return ptr;
	}



	struct FBonesTransforms STATIC_UpdateSplineIkRigs(TArray<struct FSplineIkData> SplineIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms);
	void STATIC_SolveSplinePoints(class USplineComponent* SplineComponent, const struct FTransform& Root, const struct FTransform& Mid, const struct FTransform& Tip, float Curvature, bool bSolveEnds, const struct FAimSettings& AimSettings, const struct FVector& CharScale);
	void STATIC_SolveSplineIkComponent(const struct FSplineIkData& SplineIkData, const struct FVector& CharScale);
	struct FBonesTransforms STATIC_SolveSplineIkBones(const struct FSplineIkData& SplineIkData, const struct FBonesTransforms& BonesTransforms);
	void STATIC_SolveMidSplineIkCtrl(class AActor* Start, class AActor* Mid, class AActor* End, class AActor* MidGrp, class AActor* EndGrp, const struct FTransform& OffsetA, const struct FTransform& OffsetB, const struct FTransform& OffsetUp, const struct FAimSettings& AimSettings, float MidParent, float MidLerp, bool FkIk);
	void STATIC_PoseSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FSplineIkData> SplineIkRigs);
	void STATIC_ParentSplineIkRigs(TArray<struct FSplineIkData>* SpIkRigs, class AActor* Rig);
	void STATIC_KeySplineIkRigs(TArray<struct FSplineIkData> SplineIkRigs, class ULevelSequence* LevelSequence, float Time);
	TArray<struct FTransform> STATIC_GetSplineIkBoneOffsets(class USkeletalMeshComponent* SkelMeshComp, const struct FSplineIkData& SpIk);
	struct FTransform STATIC_GetPosOnSpline(class USplineComponent* SplineComponent, int Index, int PosCount, const struct FAimSettings& AimSettings);
	TArray<struct FSplineIkData> STATIC_CreateSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, TArray<struct FSplineIkData> SpIkRigs);
	void STATIC_CreateSplineIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FSplineIkData* SpIk);
};

// Class ARigRuntime.ARTickableActor
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AARTickableActor : public AActor
{
public:
	class USceneComponent*                             Scene;                                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTickInEditor;                                             // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94UG[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ARigRuntime.ARTickableActor");
		return ptr;
	}



	void OnPostEditMove();
	void EditorTick();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
