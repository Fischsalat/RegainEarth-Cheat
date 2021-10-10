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

// Function WB_LootNotificator.WB_LootNotificator_C.UpdateNotificationList
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_LootNotificator_C::UpdateNotificationList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotificator.WB_LootNotificator_C.UpdateNotificationList");

	UWB_LootNotificator_C_UpdateNotificationList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotificator.WB_LootNotificator_C.DisplayLootOrScoreNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 NotificationIcon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            NotificationValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ValuePositiveOrNegative        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DynamicBackground              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            DynamicBackgroundColor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LootNotificator_C::DisplayLootOrScoreNotify(float DisplayTime, class UObject* NotificationIcon, const struct FText& NotificationText, int NotificationValue, bool ValuePositiveOrNegative, bool DynamicBackground, const struct FLinearColor& DynamicBackgroundColor, class USoundBase* Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotificator.WB_LootNotificator_C.DisplayLootOrScoreNotify");

	UWB_LootNotificator_C_DisplayLootOrScoreNotify_Params params;
	params.DisplayTime = DisplayTime;
	params.NotificationIcon = NotificationIcon;
	params.NotificationText = NotificationText;
	params.NotificationValue = NotificationValue;
	params.ValuePositiveOrNegative = ValuePositiveOrNegative;
	params.DynamicBackground = DynamicBackground;
	params.DynamicBackgroundColor = DynamicBackgroundColor;
	params.Audio = Audio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotificator.WB_LootNotificator_C.RemoveLootNotificator
// (BlueprintCallable, BlueprintEvent)
void UWB_LootNotificator_C::RemoveLootNotificator()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotificator.WB_LootNotificator_C.RemoveLootNotificator");

	UWB_LootNotificator_C_RemoveLootNotificator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotificator.WB_LootNotificator_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_LootNotificator_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotificator.WB_LootNotificator_C.OnInitialized");

	UWB_LootNotificator_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotificator.WB_LootNotificator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_LootNotificator_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotificator.WB_LootNotificator_C.PreConstruct");

	UWB_LootNotificator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LootNotificator.WB_LootNotificator_C.ExecuteUbergraph_WB_LootNotificator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LootNotificator_C::ExecuteUbergraph_WB_LootNotificator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LootNotificator.WB_LootNotificator_C.ExecuteUbergraph_WB_LootNotificator");

	UWB_LootNotificator_C_ExecuteUbergraph_WB_LootNotificator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
