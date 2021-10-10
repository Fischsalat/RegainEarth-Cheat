#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.GetLaserDotVisibleActivationState
struct UBP_LaserDotMarker_Component_C_GetLaserDotVisibleActivationState_Params
{
	bool                                               ActiveOn_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.ToggleLaserDotVisiblityOnOff
struct UBP_LaserDotMarker_Component_C_ToggleLaserDotVisiblityOnOff_Params
{
	bool                                               ActiveOn_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetNewColor
struct UBP_LaserDotMarker_Component_C_SetNewColor_Params
{
	struct FLinearColor                                NewLightColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetNewIntensity
struct UBP_LaserDotMarker_Component_C_SetNewIntensity_Params
{
	float                                              NewIntensity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.GetLaserDotLocation
struct UBP_LaserDotMarker_Component_C_GetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C.SetLaserDotLocation
struct UBP_LaserDotMarker_Component_C_SetLaserDotLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
