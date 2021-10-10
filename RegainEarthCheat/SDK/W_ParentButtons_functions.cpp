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

// Function W_ParentButtons.W_ParentButtons_C.SetIsInNonHoverWritingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ParentButtons_C::SetIsInNonHoverWritingMode(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.SetIsInNonHoverWritingMode");

	UW_ParentButtons_C_SetIsInNonHoverWritingMode_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.SetButtonAndTextColorToButtonCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentButtons_C::SetButtonAndTextColorToButtonCategory(class UTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.SetButtonAndTextColorToButtonCategory");

	UW_ParentButtons_C_SetButtonAndTextColorToButtonCategory_Params params;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_ParentButtons_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.OnKeyDown");

	UW_ParentButtons_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ParentButtons.W_ParentButtons_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_ParentButtons_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.OnKeyUp");

	UW_ParentButtons_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_ParentButtons.W_ParentButtons_C.ClearMousePosition
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::ClearMousePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.ClearMousePosition");

	UW_ParentButtons_C_ClearMousePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ParentButtons_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.SetCustomFocus");

	UW_ParentButtons_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_ParentButtons.W_ParentButtons_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ParentButtons_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.SetHovered");

	UW_ParentButtons_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_ParentButtons.W_ParentButtons_C.Up
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Up");

	UW_ParentButtons_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.Down
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Down");

	UW_ParentButtons_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.Left
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Left");

	UW_ParentButtons_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.Right
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Right");

	UW_ParentButtons_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Accept");

	UW_ParentButtons_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Cancel");

	UW_ParentButtons_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.SetFocus_Delay
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::SetFocus_Delay()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.SetFocus_Delay");

	UW_ParentButtons_C_SetFocus_Delay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.Pause
// (BlueprintCallable, BlueprintEvent)
void UW_ParentButtons_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.Pause");

	UW_ParentButtons_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.ExecuteUbergraph_W_ParentButtons
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentButtons_C::ExecuteUbergraph_W_ParentButtons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.ExecuteUbergraph_W_ParentButtons");

	UW_ParentButtons_C_ExecuteUbergraph_W_ParentButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentButtons_C::OnBack__DelegateSignature(class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.OnBack__DelegateSignature");

	UW_ParentButtons_C_OnBack__DelegateSignature_Params params;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentButtons_C::OnPressed__DelegateSignature(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.OnPressed__DelegateSignature");

	UW_ParentButtons_C_OnPressed__DelegateSignature_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentButtons.W_ParentButtons_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentButtons_C::OnHovered__DelegateSignature(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentButtons.W_ParentButtons_C.OnHovered__DelegateSignature");

	UW_ParentButtons_C_OnHovered__DelegateSignature_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
