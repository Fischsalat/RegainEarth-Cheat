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

// Function BP_RocketFlare.BP_RocketFlare_C.UserConstructionScript
struct ABP_RocketFlare_C_UserConstructionScript_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.FlareOff__FinishedFunc
struct ABP_RocketFlare_C_FlareOff__FinishedFunc_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.FlareOff__UpdateFunc
struct ABP_RocketFlare_C_FlareOff__UpdateFunc_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.FlareOn__FinishedFunc
struct ABP_RocketFlare_C_FlareOn__FinishedFunc_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.FlareOn__UpdateFunc
struct ABP_RocketFlare_C_FlareOn__UpdateFunc_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.UpdateColor
struct ABP_RocketFlare_C_UpdateColor_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.UpdateColorWithNewValues
struct ABP_RocketFlare_C_UpdateColorWithNewValues_Params
{
	struct FLinearColor                                FlareColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RocketFlare_LightIntensity_Max;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PointLight_Radius;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RocketFlare.BP_RocketFlare_C.ShutDownFlares
struct ABP_RocketFlare_C_ShutDownFlares_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.StartFlares
struct ABP_RocketFlare_C_StartFlares_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.OnlySetStartedFlaresPropsToMaxAlpha
struct ABP_RocketFlare_C_OnlySetStartedFlaresPropsToMaxAlpha_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.OnlySetShutdownFlaresProps
struct ABP_RocketFlare_C_OnlySetShutdownFlaresProps_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.SetNewAlphaForIntensityAndSizeAndShowThis
struct ABP_RocketFlare_C_SetNewAlphaForIntensityAndSizeAndShowThis_Params
{
	float                                              RocketFlare_SizeAndIntensityAlpha;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RocketFlare.BP_RocketFlare_C.SetMaxAlpha_CurrentAlpha_AndShow_4ConstructionScript
struct ABP_RocketFlare_C_SetMaxAlpha_CurrentAlpha_AndShow_4ConstructionScript_Params
{
	float                                              RocketFlare_SizeAndIntensityAlpha;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RocketFlare.BP_RocketFlare_C.MakeFlareAndLightVisible
struct ABP_RocketFlare_C_MakeFlareAndLightVisible_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.ReceiveBeginPlay
struct ABP_RocketFlare_C_ReceiveBeginPlay_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.ExecuteUbergraph_BP_RocketFlare
struct ABP_RocketFlare_C_ExecuteUbergraph_BP_RocketFlare_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RocketFlare.BP_RocketFlare_C.JetFlareShutdownNow__DelegateSignature
struct ABP_RocketFlare_C_JetFlareShutdownNow__DelegateSignature_Params
{
};

// Function BP_RocketFlare.BP_RocketFlare_C.JetFlareActiveNow__DelegateSignature
struct ABP_RocketFlare_C_JetFlareActiveNow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
