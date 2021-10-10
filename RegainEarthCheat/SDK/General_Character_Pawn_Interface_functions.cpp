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

// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetMaxHealthInterf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMaxHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGeneral_Character_Pawn_Interface_C::SetMaxHealthInterf(float NewMaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetMaxHealthInterf");

	UGeneral_Character_Pawn_Interface_C_SetMaxHealthInterf_Params params;
	params.NewMaxHealth = NewMaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.ToggleForceDancingPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDancing_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::ToggleForceDancingPawn(bool SetDancing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.ToggleForceDancingPawn");

	UGeneral_Character_Pawn_Interface_C_ToggleForceDancingPawn_Params params;
	params.SetDancing_ = SetDancing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.CancelPickupAndReplicate
// (Public, BlueprintCallable, BlueprintEvent)
void UGeneral_Character_Pawn_Interface_C::CancelPickupAndReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.CancelPickupAndReplicate");

	UGeneral_Character_Pawn_Interface_C_CancelPickupAndReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetRenderCustomDepthStencil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetOn_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NewValueIfSetOn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGeneral_Character_Pawn_Interface_C::SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetRenderCustomDepthStencil");

	UGeneral_Character_Pawn_Interface_C_SetRenderCustomDepthStencil_Params params;
	params.SetOn_ = SetOn_;
	params.NewValueIfSetOn = NewValueIfSetOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetCanNotAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanNotAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::GetCanNotAttack(bool* CanNotAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetCanNotAttack");

	UGeneral_Character_Pawn_Interface_C_GetCanNotAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanNotAttack != nullptr)
		*CanNotAttack = params.CanNotAttack;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGeneral_Character_Pawn_Interface_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetName");

	UGeneral_Character_Pawn_Interface_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetToCanNotAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotAttack_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::SetToCanNotAttack(bool SetToCanNotAttack_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetToCanNotAttack");

	UGeneral_Character_Pawn_Interface_C_SetToCanNotAttack_Params params;
	params.SetToCanNotAttack_ = SetToCanNotAttack_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetToCanNotMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToCanNotMove_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::SetToCanNotMove(bool SetToCanNotMove_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.SetToCanNotMove");

	UGeneral_Character_Pawn_Interface_C_SetToCanNotMove_Params params;
	params.SetToCanNotMove_ = SetToCanNotMove_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.ToogleNotHitableForBulletStrikeAndProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetNotHitable_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.ToogleNotHitableForBulletStrikeAndProjectile");

	UGeneral_Character_Pawn_Interface_C_ToogleNotHitableForBulletStrikeAndProjectile_Params params;
	params.SetNotHitable_ = SetNotHitable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetCurrentHealthPercentageAsFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealthPercentage_       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGeneral_Character_Pawn_Interface_C::GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetCurrentHealthPercentageAsFactor");

	UGeneral_Character_Pawn_Interface_C_GetCurrentHealthPercentageAsFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentHealthPercentage_ != nullptr)
		*CurrentHealthPercentage_ = params.CurrentHealthPercentage_;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.IsAtMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAtMaxHealth_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::IsAtMaxHealth(bool* IsAtMaxHealth_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.IsAtMaxHealth");

	UGeneral_Character_Pawn_Interface_C_IsAtMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAtMaxHealth_ != nullptr)
		*IsAtMaxHealth_ = params.IsAtMaxHealth_;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.HealSomeHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGeneral_Character_Pawn_Interface_C::HealSomeHealth(float AmountHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.HealSomeHealth");

	UGeneral_Character_Pawn_Interface_C_HealSomeHealth_Params params;
	params.AmountHealth = AmountHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsBleedingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBleedingOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::GetIsBleedingOut(bool* IsBleedingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsBleedingOut");

	UGeneral_Character_Pawn_Interface_C_GetIsBleedingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBleedingOut != nullptr)
		*IsBleedingOut = params.IsBleedingOut;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsUnconsciousOrDeadOrSimilar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnconscious_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsUnconsciousOrDeadOrSimilar");

	UGeneral_Character_Pawn_Interface_C_GetIsUnconsciousOrDeadOrSimilar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnconscious_ != nullptr)
		*IsUnconscious_ = params.IsUnconscious_;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsPhysicsHandleActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Physics_Handle_Active_of_Character_ (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsPhysicsHandleActive");

	UGeneral_Character_Pawn_Interface_C_GetIsPhysicsHandleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Physics_Handle_Active_of_Character_ != nullptr)
		*Physics_Handle_Active_of_Character_ = params.Physics_Handle_Active_of_Character_;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetGrabbedComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Grabbed_Component_of_Character (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGeneral_Character_Pawn_Interface_C::GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetGrabbedComponent");

	UGeneral_Character_Pawn_Interface_C_GetGrabbedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grabbed_Component_of_Character != nullptr)
		*Grabbed_Component_of_Character = params.Grabbed_Component_of_Character;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::GetIsDead(bool* IsDead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsDead");

	UGeneral_Character_Pawn_Interface_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDead_ != nullptr)
		*IsDead_ = params.IsDead_;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteracting_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGeneral_Character_Pawn_Interface_C::GetIsInteracting(bool* IsInteracting_)
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.GetIsInteracting");

	UGeneral_Character_Pawn_Interface_C_GetIsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInteracting_ != nullptr)
		*IsInteracting_ = params.IsInteracting_;

}


// Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.PlayFootStepLocal
// (Public, BlueprintCallable, BlueprintEvent)
void UGeneral_Character_Pawn_Interface_C::PlayFootStepLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function General_Character_Pawn_Interface.General_Character_Pawn_Interface_C.PlayFootStepLocal");

	UGeneral_Character_Pawn_Interface_C_PlayFootStepLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
