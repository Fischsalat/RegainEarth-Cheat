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

// Function WB_Options_Video.WB_Options_Video_C.OnScalabilitySettingsDiffer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bDiffer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Video_C::OnScalabilitySettingsDiffer(bool* bDiffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnScalabilitySettingsDiffer");

	UWB_Options_Video_C_OnScalabilitySettingsDiffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bDiffer != nullptr)
		*bDiffer = params.bDiffer;

}


// Function WB_Options_Video.WB_Options_Video_C.RunAndApplyHardwareBenchmark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WorkScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::RunAndApplyHardwareBenchmark(int WorkScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.RunAndApplyHardwareBenchmark");

	UWB_Options_Video_C_RunAndApplyHardwareBenchmark_Params params;
	params.WorkScale = WorkScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.IsCustom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsCustom                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Video_C::IsCustom(int Index, bool* bIsCustom)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsCustom");

	UWB_Options_Video_C_IsCustom_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsCustom != nullptr)
		*bIsCustom = params.bIsCustom;

}


// Function WB_Options_Video.WB_Options_Video_C.GetScalabilityButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_StateButton_C*> Array                          (Parm, OutParm, ContainsInstancedReference)
void UWB_Options_Video_C::GetScalabilityButtons(TArray<class UWB_StateButton_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetScalabilityButtons");

	UWB_Options_Video_C_GetScalabilityButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WB_Options_Video.WB_Options_Video_C.SetPostProcessQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetPostProcessQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetPostProcessQuality");

	UWB_Options_Video_C_SetPostProcessQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetPostProcessQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetPostProcessQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetPostProcessQuality");

	UWB_Options_Video_C_GetPostProcessQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetViewDistanceQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetViewDistanceQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetViewDistanceQuality");

	UWB_Options_Video_C_SetViewDistanceQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetViewDistanceQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetViewDistanceQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetViewDistanceQuality");

	UWB_Options_Video_C_GetViewDistanceQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetFoliageQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetFoliageQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetFoliageQuality");

	UWB_Options_Video_C_SetFoliageQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetFoliageQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetFoliageQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetFoliageQuality");

	UWB_Options_Video_C_GetFoliageQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetAAQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetAAQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetAAQuality");

	UWB_Options_Video_C_SetAAQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetAAQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetAAQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetAAQuality");

	UWB_Options_Video_C_GetAAQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetVisualEffectsQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetVisualEffectsQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetVisualEffectsQuality");

	UWB_Options_Video_C_SetVisualEffectsQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetVisualEffectsQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetVisualEffectsQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetVisualEffectsQuality");

	UWB_Options_Video_C_GetVisualEffectsQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetShadowQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetShadowQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetShadowQuality");

	UWB_Options_Video_C_SetShadowQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetShadowQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetShadowQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetShadowQuality");

	UWB_Options_Video_C_GetShadowQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetTextureQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetTextureQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetTextureQuality");

	UWB_Options_Video_C_SetTextureQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetTextureQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_Options_Video_C::GetTextureQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetTextureQuality");

	UWB_Options_Video_C_GetTextureQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.GetVsync
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Video_C::GetVsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetVsync");

	UWB_Options_Video_C_GetVsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetVSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Video_C::SetVSync(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetVSync");

	UWB_Options_Video_C_SetVSync_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetFrameRateLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Limit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::GetFrameRateLimit(float* Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetFrameRateLimit");

	UWB_Options_Video_C_GetFrameRateLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Limit != nullptr)
		*Limit = params.Limit;

}


// Function WB_Options_Video.WB_Options_Video_C.SetFrameRateLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewLimit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetFrameRateLimit(float NewLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetFrameRateLimit");

	UWB_Options_Video_C_SetFrameRateLimit_Params params;
	params.NewLimit = NewLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetResolutionScaleNormalized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScaleNormalized             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetResolutionScaleNormalized(float NewScaleNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetResolutionScaleNormalized");

	UWB_Options_Video_C_SetResolutionScaleNormalized_Params params;
	params.NewScaleNormalized = NewScaleNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetResolutionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScaleValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetResolutionScale(float NewScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetResolutionScale");

	UWB_Options_Video_C_SetResolutionScale_Params params;
	params.NewScaleValue = NewScaleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetResolutionScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurrentScaleNormalized         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentScaleValue              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::GetResolutionScale(float* CurrentScaleNormalized, float* CurrentScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetResolutionScale");

	UWB_Options_Video_C_GetResolutionScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentScaleNormalized != nullptr)
		*CurrentScaleNormalized = params.CurrentScaleNormalized;
	if (CurrentScaleValue != nullptr)
		*CurrentScaleValue = params.CurrentScaleValue;

}


// Function WB_Options_Video.WB_Options_Video_C.SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SaveSettings");

	UWB_Options_Video_C_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.ApplyAllSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ApplyAllSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplyAllSettings");

	UWB_Options_Video_C_ApplyAllSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.ApplySettings
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ApplySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplySettings");

	UWB_Options_Video_C_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.ApplyNonResolutionSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ApplyNonResolutionSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplyNonResolutionSettings");

	UWB_Options_Video_C_ApplyNonResolutionSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.IsScreenResolutionDirty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Video_C::IsScreenResolutionDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsScreenResolutionDirty");

	UWB_Options_Video_C_IsScreenResolutionDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.IsFulllscreenModeDirty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Video_C::IsFulllscreenModeDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsFulllscreenModeDirty");

	UWB_Options_Video_C_IsFulllscreenModeDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetWindowMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EWindowMode> InFullscreenMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetWindowMode(TEnumAsByte<Engine_EWindowMode> InFullscreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetWindowMode");

	UWB_Options_Video_C_SetWindowMode_Params params;
	params.InFullscreenMode = InFullscreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetWindowMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Engine_EWindowMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Engine_EWindowMode> UWB_Options_Video_C::GetWindowMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetWindowMode");

	UWB_Options_Video_C_GetWindowMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.FindButtonResolutionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint               Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::FindButtonResolutionState(const struct FIntPoint& Resolution, bool* Found, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.FindButtonResolutionState");

	UWB_Options_Video_C_FindButtonResolutionState_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;

}


// Function WB_Options_Video.WB_Options_Video_C.TranslateResolutionFromButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint               IntPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::TranslateResolutionFromButton(const struct FName& InName, struct FIntPoint* IntPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.TranslateResolutionFromButton");

	UWB_Options_Video_C_TranslateResolutionFromButton_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntPoint != nullptr)
		*IntPoint = params.IntPoint;

}


// Function WB_Options_Video.WB_Options_Video_C.GetScreenResolutionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName UWB_Options_Video_C::GetScreenResolutionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetScreenResolutionName");

	UWB_Options_Video_C_GetScreenResolutionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.HasState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_StateButton_C*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Video_C::HasState(class UWB_StateButton_C* Target, const struct FName& Name, bool* HasState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.HasState");

	UWB_Options_Video_C_HasState_Params params;
	params.Target = Target;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasState != nullptr)
		*HasState = params.HasState;

}


