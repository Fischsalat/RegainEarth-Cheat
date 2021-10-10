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

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SetSlotWeaponIcon
struct UW_GrenadeIconSlot_C_SetSlotWeaponIcon_Params
{
	class UTexture2D*                                  NewTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.DehighlightSlot
struct UW_GrenadeIconSlot_C_DehighlightSlot_Params
{
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SetSlotHotkeyText
struct UW_GrenadeIconSlot_C_SetSlotHotkeyText_Params
{
	struct FText                                       NewTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.HighlightSlot
struct UW_GrenadeIconSlot_C_HighlightSlot_Params
{
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.PreConstruct
struct UW_GrenadeIconSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SwitchFocusedIcon
struct UW_GrenadeIconSlot_C_SwitchFocusedIcon_Params
{
	bool                                               FocusNowFirst;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.UpdateGrenadeSlotValues
struct UW_GrenadeIconSlot_C_UpdateGrenadeSlotValues_Params
{
	bool                                               UseFirstSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  NewIcon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.SwitchActiveSlot
struct UW_GrenadeIconSlot_C_SwitchActiveSlot_Params
{
	bool                                               FirstIsActive;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GrenadeIconSlot.W_GrenadeIconSlot_C.ExecuteUbergraph_W_GrenadeIconSlot
struct UW_GrenadeIconSlot_C_ExecuteUbergraph_W_GrenadeIconSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
