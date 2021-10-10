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

// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.RestoreButtonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_QualityFrame_C::RestoreButtonsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.RestoreButtonsVisibility");

	UW_Setting_QualityFrame_C_RestoreButtonsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.IsSettingsEqual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSSettings_Quality      Q1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_Quality      Q1_defaults                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_QualityCustom Q2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_QualityCustom Q2_defaults                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Setting_QualityFrame_C::IsSettingsEqual(const struct FSSettings_Quality& Q1, const struct FSSettings_Quality& Q1_defaults, const struct FSSettings_QualityCustom& Q2, const struct FSSettings_QualityCustom& Q2_defaults)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.IsSettingsEqual");

	UW_Setting_QualityFrame_C_IsSettingsEqual_Params params;
	params.Q1 = Q1;
	params.Q1_defaults = Q1_defaults;
	params.Q2 = Q2;
	params.Q2_defaults = Q2_defaults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.Save_SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_QualityFrame_C::Save_SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.Save_SaveSettings");

	UW_Setting_QualityFrame_C_Save_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.MyApplySetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_Quality      SSettings_Quality_Scalability  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_QualityCustom SSettings_Quality_Custom       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::MyApplySetting(const struct FSSettings_Quality& SSettings_Quality_Scalability, const struct FSSettings_QualityCustom& SSettings_Quality_Custom)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.MyApplySetting");

	UW_Setting_QualityFrame_C_MyApplySetting_Params params;
	params.SSettings_Quality_Scalability = SSettings_Quality_Scalability;
	params.SSettings_Quality_Custom = SSettings_Quality_Custom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.RestoreValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_Quality      SSettings_Quality_Scalability  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_QualityCustom SSettings_Quality_Custom       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::RestoreValues(const struct FSSettings_Quality& SSettings_Quality_Scalability, const struct FSSettings_QualityCustom& SSettings_Quality_Custom)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.RestoreValues");

	UW_Setting_QualityFrame_C_RestoreValues_Params params;
	params.SSettings_Quality_Scalability = SSettings_Quality_Scalability;
	params.SSettings_Quality_Custom = SSettings_Quality_Custom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ParamToIntQualityNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UW_Setting_QualityFrame_C::ParamToIntQualityNames(const struct FName& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ParamToIntQualityNames");

	UW_Setting_QualityFrame_C_ParamToIntQualityNames_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Setting_QualityFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.Construct");

	UW_Setting_QualityFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_756_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_260_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_MainFrameButton_2_K2Node_ComponentBoundEvent_785_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_RS_K2Node_ComponentBoundEvent_9_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_PP_K2Node_ComponentBoundEvent_10_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_AA_K2Node_ComponentBoundEvent_11_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_Effects_K2Node_ComponentBoundEvent_12_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_Foll_K2Node_ComponentBoundEvent_13_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_Shad_K2Node_ComponentBoundEvent_14_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_Text_K2Node_ComponentBoundEvent_15_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_VD_K2Node_ComponentBoundEvent_16_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Setting_QualityFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ActiveWidget");

	UW_Setting_QualityFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.OnHovered");

	UW_Setting_QualityFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
// (BlueprintEvent)
void UW_Setting_QualityFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
// (BlueprintEvent)
void UW_Setting_QualityFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.AllButtonsPressedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.AllButtonsPressedEvents");

	UW_Setting_QualityFrame_C_AllButtonsPressedEvents_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_GiveMeExtremSettings_K2Node_ComponentBoundEvent_2_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Setting_QualityFrame_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.OnInitialized");

	UW_Setting_QualityFrame_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_MotionBlur_K2Node_ComponentBoundEvent_3_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_JitterGrain_K2Node_ComponentBoundEvent_4_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_Lensflare_K2Node_ComponentBoundEvent_5_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_Bloom_K2Node_ComponentBoundEvent_6_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature");

	UW_Setting_QualityFrame_C_BndEvt__W_DepthOfField_K2Node_ComponentBoundEvent_7_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ExecuteUbergraph_W_Setting_QualityFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_QualityFrame_C::ExecuteUbergraph_W_Setting_QualityFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_QualityFrame.W_Setting_QualityFrame_C.ExecuteUbergraph_W_Setting_QualityFrame");

	UW_Setting_QualityFrame_C_ExecuteUbergraph_W_Setting_QualityFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
