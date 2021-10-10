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

// Function WB_FillColor.WB_FillColor_C.SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FillColor_C::SetFillColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.SetFillColor");

	UWB_FillColor_C_SetFillColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.AddColorV_Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ExtraV                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FillColor_C::AddColorV_Value(const struct FLinearColor& InColor, float ExtraV, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.AddColorV_Value");

	UWB_FillColor_C_AddColorV_Value_Params params;
	params.InColor = InColor;
	params.ExtraV = ExtraV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;

}


// Function WB_FillColor.WB_FillColor_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_FillColor_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnUnhovered");

	UWB_FillColor_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_FillColor_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnClicked");

	UWB_FillColor_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_FillColor_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnHovered");

	UWB_FillColor_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.OnDisabled
// (BlueprintCallable, BlueprintEvent)
void UWB_FillColor_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnDisabled");

	UWB_FillColor_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_FillColor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.Construct");

	UWB_FillColor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_FillColor_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.PreConstruct");

	UWB_FillColor_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FillColor.WB_FillColor_C.ExecuteUbergraph_WB_FillColor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FillColor_C::ExecuteUbergraph_WB_FillColor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.ExecuteUbergraph_WB_FillColor");

	UWB_FillColor_C_ExecuteUbergraph_WB_FillColor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
