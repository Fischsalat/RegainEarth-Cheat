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

// Function BP_PickupBase.BP_PickupBase_C.TimelineShrinkAndRemove__FinishedFunc
struct ABP_PickupBase_C_TimelineShrinkAndRemove__FinishedFunc_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.TimelineShrinkAndRemove__UpdateFunc
struct ABP_PickupBase_C_TimelineShrinkAndRemove__UpdateFunc_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.LocationAlpha__FinishedFunc
struct ABP_PickupBase_C_LocationAlpha__FinishedFunc_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.LocationAlpha__UpdateFunc
struct ABP_PickupBase_C_LocationAlpha__UpdateFunc_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay
struct ABP_PickupBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.LifeTimeCounter
struct ABP_PickupBase_C_LifeTimeCounter_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.Multicast_StartShrinkDisapear
struct ABP_PickupBase_C_Multicast_StartShrinkDisapear_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.PickItUp
struct ABP_PickupBase_C_PickItUp_Params
{
	class APawn*                                       PawnWhoPicksItUp;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PickupBase.BP_PickupBase_C.Multicast_StartLocationTransitionVisualParticle
struct ABP_PickupBase_C_Multicast_StartLocationTransitionVisualParticle_Params
{
	struct FVector                                     TransistionVisualStartPosition;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PickupBase.BP_PickupBase_C.CloseGateForTransitionVisuials
struct ABP_PickupBase_C_CloseGateForTransitionVisuials_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase
struct ABP_PickupBase_C_ExecuteUbergraph_BP_PickupBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PickupBase.BP_PickupBase_C.IsPickedUp__DelegateSignature
struct ABP_PickupBase_C_IsPickedUp__DelegateSignature_Params
{
	class AController*                                 PickedUpControllerOnlyValidOnServer;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PickedUpPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
