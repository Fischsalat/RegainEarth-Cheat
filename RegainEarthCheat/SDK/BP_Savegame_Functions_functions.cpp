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

// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyControlSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDefaultValues               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_LoadAndApplyControlSettings(bool SetDefaultValues, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyControlSettings");

	UBP_Savegame_Functions_C_LoadAndApplyControlSettings_Params params;
	params.SetDefaultValues = SetDefaultValues;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_Y
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                           Invert_Y                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Load_Invert_Y(class UObject* __WorldContext, bool* Invert_Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_Y");

	UBP_Savegame_Functions_C_Load_Invert_Y_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Invert_Y != nullptr)
		*Invert_Y = params.Invert_Y;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_Y
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InvertY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Invert_Y(bool InvertY, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_Y");

	UBP_Savegame_Functions_C_Save_Invert_Y_Params params;
	params.InvertY = InvertY;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_X
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                           Invert_X                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Load_Invert_X(class UObject* __WorldContext, bool* Invert_X)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_X");

	UBP_Savegame_Functions_C_Load_Invert_X_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Invert_X != nullptr)
		*Invert_X = params.Invert_X;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_X
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InvertX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Invert_X(bool InvertX, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_X");

	UBP_Savegame_Functions_C_Save_Invert_X_Params params;
	params.InvertX = InvertX;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity04
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_Sensitivity04(class UObject* __WorldContext, float* Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity04");

	UBP_Savegame_Functions_C_Load_Sensitivity04_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity04
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sensitivity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Sensitivity04(float Sensitivity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity04");

	UBP_Savegame_Functions_C_Save_Sensitivity04_Params params;
	params.Sensitivity = Sensitivity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity03
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_Sensitivity03(class UObject* __WorldContext, float* Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity03");

	UBP_Savegame_Functions_C_Load_Sensitivity03_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity03
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sensitivity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Sensitivity03(float Sensitivity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity03");

	UBP_Savegame_Functions_C_Save_Sensitivity03_Params params;
	params.Sensitivity = Sensitivity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity02
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_Sensitivity02(class UObject* __WorldContext, float* Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity02");

	UBP_Savegame_Functions_C_Load_Sensitivity02_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity02
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sensitivity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Sensitivity02(float Sensitivity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity02");

	UBP_Savegame_Functions_C_Save_Sensitivity02_Params params;
	params.Sensitivity = Sensitivity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity01
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          Sensitivity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_Sensitivity01(class UObject* __WorldContext, float* Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity01");

	UBP_Savegame_Functions_C_Load_Sensitivity01_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sensitivity != nullptr)
		*Sensitivity = params.Sensitivity;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity01
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sensitivity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Sensitivity01(float Sensitivity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity01");

	UBP_Savegame_Functions_C_Save_Sensitivity01_Params params;
	params.Sensitivity = Sensitivity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesControlSettingsSaveExist
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DoesControlSettingsSaveExist(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesControlSettingsSaveExist");

	UBP_Savegame_Functions_C_DoesControlSettingsSaveExist_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteControlSettingsSave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DeleteControlSettingsSave(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteControlSettingsSave");

	UBP_Savegame_Functions_C_DeleteControlSettingsSave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.ActivateSoundMixes
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_ActivateSoundMixes(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.ActivateSoundMixes");

	UBP_Savegame_Functions_C_ActivateSoundMixes_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.FindVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_Savegame_Functions_C::STATIC_FindVolume(float Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.FindVolume");

	UBP_Savegame_Functions_C_FindVolume_Params params;
	params.Volume = Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetMusicOn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMusicOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_SetMusicOn(bool bMusicOn, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetMusicOn");

	UBP_Savegame_Functions_C_SetMusicOn_Params params;
	params.bMusicOn = bMusicOn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetOutputProfile
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutputProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_SetOutputProfile(int OutputProfile, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetOutputProfile");

	UBP_Savegame_Functions_C_SetOutputProfile_Params params;
	params.OutputProfile = OutputProfile;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_SoundEffects
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_SetVolume_SoundEffects(float Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_SoundEffects");

	UBP_Savegame_Functions_C_SetVolume_SoundEffects_Params params;
	params.Volume = Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Dialogue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_SetVolume_Dialogue(float Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Dialogue");

	UBP_Savegame_Functions_C_SetVolume_Dialogue_Params params;
	params.Volume = Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Music
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_SetVolume_Music(float Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Music");

	UBP_Savegame_Functions_C_SetVolume_Music_Params params;
	params.Volume = Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Master
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_SetVolume_Master(float Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Master");

	UBP_Savegame_Functions_C_SetVolume_Master_Params params;
	params.Volume = Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyAudioSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDefaultValues               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_LoadAndApplyAudioSettings(bool SetDefaultValues, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyAudioSettings");

	UBP_Savegame_Functions_C_LoadAndApplyAudioSettings_Params params;
	params.SetDefaultValues = SetDefaultValues;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesAudioSettingsSaveExist
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DoesAudioSettingsSaveExist(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesAudioSettingsSaveExist");

	UBP_Savegame_Functions_C_DoesAudioSettingsSaveExist_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteAudioSettingsSave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DeleteAudioSettingsSave(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteAudioSettingsSave");

	UBP_Savegame_Functions_C_DeleteAudioSettingsSave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Subtitles
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                           bSubtitles                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Load_Subtitles(class UObject* __WorldContext, bool* bSubtitles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Subtitles");

	UBP_Savegame_Functions_C_Load_Subtitles_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSubtitles != nullptr)
		*bSubtitles = params.bSubtitles;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Subtitles
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSubtitles                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_Subtitles(bool bSubtitles, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Subtitles");

	UBP_Savegame_Functions_C_Save_Subtitles_Params params;
	params.bSubtitles = bSubtitles;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicOn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                           bMusic                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Load_MusicOn(class UObject* __WorldContext, bool* bMusic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicOn");

	UBP_Savegame_Functions_C_Load_MusicOn_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bMusic != nullptr)
		*bMusic = params.bMusic;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicOn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMusic                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_MusicOn(bool bMusic, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicOn");

	UBP_Savegame_Functions_C_Save_MusicOn_Params params;
	params.bMusic = bMusic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_OutputProfile
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            OutputProfile                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_OutputProfile(class UObject* __WorldContext, int* OutputProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_OutputProfile");

	UBP_Savegame_Functions_C_Load_OutputProfile_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutputProfile != nullptr)
		*OutputProfile = params.OutputProfile;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_OutputProfile
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutputProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_OutputProfile(int OutputProfile, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_OutputProfile");

	UBP_Savegame_Functions_C_Save_OutputProfile_Params params;
	params.OutputProfile = OutputProfile;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_SoundEffectsVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          SoundEffectsVolume             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_SoundEffectsVolume(class UObject* __WorldContext, float* SoundEffectsVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_SoundEffectsVolume");

	UBP_Savegame_Functions_C_Load_SoundEffectsVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoundEffectsVolume != nullptr)
		*SoundEffectsVolume = params.SoundEffectsVolume;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_SoundEffectsVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SoundEffectsVolume             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_SoundEffectsVolume(float SoundEffectsVolume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_SoundEffectsVolume");

	UBP_Savegame_Functions_C_Save_SoundEffectsVolume_Params params;
	params.SoundEffectsVolume = SoundEffectsVolume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_DialogueVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          DialogueVolume                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_DialogueVolume(class UObject* __WorldContext, float* DialogueVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_DialogueVolume");

	UBP_Savegame_Functions_C_Load_DialogueVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogueVolume != nullptr)
		*DialogueVolume = params.DialogueVolume;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_DialogueVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DialogueVolume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_DialogueVolume(float DialogueVolume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_DialogueVolume");

	UBP_Savegame_Functions_C_Save_DialogueVolume_Params params;
	params.DialogueVolume = DialogueVolume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          MusicVolume                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_MusicVolume(class UObject* __WorldContext, float* MusicVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicVolume");

	UBP_Savegame_Functions_C_Load_MusicVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MusicVolume != nullptr)
		*MusicVolume = params.MusicVolume;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MusicVolume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_MusicVolume(float MusicVolume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicVolume");

	UBP_Savegame_Functions_C_Save_MusicVolume_Params params;
	params.MusicVolume = MusicVolume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MasterVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          MasterVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_Load_MasterVolume(class UObject* __WorldContext, float* MasterVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MasterVolume");

	UBP_Savegame_Functions_C_Load_MasterVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasterVolume != nullptr)
		*MasterVolume = params.MasterVolume;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MasterVolume
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MasterVolume                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_Save_MasterVolume(float MasterVolume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MasterVolume");

	UBP_Savegame_Functions_C_Save_MasterVolume_Params params;
	params.MasterVolume = MasterVolume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadPostProcessQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            PostProcessQuality             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadPostProcessQuality(class UObject* __WorldContext, int* PostProcessQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadPostProcessQuality");

	UBP_Savegame_Functions_C_LoadPostProcessQuality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PostProcessQuality != nullptr)
		*PostProcessQuality = params.PostProcessQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SavePostProcessQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PostProcessQuality             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SavePostProcessQuality(int PostProcessQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SavePostProcessQuality");

	UBP_Savegame_Functions_C_SavePostProcessQuality_Params params;
	params.PostProcessQuality = PostProcessQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadViewDistance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            ViewDistanceQuality            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadViewDistance(class UObject* __WorldContext, int* ViewDistanceQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadViewDistance");

	UBP_Savegame_Functions_C_LoadViewDistance_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewDistanceQuality != nullptr)
		*ViewDistanceQuality = params.ViewDistanceQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveViewDistance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewDistanceQuality            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveViewDistance(int ViewDistanceQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveViewDistance");

	UBP_Savegame_Functions_C_SaveViewDistance_Params params;
	params.ViewDistanceQuality = ViewDistanceQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFoliageQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            FoliageQuality                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadFoliageQuality(class UObject* __WorldContext, int* FoliageQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFoliageQuality");

	UBP_Savegame_Functions_C_LoadFoliageQuality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoliageQuality != nullptr)
		*FoliageQuality = params.FoliageQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFoliageQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FoliageQuality                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveFoliageQuality(int FoliageQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFoliageQuality");

	UBP_Savegame_Functions_C_SaveFoliageQuality_Params params;
	params.FoliageQuality = FoliageQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAAQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            AAQuality                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadAAQuality(class UObject* __WorldContext, int* AAQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAAQuality");

	UBP_Savegame_Functions_C_LoadAAQuality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AAQuality != nullptr)
		*AAQuality = params.AAQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAAQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AAQuality                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveAAQuality(int AAQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAAQuality");

	UBP_Savegame_Functions_C_SaveAAQuality_Params params;
	params.AAQuality = AAQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVisualEffectsQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            VisualEffectsQuality           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadVisualEffectsQuality(class UObject* __WorldContext, int* VisualEffectsQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVisualEffectsQuality");

	UBP_Savegame_Functions_C_LoadVisualEffectsQuality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VisualEffectsQuality != nullptr)
		*VisualEffectsQuality = params.VisualEffectsQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVisualEffectsQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VisualEffectsQuality           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveVisualEffectsQuality(int VisualEffectsQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVisualEffectsQuality");

	UBP_Savegame_Functions_C_SaveVisualEffectsQuality_Params params;
	params.VisualEffectsQuality = VisualEffectsQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadShadowQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            ShadowQuality                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadShadowQuality(class UObject* __WorldContext, int* ShadowQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadShadowQuality");

	UBP_Savegame_Functions_C_LoadShadowQuality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShadowQuality != nullptr)
		*ShadowQuality = params.ShadowQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveShadowQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShadowQuality                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveShadowQuality(int ShadowQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveShadowQuality");

	UBP_Savegame_Functions_C_SaveShadowQuality_Params params;
	params.ShadowQuality = ShadowQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadTextureQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            TextureQuality                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadTextureQuality(class UObject* __WorldContext, int* TextureQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadTextureQuality");

	UBP_Savegame_Functions_C_LoadTextureQuality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextureQuality != nullptr)
		*TextureQuality = params.TextureQuality;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveTextureQuality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TextureQuality                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveTextureQuality(int TextureQuality, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveTextureQuality");

	UBP_Savegame_Functions_C_SaveTextureQuality_Params params;
	params.TextureQuality = TextureQuality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVsync
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                           VerticalSync                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_LoadVsync(class UObject* __WorldContext, bool* VerticalSync)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVsync");

	UBP_Savegame_Functions_C_LoadVsync_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VerticalSync != nullptr)
		*VerticalSync = params.VerticalSync;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVsync
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           VerticalSync                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveVsync(bool VerticalSync, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVsync");

	UBP_Savegame_Functions_C_SaveVsync_Params params;
	params.VerticalSync = VerticalSync;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFrameRateLimit
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          FrameRateLimit                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadFrameRateLimit(class UObject* __WorldContext, float* FrameRateLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFrameRateLimit");

	UBP_Savegame_Functions_C_LoadFrameRateLimit_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FrameRateLimit != nullptr)
		*FrameRateLimit = params.FrameRateLimit;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFrameRateLimit
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FrameRateLimit                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveFrameRateLimit(float FrameRateLimit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFrameRateLimit");

	UBP_Savegame_Functions_C_SaveFrameRateLimit_Params params;
	params.FrameRateLimit = FrameRateLimit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadDynamicResolution
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                           DynamicResolution              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_LoadDynamicResolution(class UObject* __WorldContext, bool* DynamicResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadDynamicResolution");

	UBP_Savegame_Functions_C_LoadDynamicResolution_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DynamicResolution != nullptr)
		*DynamicResolution = params.DynamicResolution;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveDynamicResolution
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DynamicResolution              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveDynamicResolution(bool DynamicResolution, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveDynamicResolution");

	UBP_Savegame_Functions_C_SaveDynamicResolution_Params params;
	params.DynamicResolution = DynamicResolution;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadResolutionScale
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          ResolutionScale                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadResolutionScale(class UObject* __WorldContext, float* ResolutionScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadResolutionScale");

	UBP_Savegame_Functions_C_LoadResolutionScale_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResolutionScale != nullptr)
		*ResolutionScale = params.ResolutionScale;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveResolutionScale
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ResolutionScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveResolutionScale(float ResolutionScale, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveResolutionScale");

	UBP_Savegame_Functions_C_SaveResolutionScale_Params params;
	params.ResolutionScale = ResolutionScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyGraphicSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDefaultValues               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bUseBenchmarkTest              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Savegame_Functions_C::STATIC_LoadAndApplyGraphicSettings(bool SetDefaultValues, bool bUseBenchmarkTest, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyGraphicSettings");

	UBP_Savegame_Functions_C_LoadAndApplyGraphicSettings_Params params;
	params.SetDefaultValues = SetDefaultValues;
	params.bUseBenchmarkTest = bUseBenchmarkTest;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadWindowMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TEnumAsByte<Engine_EWindowMode> WindowMode                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadWindowMode(class UObject* __WorldContext, TEnumAsByte<Engine_EWindowMode>* WindowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadWindowMode");

	UBP_Savegame_Functions_C_LoadWindowMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WindowMode != nullptr)
		*WindowMode = params.WindowMode;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveWindowMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EWindowMode> WindowMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveWindowMode(TEnumAsByte<Engine_EWindowMode> WindowMode, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveWindowMode");

	UBP_Savegame_Functions_C_SaveWindowMode_Params params;
	params.WindowMode = WindowMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteVideoSettingsSave
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DeleteVideoSettingsSave(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteVideoSettingsSave");

	UBP_Savegame_Functions_C_DeleteVideoSettingsSave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadScreenResolution
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FIntPoint               ScreenResolution               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Savegame_Functions_C::STATIC_LoadScreenResolution(class UObject* __WorldContext, struct FIntPoint* ScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadScreenResolution");

	UBP_Savegame_Functions_C_LoadScreenResolution_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenResolution != nullptr)
		*ScreenResolution = params.ScreenResolution;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesVideoSettingsSaveExist
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DoesVideoSettingsSaveExist(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesVideoSettingsSaveExist");

	UBP_Savegame_Functions_C_DoesVideoSettingsSaveExist_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveScreenResolution
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint               ScreenResolution               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveScreenResolution(const struct FIntPoint& ScreenResolution, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveScreenResolution");

	UBP_Savegame_Functions_C_SaveScreenResolution_Params params;
	params.ScreenResolution = ScreenResolution;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<float>                  AxisMappingScales_Gamepad      (Parm, OutParm)
bool UBP_Savegame_Functions_C::STATIC_LoadAxisMappingScales_Gamepad(class UObject* __WorldContext, TArray<float>* AxisMappingScales_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_Gamepad");

	UBP_Savegame_Functions_C_LoadAxisMappingScales_Gamepad_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AxisMappingScales_Gamepad != nullptr)
		*AxisMappingScales_Gamepad = params.AxisMappingScales_Gamepad;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_KeyboardMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<float>                  AxisMappingScales_KeyboardMouse (Parm, OutParm)
bool UBP_Savegame_Functions_C::STATIC_LoadAxisMappingScales_KeyboardMouse(class UObject* __WorldContext, TArray<float>* AxisMappingScales_KeyboardMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_KeyboardMouse");

	UBP_Savegame_Functions_C_LoadAxisMappingScales_KeyboardMouse_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AxisMappingScales_KeyboardMouse != nullptr)
		*AxisMappingScales_KeyboardMouse = params.AxisMappingScales_KeyboardMouse;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  Scales                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveAxisMappingScales_Gamepad(TArray<float>* Scales, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_Gamepad");

	UBP_Savegame_Functions_C_SaveAxisMappingScales_Gamepad_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scales != nullptr)
		*Scales = params.Scales;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_KeyboardMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  ScaleValues                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveAxisMappingScales_KeyboardMouse(TArray<float>* ScaleValues, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_KeyboardMouse");

	UBP_Savegame_Functions_C_SaveAxisMappingScales_KeyboardMouse_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScaleValues != nullptr)
		*ScaleValues = params.ScaleValues;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<struct FName, struct FKey> AxisMappings_Gamepad           (Parm, OutParm)
bool UBP_Savegame_Functions_C::STATIC_LoadAxisMappings_Gamepad(class UObject* __WorldContext, TMap<struct FName, struct FKey>* AxisMappings_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_Gamepad");

	UBP_Savegame_Functions_C_LoadAxisMappings_Gamepad_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AxisMappings_Gamepad != nullptr)
		*AxisMappings_Gamepad = params.AxisMappings_Gamepad;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_KeyboardMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<struct FName, struct FKey> AxisMappings_KeyboardMouse     (Parm, OutParm)
bool UBP_Savegame_Functions_C::STATIC_LoadAxisMappings_KeyboardMouse(class UObject* __WorldContext, TMap<struct FName, struct FKey>* AxisMappings_KeyboardMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_KeyboardMouse");

	UBP_Savegame_Functions_C_LoadAxisMappings_KeyboardMouse_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AxisMappings_KeyboardMouse != nullptr)
		*AxisMappings_KeyboardMouse = params.AxisMappings_KeyboardMouse;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<struct FName, struct FKey> ActionMappings_Gamepad         (Parm, OutParm)
bool UBP_Savegame_Functions_C::STATIC_LoadActionMappings_Gamepad(class UObject* __WorldContext, TMap<struct FName, struct FKey>* ActionMappings_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_Gamepad");

	UBP_Savegame_Functions_C_LoadActionMappings_Gamepad_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionMappings_Gamepad != nullptr)
		*ActionMappings_Gamepad = params.ActionMappings_Gamepad;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FKey> Map                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveAxisMappings_Gamepad(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_Gamepad");

	UBP_Savegame_Functions_C_SaveAxisMappings_Gamepad_Params params;
	params.Map = Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_KeyboardMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FKey> Map                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveAxisMappings_KeyboardMouse(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_KeyboardMouse");

	UBP_Savegame_Functions_C_SaveAxisMappings_KeyboardMouse_Params params;
	params.Map = Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FKey> Map                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveActionMappings_Gamepad(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_Gamepad");

	UBP_Savegame_Functions_C_SaveActionMappings_Gamepad_Params params;
	params.Map = Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_KeyboardMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<struct FName, struct FKey> ActionMappings_KeyboardMouse   (Parm, OutParm)
bool UBP_Savegame_Functions_C::STATIC_LoadActionMappings_KeyboardMouse(class UObject* __WorldContext, TMap<struct FName, struct FKey>* ActionMappings_KeyboardMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_KeyboardMouse");

	UBP_Savegame_Functions_C_LoadActionMappings_KeyboardMouse_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionMappings_KeyboardMouse != nullptr)
		*ActionMappings_KeyboardMouse = params.ActionMappings_KeyboardMouse;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_KeyboardMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FKey> Map                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_SaveActionMappings_KeyboardMouse(TMap<struct FName, struct FKey> Map, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_KeyboardMouse");

	UBP_Savegame_Functions_C_SaveActionMappings_KeyboardMouse_Params params;
	params.Map = Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesInputDefaultsExist
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_Savegame_Functions_C::STATIC_DoesInputDefaultsExist(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesInputDefaultsExist");

	UBP_Savegame_Functions_C_DoesInputDefaultsExist_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
