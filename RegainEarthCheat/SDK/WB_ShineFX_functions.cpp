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

// Function WB_ShineFX.WB_ShineFX_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ShineFX_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineFX.WB_ShineFX_C.Construct");

	UWB_ShineFX_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShineFX.WB_ShineFX_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ShineFX_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineFX.WB_ShineFX_C.PreConstruct");

	UWB_ShineFX_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShineFX.WB_ShineFX_C.UpdateShineFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ShineFX_C::UpdateShineFX(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineFX.WB_ShineFX_C.UpdateShineFX");

	UWB_ShineFX_C_UpdateShineFX_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShineFX.WB_ShineFX_C.UpdateShineColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ShineFX_BG_Color               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFX_ShineColor_Small       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFX_ShineColor_Big         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShineFX_C::UpdateShineColor(const struct FLinearColor& ShineFX_BG_Color, const struct FLinearColor& ShineFX_ShineColor_Small, const struct FLinearColor& ShineFX_ShineColor_Big)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineFX.WB_ShineFX_C.UpdateShineColor");

	UWB_ShineFX_C_UpdateShineColor_Params params;
	params.ShineFX_BG_Color = ShineFX_BG_Color;
	params.ShineFX_ShineColor_Small = ShineFX_ShineColor_Small;
	params.ShineFX_ShineColor_Big = ShineFX_ShineColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShineFX.WB_ShineFX_C.ExecuteUbergraph_WB_ShineFX
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShineFX_C::ExecuteUbergraph_WB_ShineFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShineFX.WB_ShineFX_C.ExecuteUbergraph_WB_ShineFX");

	UWB_ShineFX_C_ExecuteUbergraph_WB_ShineFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
