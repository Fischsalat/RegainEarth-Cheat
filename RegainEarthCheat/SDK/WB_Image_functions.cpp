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

// Function WB_Image.WB_Image_C.SetVignetteColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InContentColorAndOpacity       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Image_C::SetVignetteColor(const struct FLinearColor& InContentColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.SetVignetteColor");

	UWB_Image_C_SetVignetteColor_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.SetImageColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Image_C::SetImageColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.SetImageColor");

	UWB_Image_C_SetImageColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.UpdateSaturation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Saturation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Image_C::UpdateSaturation(float Saturation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.UpdateSaturation");

	UWB_Image_C_UpdateSaturation_Params params;
	params.Saturation = Saturation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Image.WB_Image_C.FindTextureSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Image_C::FindTextureSize(class UTexture2D* Texture, struct FVector2D* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.FindTextureSize");

	UWB_Image_C_FindTextureSize_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function WB_Image.WB_Image_C.SetImageTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Image_C::SetImageTranslation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.SetImageTranslation");

	UWB_Image_C_SetImageTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.SetImageBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Brush                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Image_C::SetImageBrush(class UObject* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.SetImageBrush");

	UWB_Image_C_SetImageBrush_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Image_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.OnHovered");

	UWB_Image_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Image_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.Construct");

	UWB_Image_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_Image_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.OnClicked");

	UWB_Image_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Image_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.OnUnhovered");

	UWB_Image_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Image_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.PreConstruct");

	UWB_Image_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.OnDisabled
// (BlueprintCallable, BlueprintEvent)
void UWB_Image_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.OnDisabled");

	UWB_Image_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Image.WB_Image_C.ExecuteUbergraph_WB_Image
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Image_C::ExecuteUbergraph_WB_Image(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image.WB_Image_C.ExecuteUbergraph_WB_Image");

	UWB_Image_C_ExecuteUbergraph_WB_Image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
