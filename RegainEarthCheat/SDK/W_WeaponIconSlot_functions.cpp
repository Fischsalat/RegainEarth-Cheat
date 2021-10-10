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

// Function W_WeaponIconSlot.W_WeaponIconSlot_C.DehighlightSlot
// (BlueprintCallable, BlueprintEvent)
void UW_WeaponIconSlot_C::DehighlightSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponIconSlot.W_WeaponIconSlot_C.DehighlightSlot");

	UW_WeaponIconSlot_C_DehighlightSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WeaponIconSlot.W_WeaponIconSlot_C.SetSlotWeaponIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              NewTexture                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WeaponIconSlot_C::SetSlotWeaponIcon(class UTexture2D* NewTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponIconSlot.W_WeaponIconSlot_C.SetSlotWeaponIcon");

	UW_WeaponIconSlot_C_SetSlotWeaponIcon_Params params;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WeaponIconSlot.W_WeaponIconSlot_C.SetSlotHotkeyText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewTexture                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_WeaponIconSlot_C::SetSlotHotkeyText(const struct FText& NewTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponIconSlot.W_WeaponIconSlot_C.SetSlotHotkeyText");

	UW_WeaponIconSlot_C_SetSlotHotkeyText_Params params;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WeaponIconSlot.W_WeaponIconSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_WeaponIconSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponIconSlot.W_WeaponIconSlot_C.PreConstruct");

	UW_WeaponIconSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WeaponIconSlot.W_WeaponIconSlot_C.HighlightSlot
// (BlueprintCallable, BlueprintEvent)
void UW_WeaponIconSlot_C::HighlightSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponIconSlot.W_WeaponIconSlot_C.HighlightSlot");

	UW_WeaponIconSlot_C_HighlightSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WeaponIconSlot.W_WeaponIconSlot_C.ExecuteUbergraph_W_WeaponIconSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WeaponIconSlot_C::ExecuteUbergraph_W_WeaponIconSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WeaponIconSlot.W_WeaponIconSlot_C.ExecuteUbergraph_W_WeaponIconSlot");

	UW_WeaponIconSlot_C_ExecuteUbergraph_W_WeaponIconSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
