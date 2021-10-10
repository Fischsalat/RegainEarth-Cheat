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

// Function WB_Text04.WB_Text04_C.GetHB_Text_Size
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector2D UWB_Text04_C::GetHB_Text_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.GetHB_Text_Size");

	UWB_Text04_C_GetHB_Text_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Text04.WB_Text04_C.UpdateFontInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Text04_C::UpdateFontInfo(class UFont* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.UpdateFontInfo");

	UWB_Text04_C_UpdateFontInfo_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Text04.WB_Text04_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Text04_C::UpdateText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.UpdateText");

	UWB_Text04_C_UpdateText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Text04.WB_Text04_C.AddHintIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget38x38                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Text04_C::AddHintIcon(class UClass* Widget38x38)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.AddHintIcon");

	UWB_Text04_C_AddHintIcon_Params params;
	params.Widget38x38 = Widget38x38;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Text04.WB_Text04_C.ExecuteUbergraph_WB_Text04
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Text04_C::ExecuteUbergraph_WB_Text04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.ExecuteUbergraph_WB_Text04");

	UWB_Text04_C_ExecuteUbergraph_WB_Text04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
