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

// Function WB_SelectChapter.WB_SelectChapter_C.NavToChapterButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::NavToChapterButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.NavToChapterButton");

	UWB_SelectChapter_C_NavToChapterButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.NavToTextButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::NavToTextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.NavToTextButton");

	UWB_SelectChapter_C_NavToTextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.GetIsGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SelectChapter_C::GetIsGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.GetIsGamepad");

	UWB_SelectChapter_C_GetIsGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SelectChapter.WB_SelectChapter_C.NavToBackButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::NavToBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.NavToBackButton");

	UWB_SelectChapter_C_NavToBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_SelectChapter_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.OnPreviewKeyDown");

	UWB_SelectChapter_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.ActivateWidget");

	UWB_SelectChapter_C_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SelectChapter_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.OnInputSwitched");

	UWB_SelectChapter_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.CheckFocus");

	UWB_SelectChapter_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.ClickBack
// (BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::ClickBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.ClickBack");

	UWB_SelectChapter_C_ClickBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.SetGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_SelectChapter_C::SetGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.SetGamepadAppearance");

	UWB_SelectChapter_C_SetGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.HandleRemoveWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::HandleRemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.HandleRemoveWidget");

	UWB_SelectChapter_C_HandleRemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_03_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_03_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_03_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_03_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_04_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_04_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_04_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_04_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_05_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_05_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_05_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_05_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_06_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_06_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_06_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_06_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_07_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_07_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_07_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_07_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_08_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_08_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_08_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_08_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_09_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_09_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_09_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_09_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_10_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_10_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_10_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_10_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_11_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_11_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_11_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_11_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_12_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_12_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_12_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_12_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_13_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_13_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_13_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_13_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_14_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_14_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_14_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_14_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_15_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_15_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_15_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_15_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_16_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_16_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_16_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_16_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_17_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_17_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_17_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_17_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_18_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__Button_Chapter_18_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__Button_Chapter_18_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__Button_Chapter_18_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__TextButton_MainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__TextButton_Play_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_SelectChapter_C::BndEvt__TextButton_Play_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.BndEvt__TextButton_Play_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	UWB_SelectChapter_C_BndEvt__TextButton_Play_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SelectChapter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.Tick");

	UWB_SelectChapter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.ExecuteUbergraph_WB_SelectChapter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SelectChapter_C::ExecuteUbergraph_WB_SelectChapter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.ExecuteUbergraph_WB_SelectChapter");

	UWB_SelectChapter_C_ExecuteUbergraph_WB_SelectChapter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SelectChapter.WB_SelectChapter_C.OnClicked_Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_SelectChapter_C::OnClicked_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SelectChapter.WB_SelectChapter_C.OnClicked_Back__DelegateSignature");

	UWB_SelectChapter_C_OnClicked_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
