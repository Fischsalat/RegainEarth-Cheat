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

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetMaxHealthInterf
struct UGeneral_Character_Pawn_Interface_C_SetMaxHealthInterf_Params
{
	float                                              NewMaxHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.ToggleForceDancingPawn
struct UGeneral_Character_Pawn_Interface_C_ToggleForceDancingPawn_Params
{
	bool                                               SetDancing_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.CancelPickupAndReplicate
struct UGeneral_Character_Pawn_Interface_C_CancelPickupAndReplicate_Params
{
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetRenderCustomDepthStencil
struct UGeneral_Character_Pawn_Interface_C_SetRenderCustomDepthStencil_Params
{
	bool                                               SetOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NewValueIfSetOn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetCanNotAttack
struct UGeneral_Character_Pawn_Interface_C_GetCanNotAttack_Params
{
	bool                                               CanNotAttack;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetName
struct UGeneral_Character_Pawn_Interface_C_GetName_Params
{
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetToCanNotAttack
struct UGeneral_Character_Pawn_Interface_C_SetToCanNotAttack_Params
{
	bool                                               SetToCanNotAttack_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetToCanNotMove
struct UGeneral_Character_Pawn_Interface_C_SetToCanNotMove_Params
{
	bool                                               SetToCanNotMove_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.ToogleNotHitableForBulletStrikeAndProjectile
struct UGeneral_Character_Pawn_Interface_C_ToogleNotHitableForBulletStrikeAndProjectile_Params
{
	bool                                               SetNotHitable_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetCurrentHealthPercentageAsFactor
struct UGeneral_Character_Pawn_Interface_C_GetCurrentHealthPercentageAsFactor_Params
{
	float                                              CurrentHealthPercentage_;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.IsAtMaxHealth
struct UGeneral_Character_Pawn_Interface_C_IsAtMaxHealth_Params
{
	bool                                               IsAtMaxHealth_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.HealSomeHealth
struct UGeneral_Character_Pawn_Interface_C_HealSomeHealth_Params
{
	float                                              AmountHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsBleedingOut
struct UGeneral_Character_Pawn_Interface_C_GetIsBleedingOut_Params
{
	bool                                               IsBleedingOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsUnconsciousOrDeadOrSimilar
struct UGeneral_Character_Pawn_Interface_C_GetIsUnconsciousOrDeadOrSimilar_Params
{
	bool                                               IsUnconscious_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsPhysicsHandleActive
struct UGeneral_Character_Pawn_Interface_C_GetIsPhysicsHandleActive_Params
{
	bool                                               Physics_Handle_Active_of_Character_;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetGrabbedComponent
struct UGeneral_Character_Pawn_Interface_C_GetGrabbedComponent_Params
{
	class UPrimitiveComponent*                         Grabbed_Component_of_Character;                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsDead
struct UGeneral_Character_Pawn_Interface_C_GetIsDead_Params
{
	bool                                               IsDead_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsInteracting
struct UGeneral_Character_Pawn_Interface_C_GetIsInteracting_Params
{
	bool                                               IsInteracting_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.PlayFootStepLocal
struct UGeneral_Character_Pawn_Interface_C_PlayFootStepLocal_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
