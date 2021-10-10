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

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Get_Leaning
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Get_Leaning_Params
{
	float                                              AimLeanYaw;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimLeanPitch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Get_Pitch
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Get_Pitch_Params
{
	float                                              Pitch;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Get_enemyAttack
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Get_enemyAttack_Params
{
	bool                                               IsAttacking_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimGraph
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_IsCrouching
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_IsCrouching_Params
{
	bool                                               IsCrouch;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_BlendListByBool_56146C6F48F537879832AF95B09A5B46
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_BlendListByBool_56146C6F48F537879832AF95B09A5B46_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_TransitionResult_6ED6E8B345A96542B6F9279B40783A1D
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_TransitionResult_6ED6E8B345A96542B6F9279B40783A1D_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_TransitionResult_FC83F3C84CD584C723FBFF9F1C24B7EE
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_TransitionResult_FC83F3C84CD584C723FBFF9F1C24B7EE_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_IsJumping
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_IsJumping_Params
{
	bool                                               IsJump;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_Direction
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_Direction_Params
{
	float                                              Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimNotify_GiveAttackStrikeHitOfComboL
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimNotify_GiveAttackStrikeHitOfComboL_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimNotify_GiveAttackStrikeHitL
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimNotify_GiveAttackStrikeHitL_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimNotify_GiveAttackStrikeHitOfComboR
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimNotify_GiveAttackStrikeHitOfComboR_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimNotify_GiveAttackStrikeHitR
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimNotify_GiveAttackStrikeHitR_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimNotify_GiveAttackStrikeHitHead
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimNotify_GiveAttackStrikeHitHead_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.AnimNotify_footstep
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_AnimNotify_footstep_Params
{
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_IKLocation
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_IKLocation_Params
{
	struct FVector                                     IK_Location;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_LeftHandIK
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_LeftHandIK_Params
{
	bool                                               LeftHandIK;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_AimLeanPitch
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_AimLeanPitch_Params
{
	float                                              AimLeanPitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_AimLeanYaw
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_AimLeanYaw_Params
{
	float                                              AimLeanYaw;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_EnemyAttack
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_EnemyAttack_Params
{
	bool                                               IsAttacking_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_IsDead
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_IsDead_Params
{
	bool                                               IsDead;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.PlayVariableAnimationToSlot
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_PlayVariableAnimationToSlot_Params
{
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.ToggleForceDancingAnimBP
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_ToggleForceDancingAnimBP_Params
{
	bool                                               SetDancing_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Play Interaction Animation
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Play_Interaction_Animation_Params
{
	class UAnimSequenceBase*                           Anim;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SlotNodeName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.Set_IsInteraction
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_Set_IsInteraction_Params
{
	bool                                               IsInteraction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.BlueprintUpdateAnimation
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C.ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP
struct UABP_AI_EnemyCharacter_Base_AnimBP_C_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
