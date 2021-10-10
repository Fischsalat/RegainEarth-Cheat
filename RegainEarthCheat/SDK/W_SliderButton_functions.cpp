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

// Function W_SliderButton.W_SliderButton_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SliderButton_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.SetCustomFocus");

	UW_SliderButton_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_SliderButton.W_SliderButton_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SliderButton_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.SetHovered");

	UW_SliderButton_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_SliderButton.W_SliderButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SliderButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_SliderButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SliderButton_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_SliderButton_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Forward
// (BlueprintCallable, BlueprintEvent)
void UW_SliderButton_C::Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Forward");

	UW_SliderButton_C_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Backward
// (BlueprintCallable, BlueprintEvent)
void UW_SliderButton_C::Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Backward");

	UW_SliderButton_C_Backward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Left
// (BlueprintCallable, BlueprintEvent)
void UW_SliderButton_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Left");

	UW_SliderButton_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Right
// (BlueprintCallable, BlueprintEvent)
void UW_SliderButton_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Right");

	UW_SliderButton_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UW_SliderButton_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Cancel");

	UW_SliderButton_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_SliderButton_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Accept");

	UW_SliderButton_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.SetValueNoExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SliderButton_C::SetValueNoExecute(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.SetValueNoExecute");

	UW_SliderButton_C_SetValueNoExecute_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SliderButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.PreConstruct");

	UW_SliderButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SliderButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.Tick");

	UW_SliderButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SliderButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UW_SliderButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.ExecuteUbergraph_W_SliderButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SliderButton_C::ExecuteUbergraph_W_SliderButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.ExecuteUbergraph_W_SliderButton");

	UW_SliderButton_C_ExecuteUbergraph_W_SliderButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SliderButton.W_SliderButton_C.OnChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SliderButton_C::OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SliderButton.W_SliderButton_C.OnChangeValue__DelegateSignature");

	UW_SliderButton_C_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
