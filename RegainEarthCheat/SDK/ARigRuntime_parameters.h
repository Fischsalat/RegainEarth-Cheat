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

// Function ARigRuntime.ARController.LimitTransformations
struct AARController_LimitTransformations_Params
{
};

// Function ARigRuntime.AnimOffset.UpdateAnimOffset
struct AAnimOffset_UpdateAnimOffset_Params
{
};

// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshSection
struct UARigFunctions_UpdateSkeletalMeshSection_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                          SkelMeshActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshPose
struct UARigFunctions_UpdateSkeletalMeshPose_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.UpdateSequncerComponent
struct UARigFunctions_UpdateSequncerComponent_Params
{
	class UMovieScene3DTransformSection*               TransformSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             SceneComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.UpdateSequncer
struct UARigFunctions_UpdateSequncer_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.UpdateSequencerActorTransform
struct UARigFunctions_UpdateSequencerActorTransform_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.UpdateFloatSectionProperty
struct UARigFunctions_UpdateFloatSectionProperty_Params
{
	class UMovieSceneFloatSection*                     FloatSection;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.UpdateAllConstraints
struct UARigFunctions_UpdateAllConstraints_Params
{
};

// Function ARigRuntime.ARigFunctions.TwoBoneIkOpt
struct UARigFunctions_TwoBoneIkOpt_Params
{
	struct FTransform                                  Effector;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PoleVector;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InRootPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpperLimbLength;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowerLimbLength;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchSoftness;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoleVectorLock;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  RootBone;                                                  // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TipBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.TwoBoneIk
struct UARigFunctions_TwoBoneIk_Params
{
	struct FTransform                                  EffectorPos;                                               // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PoleVector;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  InUpBone;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBoneLocal;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBoneLocal;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseAimSettings;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                UpAimSettings;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                MidAimSettings;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowStretching;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  UpBone;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.StringsToNames
struct UARigFunctions_StringsToNames_Params
{
	TArray<struct FString>                             Strings;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.ShiftTransformSectionAnim
struct UARigFunctions_ShiftTransformSectionAnim_Params
{
	class UMovieScene3DTransformSection*               TransformSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShiftAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetTransformSectionKey
struct UARigFunctions_SetTransformSectionKey_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               TransformSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Translation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetTransformKey
struct UARigFunctions_SetTransformKey_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Translation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetSelectable
struct UARigFunctions_SetSelectable_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetSectionStartTime
struct UARigFunctions_SetSectionStartTime_Params
{
	class UMovieSceneSection*                          MovieSceneSection;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetSectionEndTime
struct UARigFunctions_SetSectionEndTime_Params
{
	class UMovieSceneSection*                          MovieSceneSection;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetMorphTarget
struct UARigFunctions_SetMorphTarget_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SetActorSelectable
struct UARigFunctions_SetActorSelectable_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.SelectActorInEditor
struct UARigFunctions_SelectActorInEditor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.RenameActor
struct UARigFunctions_RenameActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.RemoveTrackFromBinding
struct UARigFunctions_RemoveTrackFromBinding_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TrackClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.RemoveStaticCurvesForActors
struct UARigFunctions_RemoveStaticCurvesForActors_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                    // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bRemoveBinding;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.RemoveStaticCurves
struct UARigFunctions_RemoveStaticCurves_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveBinding;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.RemoveBindingFromSequencer
struct UARigFunctions_RemoveBindingFromSequencer_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.RemapVectorFromAim
struct UARigFunctions_RemapVectorFromAim_Params
{
	float                                              RollValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InVector;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.PromtDialogue
struct UARigFunctions_PromtDialogue_Params
{
	struct FString                                     Title;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ok;                                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Cancel;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Objects;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.PreviewSetAnimPosition
struct UARigFunctions_PreviewSetAnimPosition_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SequenceIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           InAnimSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InPosition;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.PostProcessAnimSequence
struct UARigFunctions_PostProcessAnimSequence_Params
{
	class UAnimSequence*                               AnimSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.PostEditChange
struct UARigFunctions_PostEditChange_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.PasteKeysToActor
struct UARigFunctions_PasteKeysToActor_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               SourceSection;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PasteTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.ParentConstraintLerp
struct UARigFunctions_ParentConstraintLerp_Params
{
	struct FTransform                                  A;                                                         // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  B;                                                         // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  OffsetA;                                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  OffsetB;                                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.Parent
struct UARigFunctions_Parent_Params
{
	class AActor*                                      Child;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Parent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.OpenEditorForAsset
struct UARigFunctions_OpenEditorForAsset_Params
{
	class UObject*                                     Asset;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.NotificationBox
struct UARigFunctions_NotificationBox_Params
{
	struct FString                                     String;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Expire;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOut;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutputLog;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.ModifyObject
struct UARigFunctions_ModifyObject_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.MatchesWildcard
struct UARigFunctions_MatchesWildcard_Params
{
	struct FName                                       SourceName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Wildcard;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_ESearchCase>               SearchCase;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.LerpVector
struct UARigFunctions_LerpVector_Params
{
	struct FVector                                     A;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.KeyAllActiveCurves
struct UARigFunctions_KeyAllActiveCurves_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.IsSequencerHasBindingForActor
struct UARigFunctions_IsSequencerHasBindingForActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GroupController
struct UARigFunctions_GroupController_Params
{
	class AActor*                                      Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetWeightedAverageVector
struct UARigFunctions_GetWeightedAverageVector_Params
{
	TArray<struct FVector>                             Vectors;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Weights;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetWeightedAverageTransform
struct UARigFunctions_GetWeightedAverageTransform_Params
{
	TArray<struct FTransform>                          Transforms;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Offsets;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Weights;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetWeightedAverageRotator
struct UARigFunctions_GetWeightedAverageRotator_Params
{
	TArray<struct FRotator>                            Rotators;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Weights;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetTransformSectionsForActors
struct UARigFunctions_GetTransformSectionsForActors_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                    // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieScene3DTransformSection*>       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetTransformSectionFromBinding
struct UARigFunctions_GetTransformSectionFromBinding_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetTransformSectionFromActor
struct UARigFunctions_GetTransformSectionFromActor_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSpaceBases
struct UARigFunctions_GetSpaceBases_Params
{
	class USkinnedMeshComponent*                       SkinnedMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          SpaceBases;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSoftIkStretchDistance
struct UARigFunctions_GetSoftIkStretchDistance_Params
{
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChainLength;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoftPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSequencersWithActors
struct UARigFunctions_GetSequencersWithActors_Params
{
	TArray<class AActor*>                              Actors;                                                    // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             LevelSequences;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSequencerPlaybackRange
struct UARigFunctions_GetSequencerPlaybackRange_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlaybackStart;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlaybackEnd;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSequencerFrameRate
struct UARigFunctions_GetSequencerFrameRate_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSequencerFrameInterval
struct UARigFunctions_GetSequencerFrameInterval_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetSequencerComponents
struct UARigFunctions_GetSequencerComponents_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               Guids;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     SceneComponents;                                           // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetRigMapping
struct UARigFunctions_GetRigMapping_Params
{
	class USkeleton*                                   Skeleton;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               BaseNames;                                                 // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               RigNames;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetPoleVectorLocation
struct UARigFunctions_GetPoleVectorLocation_Params
{
	struct FVector                                     Up;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Mid;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiply;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetLastRenderTime
struct UARigFunctions_GetLastRenderTime_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetFloatSectionsFromBinding
struct UARigFunctions_GetFloatSectionsFromBinding_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneFloatSection*>             FloatSections;                                             // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PropertyNames;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetControllerByName
struct UARigFunctions_GetControllerByName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetClosestAxis
struct UARigFunctions_GetClosestAxis_Params
{
	struct FVector                                     TargetVector;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     FirstAxis;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondAxis;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetBoneSocketTransform
struct UARigFunctions_GetBoneSocketTransform_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetBonesHierarchy
struct UARigFunctions_GetBonesHierarchy_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RootBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TipBone;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetAssetWithOpenedEditor
struct UARigFunctions_GetAssetWithOpenedEditor_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetAssetsByClass
struct UARigFunctions_GetAssetsByClass_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetAnimSectionsFromActor
struct UARigFunctions_GetAnimSectionsFromActor_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneSkeletalAnimationSection*> ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetAimSettings
struct UARigFunctions_GetAimSettings_Params
{
	struct FVector                                     Aim;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Up;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.GetAimAxis
struct UARigFunctions_GetAimAxis_Params
{
	struct FVector                                     Aim;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Up;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.FilterAimOffsetAxis
struct UARigFunctions_FilterAimOffsetAxis_Params
{
	ARigRuntime_EAxisEnum                              AimAxis;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.EvaluateTransformSection
struct UARigFunctions_EvaluateTransformSection_Params
{
	class UMovieScene3DTransformSection*               TransformSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.EvaluateFloatSection
struct UARigFunctions_EvaluateFloatSection_Params
{
	class UMovieSceneFloatSection*                     FloatSection;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CreateEmptyController
struct UARigFunctions_CreateEmptyController_Params
{
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CreateControllerFromSocket
struct UARigFunctions_CreateControllerFromSocket_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Ending;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerShapeData                        Shape;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                           Limits;                                                    // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      Controller;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Group;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Offset;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGroup;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldOrientation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CreateController
struct UARigFunctions_CreateController_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerShapeData                        Shape;                                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                           Limits;                                                    // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CreateConstraint
struct UARigFunctions_CreateConstraint_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Targets;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bVisibility;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      UpActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARigConstraint*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CreateAnimSequence
struct UARigFunctions_CreateAnimSequence_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CopyTransformSectionCurve
struct UARigFunctions_CopyTransformSectionCurve_Params
{
	class UMovieScene3DTransformSection*               SourceTransformSection;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               TargetTransformSection;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ARigRuntime_ETransformType                         TransformType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     Axis;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.ConvertTransformToRelativeReverse
struct UARigFunctions_ConvertTransformToRelativeReverse_Params
{
	struct FTransform                                  WorldTransform;                                            // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LocalTransform;                                            // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.CloseAllEditorsForAsset
struct UARigFunctions_CloseAllEditorsForAsset_Params
{
	class UObject*                                     Asset;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AppendName
struct UARigFunctions_AppendName_Params
{
	struct FName                                       A;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       B;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AimConstraint
struct UARigFunctions_AimConstraint_Params
{
	struct FVector                                     Aim;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Up;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddTransformTrack
struct UARigFunctions_AddTransformTrack_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartFrame;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndFrame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddToArrayOfNames
struct UARigFunctions_AddToArrayOfNames_Params
{
	struct FName                                       AddName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               InNames;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddToArrayOfActors
struct UARigFunctions_AddToArrayOfActors_Params
{
	class AActor*                                      AddActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              InActors;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddRawKeyFromPose
struct UARigFunctions_AddRawKeyFromPose_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddCurveValue
struct UARigFunctions_AddCurveValue_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CurveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddCurveKey
struct UARigFunctions_AddCurveKey_Params
{
	class UAnimSequence*                               AnimSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddBindingToSequencer
struct UARigFunctions_AddBindingToSequencer_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARigFunctions.AddAnimTrack
struct UARigFunctions_AddAnimTrack_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSkeletalAnimationSection*         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARCustomCtrl.UpdateCustomControllers
struct UARCustomCtrl_UpdateCustomControllers_Params
{
	TArray<struct FCustomControllerData>               CustomControllers;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARCustomCtrl.PoseCustomControllers
struct UARCustomCtrl_PoseCustomControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomControllerData>               CustomControllers;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARCustomCtrl.ParentCustomControllers
struct UARCustomCtrl_ParentCustomControllers_Params
{
	TArray<struct FCustomControllerData>               InCC;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARCustomCtrl.KeyCustomControllers
struct UARCustomCtrl_KeyCustomControllers_Params
{
	TArray<struct FCustomControllerData>               CustomControllers;                                         // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARCustomCtrl.CreateCustomControllers
struct UARCustomCtrl_CreateCustomControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomControllerData>               InCC;                                                      // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomControllerData>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.UpdateMorphTargets
struct UARFace_UpdateMorphTargets_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.UpdateFaceRig
struct UARFace_UpdateFaceRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.UpdateEyes
struct UARFace_UpdateEyes_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          EyesTransforms;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.UpdateEyelids
struct UARFace_UpdateEyelids_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          EyesTransforms;                                            // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.PoseMorphTargets
struct UARFace_PoseMorphTargets_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.PoseFaceRig
struct UARFace_PoseFaceRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.PoseEyes
struct UARFace_PoseEyes_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.PoseEyelids
struct UARFace_PoseEyelids_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.KeyMorphTargets
struct UARFace_KeyMorphTargets_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.KeyMorphTargetCurves
struct UARFace_KeyMorphTargetCurves_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateFromSource;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.KeyFaceRig
struct UARFace_KeyFaceRig_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.KeyEyes
struct UARFace_KeyEyes_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.KeyEyelids
struct UARFace_KeyEyelids_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.InitFaceRigData
struct UARFace_InitFaceRigData_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FFaceSettings                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.GetEyelidsRotation
struct UARFace_GetEyelidsRotation_Params
{
	struct FVector                                     CtrlPos;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    BoneSpaceR;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              PosMult;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Follow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.FaceParentController
struct UARFace_FaceParentController_Params
{
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.CreateMorphControllers
struct UARFace_CreateMorphControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.CreateFaceRig
struct UARFace_CreateFaceRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.CreateEyes
struct UARFace_CreateEyes_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.CreateEyelids
struct UARFace_CreateEyelids_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceSettings                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFace.ConvertVectorToXZValues
struct UARFace_ConvertVectorToXZValues_Params
{
	struct FVector                                     Vector;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.UpdateFkHierarchyRigs
struct UARFkHierarchy_UpdateFkHierarchyRigs_Params
{
	TArray<struct FFkHierarchyData>                    FkHierarchy;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRigs
struct UARFkHierarchy_PoseFkHierarchyRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>                    FkHierarchyRigs;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRig
struct UARFkHierarchy_PoseFkHierarchyRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                            FkHierarchyData;                                           // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.ParentFkHierarchyRigs
struct UARFkHierarchy_ParentFkHierarchyRigs_Params
{
	TArray<struct FFkHierarchyData>                    FkHRigs;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRigs
struct UARFkHierarchy_KeyFkHierarchyRigs_Params
{
	TArray<struct FFkHierarchyData>                    FkHierarchyRigs;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRig
struct UARFkHierarchy_KeyFkHierarchyRig_Params
{
	struct FFkHierarchyData                            FkHierarchyData;                                           // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRigs
struct UARFkHierarchy_CreateFkHierarchyRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>                    FkHRigs;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRig
struct UARFkHierarchy_CreateFkHierarchyRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                            FkH;                                                       // (Parm, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateTwoBoneTwistLimb
struct UARFkIk_UpdateTwoBoneTwistLimb_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          InTransforms;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              FkIk;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateTwoBoneFkIk
struct UARFkIk_UpdateTwoBoneFkIk_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	float                                              FkIk;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStretching;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchSoftness;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoleVectorLock;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Low;                                                       // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Mid;                                                       // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Up;                                                        // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateTwistBones
struct UARFkIk_UpdateTwistBones_Params
{
	struct FTwistBonesData                             TwistBonesData;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FTransform                                  UpperT;                                                    // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowerT;                                                    // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateThreeBoneTwistLimb
struct UARFkIk_UpdateThreeBoneTwistLimb_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          InTransforms;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateThreeBoneFkIk
struct UARFkIk_UpdateThreeBoneFkIk_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	float                                              FkIk;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStretching;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchSoftness;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoleVectorLock;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bend;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Tip;                                                       // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Low;                                                       // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Mid;                                                       // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Up;                                                        // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFootRig
struct UARFkIk_UpdateFootRig_Params
{
	struct FFootControllersData                        FootControllersData;                                       // (Parm, NativeAccessSpecifierPublic)
	float                                              FootRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToeRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeelTwist;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToeTwist;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FkIk;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFoot
struct UARFkIk_UpdateFoot_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFkIkRigs
struct UARFkIk_UpdateFkIkRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                           FkIkRigs;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFkIkRig
struct UARFkIk_UpdateFkIkRig_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFingersRig
struct UARFkIk_UpdateFingersRig_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFingersGroups
struct UARFkIk_UpdateFingersGroups_Params
{
	struct FFingersData                                FingersData;                                               // (Parm, NativeAccessSpecifierPublic)
	bool                                               bEnableFingers;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Curl;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Relax;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbCurl;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbRoll;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbPitch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThumbYaw;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ARigRuntime_EAxisEnum                              FingersAxis;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                            Offsets;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.UpdateFingers
struct UARFkIk_UpdateFingers_Params
{
	struct FFingersData                                FingersData;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.ThreeBoneIkOpt
struct UARFkIk_ThreeBoneIkOpt_Params
{
	struct FTransform                                  EffectorPos;                                               // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  RootPos;                                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  SecondIkPos;                                               // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Roll;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     UpPV;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LowPV;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpLength;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowLength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStretching;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchSoftness;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoleVectorLock;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bend;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  UpBone;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TipBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.ThreeBoneIk
struct UARFkIk_ThreeBoneIk_Params
{
	struct FTransform                                  EffectorPos;                                               // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     UpPV;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LowPV;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  UpBoneWorld;                                               // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBoneLocal;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBoneLocal;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TipBoneLocal;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                UpAimSettings;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                MidAimSettings;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                LowAimSettings;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Roll;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowStretching;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSoftStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  UpBone;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBone;                                                   // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Tip;                                                       // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.SnapTwoBoneIk
struct UARFkIk_SnapTwoBoneIk_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIkData;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.SnapThreeBoneIk
struct UARFkIk_SnapThreeBoneIk_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIkData;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.SnapFkIkLimb
struct UARFkIk_SnapFkIkLimb_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.SnapFkHierarchyRig
struct UARFkIk_SnapFkHierarchyRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                            FkHierarchyData;                                           // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.SetFingersProperties
struct UARFkIk_SetFingersProperties_Params
{
	struct FFingersData                                FingersData;                                               // (Parm, NativeAccessSpecifierPublic)
	class AARControllerFkIk*                           FkIkController;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      IkController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.PoseTwoBoneIk
struct UARFkIk_PoseTwoBoneIk_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIkData;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.PoseTwistControllers
struct UARFkIk_PoseTwistControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwistBonesData                             TwistBonesData;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.PoseThreeBoneIk
struct UARFkIk_PoseThreeBoneIk_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIkData;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.PoseFoot
struct UARFkIk_PoseFoot_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Toe;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFootControllersData                        FootControllersData;                                       // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.PoseFkIkRigs
struct UARFkIk_PoseFkIkRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                           FkIkRigs;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.PoseFingers
struct UARFkIk_PoseFingers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFingersData                                FingersData;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.ParentFkIkRigs
struct UARFkIk_ParentFkIkRigs_Params
{
	TArray<struct FFkIkData>                           FkIkRigs;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyTwoBoneIk
struct UARFkIk_KeyTwoBoneIk_Params
{
	struct FTwoBoneIkData                              TwoBoneIkData;                                             // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyTwistControllers
struct UARFkIk_KeyTwistControllers_Params
{
	struct FTwistBonesData                             TwistBonesData;                                            // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyThreeBoneIk
struct UARFkIk_KeyThreeBoneIk_Params
{
	struct FTwoBoneIkData                              TwoBoneIkData;                                             // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyFoot
struct UARFkIk_KeyFoot_Params
{
	struct FFootControllersData                        FootControllersData;                                       // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyFkIkRigs
struct UARFkIk_KeyFkIkRigs_Params
{
	TArray<struct FFkIkData>                           FkIkRigs;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyFkIkLimb
struct UARFkIk_KeyFkIkLimb_Params
{
	class ULevelSequence*                              Sequencer;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.KeyFingers
struct UARFkIk_KeyFingers_Params
{
	struct FFingersData                                FingersData;                                               // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetTwoBoneIkTwistOffsets
struct UARFkIk_GetTwoBoneIkTwistOffsets_Params
{
	struct FTransform                                  EffectorT;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  PoleVectorT;                                               // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  IkHelperT;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBoneLocalT;                                             // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBoneLocalT;                                             // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bPoleVectorSimple;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                UpAimSettings;                                             // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                MidAimSettings;                                            // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetTwoBoneIkSettings
struct UARFkIk_GetTwoBoneIkSettings_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetTwistLimbSettings
struct UARFkIk_GetTwistLimbSettings_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FTwistBonesData                             TwistBonesA;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwistBonesData                             TwistBonesB;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwistBonesData                             TwistBonesC;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetTwistBonesSettings
struct UARFkIk_GetTwistBonesSettings_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwistBonesData                             TwistBonesData;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  UpBoneT;                                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBoneT;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwistBonesData                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetThreeBoneIkTwistOffsets
struct UARFkIk_GetThreeBoneIkTwistOffsets_Params
{
	struct FTransform                                  EffectorT;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     UpPoleVectorV;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LowPoleVectorV;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  IkHelperT;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBoneLocalT;                                             // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBoneLocalT;                                             // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  TipBoneLocalT;                                             // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidBoneT;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LowBoneT;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettingsA;                                              // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettingsB;                                              // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bPoleVectorSimple;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                UpAimSettings;                                             // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                MidAimSettings;                                            // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                LowAimSettings;                                            // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetThreeBoneIkSettings
struct UARFkIk_GetThreeBoneIkSettings_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetPvPosFromMesh
struct UARFkIk_GetPvPosFromMesh_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TipBone;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiply;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetPvPosFromDir
struct UARFkIk_GetPvPosFromDir_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TipBone;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiply;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArm;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetFingersAxis
struct UARFkIk_GetFingersAxis_Params
{
	struct FFingersData                                FingersData;                                               // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      IkController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ARigRuntime_EAxisEnum                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.GetFingerRotation
struct UARFkIk_GetFingerRotation_Params
{
	float                                              Curl;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ARigRuntime_EAxisEnum                              FingersAxis;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.FkIkVis
struct UARFkIk_FkIkVis_Params
{
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateTwoBoneIkRig
struct UARFkIk_CreateTwoBoneIkRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateTwoBoneIkControllers
struct UARFkIk_CreateTwoBoneIkControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateThreeBoneIkRig
struct UARFkIk_CreateThreeBoneIkRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateThreeBoneIkControllers
struct UARFkIk_CreateThreeBoneIkControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreatePoleVectorController
struct UARFkIk_CreatePoleVectorController_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      IkController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, NativeAccessSpecifierPublic)
	struct FName                                       TipBone;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArm;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Controller;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Group;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateFootRig
struct UARFkIk_CreateFootRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFootControllersData                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateFkIkRigs
struct UARFkIk_CreateFkIkRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                           FkIkRigs;                                                  // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateFkIkRig
struct UARFkIk_CreateFkIkRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateFkIkControllerRig
struct UARFkIk_CreateFkIkControllerRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                              TwoBoneIk;                                                 // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateFkIkController
struct UARFkIk_CreateFkIkController_Params
{
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.CreateFingersRig
struct UARFkIk_CreateFingersRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                                   FkIkData;                                                  // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFingersData                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARFkIk.AimIkControllerToBone
struct UARFkIk_AimIkControllerToBone_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      IkController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      IkOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Bone;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArms;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.UpdateRig
struct UARMFunctions_UpdateRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            SourceBT;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.UpdatePoseFromSource
struct UARMFunctions_UpdatePoseFromSource_Params
{
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.UpdateModularRig
struct UARMFunctions_UpdateModularRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.UpdateCurvesFromSource
struct UARMFunctions_UpdateCurvesFromSource_Params
{
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.PoseRig
struct UARMFunctions_PoseRig_Params
{
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.KeyRig
struct UARMFunctions_KeyRig_Params
{
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.InitModularRigData
struct UARMFunctions_InitModularRigData_Params
{
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModularRigData                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.CreateModularRig
struct UARMFunctions_CreateModularRig_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.CheckSequencers
struct UARMFunctions_CheckSequencers_Params
{
	TArray<class AActor*>                              Controllers;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.BakeToAnimAssetInternal
struct UARMFunctions_BakeToAnimAssetInternal_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeZero;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FPS;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               NewAnimSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateSource;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            SourceBT;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.BakeToAnimAsset
struct UARMFunctions_BakeToAnimAsset_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartFrame;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndFrame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateSource;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            SourceBT;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	class UAnimSequence*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARMFunctions.BakeFromSequencer
struct UARMFunctions_BakeFromSequencer_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartFrame;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndFrame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                          SourceActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                             ModularRigData;                                            // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                               FaceSettings;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            SourceBT;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.RigModular.PostUpdateRig
struct ARigModular_PostUpdateRig_Params
{
};

// Function ARigRuntime.RigModular.PostCreateRig
struct ARigModular_PostCreateRig_Params
{
};

// Function ARigRuntime.RigModular.PostBakeToAnim
struct ARigModular_PostBakeToAnim_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartFrame;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndFrame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               NewAnimSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.RigModular.PostBakeFromSequencer
struct ARigModular_PostBakeFromSequencer_Params
{
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartFrame;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndFrame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.RigModular.OnUpdateRig
struct ARigModular_OnUpdateRig_Params
{
};

// Function ARigRuntime.RigModular.EditorTick
struct ARigModular_EditorTick_Params
{
};

// Function ARigRuntime.ARSplineIk.UpdateSplineIkRigs
struct UARSplineIk_UpdateSplineIkRigs_Params
{
	TArray<struct FSplineIkData>                       SplineIkRigs;                                              // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.SolveSplinePoints
struct UARSplineIk_SolveSplinePoints_Params
{
	class USplineComponent*                            SplineComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Root;                                                      // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Mid;                                                       // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Tip;                                                       // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Curvature;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSolveEnds;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.SolveSplineIkComponent
struct UARSplineIk_SolveSplineIkComponent_Params
{
	struct FSplineIkData                               SplineIkData;                                              // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     CharScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.SolveSplineIkBones
struct UARSplineIk_SolveSplineIkBones_Params
{
	struct FSplineIkData                               SplineIkData;                                              // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            BonesTransforms;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.SolveMidSplineIkCtrl
struct UARSplineIk_SolveMidSplineIkCtrl_Params
{
	class AActor*                                      Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Mid;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MidGrp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EndGrp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  OffsetA;                                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  OffsetB;                                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  OffsetUp;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MidParent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidLerp;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FkIk;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.PoseSplineIkRigs
struct UARSplineIk_PoseSplineIkRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                       SplineIkRigs;                                              // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.ParentSplineIkRigs
struct UARSplineIk_ParentSplineIkRigs_Params
{
	TArray<struct FSplineIkData>                       SpIkRigs;                                                  // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.KeySplineIkRigs
struct UARSplineIk_KeySplineIkRigs_Params
{
	TArray<struct FSplineIkData>                       SplineIkRigs;                                              // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.GetSplineIkBoneOffsets
struct UARSplineIk_GetSplineIkBoneOffsets_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSplineIkData                               SpIk;                                                      // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.GetPosOnSpline
struct UARSplineIk_GetPosOnSpline_Params
{
	class USplineComponent*                            SplineComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PosCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                                AimSettings;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.CreateSplineIkRigs
struct UARSplineIk_CreateSplineIkRigs_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                       SpIkRigs;                                                  // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARSplineIk.CreateSplineIkControllers
struct UARSplineIk_CreateSplineIkControllers_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Rig;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSplineIkData                               SpIk;                                                      // (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function ARigRuntime.ARTickableActor.OnPostEditMove
struct AARTickableActor_OnPostEditMove_Params
{
};

// Function ARigRuntime.ARTickableActor.EditorTick
struct AARTickableActor_EditorTick_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
