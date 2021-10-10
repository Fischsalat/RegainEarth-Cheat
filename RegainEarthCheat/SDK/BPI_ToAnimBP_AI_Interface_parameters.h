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

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.PlayVariableAnimationToSlot
struct UBPI_ToAnimBP_AI_Interface_C_PlayVariableAnimationToSlot_Params
{
	class UAnimSequenceBase*                           Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsCrouching
struct UBPI_ToAnimBP_AI_Interface_C_Set_IsCrouching_Params
{
	bool                                               IsCrouch;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsJumping
struct UBPI_ToAnimBP_AI_Interface_C_Set_IsJumping_Params
{
	bool                                               IsJump;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_Direction
struct UBPI_ToAnimBP_AI_Interface_C_Set_Direction_Params
{
	float                                              Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsDead
struct UBPI_ToAnimBP_AI_Interface_C_Set_IsDead_Params
{
	bool                                               IsDead;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_enemyAttack
struct UBPI_ToAnimBP_AI_Interface_C_Get_enemyAttack_Params
{
	bool                                               IsAttacking_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_EnemyAttack
struct UBPI_ToAnimBP_AI_Interface_C_Set_EnemyAttack_Params
{
	bool                                               IsAttacking_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IKLocation
struct UBPI_ToAnimBP_AI_Interface_C_Set_IKLocation_Params
{
	struct FVector                                     IK_Location;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_Pitch
struct UBPI_ToAnimBP_AI_Interface_C_Get_Pitch_Params
{
	float                                              Pitch;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_AimLeanPitch
struct UBPI_ToAnimBP_AI_Interface_C_Set_AimLeanPitch_Params
{
	float                                              AimLeanPitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_AimLeanYaw
struct UBPI_ToAnimBP_AI_Interface_C_Set_AimLeanYaw_Params
{
	float                                              AimLeanYaw;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_Leaning
struct UBPI_ToAnimBP_AI_Interface_C_Get_Leaning_Params
{
	float                                              AimLeanYaw;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimLeanPitch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_LeftHandIK
struct UBPI_ToAnimBP_AI_Interface_C_Set_LeftHandIK_Params
{
	bool                                               LeftHandIK;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsInteraction
struct UBPI_ToAnimBP_AI_Interface_C_Set_IsInteraction_Params
{
	bool                                               IsInteraction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
