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

// Function ARigRuntime.ARController.LimitTransformations
// (Native, Public, BlueprintCallable)
void AARController::LimitTransformations()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARController.LimitTransformations");

	AARController_LimitTransformations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.AnimOffset.UpdateAnimOffset
// (Final, Native, Public, BlueprintCallable)
void AAnimOffset::UpdateAnimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.AnimOffset.UpdateAnimOffset");

	AAnimOffset_UpdateAnimOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*      SkelMeshActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_UpdateSkeletalMeshSection(class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SkelMeshActor, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshSection");

	UARigFunctions_UpdateSkeletalMeshSection_Params params;
	params.LevelSequence = LevelSequence;
	params.SkelMeshActor = SkelMeshActor;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshPose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_UpdateSkeletalMeshPose(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshPose");

	UARigFunctions_UpdateSkeletalMeshPose_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateSequncerComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection* TransformSection               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_UpdateSequncerComponent(class UMovieScene3DTransformSection* TransformSection, class USceneComponent* SceneComponent, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateSequncerComponent");

	UARigFunctions_UpdateSequncerComponent_Params params;
	params.TransformSection = TransformSection;
	params.SceneComponent = SceneComponent;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateSequncer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_UpdateSequncer(class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateSequncer");

	UARigFunctions_UpdateSequncer_Params params;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateSequencerActorTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_UpdateSequencerActorTransform(class ULevelSequence* LevelSequence, class AActor* Actor, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateSequencerActorTransform");

	UARigFunctions_UpdateSequencerActorTransform_Params params;
	params.LevelSequence = LevelSequence;
	params.Actor = Actor;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateFloatSectionProperty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatSection* FloatSection                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_UpdateFloatSectionProperty(class UMovieSceneFloatSection* FloatSection, class AActor* Actor, const struct FName& PropertyName, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateFloatSectionProperty");

	UARigFunctions_UpdateFloatSectionProperty_Params params;
	params.FloatSection = FloatSection;
	params.Actor = Actor;
	params.PropertyName = PropertyName;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.UpdateAllConstraints
// (Final, Native, Static, Public, BlueprintCallable)
void UARigFunctions::STATIC_UpdateAllConstraints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.UpdateAllConstraints");

	UARigFunctions_UpdateAllConstraints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.TwoBoneIkOpt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Effector                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 PoleVector                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InRootPos                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          UpperLimbLength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LowerLimbLength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSoftStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchSoftness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PoleVectorLock                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              RootBone                       (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              TipBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_TwoBoneIkOpt(const struct FTransform& Effector, const struct FVector& PoleVector, const struct FVector& InRootPos, float UpperLimbLength, float LowerLimbLength, float StretchScale, bool bAutoStretch, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, struct FTransform* RootBone, struct FTransform* MidBone, struct FTransform* TipBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.TwoBoneIkOpt");

	UARigFunctions_TwoBoneIkOpt_Params params;
	params.Effector = Effector;
	params.PoleVector = PoleVector;
	params.InRootPos = InRootPos;
	params.UpperLimbLength = UpperLimbLength;
	params.LowerLimbLength = LowerLimbLength;
	params.StretchScale = StretchScale;
	params.bAutoStretch = bAutoStretch;
	params.bSoftStretch = bSoftStretch;
	params.StretchSoftness = StretchSoftness;
	params.PoleVectorLock = PoleVectorLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RootBone != nullptr)
		*RootBone = params.RootBone;
	if (MidBone != nullptr)
		*MidBone = params.MidBone;
	if (TipBone != nullptr)
		*TipBone = params.TipBone;

}


// Function ARigRuntime.ARigFunctions.TwoBoneIk
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              EffectorPos                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 PoleVector                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              InUpBone                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBoneLocal                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBoneLocal                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bUseAimSettings                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            UpAimSettings                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            MidAimSettings                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSoftStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              UpBone                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_TwoBoneIk(const struct FTransform& EffectorPos, const struct FVector& PoleVector, const struct FTransform& InUpBone, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, bool bUseAimSettings, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.TwoBoneIk");

	UARigFunctions_TwoBoneIk_Params params;
	params.EffectorPos = EffectorPos;
	params.PoleVector = PoleVector;
	params.InUpBone = InUpBone;
	params.MidBoneLocal = MidBoneLocal;
	params.LowBoneLocal = LowBoneLocal;
	params.bUseAimSettings = bUseAimSettings;
	params.UpAimSettings = UpAimSettings;
	params.MidAimSettings = MidAimSettings;
	params.bAllowStretching = bAllowStretching;
	params.bSoftStretch = bSoftStretch;
	params.StretchScale = StretchScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpBone != nullptr)
		*UpBone = params.UpBone;
	if (MidBone != nullptr)
		*MidBone = params.MidBone;
	if (LowBone != nullptr)
		*LowBone = params.LowBone;

}


// Function ARigRuntime.ARigFunctions.StringsToNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         Strings                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UARigFunctions::STATIC_StringsToNames(TArray<struct FString> Strings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.StringsToNames");

	UARigFunctions_StringsToNames_Params params;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.ShiftTransformSectionAnim
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection* TransformSection               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ShiftAnim                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_ShiftTransformSectionAnim(class UMovieScene3DTransformSection* TransformSection, float ShiftAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.ShiftTransformSectionAnim");

	UARigFunctions_ShiftTransformSectionAnim_Params params;
	params.TransformSection = TransformSection;
	params.ShiftAnim = ShiftAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.SetTransformSectionKey
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* TransformSection               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Translation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SetTransformSectionKey(class AActor* Actor, class UMovieScene3DTransformSection* TransformSection, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetTransformSectionKey");

	UARigFunctions_SetTransformSectionKey_Params params;
	params.Actor = Actor;
	params.TransformSection = TransformSection;
	params.Transform = Transform;
	params.Time = Time;
	params.Translation = Translation;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function ARigRuntime.ARigFunctions.SetTransformKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Translation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARigFunctions::STATIC_SetTransformKey(class ULevelSequence* LevelSequence, class AActor* Actor, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetTransformKey");

	UARigFunctions_SetTransformKey_Params params;
	params.LevelSequence = LevelSequence;
	params.Actor = Actor;
	params.Transform = Transform;
	params.Time = Time;
	params.Translation = Translation;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.SetSelectable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSelectable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SetSelectable(class UPrimitiveComponent* Component, bool bSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetSelectable");

	UARigFunctions_SetSelectable_Params params;
	params.Component = Component;
	params.bSelectable = bSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.SetSectionStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      MovieSceneSection              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SetSectionStartTime(class UMovieSceneSection* MovieSceneSection, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetSectionStartTime");

	UARigFunctions_SetSectionStartTime_Params params;
	params.MovieSceneSection = MovieSceneSection;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.SetSectionEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      MovieSceneSection              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SetSectionEndTime(class UMovieSceneSection* MovieSceneSection, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetSectionEndTime");

	UARigFunctions_SetSectionEndTime_Params params;
	params.MovieSceneSection = MovieSceneSection;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.SetMorphTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TargetName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SetMorphTarget(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FName& TargetName, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetMorphTarget");

	UARigFunctions_SetMorphTarget_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.TargetName = TargetName;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.SetActorSelectable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSelectable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SetActorSelectable(class AActor* Actor, bool bSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SetActorSelectable");

	UARigFunctions_SetActorSelectable_Params params;
	params.Actor = Actor;
	params.bSelectable = bSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.SelectActorInEditor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_SelectActorInEditor(class AActor* Actor, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.SelectActorInEditor");

	UARigFunctions_SelectActorInEditor_Params params;
	params.Actor = Actor;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.RenameActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   NewName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_RenameActor(class AActor* Actor, const struct FName& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.RenameActor");

	UARigFunctions_RenameActor_Params params;
	params.Actor = Actor;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.RemoveTrackFromBinding
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  TrackClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_RemoveTrackFromBinding(class ULevelSequence* LevelSequence, class UClass* TrackClass, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.RemoveTrackFromBinding");

	UARigFunctions_RemoveTrackFromBinding_Params params;
	params.LevelSequence = LevelSequence;
	params.TrackClass = TrackClass;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.RemoveStaticCurvesForActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bRemoveBinding                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_RemoveStaticCurvesForActors(class ULevelSequence* LevelSequence, TArray<class AActor*> Actors, bool bRemoveBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.RemoveStaticCurvesForActors");

	UARigFunctions_RemoveStaticCurvesForActors_Params params;
	params.LevelSequence = LevelSequence;
	params.Actors = Actors;
	params.bRemoveBinding = bRemoveBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.RemoveStaticCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRemoveBinding                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_RemoveStaticCurves(class ULevelSequence* LevelSequence, bool bRemoveBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.RemoveStaticCurves");

	UARigFunctions_RemoveStaticCurves_Params params;
	params.LevelSequence = LevelSequence;
	params.bRemoveBinding = bRemoveBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.RemoveBindingFromSequencer
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_RemoveBindingFromSequencer(class ULevelSequence* LevelSequence, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.RemoveBindingFromSequencer");

	UARigFunctions_RemoveBindingFromSequencer_Params params;
	params.LevelSequence = LevelSequence;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.RemapVectorFromAim
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          RollValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InVector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARigFunctions::STATIC_RemapVectorFromAim(float RollValue, const struct FVector& InVector, const struct FAimSettings& AimSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.RemapVectorFromAim");

	UARigFunctions_RemapVectorFromAim_Params params;
	params.RollValue = RollValue;
	params.InVector = InVector;
	params.AimSettings = AimSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.PromtDialogue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Ok                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Cancel                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>         Objects                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARigFunctions::STATIC_PromtDialogue(const struct FString& Title, const struct FString& Message, const struct FString& Ok, const struct FString& Cancel, TArray<class UObject*> Objects)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.PromtDialogue");

	UARigFunctions_PromtDialogue_Params params;
	params.Title = Title;
	params.Message = Message;
	params.Ok = Ok;
	params.Cancel = Cancel;
	params.Objects = Objects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.PreviewSetAnimPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SequenceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*       InAnimSequence                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InPosition                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_PreviewSetAnimPosition(class USkeletalMeshComponent* SkelMeshComp, int SequenceIndex, class UAnimSequenceBase* InAnimSequence, float InPosition, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.PreviewSetAnimPosition");

	UARigFunctions_PreviewSetAnimPosition_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.SequenceIndex = SequenceIndex;
	params.InAnimSequence = InAnimSequence;
	params.InPosition = InPosition;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.PostProcessAnimSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_PostProcessAnimSequence(class UAnimSequence* AnimSequence, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.PostProcessAnimSequence");

	UARigFunctions_PostProcessAnimSequence_Params params;
	params.AnimSequence = AnimSequence;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.PostEditChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_PostEditChange(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.PostEditChange");

	UARigFunctions_PostEditChange_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.PasteKeysToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* SourceSection                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PasteTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieScene3DTransformSection* UARigFunctions::STATIC_PasteKeysToActor(class ULevelSequence* LevelSequence, class AActor* Actor, class UMovieScene3DTransformSection* SourceSection, float PasteTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.PasteKeysToActor");

	UARigFunctions_PasteKeysToActor_Params params;
	params.LevelSequence = LevelSequence;
	params.Actor = Actor;
	params.SourceSection = SourceSection;
	params.PasteTime = PasteTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.ParentConstraintLerp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              A                              (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              B                              (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              OffsetA                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              OffsetB                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARigFunctions::STATIC_ParentConstraintLerp(const struct FTransform& A, const struct FTransform& B, const struct FTransform& OffsetA, const struct FTransform& OffsetB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.ParentConstraintLerp");

	UARigFunctions_ParentConstraintLerp_Params params;
	params.A = A;
	params.B = B;
	params.OffsetA = OffsetA;
	params.OffsetB = OffsetB;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.Parent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_Parent(class AActor* Child, class AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.Parent");

	UARigFunctions_Parent_Params params;
	params.Child = Child;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.OpenEditorForAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_OpenEditorForAsset(class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.OpenEditorForAsset");

	UARigFunctions_OpenEditorForAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.NotificationBox
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeIn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Expire                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FadeOut                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOutputLog                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_NotificationBox(const struct FString& String, float FadeIn, float Expire, float FadeOut, bool bOutputLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.NotificationBox");

	UARigFunctions_NotificationBox_Params params;
	params.String = String;
	params.FadeIn = FadeIn;
	params.Expire = Expire;
	params.FadeOut = FadeOut;
	params.bOutputLog = bOutputLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.ModifyObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_ModifyObject(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.ModifyObject");

	UARigFunctions_ModifyObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.MatchesWildcard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SourceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Wildcard                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<CoreUObject_ESearchCase> SearchCase                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARigFunctions::STATIC_MatchesWildcard(const struct FName& SourceName, const struct FName& Wildcard, TEnumAsByte<CoreUObject_ESearchCase> SearchCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.MatchesWildcard");

	UARigFunctions_MatchesWildcard_Params params;
	params.SourceName = SourceName;
	params.Wildcard = Wildcard;
	params.SearchCase = SearchCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.LerpVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARigFunctions::STATIC_LerpVector(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.LerpVector");

	UARigFunctions_LerpVector_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.KeyAllActiveCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_KeyAllActiveCurves(class USkeletalMeshComponent* SkelMeshComp, class UAnimSequence* AnimSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.KeyAllActiveCurves");

	UARigFunctions_KeyAllActiveCurves_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.AnimSequence = AnimSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.IsSequencerHasBindingForActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARigFunctions::STATIC_IsSequencerHasBindingForActor(class AActor* Actor, class ULevelSequence* LevelSequence, struct FGuid* Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.IsSequencerHasBindingForActor");

	UARigFunctions_IsSequencerHasBindingForActor_Params params;
	params.Actor = Actor;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Guid != nullptr)
		*Guid = params.Guid;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GroupController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UARigFunctions::STATIC_GroupController(class AActor* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GroupController");

	UARigFunctions_GroupController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetWeightedAverageVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         Vectors                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  Weights                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARigFunctions::STATIC_GetWeightedAverageVector(TArray<struct FVector> Vectors, TArray<float> Weights)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetWeightedAverageVector");

	UARigFunctions_GetWeightedAverageVector_Params params;
	params.Vectors = Vectors;
	params.Weights = Weights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetWeightedAverageTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FTransform>      Transforms                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Offsets                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  Weights                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARigFunctions::STATIC_GetWeightedAverageTransform(TArray<struct FTransform> Transforms, TArray<struct FTransform> Offsets, TArray<float> Weights)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetWeightedAverageTransform");

	UARigFunctions_GetWeightedAverageTransform_Params params;
	params.Transforms = Transforms;
	params.Offsets = Offsets;
	params.Weights = Weights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetWeightedAverageRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FRotator>        Rotators                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  Weights                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UARigFunctions::STATIC_GetWeightedAverageRotator(TArray<struct FRotator> Rotators, TArray<float> Weights)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetWeightedAverageRotator");

	UARigFunctions_GetWeightedAverageRotator_Params params;
	params.Rotators = Rotators;
	params.Weights = Weights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetTransformSectionsForActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UMovieScene3DTransformSection*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UMovieScene3DTransformSection*> UARigFunctions::STATIC_GetTransformSectionsForActors(class ULevelSequence* LevelSequence, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetTransformSectionsForActors");

	UARigFunctions_GetTransformSectionsForActors_Params params;
	params.LevelSequence = LevelSequence;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetTransformSectionFromBinding
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieScene3DTransformSection* UARigFunctions::STATIC_GetTransformSectionFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetTransformSectionFromBinding");

	UARigFunctions_GetTransformSectionFromBinding_Params params;
	params.LevelSequence = LevelSequence;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetTransformSectionFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieScene3DTransformSection* UARigFunctions::STATIC_GetTransformSectionFromActor(class ULevelSequence* LevelSequence, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetTransformSectionFromActor");

	UARigFunctions_GetTransformSectionFromActor_Params params;
	params.LevelSequence = LevelSequence;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetSpaceBases
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*   SkinnedMeshComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      SpaceBases                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_GetSpaceBases(class USkinnedMeshComponent* SkinnedMeshComponent, TArray<struct FTransform>* SpaceBases)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSpaceBases");

	UARigFunctions_GetSpaceBases_Params params;
	params.SkinnedMeshComponent = SkinnedMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpaceBases != nullptr)
		*SpaceBases = params.SpaceBases;

}


// Function ARigRuntime.ARigFunctions.GetSoftIkStretchDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ChainLength                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SoftPoint                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARigFunctions::STATIC_GetSoftIkStretchDistance(float Distance, float ChainLength, float SoftPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSoftIkStretchDistance");

	UARigFunctions_GetSoftIkStretchDistance_Params params;
	params.Distance = Distance;
	params.ChainLength = ChainLength;
	params.SoftPoint = SoftPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetSequencersWithActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UObject*>         LevelSequences                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARigFunctions::STATIC_GetSequencersWithActors(TArray<class AActor*> Actors, TArray<class UObject*>* LevelSequences)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSequencersWithActors");

	UARigFunctions_GetSequencersWithActors_Params params;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LevelSequences != nullptr)
		*LevelSequences = params.LevelSequences;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetSequencerPlaybackRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlaybackStart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlaybackEnd                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_GetSequencerPlaybackRange(class ULevelSequence* LevelSequence, int* PlaybackStart, int* PlaybackEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSequencerPlaybackRange");

	UARigFunctions_GetSequencerPlaybackRange_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlaybackStart != nullptr)
		*PlaybackStart = params.PlaybackStart;
	if (PlaybackEnd != nullptr)
		*PlaybackEnd = params.PlaybackEnd;

}


// Function ARigRuntime.ARigFunctions.GetSequencerFrameRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARigFunctions::STATIC_GetSequencerFrameRate(class ULevelSequence* LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSequencerFrameRate");

	UARigFunctions_GetSequencerFrameRate_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetSequencerFrameInterval
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARigFunctions::STATIC_GetSequencerFrameInterval(class ULevelSequence* LevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSequencerFrameInterval");

	UARigFunctions_GetSequencerFrameInterval_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetSequencerComponents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGuid>           Guids                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class USceneComponent*> SceneComponents                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_GetSequencerComponents(class ULevelSequence* LevelSequence, TArray<struct FGuid>* Guids, TArray<class USceneComponent*>* SceneComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetSequencerComponents");

	UARigFunctions_GetSequencerComponents_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Guids != nullptr)
		*Guids = params.Guids;
	if (SceneComponents != nullptr)
		*SceneComponents = params.SceneComponents;

}


// Function ARigRuntime.ARigFunctions.GetRigMapping
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeleton*               Skeleton                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           BaseNames                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FName>           RigNames                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_GetRigMapping(class USkeleton* Skeleton, TArray<struct FName> BaseNames, TArray<struct FName>* RigNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetRigMapping");

	UARigFunctions_GetRigMapping_Params params;
	params.Skeleton = Skeleton;
	params.BaseNames = BaseNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RigNames != nullptr)
		*RigNames = params.RigNames;

}


// Function ARigRuntime.ARigFunctions.GetPoleVectorLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Up                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Mid                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Multiply                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARigFunctions::STATIC_GetPoleVectorLocation(const struct FVector& Up, const struct FVector& Mid, const struct FVector& End, float Multiply)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetPoleVectorLocation");

	UARigFunctions_GetPoleVectorLocation_Params params;
	params.Up = Up;
	params.Mid = Mid;
	params.End = End;
	params.Multiply = Multiply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetLastRenderTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARigFunctions::STATIC_GetLastRenderTime(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetLastRenderTime");

	UARigFunctions_GetLastRenderTime_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetFloatSectionsFromBinding
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMovieSceneFloatSection*> FloatSections                  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FName>           PropertyNames                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_GetFloatSectionsFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid, TArray<class UMovieSceneFloatSection*>* FloatSections, TArray<struct FName>* PropertyNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetFloatSectionsFromBinding");

	UARigFunctions_GetFloatSectionsFromBinding_Params params;
	params.LevelSequence = LevelSequence;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloatSections != nullptr)
		*FloatSections = params.FloatSections;
	if (PropertyNames != nullptr)
		*PropertyNames = params.PropertyNames;

}


// Function ARigRuntime.ARigFunctions.GetControllerByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UARigFunctions::STATIC_GetControllerByName(const struct FName& Name, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetControllerByName");

	UARigFunctions_GetControllerByName_Params params;
	params.Name = Name;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetClosestAxis
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 TargetVector                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 FirstAxis                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SecondAxis                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_GetClosestAxis(const struct FVector& TargetVector, const struct FTransform& Transform, struct FString* FirstAxis, struct FString* SecondAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetClosestAxis");

	UARigFunctions_GetClosestAxis_Params params;
	params.TargetVector = TargetVector;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FirstAxis != nullptr)
		*FirstAxis = params.FirstAxis;
	if (SecondAxis != nullptr)
		*SecondAxis = params.SecondAxis;

}


// Function ARigRuntime.ARigFunctions.GetBoneSocketTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARigFunctions::STATIC_GetBoneSocketTransform(class USkeletalMeshComponent* SkelMeshComp, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetBoneSocketTransform");

	UARigFunctions_GetBoneSocketTransform_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetBonesHierarchy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   RootBone                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TipBone                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UARigFunctions::STATIC_GetBonesHierarchy(class USkeletalMeshComponent* SkelMeshComp, const struct FName& RootBone, const struct FName& TipBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetBonesHierarchy");

	UARigFunctions_GetBonesHierarchy_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.RootBone = RootBone;
	params.TipBone = TipBone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetAssetWithOpenedEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UARigFunctions::STATIC_GetAssetWithOpenedEditor(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetAssetWithOpenedEditor");

	UARigFunctions_GetAssetWithOpenedEditor_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetAssetsByClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UObject*> UARigFunctions::STATIC_GetAssetsByClass(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetAssetsByClass");

	UARigFunctions_GetAssetsByClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetAnimSectionsFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMovieSceneSkeletalAnimationSection*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UMovieSceneSkeletalAnimationSection*> UARigFunctions::STATIC_GetAnimSectionsFromActor(class ULevelSequence* LevelSequence, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetAnimSectionsFromActor");

	UARigFunctions_GetAnimSectionsFromActor_Params params;
	params.LevelSequence = LevelSequence;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetAimSettings
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Aim                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Up                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAimSettings UARigFunctions::STATIC_GetAimSettings(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetAimSettings");

	UARigFunctions_GetAimSettings_Params params;
	params.Aim = Aim;
	params.Up = Up;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.GetAimAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Aim                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Up                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAimSettings UARigFunctions::STATIC_GetAimAxis(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.GetAimAxis");

	UARigFunctions_GetAimAxis_Params params;
	params.Aim = Aim;
	params.Up = Up;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.FilterAimOffsetAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// ARigRuntime_EAxisEnum          AimAxis                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UARigFunctions::STATIC_FilterAimOffsetAxis(ARigRuntime_EAxisEnum AimAxis, const struct FRotator& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.FilterAimOffsetAxis");

	UARigFunctions_FilterAimOffsetAxis_Params params;
	params.AimAxis = AimAxis;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.EvaluateTransformSection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection* TransformSection               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARigFunctions::STATIC_EvaluateTransformSection(class UMovieScene3DTransformSection* TransformSection, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.EvaluateTransformSection");

	UARigFunctions_EvaluateTransformSection_Params params;
	params.TransformSection = TransformSection;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.EvaluateFloatSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatSection* FloatSection                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARigFunctions::STATIC_EvaluateFloatSection(class UMovieSceneFloatSection* FloatSection, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.EvaluateFloatSection");

	UARigFunctions_EvaluateFloatSection_Params params;
	params.FloatSection = FloatSection;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.CreateEmptyController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UARigFunctions::STATIC_CreateEmptyController(class AActor* Rig, const struct FName& Name, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CreateEmptyController");

	UARigFunctions_CreateEmptyController_Params params;
	params.Rig = Rig;
	params.Name = Name;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.CreateControllerFromSocket
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Ending                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FControllerShapeData    Shape                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerLimits       Limits                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Group                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGroup                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldOrientation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateOffset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_CreateControllerFromSocket(class UClass* Class, class AActor* Rig, class USkeletalMeshComponent* SkelMeshComp, const struct FName& Name, const struct FName& Ending, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, class AActor** Controller, class AActor** Group, class AActor** Offset, bool bGroup, bool bWorldOrientation, bool bCreateOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CreateControllerFromSocket");

	UARigFunctions_CreateControllerFromSocket_Params params;
	params.Class = Class;
	params.Rig = Rig;
	params.SkelMeshComp = SkelMeshComp;
	params.Name = Name;
	params.Ending = Ending;
	params.Shape = Shape;
	params.Limits = Limits;
	params.bGroup = bGroup;
	params.bWorldOrientation = bWorldOrientation;
	params.bCreateOffset = bCreateOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
	if (Group != nullptr)
		*Group = params.Group;
	if (Offset != nullptr)
		*Offset = params.Offset;

}


// Function ARigRuntime.ARigFunctions.CreateController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerShapeData    Shape                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerLimits       Limits                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                RelativeRotation               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UARigFunctions::STATIC_CreateController(class UClass* Class, class AActor* Rig, const struct FName& Name, const struct FTransform& Transform, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, const struct FRotator& RelativeRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CreateController");

	UARigFunctions_CreateController_Params params;
	params.Class = Class;
	params.Rig = Rig;
	params.Name = Name;
	params.Transform = Transform;
	params.Shape = Shape;
	params.Limits = Limits;
	params.RelativeRotation = RelativeRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.CreateConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Targets                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bVisibility                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  UpActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ARigConstraint*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARigConstraint* UARigFunctions::STATIC_CreateConstraint(class UClass* Class, TArray<class AActor*> Targets, bool bVisibility, class AActor* UpActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CreateConstraint");

	UARigFunctions_CreateConstraint_Params params;
	params.Class = Class;
	params.Targets = Targets;
	params.bVisibility = bVisibility;
	params.UpActor = UpActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.CreateAnimSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           AnimSequence                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_CreateAnimSequence(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence** AnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CreateAnimSequence");

	UARigFunctions_CreateAnimSequence_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimSequence != nullptr)
		*AnimSequence = params.AnimSequence;

}


// Function ARigRuntime.ARigFunctions.CopyTransformSectionCurve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection* SourceTransformSection         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* TargetTransformSection         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ARigRuntime_ETransformType     TransformType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<CoreUObject_EAxis> Axis                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_CopyTransformSectionCurve(class UMovieScene3DTransformSection* SourceTransformSection, class UMovieScene3DTransformSection* TargetTransformSection, ARigRuntime_ETransformType TransformType, TEnumAsByte<CoreUObject_EAxis> Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CopyTransformSectionCurve");

	UARigFunctions_CopyTransformSectionCurve_Params params;
	params.SourceTransformSection = SourceTransformSection;
	params.TargetTransformSection = TargetTransformSection;
	params.TransformType = TransformType;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.ConvertTransformToRelativeReverse
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              WorldTransform                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LocalTransform                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARigFunctions::STATIC_ConvertTransformToRelativeReverse(const struct FTransform& WorldTransform, const struct FTransform& LocalTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.ConvertTransformToRelativeReverse");

	UARigFunctions_ConvertTransformToRelativeReverse_Params params;
	params.WorldTransform = WorldTransform;
	params.LocalTransform = LocalTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.CloseAllEditorsForAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_CloseAllEditorsForAsset(class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.CloseAllEditorsForAsset");

	UARigFunctions_CloseAllEditorsForAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.AppendName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   A                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARigFunctions::STATIC_AppendName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AppendName");

	UARigFunctions_AppendName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.AimConstraint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Aim                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Up                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UARigFunctions::STATIC_AimConstraint(const struct FVector& Aim, const struct FVector& Up, const struct FVector& Target, const struct FAimSettings& AimSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AimConstraint");

	UARigFunctions_AimConstraint_Params params;
	params.Aim = Aim;
	params.Up = Up;
	params.Target = Target;
	params.AimSettings = AimSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.AddTransformTrack
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartFrame                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndFrame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieScene3DTransformSection* UARigFunctions::STATIC_AddTransformTrack(class ULevelSequence* LevelSequence, const struct FGuid& Guid, float StartFrame, float EndFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddTransformTrack");

	UARigFunctions_AddTransformTrack_Params params;
	params.LevelSequence = LevelSequence;
	params.Guid = Guid;
	params.StartFrame = StartFrame;
	params.EndFrame = EndFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.AddToArrayOfNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   AddName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           InNames                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UARigFunctions::STATIC_AddToArrayOfNames(const struct FName& AddName, TArray<struct FName> InNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddToArrayOfNames");

	UARigFunctions_AddToArrayOfNames_Params params;
	params.AddName = AddName;
	params.InNames = InNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.AddToArrayOfActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AddActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          InActors                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> UARigFunctions::STATIC_AddToArrayOfActors(class AActor* AddActor, TArray<class AActor*> InActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddToArrayOfActors");

	UARigFunctions_AddToArrayOfActors_Params params;
	params.AddActor = AddActor;
	params.InActors = InActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.AddRawKeyFromPose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrameRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_AddRawKeyFromPose(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence* AnimSequence, float FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddRawKeyFromPose");

	UARigFunctions_AddRawKeyFromPose_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.AnimSequence = AnimSequence;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.AddCurveValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_AddCurveValue(class USkeletalMeshComponent* SkelMeshComp, const struct FName& CurveName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddCurveValue");

	UARigFunctions_AddCurveValue_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.CurveName = CurveName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.AddCurveKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TargetName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARigFunctions::STATIC_AddCurveKey(class UAnimSequence* AnimSequence, const struct FName& TargetName, float Time, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddCurveKey");

	UARigFunctions_AddCurveKey_Params params;
	params.AnimSequence = AnimSequence;
	params.TargetName = TargetName;
	params.Time = Time;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARigFunctions.AddBindingToSequencer
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UARigFunctions::STATIC_AddBindingToSequencer(class ULevelSequence* LevelSequence, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddBindingToSequencer");

	UARigFunctions_AddBindingToSequencer_Params params;
	params.LevelSequence = LevelSequence;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARigFunctions.AddAnimTrack
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneSkeletalAnimationSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneSkeletalAnimationSection* UARigFunctions::STATIC_AddAnimTrack(class ULevelSequence* LevelSequence, class UAnimSequence* AnimSequence, const struct FGuid& Guid, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARigFunctions.AddAnimTrack");

	UARigFunctions_AddAnimTrack_Params params;
	params.LevelSequence = LevelSequence;
	params.AnimSequence = AnimSequence;
	params.Guid = Guid;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARCustomCtrl.UpdateCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomControllerData> CustomControllers              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARCustomCtrl::STATIC_UpdateCustomControllers(TArray<struct FCustomControllerData> CustomControllers, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARCustomCtrl.UpdateCustomControllers");

	UARCustomCtrl_UpdateCustomControllers_Params params;
	params.CustomControllers = CustomControllers;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARCustomCtrl.PoseCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCustomControllerData> CustomControllers              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARCustomCtrl::STATIC_PoseCustomControllers(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FCustomControllerData> CustomControllers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARCustomCtrl.PoseCustomControllers");

	UARCustomCtrl_PoseCustomControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.CustomControllers = CustomControllers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARCustomCtrl.ParentCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomControllerData> InCC                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARCustomCtrl::STATIC_ParentCustomControllers(TArray<struct FCustomControllerData> InCC, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARCustomCtrl.ParentCustomControllers");

	UARCustomCtrl_ParentCustomControllers_Params params;
	params.InCC = InCC;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARCustomCtrl.KeyCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomControllerData> CustomControllers              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARCustomCtrl::STATIC_KeyCustomControllers(TArray<struct FCustomControllerData> CustomControllers, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARCustomCtrl.KeyCustomControllers");

	UARCustomCtrl_KeyCustomControllers_Params params;
	params.CustomControllers = CustomControllers;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARCustomCtrl.CreateCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCustomControllerData> InCC                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FCustomControllerData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FCustomControllerData> UARCustomCtrl::STATIC_CreateCustomControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, TArray<struct FCustomControllerData> InCC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARCustomCtrl.CreateCustomControllers");

	UARCustomCtrl_CreateCustomControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.InCC = InCC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.UpdateMorphTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
void UARFace::STATIC_UpdateMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.UpdateMorphTargets");

	UARFace_UpdateMorphTargets_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.UpdateFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFace::STATIC_UpdateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.UpdateFaceRig");

	UARFace_UpdateFaceRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.UpdateEyes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      EyesTransforms                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFace::STATIC_UpdateEyes(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, TArray<struct FTransform>* EyesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.UpdateEyes");

	UARFace_UpdateEyes_Params params;
	params.FaceSettings = FaceSettings;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EyesTransforms != nullptr)
		*EyesTransforms = params.EyesTransforms;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.UpdateEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      EyesTransforms                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFace::STATIC_UpdateEyelids(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, TArray<struct FTransform> EyesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.UpdateEyelids");

	UARFace_UpdateEyelids_Params params;
	params.FaceSettings = FaceSettings;
	params.BonesTransforms = BonesTransforms;
	params.EyesTransforms = EyesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.PoseMorphTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
void UARFace::STATIC_PoseMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.PoseMorphTargets");

	UARFace_PoseMorphTargets_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.PoseFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
void UARFace::STATIC_PoseFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.PoseFaceRig");

	UARFace_PoseFaceRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.PoseEyes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
void UARFace::STATIC_PoseEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.PoseEyes");

	UARFace_PoseEyes_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.PoseEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
void UARFace::STATIC_PoseEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.PoseEyelids");

	UARFace_PoseEyelids_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.KeyMorphTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFace::STATIC_KeyMorphTargets(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.KeyMorphTargets");

	UARFace_KeyMorphTargets_Params params;
	params.FaceSettings = FaceSettings;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.KeyMorphTargetCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class UAnimSequence*           AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateFromSource              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFace::STATIC_KeyMorphTargetCurves(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class UAnimSequence* AnimSequence, float Time, bool bUpdateFromSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.KeyMorphTargetCurves");

	UARFace_KeyMorphTargetCurves_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;
	params.AnimSequence = AnimSequence;
	params.Time = Time;
	params.bUpdateFromSource = bUpdateFromSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.KeyFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFace::STATIC_KeyFaceRig(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.KeyFaceRig");

	UARFace_KeyFaceRig_Params params;
	params.FaceSettings = FaceSettings;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.KeyEyes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFace::STATIC_KeyEyes(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.KeyEyes");

	UARFace_KeyEyes_Params params;
	params.FaceSettings = FaceSettings;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.KeyEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFace::STATIC_KeyEyelids(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.KeyEyelids");

	UARFace_KeyEyelids_Params params;
	params.FaceSettings = FaceSettings;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFace.InitFaceRigData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FFaceSettings           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFaceSettings UARFace::STATIC_InitFaceRigData(const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.InitFaceRigData");

	UARFace_InitFaceRigData_Params params;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.GetEyelidsRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 CtrlPos                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                BoneSpaceR                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          PosMult                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Follow                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UARFace::STATIC_GetEyelidsRotation(const struct FVector& CtrlPos, const struct FRotator& BoneSpaceR, const struct FAimSettings& AimSettings, float PosMult, float Follow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.GetEyelidsRotation");

	UARFace_GetEyelidsRotation_Params params;
	params.CtrlPos = CtrlPos;
	params.BoneSpaceR = BoneSpaceR;
	params.AimSettings = AimSettings;
	params.PosMult = PosMult;
	params.Follow = Follow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.FaceParentController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFaceSettings UARFace::STATIC_FaceParentController(const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.FaceParentController");

	UARFace_FaceParentController_Params params;
	params.FaceSettings = FaceSettings;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.CreateMorphControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFaceSettings UARFace::STATIC_CreateMorphControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.CreateMorphControllers");

	UARFace_CreateMorphControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.CreateFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFaceSettings UARFace::STATIC_CreateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.CreateFaceRig");

	UARFace_CreateFaceRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.CreateEyes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFaceSettings UARFace::STATIC_CreateEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.CreateEyes");

	UARFace_CreateEyes_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.CreateEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFaceSettings UARFace::STATIC_CreateEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.CreateEyelids");

	UARFace_CreateEyelids_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FaceSettings = FaceSettings;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFace.ConvertVectorToXZValues
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UARFace::STATIC_ConvertVectorToXZValues(const struct FVector& Vector, float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFace.ConvertVectorToXZValues");

	UARFace_ConvertVectorToXZValues_Params params;
	params.Vector = Vector;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkHierarchy.UpdateFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFkHierarchyData> FkHierarchy                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkHierarchy::STATIC_UpdateFkHierarchyRigs(TArray<struct FFkHierarchyData> FkHierarchy, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.UpdateFkHierarchyRigs");

	UARFkHierarchy_UpdateFkHierarchyRigs_Params params;
	params.FkHierarchy = FkHierarchy;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkHierarchyData> FkHierarchyRigs                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARFkHierarchy::STATIC_PoseFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkHierarchyData> FkHierarchyRigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRigs");

	UARFkHierarchy_PoseFkHierarchyRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkHierarchyRigs = FkHierarchyRigs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkHierarchyData        FkHierarchyData                (Parm, NativeAccessSpecifierPublic)
void UARFkHierarchy::STATIC_PoseFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRig");

	UARFkHierarchy_PoseFkHierarchyRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkHierarchyData = FkHierarchyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkHierarchy.ParentFkHierarchyRigs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FFkHierarchyData> FkHRigs                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkHierarchy::STATIC_ParentFkHierarchyRigs(TArray<struct FFkHierarchyData>* FkHRigs, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.ParentFkHierarchyRigs");

	UARFkHierarchy_ParentFkHierarchyRigs_Params params;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FkHRigs != nullptr)
		*FkHRigs = params.FkHRigs;

}


// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFkHierarchyData> FkHierarchyRigs                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkHierarchy::STATIC_KeyFkHierarchyRigs(TArray<struct FFkHierarchyData> FkHierarchyRigs, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRigs");

	UARFkHierarchy_KeyFkHierarchyRigs_Params params;
	params.FkHierarchyRigs = FkHierarchyRigs;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkHierarchyData        FkHierarchyData                (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkHierarchy::STATIC_KeyFkHierarchyRig(const struct FFkHierarchyData& FkHierarchyData, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRig");

	UARFkHierarchy_KeyFkHierarchyRig_Params params;
	params.FkHierarchyData = FkHierarchyData;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkHierarchyData> FkHRigs                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FFkHierarchyData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FFkHierarchyData> UARFkHierarchy::STATIC_CreateFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, TArray<struct FFkHierarchyData> FkHRigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRigs");

	UARFkHierarchy_CreateFkHierarchyRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.FkHRigs = FkHRigs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkHierarchyData        FkH                            (Parm, NativeAccessSpecifierPublic)
// struct FFkHierarchyData        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFkHierarchyData UARFkHierarchy::STATIC_CreateFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkHierarchyData& FkH)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRig");

	UARFkHierarchy_CreateFkHierarchyRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.FkH = FkH;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateTwoBoneTwistLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      InTransforms                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                          FkIk                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateTwoBoneTwistLimb(const struct FFkIkData& FkIkData, TArray<struct FTransform> InTransforms, float FkIk, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateTwoBoneTwistLimb");

	UARFkIk_UpdateTwoBoneTwistLimb_Params params;
	params.FkIkData = FkIkData;
	params.InTransforms = InTransforms;
	params.FkIk = FkIk;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateTwoBoneFkIk
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// float                          FkIk                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSoftStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchSoftness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PoleVectorLock                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Low                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Mid                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Up                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_UpdateTwoBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, const struct FVector& CharScale, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateTwoBoneFkIk");

	UARFkIk_UpdateTwoBoneFkIk_Params params;
	params.FkIkData = FkIkData;
	params.FkIk = FkIk;
	params.bAllowStretching = bAllowStretching;
	params.StretchScale = StretchScale;
	params.bSoftStretch = bSoftStretch;
	params.StretchSoftness = StretchSoftness;
	params.PoleVectorLock = PoleVectorLock;
	params.CharScale = CharScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Low != nullptr)
		*Low = params.Low;
	if (Mid != nullptr)
		*Mid = params.Mid;
	if (Up != nullptr)
		*Up = params.Up;

}


// Function ARigRuntime.ARFkIk.UpdateTwistBones
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTwistBonesData         TwistBonesData                 (Parm, NativeAccessSpecifierPublic)
// struct FTransform              UpperT                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowerT                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARFkIk::STATIC_UpdateTwistBones(const struct FTwistBonesData& TwistBonesData, const struct FTransform& UpperT, const struct FTransform& LowerT, struct FBonesTransforms* BonesTransforms, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateTwistBones");

	UARFkIk_UpdateTwistBones_Params params;
	params.TwistBonesData = TwistBonesData;
	params.UpperT = UpperT;
	params.LowerT = LowerT;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonesTransforms != nullptr)
		*BonesTransforms = params.BonesTransforms;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateThreeBoneTwistLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      InTransforms                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateThreeBoneTwistLimb(const struct FFkIkData& FkIkData, TArray<struct FTransform> InTransforms, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateThreeBoneTwistLimb");

	UARFkIk_UpdateThreeBoneTwistLimb_Params params;
	params.FkIkData = FkIkData;
	params.InTransforms = InTransforms;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateThreeBoneFkIk
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// float                          FkIk                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSoftStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchSoftness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PoleVectorLock                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Bend                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Tip                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Low                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Mid                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Up                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_UpdateThreeBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, const struct FVector& CharScale, struct FTransform* Tip, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateThreeBoneFkIk");

	UARFkIk_UpdateThreeBoneFkIk_Params params;
	params.FkIkData = FkIkData;
	params.FkIk = FkIk;
	params.bAllowStretching = bAllowStretching;
	params.StretchScale = StretchScale;
	params.bSoftStretch = bSoftStretch;
	params.StretchSoftness = StretchSoftness;
	params.PoleVectorLock = PoleVectorLock;
	params.Bend = Bend;
	params.CharScale = CharScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tip != nullptr)
		*Tip = params.Tip;
	if (Low != nullptr)
		*Low = params.Low;
	if (Mid != nullptr)
		*Mid = params.Mid;
	if (Up != nullptr)
		*Up = params.Up;

}


// Function ARigRuntime.ARFkIk.UpdateFootRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFootControllersData    FootControllersData            (Parm, NativeAccessSpecifierPublic)
// float                          FootRoll                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ToeRoll                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HeelTwist                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ToeTwist                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FkIk                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_UpdateFootRig(const struct FFootControllersData& FootControllersData, float FootRoll, float ToeRoll, float HeelTwist, float ToeTwist, float FkIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFootRig");

	UARFkIk_UpdateFootRig_Params params;
	params.FootControllersData = FootControllersData;
	params.FootRoll = FootRoll;
	params.ToeRoll = ToeRoll;
	params.HeelTwist = HeelTwist;
	params.ToeTwist = ToeTwist;
	params.FkIk = FkIk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.UpdateFoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateFoot(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFoot");

	UARFkIk_UpdateFoot_Params params;
	params.FkIkData = FkIkData;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateFkIkRigs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>       FkIkRigs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkIkData> FkIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFkIkRigs");

	UARFkIk_UpdateFkIkRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkRigs = FkIkRigs;
	params.CharScale = CharScale;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateFkIkRig
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateFkIkRig(const struct FFkIkData& FkIkData, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFkIkRig");

	UARFkIk_UpdateFkIkRig_Params params;
	params.FkIkData = FkIkData;
	params.CharScale = CharScale;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateFingersRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateFingersRig(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFingersRig");

	UARFkIk_UpdateFingersRig_Params params;
	params.FkIkData = FkIkData;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.UpdateFingersGroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData            FingersData                    (Parm, NativeAccessSpecifierPublic)
// bool                           bEnableFingers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Curl                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Spread                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Relax                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ThumbCurl                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ThumbRoll                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ThumbPitch                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ThumbYaw                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ARigRuntime_EAxisEnum          FingersAxis                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRotator>        Offsets                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_UpdateFingersGroups(const struct FFingersData& FingersData, bool bEnableFingers, float Curl, float Spread, float Relax, float ThumbCurl, float ThumbRoll, float ThumbPitch, float ThumbYaw, ARigRuntime_EAxisEnum FingersAxis, TArray<struct FRotator> Offsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFingersGroups");

	UARFkIk_UpdateFingersGroups_Params params;
	params.FingersData = FingersData;
	params.bEnableFingers = bEnableFingers;
	params.Curl = Curl;
	params.Spread = Spread;
	params.Relax = Relax;
	params.ThumbCurl = ThumbCurl;
	params.ThumbRoll = ThumbRoll;
	params.ThumbPitch = ThumbPitch;
	params.ThumbYaw = ThumbYaw;
	params.FingersAxis = FingersAxis;
	params.Offsets = Offsets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.UpdateFingers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData            FingersData                    (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARFkIk::STATIC_UpdateFingers(const struct FFingersData& FingersData, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.UpdateFingers");

	UARFkIk_UpdateFingers_Params params;
	params.FingersData = FingersData;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.ThreeBoneIkOpt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              EffectorPos                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              RootPos                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              SecondIkPos                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                Roll                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 UpPV                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LowPV                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          UpLength                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MidLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LowLength                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSoftStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchSoftness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PoleVectorLock                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Bend                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              UpBone                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              TipBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_ThreeBoneIkOpt(const struct FTransform& EffectorPos, const struct FTransform& RootPos, const struct FTransform& SecondIkPos, const struct FRotator& Roll, const struct FVector& UpPV, const struct FVector& LowPV, float UpLength, float MidLength, float LowLength, float StretchScale, bool bAllowStretching, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* TipBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.ThreeBoneIkOpt");

	UARFkIk_ThreeBoneIkOpt_Params params;
	params.EffectorPos = EffectorPos;
	params.RootPos = RootPos;
	params.SecondIkPos = SecondIkPos;
	params.Roll = Roll;
	params.UpPV = UpPV;
	params.LowPV = LowPV;
	params.UpLength = UpLength;
	params.MidLength = MidLength;
	params.LowLength = LowLength;
	params.StretchScale = StretchScale;
	params.bAllowStretching = bAllowStretching;
	params.bSoftStretch = bSoftStretch;
	params.StretchSoftness = StretchSoftness;
	params.PoleVectorLock = PoleVectorLock;
	params.Bend = Bend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpBone != nullptr)
		*UpBone = params.UpBone;
	if (MidBone != nullptr)
		*MidBone = params.MidBone;
	if (LowBone != nullptr)
		*LowBone = params.LowBone;
	if (TipBone != nullptr)
		*TipBone = params.TipBone;

}


// Function ARigRuntime.ARFkIk.ThreeBoneIk
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              EffectorPos                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 UpPV                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LowPV                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              UpBoneWorld                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBoneLocal                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBoneLocal                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              TipBoneLocal                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            UpAimSettings                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            MidAimSettings                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            LowAimSettings                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                Roll                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSoftStretch                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StretchScale                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              UpBone                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBone                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Tip                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_ThreeBoneIk(const struct FTransform& EffectorPos, const struct FVector& UpPV, const struct FVector& LowPV, const struct FTransform& UpBoneWorld, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, const struct FTransform& TipBoneLocal, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, const struct FAimSettings& LowAimSettings, const struct FRotator& Roll, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* Tip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.ThreeBoneIk");

	UARFkIk_ThreeBoneIk_Params params;
	params.EffectorPos = EffectorPos;
	params.UpPV = UpPV;
	params.LowPV = LowPV;
	params.UpBoneWorld = UpBoneWorld;
	params.MidBoneLocal = MidBoneLocal;
	params.LowBoneLocal = LowBoneLocal;
	params.TipBoneLocal = TipBoneLocal;
	params.UpAimSettings = UpAimSettings;
	params.MidAimSettings = MidAimSettings;
	params.LowAimSettings = LowAimSettings;
	params.Roll = Roll;
	params.bAllowStretching = bAllowStretching;
	params.bSoftStretch = bSoftStretch;
	params.StretchScale = StretchScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpBone != nullptr)
		*UpBone = params.UpBone;
	if (MidBone != nullptr)
		*MidBone = params.MidBone;
	if (LowBone != nullptr)
		*LowBone = params.LowBone;
	if (Tip != nullptr)
		*Tip = params.Tip;

}


// Function ARigRuntime.ARFkIk.SnapTwoBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIkData                  (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_SnapTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.SnapTwoBoneIk");

	UARFkIk_SnapTwoBoneIk_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TwoBoneIkData = TwoBoneIkData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.SnapThreeBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIkData                  (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_SnapThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.SnapThreeBoneIk");

	UARFkIk_SnapThreeBoneIk_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TwoBoneIkData = TwoBoneIkData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.SnapFkIkLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_SnapFkIkLimb(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.SnapFkIkLimb");

	UARFkIk_SnapFkIkLimb_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkData = FkIkData;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.SnapFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkHierarchyData        FkHierarchyData                (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_SnapFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.SnapFkHierarchyRig");

	UARFkIk_SnapFkHierarchyRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkHierarchyData = FkHierarchyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.SetFingersProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData            FingersData                    (Parm, NativeAccessSpecifierPublic)
// class AARControllerFkIk*       FkIkController                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  IkController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_SetFingersProperties(const struct FFingersData& FingersData, class AARControllerFkIk* FkIkController, class AActor* IkController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.SetFingersProperties");

	UARFkIk_SetFingersProperties_Params params;
	params.FingersData = FingersData;
	params.FkIkController = FkIkController;
	params.IkController = IkController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.PoseTwoBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIkData                  (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_PoseTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.PoseTwoBoneIk");

	UARFkIk_PoseTwoBoneIk_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TwoBoneIkData = TwoBoneIkData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.PoseTwistControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwistBonesData         TwistBonesData                 (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_PoseTwistControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FTwistBonesData& TwistBonesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.PoseTwistControllers");

	UARFkIk_PoseTwistControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TwistBonesData = TwistBonesData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.PoseThreeBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIkData                  (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_PoseThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.PoseThreeBoneIk");

	UARFkIk_PoseThreeBoneIk_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TwoBoneIkData = TwoBoneIkData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.PoseFoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Toe                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFootControllersData    FootControllersData            (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_PoseFoot(class USkeletalMeshComponent* SkelMeshComp, const struct FName& Toe, const struct FFootControllersData& FootControllersData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.PoseFoot");

	UARFkIk_PoseFoot_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Toe = Toe;
	params.FootControllersData = FootControllersData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.PoseFkIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>       FkIkRigs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_PoseFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkIkData> FkIkRigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.PoseFkIkRigs");

	UARFkIk_PoseFkIkRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkRigs = FkIkRigs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.PoseFingers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFingersData            FingersData                    (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_PoseFingers(class USkeletalMeshComponent* SkelMeshComp, const struct FFingersData& FingersData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.PoseFingers");

	UARFkIk_PoseFingers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FingersData = FingersData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.ParentFkIkRigs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FFkIkData>       FkIkRigs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_ParentFkIkRigs(TArray<struct FFkIkData>* FkIkRigs, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.ParentFkIkRigs");

	UARFkIk_ParentFkIkRigs_Params params;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FkIkRigs != nullptr)
		*FkIkRigs = params.FkIkRigs;

}


// Function ARigRuntime.ARFkIk.KeyTwoBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTwoBoneIkData          TwoBoneIkData                  (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyTwoBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyTwoBoneIk");

	UARFkIk_KeyTwoBoneIk_Params params;
	params.TwoBoneIkData = TwoBoneIkData;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.KeyTwistControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTwistBonesData         TwistBonesData                 (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyTwistControllers(const struct FTwistBonesData& TwistBonesData, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyTwistControllers");

	UARFkIk_KeyTwistControllers_Params params;
	params.TwistBonesData = TwistBonesData;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.KeyThreeBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTwoBoneIkData          TwoBoneIkData                  (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyThreeBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyThreeBoneIk");

	UARFkIk_KeyThreeBoneIk_Params params;
	params.TwoBoneIkData = TwoBoneIkData;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.KeyFoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFootControllersData    FootControllersData            (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyFoot(const struct FFootControllersData& FootControllersData, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyFoot");

	UARFkIk_KeyFoot_Params params;
	params.FootControllersData = FootControllersData;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.KeyFkIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFkIkData>       FkIkRigs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyFkIkRigs(TArray<struct FFkIkData> FkIkRigs, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyFkIkRigs");

	UARFkIk_KeyFkIkRigs_Params params;
	params.FkIkRigs = FkIkRigs;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.KeyFkIkLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          Sequencer                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyFkIkLimb(class ULevelSequence* Sequencer, const struct FFkIkData& FkIkData, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyFkIkLimb");

	UARFkIk_KeyFkIkLimb_Params params;
	params.Sequencer = Sequencer;
	params.FkIkData = FkIkData;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.KeyFingers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData            FingersData                    (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_KeyFingers(const struct FFingersData& FingersData, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.KeyFingers");

	UARFkIk_KeyFingers_Params params;
	params.FingersData = FingersData;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.GetTwoBoneIkTwistOffsets
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              EffectorT                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              PoleVectorT                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              IkHelperT                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBoneLocalT                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBoneLocalT                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bPoleVectorSimple              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            UpAimSettings                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            MidAimSettings                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_GetTwoBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FTransform& PoleVectorT, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FAimSettings& AimSettings, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetTwoBoneIkTwistOffsets");

	UARFkIk_GetTwoBoneIkTwistOffsets_Params params;
	params.EffectorT = EffectorT;
	params.PoleVectorT = PoleVectorT;
	params.IkHelperT = IkHelperT;
	params.MidBoneLocalT = MidBoneLocalT;
	params.LowBoneLocalT = LowBoneLocalT;
	params.AimSettings = AimSettings;
	params.bPoleVectorSimple = bPoleVectorSimple;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpAimSettings != nullptr)
		*UpAimSettings = params.UpAimSettings;
	if (MidAimSettings != nullptr)
		*MidAimSettings = params.MidAimSettings;

}


// Function ARigRuntime.ARFkIk.GetTwoBoneIkSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, OutParm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_GetTwoBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetTwoBoneIkSettings");

	UARFkIk_GetTwoBoneIkSettings_Params params;
	params.SkelMeshComp = SkelMeshComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = params.TwoBoneIk;

}


// Function ARigRuntime.ARFkIk.GetTwistLimbSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// struct FTwistBonesData         TwistBonesA                    (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwistBonesData         TwistBonesB                    (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwistBonesData         TwistBonesC                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_GetTwistLimbSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkIkData& FkIkData, struct FTwistBonesData* TwistBonesA, struct FTwistBonesData* TwistBonesB, struct FTwistBonesData* TwistBonesC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetTwistLimbSettings");

	UARFkIk_GetTwistLimbSettings_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.FkIkData = FkIkData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwistBonesA != nullptr)
		*TwistBonesA = params.TwistBonesA;
	if (TwistBonesB != nullptr)
		*TwistBonesB = params.TwistBonesB;
	if (TwistBonesC != nullptr)
		*TwistBonesC = params.TwistBonesC;

}


// Function ARigRuntime.ARFkIk.GetTwistBonesSettings
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwistBonesData         TwistBonesData                 (Parm, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              UpBoneT                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBoneT                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTwistBonesData         ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FTwistBonesData UARFkIk::STATIC_GetTwistBonesSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwistBonesData& TwistBonesData, const struct FAimSettings& AimSettings, const struct FTransform& UpBoneT, const struct FTransform& LowBoneT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetTwistBonesSettings");

	UARFkIk_GetTwistBonesSettings_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.TwistBonesData = TwistBonesData;
	params.AimSettings = AimSettings;
	params.UpBoneT = UpBoneT;
	params.LowBoneT = LowBoneT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.GetThreeBoneIkTwistOffsets
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              EffectorT                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 UpPoleVectorV                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LowPoleVectorV                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              IkHelperT                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBoneLocalT                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBoneLocalT                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              TipBoneLocalT                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              MidBoneT                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              LowBoneT                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettingsA                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettingsB                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bPoleVectorSimple              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            UpAimSettings                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            MidAimSettings                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            LowAimSettings                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_GetThreeBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FVector& UpPoleVectorV, const struct FVector& LowPoleVectorV, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FTransform& TipBoneLocalT, const struct FTransform& MidBoneT, const struct FTransform& LowBoneT, const struct FAimSettings& AimSettingsA, const struct FAimSettings& AimSettingsB, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings, struct FAimSettings* LowAimSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetThreeBoneIkTwistOffsets");

	UARFkIk_GetThreeBoneIkTwistOffsets_Params params;
	params.EffectorT = EffectorT;
	params.UpPoleVectorV = UpPoleVectorV;
	params.LowPoleVectorV = LowPoleVectorV;
	params.IkHelperT = IkHelperT;
	params.MidBoneLocalT = MidBoneLocalT;
	params.LowBoneLocalT = LowBoneLocalT;
	params.TipBoneLocalT = TipBoneLocalT;
	params.MidBoneT = MidBoneT;
	params.LowBoneT = LowBoneT;
	params.AimSettingsA = AimSettingsA;
	params.AimSettingsB = AimSettingsB;
	params.bPoleVectorSimple = bPoleVectorSimple;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UpAimSettings != nullptr)
		*UpAimSettings = params.UpAimSettings;
	if (MidAimSettings != nullptr)
		*MidAimSettings = params.MidAimSettings;
	if (LowAimSettings != nullptr)
		*LowAimSettings = params.LowAimSettings;

}


// Function ARigRuntime.ARFkIk.GetThreeBoneIkSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, OutParm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_GetThreeBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetThreeBoneIkSettings");

	UARFkIk_GetThreeBoneIkSettings_Params params;
	params.SkelMeshComp = SkelMeshComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = params.TwoBoneIk;

}


// Function ARigRuntime.ARFkIk.GetPvPosFromMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TipBone                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Multiply                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARFkIk::STATIC_GetPvPosFromMesh(class USkeletalMeshComponent* SkelMeshComp, const struct FName& TipBone, float Multiply)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetPvPosFromMesh");

	UARFkIk_GetPvPosFromMesh_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TipBone = TipBone;
	params.Multiply = Multiply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.GetPvPosFromDir
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TipBone                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Multiply                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bArm                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARFkIk::STATIC_GetPvPosFromDir(class USkeletalMeshComponent* SkelMeshComp, const struct FName& TipBone, float Multiply, bool bArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetPvPosFromDir");

	UARFkIk_GetPvPosFromDir_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.TipBone = TipBone;
	params.Multiply = Multiply;
	params.bArm = bArm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.GetFingersAxis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFingersData            FingersData                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                  IkController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ARigRuntime_EAxisEnum          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
ARigRuntime_EAxisEnum UARFkIk::STATIC_GetFingersAxis(const struct FFingersData& FingersData, class AActor* IkController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetFingersAxis");

	UARFkIk_GetFingersAxis_Params params;
	params.FingersData = FingersData;
	params.IkController = IkController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.GetFingerRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Curl                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Spread                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ARigRuntime_EAxisEnum          FingersAxis                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UARFkIk::STATIC_GetFingerRotation(float Curl, float Spread, ARigRuntime_EAxisEnum FingersAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.GetFingerRotation");

	UARFkIk_GetFingerRotation_Params params;
	params.Curl = Curl;
	params.Spread = Spread;
	params.FingersAxis = FingersAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.FkIkVis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_FkIkVis(const struct FFkIkData& FkIkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.FkIkVis");

	UARFkIk_FkIkVis_Params params;
	params.FkIkData = FkIkData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARFkIk.CreateTwoBoneIkRig
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FTwoBoneIkData UARFkIk::STATIC_CreateTwoBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateTwoBoneIkRig");

	UARFkIk_CreateTwoBoneIkRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = params.TwoBoneIk;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateTwoBoneIkControllers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, OutParm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_CreateTwoBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateTwoBoneIkControllers");

	UARFkIk_CreateTwoBoneIkControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = params.TwoBoneIk;

}


// Function ARigRuntime.ARFkIk.CreateThreeBoneIkRig
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FTwoBoneIkData UARFkIk::STATIC_CreateThreeBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateThreeBoneIkRig");

	UARFkIk_CreateThreeBoneIkRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = params.TwoBoneIk;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateThreeBoneIkControllers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, OutParm, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_CreateThreeBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateThreeBoneIkControllers");

	UARFkIk_CreateThreeBoneIkControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = params.TwoBoneIk;

}


// Function ARigRuntime.ARFkIk.CreatePoleVectorController
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  IkController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, NativeAccessSpecifierPublic)
// struct FName                   TipBone                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bArm                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Group                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_CreatePoleVectorController(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, class AActor* IkController, const struct FTwoBoneIkData& TwoBoneIk, const struct FName& TipBone, bool bArm, class AActor** Controller, class AActor** Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreatePoleVectorController");

	UARFkIk_CreatePoleVectorController_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.IkController = IkController;
	params.TwoBoneIk = TwoBoneIk;
	params.TipBone = TipBone;
	params.bArm = bArm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
	if (Group != nullptr)
		*Group = params.Group;

}


// Function ARigRuntime.ARFkIk.CreateFootRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFootControllersData    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFootControllersData UARFkIk::STATIC_CreateFootRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateFootRig");

	UARFkIk_CreateFootRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkData = FkIkData;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateFkIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>       FkIkRigs                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FFkIkData> UARFkIk::STATIC_CreateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FFkIkData> FkIkRigs, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateFkIkRigs");

	UARFkIk_CreateFkIkRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkRigs = FkIkRigs;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateFkIkRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFkIkData UARFkIk::STATIC_CreateFkIkRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateFkIkRig");

	UARFkIk_CreateFkIkRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkData = FkIkData;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateFkIkControllerRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData          TwoBoneIk                      (Parm, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UARFkIk::STATIC_CreateFkIkControllerRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwoBoneIkData& TwoBoneIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateFkIkControllerRig");

	UARFkIk_CreateFkIkControllerRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.TwoBoneIk = TwoBoneIk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateFkIkController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UARFkIk::STATIC_CreateFkIkController(class AActor* Rig, const struct FName& Name, const struct FTransform& Transform, const struct FVector& Offset, const struct FLinearColor& Color, float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateFkIkController");

	UARFkIk_CreateFkIkController_Params params;
	params.Rig = Rig;
	params.Name = Name;
	params.Transform = Transform;
	params.Offset = Offset;
	params.Color = Color;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.CreateFingersRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData               FkIkData                       (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFingersData            ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFingersData UARFkIk::STATIC_CreateFingersRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.CreateFingersRig");

	UARFkIk_CreateFingersRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.FkIkData = FkIkData;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARFkIk.AimIkControllerToBone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  IkController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  IkOffset                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Bone                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bArms                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFkIk::STATIC_AimIkControllerToBone(class USkeletalMeshComponent* SkelMeshComp, class AActor* IkController, class AActor* IkOffset, const struct FName& Bone, bool bArms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARFkIk.AimIkControllerToBone");

	UARFkIk_AimIkControllerToBone_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.IkController = IkController;
	params.IkOffset = IkOffset;
	params.Bone = Bone;
	params.bArms = bArms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARMFunctions.UpdateRig
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        SourceBT                       (Parm, OutParm, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_UpdateRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ASkeletalMeshActor* SourceActor, class AActor* Rig, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.UpdateRig");

	UARMFunctions_UpdateRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;
	params.SourceActor = SourceActor;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonesTransforms != nullptr)
		*BonesTransforms = params.BonesTransforms;
	if (SourceBT != nullptr)
		*SourceBT = params.SourceBT;

}


// Function ARigRuntime.ARMFunctions.UpdatePoseFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARMFunctions::STATIC_UpdatePoseFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.UpdatePoseFromSource");

	UARMFunctions_UpdatePoseFromSource_Params params;
	params.SourceActor = SourceActor;
	params.SkelMeshComp = SkelMeshComp;
	params.ModularRigData = ModularRigData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARMFunctions.UpdateModularRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARMFunctions::STATIC_UpdateModularRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.UpdateModularRig");

	UARMFunctions_UpdateModularRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARMFunctions.UpdateCurvesFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_UpdateCurvesFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.UpdateCurvesFromSource");

	UARMFunctions_UpdateCurvesFromSource_Params params;
	params.SourceActor = SourceActor;
	params.SkelMeshComp = SkelMeshComp;
	params.ModularRigData = ModularRigData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARMFunctions.PoseRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_PoseRig(class ASkeletalMeshActor* SourceActor, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.PoseRig");

	UARMFunctions_PoseRig_Params params;
	params.SourceActor = SourceActor;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARMFunctions.KeyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_KeyRig(const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.KeyRig");

	UARMFunctions_KeyRig_Params params;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARMFunctions.InitModularRigData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FModularRigData         ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FModularRigData UARMFunctions::STATIC_InitModularRigData(const struct FModularRigData& ModularRigData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.InitModularRigData");

	UARMFunctions_InitModularRigData_Params params;
	params.ModularRigData = ModularRigData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARMFunctions.CreateModularRig
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_CreateModularRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FModularRigData* ModularRigData, struct FFaceSettings* FaceSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.CreateModularRig");

	UARMFunctions_CreateModularRig_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModularRigData != nullptr)
		*ModularRigData = params.ModularRigData;
	if (FaceSettings != nullptr)
		*FaceSettings = params.FaceSettings;

}


// Function ARigRuntime.ARMFunctions.CheckSequencers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          Controllers                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARMFunctions::STATIC_CheckSequencers(TArray<class AActor*> Controllers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.CheckSequencers");

	UARMFunctions_CheckSequencers_Params params;
	params.Controllers = Controllers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARMFunctions.BakeToAnimAssetInternal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeZero                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FPS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           NewAnimSequence                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateSource                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        SourceBT                       (Parm, OutParm, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_BakeToAnimAssetInternal(float Time, float TimeZero, float FPS, class UAnimSequence* NewAnimSequence, class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.BakeToAnimAssetInternal");

	UARMFunctions_BakeToAnimAssetInternal_Params params;
	params.Time = Time;
	params.TimeZero = TimeZero;
	params.FPS = FPS;
	params.NewAnimSequence = NewAnimSequence;
	params.LevelSequence = LevelSequence;
	params.SourceActor = SourceActor;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.bUpdateSource = bUpdateSource;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonesTransforms != nullptr)
		*BonesTransforms = params.BonesTransforms;
	if (SourceBT != nullptr)
		*SourceBT = params.SourceBT;

}


// Function ARigRuntime.ARMFunctions.BakeToAnimAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUpdateSource                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        SourceBT                       (Parm, OutParm, NativeAccessSpecifierPublic)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimSequence* UARMFunctions::STATIC_BakeToAnimAsset(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.BakeToAnimAsset");

	UARMFunctions_BakeToAnimAsset_Params params;
	params.LevelSequence = LevelSequence;
	params.StartFrame = StartFrame;
	params.EndFrame = EndFrame;
	params.SourceActor = SourceActor;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.bUpdateSource = bUpdateSource;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonesTransforms != nullptr)
		*BonesTransforms = params.BonesTransforms;
	if (SourceBT != nullptr)
		*SourceBT = params.SourceBT;


	return params.ReturnValue;
}


// Function ARigRuntime.ARMFunctions.BakeFromSequencer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*      SourceActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData         ModularRigData                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings           FaceSettings                   (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        SourceBT                       (Parm, OutParm, NativeAccessSpecifierPublic)
void UARMFunctions::STATIC_BakeFromSequencer(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARMFunctions.BakeFromSequencer");

	UARMFunctions_BakeFromSequencer_Params params;
	params.LevelSequence = LevelSequence;
	params.StartFrame = StartFrame;
	params.EndFrame = EndFrame;
	params.SourceActor = SourceActor;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.ModularRigData = ModularRigData;
	params.FaceSettings = FaceSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BonesTransforms != nullptr)
		*BonesTransforms = params.BonesTransforms;
	if (SourceBT != nullptr)
		*SourceBT = params.SourceBT;

}


// Function ARigRuntime.RigModular.PostUpdateRig
// (Event, Public, BlueprintEvent)
void ARigModular::PostUpdateRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.RigModular.PostUpdateRig");

	ARigModular_PostUpdateRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.RigModular.PostCreateRig
// (Event, Public, BlueprintEvent)
void ARigModular::PostCreateRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.RigModular.PostCreateRig");

	ARigModular_PostCreateRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.RigModular.PostBakeToAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*           NewAnimSequence                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARigModular::PostBakeToAnim(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame, class UAnimSequence* NewAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.RigModular.PostBakeToAnim");

	ARigModular_PostBakeToAnim_Params params;
	params.LevelSequence = LevelSequence;
	params.StartFrame = StartFrame;
	params.EndFrame = EndFrame;
	params.NewAnimSequence = NewAnimSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.RigModular.PostBakeFromSequencer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARigModular::PostBakeFromSequencer(class ULevelSequence* LevelSequence, int StartFrame, int EndFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.RigModular.PostBakeFromSequencer");

	ARigModular_PostBakeFromSequencer_Params params;
	params.LevelSequence = LevelSequence;
	params.StartFrame = StartFrame;
	params.EndFrame = EndFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.RigModular.OnUpdateRig
// (Event, Public, BlueprintEvent)
void ARigModular::OnUpdateRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.RigModular.OnUpdateRig");

	ARigModular_OnUpdateRig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.RigModular.EditorTick
// (Event, Public, BlueprintEvent)
void ARigModular::EditorTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.RigModular.EditorTick");

	ARigModular_EditorTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARSplineIk.UpdateSplineIkRigs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FSplineIkData>   SplineIkRigs                   (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARSplineIk::STATIC_UpdateSplineIkRigs(TArray<struct FSplineIkData> SplineIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.UpdateSplineIkRigs");

	UARSplineIk_UpdateSplineIkRigs_Params params;
	params.SplineIkRigs = SplineIkRigs;
	params.CharScale = CharScale;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARSplineIk.SolveSplinePoints
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Root                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Mid                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Tip                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Curvature                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSolveEnds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_SolveSplinePoints(class USplineComponent* SplineComponent, const struct FTransform& Root, const struct FTransform& Mid, const struct FTransform& Tip, float Curvature, bool bSolveEnds, const struct FAimSettings& AimSettings, const struct FVector& CharScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.SolveSplinePoints");

	UARSplineIk_SolveSplinePoints_Params params;
	params.SplineComponent = SplineComponent;
	params.Root = Root;
	params.Mid = Mid;
	params.Tip = Tip;
	params.Curvature = Curvature;
	params.bSolveEnds = bSolveEnds;
	params.AimSettings = AimSettings;
	params.CharScale = CharScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARSplineIk.SolveSplineIkComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSplineIkData           SplineIkData                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 CharScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_SolveSplineIkComponent(const struct FSplineIkData& SplineIkData, const struct FVector& CharScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.SolveSplineIkComponent");

	UARSplineIk_SolveSplineIkComponent_Params params;
	params.SplineIkData = SplineIkData;
	params.CharScale = CharScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARSplineIk.SolveSplineIkBones
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSplineIkData           SplineIkData                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FBonesTransforms        BonesTransforms                (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBonesTransforms UARSplineIk::STATIC_SolveSplineIkBones(const struct FSplineIkData& SplineIkData, const struct FBonesTransforms& BonesTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.SolveSplineIkBones");

	UARSplineIk_SolveSplineIkBones_Params params;
	params.SplineIkData = SplineIkData;
	params.BonesTransforms = BonesTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARSplineIk.SolveMidSplineIkCtrl
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Mid                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  MidGrp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  EndGrp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              OffsetA                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              OffsetB                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              OffsetUp                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          MidParent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MidLerp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           FkIk                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_SolveMidSplineIkCtrl(class AActor* Start, class AActor* Mid, class AActor* End, class AActor* MidGrp, class AActor* EndGrp, const struct FTransform& OffsetA, const struct FTransform& OffsetB, const struct FTransform& OffsetUp, const struct FAimSettings& AimSettings, float MidParent, float MidLerp, bool FkIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.SolveMidSplineIkCtrl");

	UARSplineIk_SolveMidSplineIkCtrl_Params params;
	params.Start = Start;
	params.Mid = Mid;
	params.End = End;
	params.MidGrp = MidGrp;
	params.EndGrp = EndGrp;
	params.OffsetA = OffsetA;
	params.OffsetB = OffsetB;
	params.OffsetUp = OffsetUp;
	params.AimSettings = AimSettings;
	params.MidParent = MidParent;
	params.MidLerp = MidLerp;
	params.FkIk = FkIk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARSplineIk.PoseSplineIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSplineIkData>   SplineIkRigs                   (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_PoseSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, TArray<struct FSplineIkData> SplineIkRigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.PoseSplineIkRigs");

	UARSplineIk_PoseSplineIkRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.SplineIkRigs = SplineIkRigs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARSplineIk.ParentSplineIkRigs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSplineIkData>   SpIkRigs                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_ParentSplineIkRigs(TArray<struct FSplineIkData>* SpIkRigs, class AActor* Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.ParentSplineIkRigs");

	UARSplineIk_ParentSplineIkRigs_Params params;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpIkRigs != nullptr)
		*SpIkRigs = params.SpIkRigs;

}


// Function ARigRuntime.ARSplineIk.KeySplineIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSplineIkData>   SplineIkRigs                   (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_KeySplineIkRigs(TArray<struct FSplineIkData> SplineIkRigs, class ULevelSequence* LevelSequence, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.KeySplineIkRigs");

	UARSplineIk_KeySplineIkRigs_Params params;
	params.SplineIkRigs = SplineIkRigs;
	params.LevelSequence = LevelSequence;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARSplineIk.GetSplineIkBoneOffsets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSplineIkData           SpIk                           (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FTransform>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FTransform> UARSplineIk::STATIC_GetSplineIkBoneOffsets(class USkeletalMeshComponent* SkelMeshComp, const struct FSplineIkData& SpIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.GetSplineIkBoneOffsets");

	UARSplineIk_GetSplineIkBoneOffsets_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.SpIk = SpIk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARSplineIk.GetPosOnSpline
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PosCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings            AimSettings                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARSplineIk::STATIC_GetPosOnSpline(class USplineComponent* SplineComponent, int Index, int PosCount, const struct FAimSettings& AimSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.GetPosOnSpline");

	UARSplineIk_GetPosOnSpline_Params params;
	params.SplineComponent = SplineComponent;
	params.Index = Index;
	params.PosCount = PosCount;
	params.AimSettings = AimSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARSplineIk.CreateSplineIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSplineIkData>   SpIkRigs                       (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FSplineIkData>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<struct FSplineIkData> UARSplineIk::STATIC_CreateSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, TArray<struct FSplineIkData> SpIkRigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.CreateSplineIkRigs");

	UARSplineIk_CreateSplineIkRigs_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;
	params.SpIkRigs = SpIkRigs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ARigRuntime.ARSplineIk.CreateSplineIkControllers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Rig                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSplineIkData           SpIk                           (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UARSplineIk::STATIC_CreateSplineIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FSplineIkData* SpIk)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARSplineIk.CreateSplineIkControllers");

	UARSplineIk_CreateSplineIkControllers_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Rig = Rig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpIk != nullptr)
		*SpIk = params.SpIk;

}


// Function ARigRuntime.ARTickableActor.OnPostEditMove
// (Event, Public, BlueprintEvent)
void AARTickableActor::OnPostEditMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARTickableActor.OnPostEditMove");

	AARTickableActor_OnPostEditMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ARigRuntime.ARTickableActor.EditorTick
// (Event, Public, BlueprintEvent)
void AARTickableActor::EditorTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARigRuntime.ARTickableActor.EditorTick");

	AARTickableActor_EditorTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
