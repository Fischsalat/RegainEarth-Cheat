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

// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.CreateKeyWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_KeysButton_C*         WKeysButton                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::CreateKeyWidget(class UW_KeysButton_C** WKeysButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.CreateKeyWidget");

	UW_Setting_KeysFrame_C_CreateKeyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WKeysButton != nullptr)
		*WKeysButton = params.WKeysButton;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.InitKeyWidgetsList
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_KeysFrame_C::InitKeyWidgetsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.InitKeyWidgetsList");

	UW_Setting_KeysFrame_C_InitKeyWidgetsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.GetAllInputs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInputAxisKeyMapping> Local_Axis1                    (Parm, OutParm)
// TArray<struct FInputActionKeyMapping> Local_Actions1                 (Parm, OutParm)
void UW_Setting_KeysFrame_C::GetAllInputs(TArray<struct FInputAxisKeyMapping>* Local_Axis1, TArray<struct FInputActionKeyMapping>* Local_Actions1)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.GetAllInputs");

	UW_Setting_KeysFrame_C_GetAllInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Local_Axis1 != nullptr)
		*Local_Axis1 = params.Local_Axis1;
	if (Local_Actions1 != nullptr)
		*Local_Actions1 = params.Local_Actions1;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreButtonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_KeysFrame_C::RestoreButtonsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreButtonsVisibility");

	UW_Setting_KeysFrame_C_RestoreButtonsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.IsSettingsEqual
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSSettings_InputKeys> A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSSettings_InputKeys> B                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Setting_KeysFrame_C::IsSettingsEqual(TArray<struct FSSettings_InputKeys>* A, TArray<struct FSSettings_InputKeys>* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.IsSettingsEqual");

	UW_Setting_KeysFrame_C_IsSettingsEqual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;


	return params.ReturnValue;
}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.Save_SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_KeysFrame_C::Save_SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.Save_SaveSettings");

	UW_Setting_KeysFrame_C_Save_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSSettings_InputKeys> SSettings_InputKeys            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsBindKeys                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Setting_KeysFrame_C::RestoreValues(TArray<struct FSSettings_InputKeys>* SSettings_InputKeys, bool IsBindKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreValues");

	UW_Setting_KeysFrame_C_RestoreValues_Params params;
	params.IsBindKeys = IsBindKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SSettings_InputKeys != nullptr)
		*SSettings_InputKeys = params.SSettings_InputKeys;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Setting_KeysFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.Construct");

	UW_Setting_KeysFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Setting_KeysFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.ActiveWidget");

	UW_Setting_KeysFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnHovered");

	UW_Setting_KeysFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature");

	UW_Setting_KeysFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_177_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature");

	UW_Setting_KeysFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_190_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnChangeInputKeyValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_InputKeys    NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::OnChangeInputKeyValue(const struct FSSettings_InputKeys& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnChangeInputKeyValue");

	UW_Setting_KeysFrame_C_OnChangeInputKeyValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.AllButtonsPressedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.AllButtonsPressedEvents");

	UW_Setting_KeysFrame_C_AllButtonsPressedEvents_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
// (BlueprintEvent)
void UW_Setting_KeysFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature");

	UW_Setting_KeysFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
// (BlueprintEvent)
void UW_Setting_KeysFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature");

	UW_Setting_KeysFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnClickOfButtonRowToSelectNewButton
// (BlueprintCallable, BlueprintEvent)
void UW_Setting_KeysFrame_C::OnClickOfButtonRowToSelectNewButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnClickOfButtonRowToSelectNewButton");

	UW_Setting_KeysFrame_C_OnClickOfButtonRowToSelectNewButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnCancel_SelectButtonEvent
// (BlueprintCallable, BlueprintEvent)
void UW_Setting_KeysFrame_C::OnCancel_SelectButtonEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.OnCancel_SelectButtonEvent");

	UW_Setting_KeysFrame_C_OnCancel_SelectButtonEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreDefaultButtonsAndSave
// (BlueprintCallable, BlueprintEvent)
void UW_Setting_KeysFrame_C::RestoreDefaultButtonsAndSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.RestoreDefaultButtonsAndSave");

	UW_Setting_KeysFrame_C_RestoreDefaultButtonsAndSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.ExecuteUbergraph_W_Setting_KeysFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_KeysFrame_C::ExecuteUbergraph_W_Setting_KeysFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_KeysFrame.W_Setting_KeysFrame_C.ExecuteUbergraph_W_Setting_KeysFrame");

	UW_Setting_KeysFrame_C_ExecuteUbergraph_W_Setting_KeysFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
