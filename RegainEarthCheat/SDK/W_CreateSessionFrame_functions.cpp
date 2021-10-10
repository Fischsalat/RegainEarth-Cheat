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

// Function W_CreateSessionFrame.W_CreateSessionFrame_C.RestoreValues
// (Public, BlueprintCallable, BlueprintEvent)
void UW_CreateSessionFrame_C::RestoreValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.RestoreValues");

	UW_CreateSessionFrame_C_RestoreValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CreateSessionFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.ActiveWidget");

	UW_CreateSessionFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CreateSessionFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.OnHovered");

	UW_CreateSessionFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CreateSessionFrame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.Construct");

	UW_CreateSessionFrame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_98_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CreateSessionFrame_C::BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_98_OnChangeValue__DelegateSignature(const struct FName& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_98_OnChangeValue__DelegateSignature");

	UW_CreateSessionFrame_C_BndEvt__W_SwitchButton_K2Node_ComponentBoundEvent_98_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_SliderButton_K2Node_ComponentBoundEvent_120_OnChangeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CreateSessionFrame_C::BndEvt__W_SliderButton_K2Node_ComponentBoundEvent_120_OnChangeValue__DelegateSignature(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_SliderButton_K2Node_ComponentBoundEvent_120_OnChangeValue__DelegateSignature");

	UW_CreateSessionFrame_C_BndEvt__W_SliderButton_K2Node_ComponentBoundEvent_120_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_MainFrameButton_K2Node_ComponentBoundEvent_142_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CreateSessionFrame_C::BndEvt__W_MainFrameButton_K2Node_ComponentBoundEvent_142_OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.BndEvt__W_MainFrameButton_K2Node_ComponentBoundEvent_142_OnPressed__DelegateSignature");

	UW_CreateSessionFrame_C_BndEvt__W_MainFrameButton_K2Node_ComponentBoundEvent_142_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CreateSessionFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.PreConstruct");

	UW_CreateSessionFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CreateSessionFrame.W_CreateSessionFrame_C.ExecuteUbergraph_W_CreateSessionFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CreateSessionFrame_C::ExecuteUbergraph_W_CreateSessionFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CreateSessionFrame.W_CreateSessionFrame_C.ExecuteUbergraph_W_CreateSessionFrame");

	UW_CreateSessionFrame_C_ExecuteUbergraph_W_CreateSessionFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
