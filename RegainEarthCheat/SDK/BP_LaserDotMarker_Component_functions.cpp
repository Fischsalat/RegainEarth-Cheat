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

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.GetLaserDotVisibleActivationState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ActiveOn_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LaserDotMarker_Component_C::GetLaserDotVisibleActivationState(bool* ActiveOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.GetLaserDotVisibleActivationState");

	UBP_LaserDotMarker_Component_C_GetLaserDotVisibleActivationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveOn_ != nullptr)
		*ActiveOn_ = params.ActiveOn_;

}


// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.ToggleLaserDotVisiblityOnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ActiveOn_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LaserDotMarker_Component_C::ToggleLaserDotVisiblityOnOff(bool ActiveOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.ToggleLaserDotVisiblityOnOff");

	UBP_LaserDotMarker_Component_C_ToggleLaserDotVisiblityOnOff_Params params;
	params.ActiveOn_ = ActiveOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetNewColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewLightColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LaserDotMarker_Component_C::SetNewColor(const struct FLinearColor& NewLightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetNewColor");

	UBP_LaserDotMarker_Component_C_SetNewColor_Params params;
	params.NewLightColor = NewLightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetNewIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LaserDotMarker_Component_C::SetNewIntensity(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetNewIntensity");

	UBP_LaserDotMarker_Component_C_SetNewIntensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.GetLaserDotLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LaserDotMarker_Component_C::GetLaserDotLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.GetLaserDotLocation");

	UBP_LaserDotMarker_Component_C_GetLaserDotLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetLaserDotLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LaserDotMarker_Component_C::SetLaserDotLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetLaserDotLocation");

	UBP_LaserDotMarker_Component_C_SetLaserDotLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
