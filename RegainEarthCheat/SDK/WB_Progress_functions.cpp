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

// Function WB_Progress.WB_Progress_C.DecreaseSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StepSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::DecreaseSliderValue(float StepSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.DecreaseSliderValue");

	UWB_Progress_C_DecreaseSliderValue_Params params;
	params.StepSize = StepSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.IncreaseSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StepSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::IncreaseSliderValue(float StepSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.IncreaseSliderValue");

	UWB_Progress_C_IncreaseSliderValue_Params params;
	params.StepSize = StepSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.SetProgressTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Definition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Progress_C::SetProgressTextValue(float ProgressValue, float MinValue, float MaxValue, const struct FString& Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.SetProgressTextValue");

	UWB_Progress_C_SetProgressTextValue_Params params;
	params.ProgressValue = ProgressValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.SetProgressFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::SetProgressFont(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.SetProgressFont");

	UWB_Progress_C_SetProgressFont_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.SetSliderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::SetSliderColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.SetSliderColor");

	UWB_Progress_C_SetSliderColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.SetButtonsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Progress_C::SetButtonsEnabled(bool BIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.SetButtonsEnabled");

	UWB_Progress_C_SetButtonsEnabled_Params params;
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.ConvertOpacityToNormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWB_Progress_C::ConvertOpacityToNormal(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.ConvertOpacityToNormal");

	UWB_Progress_C_ConvertOpacityToNormal_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Progress.WB_Progress_C.Set_FontInfoHovered
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::Set_FontInfoHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.Set_FontInfoHovered");

	UWB_Progress_C_Set_FontInfoHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.Set_FontInfoNormal
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::Set_FontInfoNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.Set_FontInfoNormal");

	UWB_Progress_C_Set_FontInfoNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.HasAnyFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Progress_C::HasAnyFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.HasAnyFocus");

	UWB_Progress_C_HasAnyFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Progress.WB_Progress_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Progress_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.OnKeyDown");

	UWB_Progress_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Progress.WB_Progress_C.GetButtonRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                 Native_Button                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::GetButtonRight(class UButton** Native_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.GetButtonRight");

	UWB_Progress_C_GetButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Native_Button != nullptr)
		*Native_Button = params.Native_Button;

}


// Function WB_Progress.WB_Progress_C.GetButtonLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                 Native_Button                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::GetButtonLeft(class UButton** Native_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.GetButtonLeft");

	UWB_Progress_C_GetButtonLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Native_Button != nullptr)
		*Native_Button = params.Native_Button;

}


// Function WB_Progress.WB_Progress_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.CheckFocus");

	UWB_Progress_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bNativeHovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Progress_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(bool bNativeHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	UWB_Progress_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params;
	params.bNativeHovered = bNativeHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bNativeHovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Progress_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(bool bNativeHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	UWB_Progress_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params;
	params.bNativeHovered = bNativeHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Progress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.Construct");

	UWB_Progress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature");

	UWB_Progress_C_BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.UpdateSliderText
// (BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::UpdateSliderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.UpdateSliderText");

	UWB_Progress_C_UpdateSliderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.SliderClickLeft
// (BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::SliderClickLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.SliderClickLeft");

	UWB_Progress_C_SliderClickLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.SliderClickRight
// (BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::SliderClickRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.SliderClickRight");

	UWB_Progress_C_SliderClickRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.CheckSliderHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::CheckSliderHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.CheckSliderHovered");

	UWB_Progress_C_CheckSliderHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.OnValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SliderValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::OnValueChanged(float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.OnValueChanged");

	UWB_Progress_C_OnValueChanged_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Progress_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.PreConstruct");

	UWB_Progress_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.Tick");

	UWB_Progress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.ExecuteUbergraph_WB_Progress
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::ExecuteUbergraph_WB_Progress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.ExecuteUbergraph_WB_Progress");

	UWB_Progress_C_ExecuteUbergraph_WB_Progress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.OnProgressChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Progress_C::OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.OnProgressChanged__DelegateSignature");

	UWB_Progress_C_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Progress.WB_Progress_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Progress_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Progress.WB_Progress_C.OnHovered__DelegateSignature");

	UWB_Progress_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
