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

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SetSlotWeaponIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              NewTexture                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GrenadeIconSlot_C::SetSlotWeaponIcon(class UTexture2D* NewTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SetSlotWeaponIcon");

	UW_GrenadeIconSlot_C_SetSlotWeaponIcon_Params params;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.DehighlightSlot
// (BlueprintCallable, BlueprintEvent)
void UW_GrenadeIconSlot_C::DehighlightSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.DehighlightSlot");

	UW_GrenadeIconSlot_C_DehighlightSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SetSlotHotkeyText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewTexture                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_GrenadeIconSlot_C::SetSlotHotkeyText(const struct FText& NewTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SetSlotHotkeyText");

	UW_GrenadeIconSlot_C_SetSlotHotkeyText_Params params;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.HighlightSlot
// (BlueprintCallable, BlueprintEvent)
void UW_GrenadeIconSlot_C::HighlightSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.HighlightSlot");

	UW_GrenadeIconSlot_C_HighlightSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GrenadeIconSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.PreConstruct");

	UW_GrenadeIconSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SwitchFocusedIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FocusNowFirst                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GrenadeIconSlot_C::SwitchFocusedIcon(bool FocusNowFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SwitchFocusedIcon");

	UW_GrenadeIconSlot_C_SwitchFocusedIcon_Params params;
	params.FocusNowFirst = FocusNowFirst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.UpdateGrenadeSlotValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseFirstSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*              NewIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GrenadeIconSlot_C::UpdateGrenadeSlotValues(bool UseFirstSlot, class UTexture2D* NewIcon, int NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.UpdateGrenadeSlotValues");

	UW_GrenadeIconSlot_C_UpdateGrenadeSlotValues_Params params;
	params.UseFirstSlot = UseFirstSlot;
	params.NewIcon = NewIcon;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SwitchActiveSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstIsActive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GrenadeIconSlot_C::SwitchActiveSlot(bool FirstIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SwitchActiveSlot");

	UW_GrenadeIconSlot_C_SwitchActiveSlot_Params params;
	params.FirstIsActive = FirstIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.ExecuteUbergraph_W_GrenadeIconSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GrenadeIconSlot_C::ExecuteUbergraph_W_GrenadeIconSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.ExecuteUbergraph_W_GrenadeIconSlot");

	UW_GrenadeIconSlot_C_ExecuteUbergraph_W_GrenadeIconSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
