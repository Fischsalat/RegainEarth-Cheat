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

// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.PlayVariableAnimationToSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::PlayVariableAnimationToSlot(class UAnimSequenceBase* Animation, const struct FName& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.PlayVariableAnimationToSlot");

	UBPI_ToAnimBP_AI_Interface_C_PlayVariableAnimationToSlot_Params params;
	params.Animation = Animation;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsCrouching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrouch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Set_IsCrouching(bool IsCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsCrouching");

	UBPI_ToAnimBP_AI_Interface_C_Set_IsCrouching_Params params;
	params.IsCrouch = IsCrouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsJumping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJump                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Set_IsJumping(bool IsJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsJumping");

	UBPI_ToAnimBP_AI_Interface_C_Set_IsJumping_Params params;
	params.IsJump = IsJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_Direction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::Set_Direction(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_Direction");

	UBPI_ToAnimBP_AI_Interface_C_Set_Direction_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Set_IsDead(bool IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsDead");

	UBPI_ToAnimBP_AI_Interface_C_Set_IsDead_Params params;
	params.IsDead = IsDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_enemyAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAttacking_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Get_enemyAttack(bool* IsAttacking_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_enemyAttack");

	UBPI_ToAnimBP_AI_Interface_C_Get_enemyAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAttacking_ != nullptr)
		*IsAttacking_ = params.IsAttacking_;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_EnemyAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAttacking_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Set_EnemyAttack(bool IsAttacking_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_EnemyAttack");

	UBPI_ToAnimBP_AI_Interface_C_Set_EnemyAttack_Params params;
	params.IsAttacking_ = IsAttacking_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IKLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 IK_Location                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::Set_IKLocation(const struct FVector& IK_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IKLocation");

	UBPI_ToAnimBP_AI_Interface_C_Set_IKLocation_Params params;
	params.IK_Location = IK_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_Pitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::Get_Pitch(float* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_Pitch");

	UBPI_ToAnimBP_AI_Interface_C_Get_Pitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_AimLeanPitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimLeanPitch                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::Set_AimLeanPitch(float AimLeanPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_AimLeanPitch");

	UBPI_ToAnimBP_AI_Interface_C_Set_AimLeanPitch_Params params;
	params.AimLeanPitch = AimLeanPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_AimLeanYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimLeanYaw                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::Set_AimLeanYaw(float AimLeanYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_AimLeanYaw");

	UBPI_ToAnimBP_AI_Interface_C_Set_AimLeanYaw_Params params;
	params.AimLeanYaw = AimLeanYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_Leaning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimLeanYaw                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AimLeanPitch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ToAnimBP_AI_Interface_C::Get_Leaning(float* AimLeanYaw, float* AimLeanPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Get_Leaning");

	UBPI_ToAnimBP_AI_Interface_C_Get_Leaning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AimLeanYaw != nullptr)
		*AimLeanYaw = params.AimLeanYaw;
	if (AimLeanPitch != nullptr)
		*AimLeanPitch = params.AimLeanPitch;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_LeftHandIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LeftHandIK                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Set_LeftHandIK(bool LeftHandIK)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_LeftHandIK");

	UBPI_ToAnimBP_AI_Interface_C_Set_LeftHandIK_Params params;
	params.LeftHandIK = LeftHandIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteraction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_AI_Interface_C::Set_IsInteraction(bool IsInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C.Set_IsInteraction");

	UBPI_ToAnimBP_AI_Interface_C_Set_IsInteraction_Params params;
	params.IsInteraction = IsInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
