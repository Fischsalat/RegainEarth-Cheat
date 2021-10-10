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

// Function WB_ChapterText.WB_ChapterText_C.SetFontInfoType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterText_C::SetFontInfoType(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetFontInfoType");

	UWB_ChapterText_C_SetFontInfoType_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.SetTextType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_ChapterText_C::SetTextType(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetTextType");

	UWB_ChapterText_C_SetTextType_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.IsDescriptionTextEmpty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_ChapterText_C::IsDescriptionTextEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.IsDescriptionTextEmpty");

	UWB_ChapterText_C_IsDescriptionTextEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_ChapterText.WB_ChapterText_C.SetFontInfoDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterText_C::SetFontInfoDescription(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetFontInfoDescription");

	UWB_ChapterText_C_SetFontInfoDescription_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.SetFontInfoHeadline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterText_C::SetFontInfoHeadline(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetFontInfoHeadline");

	UWB_ChapterText_C_SetFontInfoHeadline_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.SetTextDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_ChapterText_C::SetTextDescription(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetTextDescription");

	UWB_ChapterText_C_SetTextDescription_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.SetTextHeadline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_ChapterText_C::SetTextHeadline(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetTextHeadline");

	UWB_ChapterText_C_SetTextHeadline_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterText_C::SetTextColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.SetTextColor");

	UWB_ChapterText_C_SetTextColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterText_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.OnHovered");

	UWB_ChapterText_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ChapterText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.Construct");

	UWB_ChapterText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterText_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.OnClicked");

	UWB_ChapterText_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterText_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.OnUnhovered");

	UWB_ChapterText_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ChapterText_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.PreConstruct");

	UWB_ChapterText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.OnDisabled
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterText_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.OnDisabled");

	UWB_ChapterText_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterText.WB_ChapterText_C.ExecuteUbergraph_WB_ChapterText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterText_C::ExecuteUbergraph_WB_ChapterText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterText.WB_ChapterText_C.ExecuteUbergraph_WB_ChapterText");

	UWB_ChapterText_C_ExecuteUbergraph_WB_ChapterText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
