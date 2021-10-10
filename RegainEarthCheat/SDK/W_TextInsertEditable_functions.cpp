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

// Function W_TextInsertEditable.W_TextInsertEditable_C.GetEnteredText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UW_TextInsertEditable_C::GetEnteredText(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.GetEnteredText");

	UW_TextInsertEditable_C_GetEnteredText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.SetExampleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_TextInsertEditable_C::SetExampleText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.SetExampleText");

	UW_TextInsertEditable_C_SetExampleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TextInsertEditable_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.SetCustomFocus");

	UW_TextInsertEditable_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TextInsertEditable_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.SetHovered");

	UW_TextInsertEditable_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TextInsertEditable_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.PreConstruct");

	UW_TextInsertEditable_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TextInsertEditable_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.Tick");

	UW_TextInsertEditable_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_TextInsertEditable_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_TextInsertEditable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_TextInsertEditable_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.Accept");

	UW_TextInsertEditable_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UW_TextInsertEditable_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.Cancel");

	UW_TextInsertEditable_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.OnTextCommitted_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TextInsertEditable_C::OnTextCommitted_Event_1(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.OnTextCommitted_Event_1");

	UW_TextInsertEditable_C_OnTextCommitted_Event_1_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TextInsertEditable.W_TextInsertEditable_C.ExecuteUbergraph_W_TextInsertEditable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TextInsertEditable_C::ExecuteUbergraph_W_TextInsertEditable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TextInsertEditable.W_TextInsertEditable_C.ExecuteUbergraph_W_TextInsertEditable");

	UW_TextInsertEditable_C_ExecuteUbergraph_W_TextInsertEditable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
