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

// Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.SetNewValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_WarningNoOnlineSubsystemFrame_C::SetNewValues(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.SetNewValues");

	UW_WarningNoOnlineSubsystemFrame_C_SetNewValues_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.ToggleVisibilityAnimations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetVisible_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_WarningNoOnlineSubsystemFrame_C::ToggleVisibilityAnimations(bool SetVisible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.ToggleVisibilityAnimations");

	UW_WarningNoOnlineSubsystemFrame_C_ToggleVisibilityAnimations_Params params;
	params.SetVisible_ = SetVisible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.Activate
// (BlueprintCallable, BlueprintEvent)
void UW_WarningNoOnlineSubsystemFrame_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.Activate");

	UW_WarningNoOnlineSubsystemFrame_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.ExecuteUbergraph_W_WarningNoOnlineSubsystemFrame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WarningNoOnlineSubsystemFrame_C::ExecuteUbergraph_W_WarningNoOnlineSubsystemFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WarningNoOnlineSubsystemFrame.W_WarningNoOnlineSubsystemFrame_C.ExecuteUbergraph_W_WarningNoOnlineSubsystemFrame");

	UW_WarningNoOnlineSubsystemFrame_C_ExecuteUbergraph_W_WarningNoOnlineSubsystemFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
