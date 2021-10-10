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

// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.CalcAndClampSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UW_Setting_SoundFrame_C::CalcAndClampSound(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.CalcAndClampSound");

	UW_Setting_SoundFrame_C_CalcAndClampSound_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.RestoreButtonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_SoundFrame_C::RestoreButtonsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.RestoreButtonsVisibility");

	UW_Setting_SoundFrame_C_RestoreButtonsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.IsSettingsEqual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSSettings_Sounds       A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_Sounds       B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Setting_SoundFrame_C::IsSettingsEqual(const struct FSSettings_Sounds& A, const struct FSSettings_Sounds& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.IsSettingsEqual");

	UW_Setting_SoundFrame_C_IsSettingsEqual_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.Save_SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_SoundFrame_C::Save_SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.Save_SaveSettings");

	UW_Setting_SoundFrame_C_Save_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ApplySettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_Sounds       SSettings_Sounds               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::ApplySettings(const struct FSSettings_Sounds& SSettings_Sounds, float Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ApplySettings");

	UW_Setting_SoundFrame_C_ApplySettings_Params params;
	params.SSettings_Sounds = SSettings_Sounds;
	params.Fade = Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.RestoreValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_Sounds       SSettings_Sounds               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::RestoreValues(const struct FSSettings_Sounds& SSettings_Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.RestoreValues");

	UW_Setting_SoundFrame_C_RestoreValues_Params params;
	params.SSettings_Sounds = SSettings_Sounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Setting_SoundFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.Construct");

	UW_Setting_SoundFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Master_K2Node_ComponentBoundEvent_22_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Music_K2Node_ComponentBoundEvent_23_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Music_K2Node_ComponentBoundEvent_23_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Music_K2Node_ComponentBoundEvent_23_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Music_K2Node_ComponentBoundEvent_23_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Effects_K2Node_ComponentBoundEvent_24_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Effects_K2Node_ComponentBoundEvent_24_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Effects_K2Node_ComponentBoundEvent_24_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Effects_K2Node_ComponentBoundEvent_24_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Dial_K2Node_ComponentBoundEvent_25_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Dial_K2Node_ComponentBoundEvent_25_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Dial_K2Node_ComponentBoundEvent_25_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Dial_K2Node_ComponentBoundEvent_25_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Amb_K2Node_ComponentBoundEvent_26_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Amb_K2Node_ComponentBoundEvent_26_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Amb_K2Node_ComponentBoundEvent_26_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Amb_K2Node_ComponentBoundEvent_26_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Ex1_K2Node_ComponentBoundEvent_27_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Ex1_K2Node_ComponentBoundEvent_27_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Ex1_K2Node_ComponentBoundEvent_27_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Ex1_K2Node_ComponentBoundEvent_27_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Ex2_K2Node_ComponentBoundEvent_28_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::BndEvt__W_Ex2_K2Node_ComponentBoundEvent_28_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_Ex2_K2Node_ComponentBoundEvent_28_OnChangeValue__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_Ex2_K2Node_ComponentBoundEvent_28_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Setting_SoundFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ActiveWidget");

	UW_Setting_SoundFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.OnHovered");

	UW_Setting_SoundFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
// (BlueprintEvent)
void UW_Setting_SoundFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
// (BlueprintEvent)
void UW_Setting_SoundFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature");

	UW_Setting_SoundFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.AllButtonsPressedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.AllButtonsPressedEvents");

	UW_Setting_SoundFrame_C_AllButtonsPressedEvents_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ExecuteUbergraph_W_Setting_SoundFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_SoundFrame_C::ExecuteUbergraph_W_Setting_SoundFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_SoundFrame.W_Setting_SoundFrame_C.ExecuteUbergraph_W_Setting_SoundFrame");

	UW_Setting_SoundFrame_C_ExecuteUbergraph_W_Setting_SoundFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
