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

// Function W_SettingsFrame.W_SettingsFrame_C.GetAllButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_MainFrameButton_C*> Buttons                        (Parm, OutParm, ContainsInstancedReference)
void UW_SettingsFrame_C::GetAllButtons(TArray<class UW_MainFrameButton_C*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsFrame.W_SettingsFrame_C.GetAllButtons");

	UW_SettingsFrame_C_GetAllButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

}


// Function W_SettingsFrame.W_SettingsFrame_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SettingsFrame_C::ActiveWidget(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsFrame.W_SettingsFrame_C.ActiveWidget");

	UW_SettingsFrame_C_ActiveWidget_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SettingsFrame.W_SettingsFrame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_ParentButtons_C*      ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SettingsFrame_C::OnHovered(const struct FText& Description, class UW_ParentButtons_C* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsFrame.W_SettingsFrame_C.OnHovered");

	UW_SettingsFrame_C_OnHovered_Params params;
	params.Description = Description;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SettingsFrame.W_SettingsFrame_C.ExecuteUbergraph_W_SettingsFrame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SettingsFrame_C::ExecuteUbergraph_W_SettingsFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SettingsFrame.W_SettingsFrame_C.ExecuteUbergraph_W_SettingsFrame");

	UW_SettingsFrame_C_ExecuteUbergraph_W_SettingsFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
