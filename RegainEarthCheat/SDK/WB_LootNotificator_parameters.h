#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WB_LootNotificator.WB_LootNotificator_C.UpdateNotificationList
struct UWB_LootNotificator_C_UpdateNotificationList_Params
{
};

// Function WB_LootNotificator.WB_LootNotificator_C.DisplayLootOrScoreNotify
struct UWB_LootNotificator_C_DisplayLootOrScoreNotify_Params
{
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NotificationIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NotificationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NotificationValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ValuePositiveOrNegative;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DynamicBackground;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DynamicBackgroundColor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Audio;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LootNotificator.WB_LootNotificator_C.RemoveLootNotificator
struct UWB_LootNotificator_C_RemoveLootNotificator_Params
{
};

// Function WB_LootNotificator.WB_LootNotificator_C.OnInitialized
struct UWB_LootNotificator_C_OnInitialized_Params
{
};

// Function WB_LootNotificator.WB_LootNotificator_C.PreConstruct
struct UWB_LootNotificator_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_LootNotificator.WB_LootNotificator_C.ExecuteUbergraph_WB_LootNotificator
struct UWB_LootNotificator_C_ExecuteUbergraph_WB_LootNotificator_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
