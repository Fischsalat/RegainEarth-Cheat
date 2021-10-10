﻿// Name: RegainEart-FirtstStrike, Version: Version-1

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

// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldDestroyOnSystemFinish   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish");

	ANiagaraActor_SetDestroyOnSystemFinish_Params params;
	params.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
// (Final, Native, Private)
// Parameters:
// class UNiagaraComponent*       FinishedComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.OnNiagaraSystemFinished");

	ANiagaraActor_OnNiagaraSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	UNiagaraComponent_SetVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	UNiagaraComponent_SetVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	UNiagaraComponent_SetVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget*    TextureRenderTarget            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableTextureRenderTarget(const struct FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget");

	UNiagaraComponent_SetVariableTextureRenderTarget_Params params;
	params.InVariableName = InVariableName;
	params.TextureRenderTarget = TextureRenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	UNiagaraComponent_SetVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableObject(const struct FName& InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	UNiagaraComponent_SetVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");

	UNiagaraComponent_SetVariableMaterial_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	UNiagaraComponent_SetVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableInt(const struct FName& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	UNiagaraComponent_SetVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableFloat(const struct FName& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	UNiagaraComponent_SetVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableBool(const struct FName& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	UNiagaraComponent_SetVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableActor(const struct FName& InVariableName, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	UNiagaraComponent_SetVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetTickBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Niagara_ENiagaraTickBehavior   NewTickBehavior                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetTickBehavior(Niagara_ENiagaraTickBehavior NewTickBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetTickBehavior");

	UNiagaraComponent_SetTickBehavior_Params params;
	params.NewTickBehavior = NewTickBehavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InSeekDelta                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	UNiagaraComponent_SetSeekDelta_Params params;
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePreviewLODDistance      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PreviewLODDistance             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	UNiagaraComponent_SetPreviewLODDistance_Params params;
	params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	params.PreviewLODDistance = PreviewLODDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPaused                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	UNiagaraComponent_SetPaused_Params params;
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	UNiagaraComponent_SetNiagaraVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	UNiagaraComponent_SetNiagaraVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	UNiagaraComponent_SetNiagaraVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableInt(const struct FString& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	UNiagaraComponent_SetNiagaraVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	UNiagaraComponent_SetNiagaraVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	UNiagaraComponent_SetMaxSimTime_Params params;
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetGpuComputeDebug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnableDebug                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetGpuComputeDebug");

	UNiagaraComponent_SetGpuComputeDebug_Params params;
	params.bEnableDebug = bEnableDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInForceSolo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	UNiagaraComponent_SetForceSolo_Params params;
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	UNiagaraComponent_SetDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanRenderWhileSeeking       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	UNiagaraComponent_SetCanRenderWhileSeeking_Params params;
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	UNiagaraComponent_SetAutoDestroy_Params params;
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          InAsset                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	UNiagaraComponent_SetAsset_Params params;
	params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAllowScalability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAllowScalability");

	UNiagaraComponent_SetAllowScalability_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Niagara_ENiagaraAgeUpdateMode  InAgeUpdateMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAgeUpdateMode(Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	UNiagaraComponent_SetAgeUpdateMode_Params params;
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	UNiagaraComponent_SeekToDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)
void UNiagaraComponent::ResetSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	UNiagaraComponent_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)
void UNiagaraComponent::ReinitializeSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	UNiagaraComponent_ReinitializeSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	UNiagaraComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetTickBehavior
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Niagara_ENiagaraTickBehavior   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Niagara_ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetTickBehavior");

	UNiagaraComponent_GetTickBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetSeekDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	UNiagaraComponent_GetSeekDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled");

	UNiagaraComponent_GetPreviewLODDistanceEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraComponent::GetPreviewLODDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistance");

	UNiagaraComponent_GetPreviewLODDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InValueName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InValueName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetMaxSimTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	UNiagaraComponent_GetMaxSimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetForceSolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	UNiagaraComponent_GetForceSolo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetDesiredAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	UNiagaraComponent_GetDesiredAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDataInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraDataInterface*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");

	UNiagaraComponent_GetDataInterface_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	UNiagaraComponent_GetAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Niagara_ENiagaraAgeUpdateMode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Niagara_ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	UNiagaraComponent_GetAgeUpdateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SimulateTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	UNiagaraComponent_AdvanceSimulationByTime_Params params;
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TickCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	UNiagaraComponent_AdvanceSimulation_Params params;
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>        ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector4> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector2D> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>           ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FQuat> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<int> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<float> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FLinearColor> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<bool> ArrayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool");

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool");

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData> Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UNiagaraSystem*          NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData");

	UNiagaraParticleCallbackHandler_ReceiveParticleData_Params params;
	params.Data = Data;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize");

	UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize");

	UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D");

	UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D");

	UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize");

	UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
	if (SizeZ != nullptr)
		*SizeZ = params.SizeZ;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SizeZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize");

	UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
	if (SizeZ != nullptr)
		*SizeZ = params.SizeZ;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*          Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int AttributeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture");

	UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*          Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TilesY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int* TilesX, int* TilesY, int* TileZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture");

	UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;
	if (TileZ != nullptr)
		*TileZ = params.TileZ;


	return params.ReturnValue;
}


// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
// (Final, Native, Public)
void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete");

	UNiagaraScript_RaiseOnGPUCompilationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Niagara_ENCPoolMethod          PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPreCullCheck                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	UNiagaraFunctionLibrary_SpawnSystemAttached_Params params;
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Niagara_ENCPoolMethod          PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPreCullCheck                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*          Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject");

	UNiagaraFunctionLibrary_SetVolumeTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetTextureObject");

	UNiagaraFunctionLibrary_SetTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           SamplingRegions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, TArray<struct FName> SamplingRegions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions");

	UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SamplingRegions = SamplingRegions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollection* Collection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollectionInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	UNiagaraParameterCollectionInstance_SetVectorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	UNiagaraParameterCollectionInstance_SetQuatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetIntParameter(const struct FString& InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	UNiagaraParameterCollectionInstance_SetIntParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetFloatParameter(const struct FString& InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	UNiagaraParameterCollectionInstance_SetFloatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	UNiagaraParameterCollectionInstance_SetColorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetBoolParameter(const struct FString& InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	UNiagaraParameterCollectionInstance_SetBoolParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	UNiagaraParameterCollectionInstance_GetVectorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	UNiagaraParameterCollectionInstance_GetQuatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraParameterCollectionInstance::GetIntParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	UNiagaraParameterCollectionInstance_GetIntParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraParameterCollectionInstance::GetFloatParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	UNiagaraParameterCollectionInstance_GetFloatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	UNiagaraParameterCollectionInstance_GetColorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraParameterCollectionInstance::GetBoolParameter(const struct FString& InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	UNiagaraParameterCollectionInstance_GetBoolParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*          InSystem                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");

	ANiagaraPreviewBase_SetSystem_Params params;
	params.InSystem = InSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InXAxisText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   InYAxisText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ANiagaraPreviewBase::SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");

	ANiagaraPreviewBase_SetLabelText_Params params;
	params.InXAxisText = InXAxisText;
	params.InYAxisText = InYAxisText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraPreviewAxis::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");

	UNiagaraPreviewAxis_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       PreviewComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsXAxis                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OutLabelText                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");

	UNiagaraPreviewAxis_ApplyToPreview_Params params;
	params.PreviewComponent = PreviewComponent;
	params.PreviewIndex = PreviewIndex;
	params.bIsXAxis = bIsXAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLabelText != nullptr)
		*OutLabelText = params.OutLabelText;

}


// Function Niagara.NiagaraPreviewGrid.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.SetPaused");

	ANiagaraPreviewGrid_SetPaused_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewGrid.GetPreviews
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UNiagaraComponent*> OutPreviews                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.GetPreviews");

	ANiagaraPreviewGrid_GetPreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPreviews != nullptr)
		*OutPreviews = params.OutPreviews;

}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)
void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	ANiagaraPreviewGrid_DeactivatePreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	ANiagaraPreviewGrid_ActivatePreviews_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
