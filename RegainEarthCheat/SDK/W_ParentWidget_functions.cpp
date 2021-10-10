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

// Function W_ParentWidget.W_ParentWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ParentWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.Construct");

	UW_ParentWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ParentWidget_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.ActiveWidget");

	UW_ParentWidget_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentWidget_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.OnHovered");

	UW_ParentWidget_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.AllButtonsPressedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentWidget_C::AllButtonsPressedEvents(const struct FName& ID, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.AllButtonsPressedEvents");

	UW_ParentWidget_C_AllButtonsPressedEvents_Params params;
	params.ID = ID;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.OnBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentWidget_C::OnBack(class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.OnBack");

	UW_ParentWidget_C_OnBack_Params params;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ParentWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.OnInitialized");

	UW_ParentWidget_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.ExecuteUbergraph_W_ParentWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentWidget_C::ExecuteUbergraph_W_ParentWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.ExecuteUbergraph_W_ParentWidget");

	UW_ParentWidget_C_ExecuteUbergraph_W_ParentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.OnHoveredButtons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_ParentWidget_C::OnHoveredButtons__DelegateSignature(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.OnHoveredButtons__DelegateSignature");

	UW_ParentWidget_C_OnHoveredButtons__DelegateSignature_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParentWidget.W_ParentWidget_C.OnPressedButtons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParentWidget_C::OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentWidget.W_ParentWidget_C.OnPressedButtons__DelegateSignature");

	UW_ParentWidget_C_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
