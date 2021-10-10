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

// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.CheckResolutionIsValids
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint               IntPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Setting_DisplayFrame_C::CheckResolutionIsValids(const struct FIntPoint& IntPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.CheckResolutionIsValids");

	UW_Setting_DisplayFrame_C_CheckResolutionIsValids_Params params;
	params.IntPoint = IntPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.GetDefaultScreenReslotion
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DefaultResolutionIndex         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint               DefaultResolution              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DefaultResolutionIndexFoundValidIndex (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Setting_DisplayFrame_C::GetDefaultScreenReslotion(int* DefaultResolutionIndex, struct FIntPoint* DefaultResolution, bool* DefaultResolutionIndexFoundValidIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.GetDefaultScreenReslotion");

	UW_Setting_DisplayFrame_C_GetDefaultScreenReslotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DefaultResolutionIndex != nullptr)
		*DefaultResolutionIndex = params.DefaultResolutionIndex;
	if (DefaultResolution != nullptr)
		*DefaultResolution = params.DefaultResolution;
	if (DefaultResolutionIndexFoundValidIndex != nullptr)
		*DefaultResolutionIndexFoundValidIndex = params.DefaultResolutionIndexFoundValidIndex;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Create Screen Resolutions List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Setting_DisplayFrame_C::Create_Screen_Resolutions_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Create Screen Resolutions List");

	UW_Setting_DisplayFrame_C_Create_Screen_Resolutions_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Find_GDC_recursive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            A1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::Find_GDC_recursive(int A, int B, int* A1)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Find_GDC_recursive");

	UW_Setting_DisplayFrame_C_Find_GDC_recursive_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A1 != nullptr)
		*A1 = params.A1;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.RestoreButtonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_DisplayFrame_C::RestoreButtonsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.RestoreButtonsVisibility");

	UW_Setting_DisplayFrame_C_RestoreButtonsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.IsSettingsEqual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSSettings_Display      A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSettings_Display      B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_Setting_DisplayFrame_C::IsSettingsEqual(const struct FSSettings_Display& A, const struct FSSettings_Display& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.IsSettingsEqual");

	UW_Setting_DisplayFrame_C_IsSettingsEqual_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Save_SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Setting_DisplayFrame_C::Save_SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Save_SaveSettings");

	UW_Setting_DisplayFrame_C_Save_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ApplySettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_Display      SSettings_Display              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::ApplySettings(const struct FSSettings_Display& SSettings_Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ApplySettings");

	UW_Setting_DisplayFrame_C_ApplySettings_Params params;
	params.SSettings_Display = SSettings_Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.RestoreValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_Display      SSettings_Display              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::RestoreValues(const struct FSSettings_Display& SSettings_Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.RestoreValues");

	UW_Setting_DisplayFrame_C_RestoreValues_Params params;
	params.SSettings_Display = SSettings_Display;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.GetScreenResolutionFromCustomResolutionList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FIntPoint UW_Setting_DisplayFrame_C::GetScreenResolutionFromCustomResolutionList(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.GetScreenResolutionFromCustomResolutionList");

	UW_Setting_DisplayFrame_C_GetScreenResolutionFromCustomResolutionList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Setting_DisplayFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.Construct");

	UW_Setting_DisplayFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_MainFrameButton_0_K2Node_ComponentBoundEvent_1008_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_MainFrameButton_1_K2Node_ComponentBoundEvent_1029_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_Res_K2Node_ComponentBoundEvent_17_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_Fov_K2Node_ComponentBoundEvent_18_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_Lim_K2Node_ComponentBoundEvent_19_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_SM_K2Node_ComponentBoundEvent_20_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_VS_K2Node_ComponentBoundEvent_21_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Setting_DisplayFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ActiveWidget");

	UW_Setting_DisplayFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.OnHovered");

	UW_Setting_DisplayFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature
// (BlueprintEvent)
void UW_Setting_DisplayFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_0_OnSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature
// (BlueprintEvent)
void UW_Setting_DisplayFrame_C::BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature");

	UW_Setting_DisplayFrame_C_BndEvt__W_WarningFrame_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.AllButtonsPressedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.AllButtonsPressedEvents");

	UW_Setting_DisplayFrame_C_AllButtonsPressedEvents_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ExecuteUbergraph_W_Setting_DisplayFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Setting_DisplayFrame_C::ExecuteUbergraph_W_Setting_DisplayFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Setting_DisplayFrame.W_Setting_DisplayFrame_C.ExecuteUbergraph_W_Setting_DisplayFrame");

	UW_Setting_DisplayFrame_C_ExecuteUbergraph_W_Setting_DisplayFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
