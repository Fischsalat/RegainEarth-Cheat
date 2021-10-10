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

// Function WB_ToolTip.WB_ToolTip_C.CheckRowsAndAdjustHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial       In_Row_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       In_Row_2                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWB_ToolTip_C::CheckRowsAndAdjustHeight(const struct FS_IngameTutorial& In_Row_1, const struct FS_IngameTutorial& In_Row_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.CheckRowsAndAdjustHeight");

	UWB_ToolTip_C_CheckRowsAndAdjustHeight_Params params;
	params.In_Row_1 = In_Row_1;
	params.In_Row_2 = In_Row_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ToolTip.WB_ToolTip_C.SetIconsOnOff
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial       Row1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1out                        (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2out                        (ConstParm, Parm, OutParm, HasGetValueTypeHash)
void UWB_ToolTip_C::SetIconsOnOff(const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FS_IngameTutorial& Row1out, const struct FS_IngameTutorial& Row2out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.SetIconsOnOff");

	UWB_ToolTip_C_SetIconsOnOff_Params params;
	params.Row1 = Row1;
	params.Row2 = Row2;
	params.Row1out = Row1out;
	params.Row2out = Row2out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ToolTip.WB_ToolTip_C.GetDataForTextAndIcons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1out                        (Parm, OutParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2out                        (Parm, OutParm, HasGetValueTypeHash)
void UWB_ToolTip_C::GetDataForTextAndIcons(const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, struct FS_IngameTutorial* Row1out, struct FS_IngameTutorial* Row2out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.GetDataForTextAndIcons");

	UWB_ToolTip_C_GetDataForTextAndIcons_Params params;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Row1out != nullptr)
		*Row1out = params.Row1out;
	if (Row2out != nullptr)
		*Row2out = params.Row2out;

}


// Function WB_ToolTip.WB_ToolTip_C.DisplayToolTip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_ToolTip_C::DisplayToolTip(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.DisplayToolTip");

	UWB_ToolTip_C_DisplayToolTip_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ToolTip.WB_ToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ToolTip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.Construct");

	UWB_ToolTip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ToolTip.WB_ToolTip_C.RemoveToolTip
// (BlueprintCallable, BlueprintEvent)
void UWB_ToolTip_C::RemoveToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.RemoveToolTip");

	UWB_ToolTip_C_RemoveToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ToolTip.WB_ToolTip_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ToolTip_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.OnInitialized");

	UWB_ToolTip_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ToolTip.WB_ToolTip_C.ExecuteUbergraph_WB_ToolTip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ToolTip_C::ExecuteUbergraph_WB_ToolTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTip.WB_ToolTip_C.ExecuteUbergraph_WB_ToolTip");

	UWB_ToolTip_C_ExecuteUbergraph_WB_ToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
