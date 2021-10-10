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

// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.RemoveTutorial_Bottom
// (Public, BlueprintCallable, BlueprintEvent)
void UBI_PlayerController_HUD_C::RemoveTutorial_Bottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.RemoveTutorial_Bottom");

	UBI_PlayerController_HUD_C_RemoveTutorial_Bottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayCustomMessageTutorial_Bottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBI_PlayerController_HUD_C::DisplayCustomMessageTutorial_Bottom(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayCustomMessageTutorial_Bottom");

	UBI_PlayerController_HUD_C_DisplayCustomMessageTutorial_Bottom_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayCustomMessageToolTip_Side
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBI_PlayerController_HUD_C::DisplayCustomMessageToolTip_Side(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayCustomMessageToolTip_Side");

	UBI_PlayerController_HUD_C_DisplayCustomMessageToolTip_Side_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.RemoveToolTip_Side
// (Public, BlueprintCallable, BlueprintEvent)
void UBI_PlayerController_HUD_C::RemoveToolTip_Side()
{
	static auto fn = UObject::FindObject<UFunction>("Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.RemoveToolTip_Side");

	UBI_PlayerController_HUD_C_RemoveToolTip_Side_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayButtonToolTip_Side
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DisplayExtraLongAndRemoveOnUsage_ (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBI_PlayerController_HUD_C::DisplayButtonToolTip_Side(TEnumAsByte<EInputKeys_BP_EInputKeys_BP> ActionKey, bool DisplayExtraLongAndRemoveOnUsage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BI_PlayerController_HUD.BI_PlayerController_HUD_C.DisplayButtonToolTip_Side");

	UBI_PlayerController_HUD_C_DisplayButtonToolTip_Side_Params params;
	params.ActionKey = ActionKey;
	params.DisplayExtraLongAndRemoveOnUsage_ = DisplayExtraLongAndRemoveOnUsage_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
