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

// Function W_KeysButton_headline.W_KeysButton_headline_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_headline_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.Tick");

	UW_KeysButton_headline_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton_headline.W_KeysButton_headline_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UW_KeysButton_headline_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.Cancel");

	UW_KeysButton_headline_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton_headline.W_KeysButton_headline_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_KeysButton_headline_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.Accept");

	UW_KeysButton_headline_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton_headline.W_KeysButton_headline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_KeysButton_headline_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.Construct");

	UW_KeysButton_headline_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton_headline.W_KeysButton_headline_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UW_KeysButton_headline_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UW_KeysButton_headline_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton_headline.W_KeysButton_headline_C.ExecuteUbergraph_W_KeysButton_headline
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_headline_C::ExecuteUbergraph_W_KeysButton_headline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.ExecuteUbergraph_W_KeysButton_headline");

	UW_KeysButton_headline_C_ExecuteUbergraph_W_KeysButton_headline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton_headline.W_KeysButton_headline_C.OnChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_InputKeys    NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_KeysButton_headline_C::OnChangeValue__DelegateSignature(const struct FSSettings_InputKeys& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton_headline.W_KeysButton_headline_C.OnChangeValue__DelegateSignature");

	UW_KeysButton_headline_C_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
