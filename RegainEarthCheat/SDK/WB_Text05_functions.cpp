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

// Function WB_Text05.WB_Text05_C.GetHB_Text_Size
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector2D UWB_Text05_C::GetHB_Text_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text05.WB_Text05_C.GetHB_Text_Size");

	UWB_Text05_C_GetHB_Text_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Text05.WB_Text05_C.UpdateFontInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Text05_C::UpdateFontInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text05.WB_Text05_C.UpdateFontInfo");

	UWB_Text05_C_UpdateFontInfo_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Text05.WB_Text05_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Text05_C::UpdateText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text05.WB_Text05_C.UpdateText");

	UWB_Text05_C_UpdateText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Text05.WB_Text05_C.UpdateJustification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJustification_EJustification> Justification                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Text05_C::UpdateJustification(TEnumAsByte<EJustification_EJustification> Justification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text05.WB_Text05_C.UpdateJustification");

	UWB_Text05_C_UpdateJustification_Params params;
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Text05.WB_Text05_C.ExecuteUbergraph_WB_Text05
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Text05_C::ExecuteUbergraph_WB_Text05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text05.WB_Text05_C.ExecuteUbergraph_WB_Text05");

	UWB_Text05_C_ExecuteUbergraph_WB_Text05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
