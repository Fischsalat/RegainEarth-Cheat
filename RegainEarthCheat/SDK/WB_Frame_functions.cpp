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

// Function WB_Frame.WB_Frame_C.HasColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Frame_C::HasColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.HasColor");

	UWB_Frame_C_HasColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Frame.WB_Frame_C.Set_ShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Frame_C::Set_ShineColor(const struct FLinearColor& FrameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.Set_ShineColor");

	UWB_Frame_C_Set_ShineColor_Params params;
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.Set_FrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Frame_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.Set_FrameColor");

	UWB_Frame_C_Set_FrameColor_Params params;
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Frame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.PreConstruct");

	UWB_Frame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Frame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.Construct");

	UWB_Frame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.OnHovered");

	UWB_Frame_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.OnClicked");

	UWB_Frame_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.OnUnhovered");

	UWB_Frame_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.OnDisabled
// (BlueprintCallable, BlueprintEvent)
void UWB_Frame_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.OnDisabled");

	UWB_Frame_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.UpdateFrameThickness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FrameThickness                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Frame_C::UpdateFrameThickness(float FrameThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.UpdateFrameThickness");

	UWB_Frame_C_UpdateFrameThickness_Params params;
	params.FrameThickness = FrameThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Frame.WB_Frame_C.ExecuteUbergraph_WB_Frame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Frame_C::ExecuteUbergraph_WB_Frame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Frame.WB_Frame_C.ExecuteUbergraph_WB_Frame");

	UWB_Frame_C_ExecuteUbergraph_WB_Frame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
