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

// Function BP_RocketFlare.BP_RocketFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.UserConstructionScript");

	ABP_RocketFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.FlareOff__FinishedFunc
// (BlueprintEvent)
void ABP_RocketFlare_C::FlareOff__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.FlareOff__FinishedFunc");

	ABP_RocketFlare_C_FlareOff__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.FlareOff__UpdateFunc
// (BlueprintEvent)
void ABP_RocketFlare_C::FlareOff__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.FlareOff__UpdateFunc");

	ABP_RocketFlare_C_FlareOff__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.FlareOn__FinishedFunc
// (BlueprintEvent)
void ABP_RocketFlare_C::FlareOn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.FlareOn__FinishedFunc");

	ABP_RocketFlare_C_FlareOn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.FlareOn__UpdateFunc
// (BlueprintEvent)
void ABP_RocketFlare_C::FlareOn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.FlareOn__UpdateFunc");

	ABP_RocketFlare_C_FlareOn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.UpdateColor
// (BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::UpdateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.UpdateColor");

	ABP_RocketFlare_C_UpdateColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.UpdateColorWithNewValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FlareColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RocketFlare_LightIntensity_Max (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PointLight_Radius              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RocketFlare_C::UpdateColorWithNewValues(const struct FLinearColor& FlareColor, float RocketFlare_LightIntensity_Max, float PointLight_Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.UpdateColorWithNewValues");

	ABP_RocketFlare_C_UpdateColorWithNewValues_Params params;
	params.FlareColor = FlareColor;
	params.RocketFlare_LightIntensity_Max = RocketFlare_LightIntensity_Max;
	params.PointLight_Radius = PointLight_Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.ShutDownFlares
// (BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::ShutDownFlares()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.ShutDownFlares");

	ABP_RocketFlare_C_ShutDownFlares_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.StartFlares
// (BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::StartFlares()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.StartFlares");

	ABP_RocketFlare_C_StartFlares_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.OnlySetStartedFlaresPropsToMaxAlpha
// (BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::OnlySetStartedFlaresPropsToMaxAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.OnlySetStartedFlaresPropsToMaxAlpha");

	ABP_RocketFlare_C_OnlySetStartedFlaresPropsToMaxAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.OnlySetShutdownFlaresProps
// (BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::OnlySetShutdownFlaresProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.OnlySetShutdownFlaresProps");

	ABP_RocketFlare_C_OnlySetShutdownFlaresProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.SetNewAlphaForIntensityAndSizeAndShowThis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RocketFlare_SizeAndIntensityAlpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RocketFlare_C::SetNewAlphaForIntensityAndSizeAndShowThis(float RocketFlare_SizeAndIntensityAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.SetNewAlphaForIntensityAndSizeAndShowThis");

	ABP_RocketFlare_C_SetNewAlphaForIntensityAndSizeAndShowThis_Params params;
	params.RocketFlare_SizeAndIntensityAlpha = RocketFlare_SizeAndIntensityAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.SetMaxAlpha_CurrentAlpha_AndShow_4ConstructionScript
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RocketFlare_SizeAndIntensityAlpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RocketFlare_C::SetMaxAlpha_CurrentAlpha_AndShow_4ConstructionScript(float RocketFlare_SizeAndIntensityAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.SetMaxAlpha_CurrentAlpha_AndShow_4ConstructionScript");

	ABP_RocketFlare_C_SetMaxAlpha_CurrentAlpha_AndShow_4ConstructionScript_Params params;
	params.RocketFlare_SizeAndIntensityAlpha = RocketFlare_SizeAndIntensityAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.MakeFlareAndLightVisible
// (BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::MakeFlareAndLightVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.MakeFlareAndLightVisible");

	ABP_RocketFlare_C_MakeFlareAndLightVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_RocketFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.ReceiveBeginPlay");

	ABP_RocketFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.ExecuteUbergraph_BP_RocketFlare
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RocketFlare_C::ExecuteUbergraph_BP_RocketFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.ExecuteUbergraph_BP_RocketFlare");

	ABP_RocketFlare_C_ExecuteUbergraph_BP_RocketFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.JetFlareShutdownNow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::JetFlareShutdownNow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.JetFlareShutdownNow__DelegateSignature");

	ABP_RocketFlare_C_JetFlareShutdownNow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RocketFlare.BP_RocketFlare_C.JetFlareActiveNow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_RocketFlare_C::JetFlareActiveNow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RocketFlare.BP_RocketFlare_C.JetFlareActiveNow__DelegateSignature");

	ABP_RocketFlare_C_JetFlareActiveNow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
