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

// Function WB_Frame02.WB_Frame02_C.Set_FrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Frame02_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.Set_FrameColor");

	UWB_Frame02_C_Set_FrameColor_Params params;
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame02.WB_Frame02_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame02_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnUnhovered");

	UWB_Frame02_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame02.WB_Frame02_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame02_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnClicked");

	UWB_Frame02_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame02.WB_Frame02_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame02_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnHovered");

	UWB_Frame02_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame02.WB_Frame02_C.OnDisabled
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame02_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnDisabled");

	UWB_Frame02_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame02.WB_Frame02_C.ExecuteUbergraph_WB_Frame02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Frame02_C::ExecuteUbergraph_WB_Frame02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.ExecuteUbergraph_WB_Frame02");

	UWB_Frame02_C_ExecuteUbergraph_WB_Frame02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