// Function WB_Options_Video.WB_Options_Video_C.ApplyResolutionSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ApplyResolutionSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplyResolutionSettings");

	UWB_Options_Video_C_ApplyResolutionSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetDynamicResolutionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Video_C::SetDynamicResolutionEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetDynamicResolutionEnabled");

	UWB_Options_Video_C_SetDynamicResolutionEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Video_C::IsDynamicResolutionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionEnabled");

	UWB_Options_Video_C_IsDynamicResolutionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionDirty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Video_C::IsDynamicResolutionDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionDirty");

	UWB_Options_Video_C_IsDynamicResolutionDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.GetLastConfirmedScreenResolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FIntPoint UWB_Options_Video_C::GetLastConfirmedScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetLastConfirmedScreenResolution");

	UWB_Options_Video_C_GetLastConfirmedScreenResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.SetScreenResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint               Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::SetScreenResolution(const struct FIntPoint& Resolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetScreenResolution");

	UWB_Options_Video_C_SetScreenResolution_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.GetDesktopResolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FIntPoint UWB_Options_Video_C::GetDesktopResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetDesktopResolution");

	UWB_Options_Video_C_GetDesktopResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.GetScreenResolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FIntPoint UWB_Options_Video_C::GetScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetScreenResolution");

	UWB_Options_Video_C_GetScreenResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.GetUserSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameUserSettings*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameUserSettings* UWB_Options_Video_C::GetUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetUserSettings");

	UWB_Options_Video_C_GetUserSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.GetIsGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Options_Video_C::GetIsGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetIsGamepad");

	UWB_Options_Video_C_GetIsGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.ScrollToCurrentlyFocusedWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ScrollToCurrentlyFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ScrollToCurrentlyFocusedWidget");

	UWB_Options_Video_C_ScrollToCurrentlyFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.NavToBackButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::NavToBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.NavToBackButton");

	UWB_Options_Video_C_NavToBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.NavToOptionsButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::NavToOptionsButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.NavToOptionsButtons");

	UWB_Options_Video_C_NavToOptionsButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.NavToTextButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::NavToTextButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.NavToTextButtons");

	UWB_Options_Video_C_NavToTextButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Options_Video_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnPreviewKeyDown");

	UWB_Options_Video_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Video_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ActivateWidget");

	UWB_Options_Video_C_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnInputSwitched");

	UWB_Options_Video_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.CheckFocus");

	UWB_Options_Video_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Video_C::BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Video_C_BndEvt__TextButton_Options_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Video_C::BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_Options_Video_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.ClickBack
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::ClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ClickBack");

	UWB_Options_Video_C_ClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Options_Video_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetGamepadAppearance");

	UWB_Options_Video_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.HandleRemoveWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::HandleRemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.HandleRemoveWidget");

	UWB_Options_Video_C_HandleRemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Video_C::BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Video_C_BndEvt__TextButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_Options_Video_C::BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Button_ResetDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.OnConfirmReset
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::OnConfirmReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnConfirmReset");

	UWB_Options_Video_C_OnConfirmReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetDefaultValues
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::SetDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetDefaultValues");

	UWB_Options_Video_C_SetDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.InitializeVideoSettings
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::InitializeVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.InitializeVideoSettings");

	UWB_Options_Video_C_InitializeVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::SetupButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetupButtons");

	UWB_Options_Video_C_SetupButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.CheckSettings
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::CheckSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.CheckSettings");

	UWB_Options_Video_C_CheckSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.SetSavedValues
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::SetSavedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetSavedValues");

	UWB_Options_Video_C_SetSavedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StateIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature(const struct FName& StateName, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature");

	UWB_Options_Video_C_BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature_Params params;
	params.StateName = StateName;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.OnCancelRequest
// (BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::OnCancelRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnCancelRequest");

	UWB_Options_Video_C_OnCancelRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.Tick");

	UWB_Options_Video_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.ExecuteUbergraph_WB_Options_Video
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Options_Video_C::ExecuteUbergraph_WB_Options_Video(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ExecuteUbergraph_WB_Options_Video");

	UWB_Options_Video_C_ExecuteUbergraph_WB_Options_Video_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Options_Video.WB_Options_Video_C.OnClicked_Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Options_Video_C::OnClicked_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnClicked_Back__DelegateSignature");

	UWB_Options_Video_C_OnClicked_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
