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

// Function WB_IngameTutorial.WB_IngameTutorial_C.CheckRows
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial       In_Row_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       In_Row_2                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWB_IngameTutorial_C::CheckRows(const struct FS_IngameTutorial& In_Row_1, const struct FS_IngameTutorial& In_Row_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.CheckRows");

	UWB_IngameTutorial_C_CheckRows_Params params;
	params.In_Row_1 = In_Row_1;
	params.In_Row_2 = In_Row_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IngameTutorial.WB_IngameTutorial_C.SetIconsOnOff
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial       Row1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1out                        (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2out                        (ConstParm, Parm, OutParm, HasGetValueTypeHash)
void UWB_IngameTutorial_C::SetIconsOnOff(const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FS_IngameTutorial& Row1out, const struct FS_IngameTutorial& Row2out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.SetIconsOnOff");

	UWB_IngameTutorial_C_SetIconsOnOff_Params params;
	params.Row1 = Row1;
	params.Row2 = Row2;
	params.Row1out = Row1out;
	params.Row2out = Row2out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IngameTutorial.WB_IngameTutorial_C.GetDataForTextAndIcons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1out                        (Parm, OutParm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2out                        (Parm, OutParm, HasGetValueTypeHash)
void UWB_IngameTutorial_C::GetDataForTextAndIcons(const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, struct FS_IngameTutorial* Row1out, struct FS_IngameTutorial* Row2out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.GetDataForTextAndIcons");

	UWB_IngameTutorial_C_GetDataForTextAndIcons_Params params;
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


// Function WB_IngameTutorial.WB_IngameTutorial_C.DisplayIngameTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row1                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial       Row2                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_IngameTutorial_C::DisplayIngameTutorial(float DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.DisplayIngameTutorial");

	UWB_IngameTutorial_C_DisplayIngameTutorial_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IngameTutorial.WB_IngameTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_IngameTutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.Construct");

	UWB_IngameTutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IngameTutorial.WB_IngameTutorial_C.RemoveTutorial
// (BlueprintCallable, BlueprintEvent)
void UWB_IngameTutorial_C::RemoveTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.RemoveTutorial");

	UWB_IngameTutorial_C_RemoveTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IngameTutorial.WB_IngameTutorial_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_IngameTutorial_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.OnInitialized");

	UWB_IngameTutorial_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IngameTutorial.WB_IngameTutorial_C.ExecuteUbergraph_WB_IngameTutorial
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_IngameTutorial_C::ExecuteUbergraph_WB_IngameTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IngameTutorial.WB_IngameTutorial_C.ExecuteUbergraph_WB_IngameTutorial");

	UWB_IngameTutorial_C_ExecuteUbergraph_WB_IngameTutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
