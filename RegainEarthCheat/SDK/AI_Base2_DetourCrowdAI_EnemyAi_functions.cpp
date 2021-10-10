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

// Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.GetMindControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMindControlled               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DurationLeft                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DurationComplete               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MindControlSkillLevelOfController (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base2_DetourCrowdAI_EnemyAi_C::GetMindControlled(bool* IsMindControlled, float* DurationLeft, float* DurationComplete, float* MindControlSkillLevelOfController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.GetMindControlled");

	AAI_Base2_DetourCrowdAI_EnemyAi_C_GetMindControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsMindControlled != nullptr)
		*IsMindControlled = params.IsMindControlled;
	if (DurationLeft != nullptr)
		*DurationLeft = params.DurationLeft;
	if (DurationComplete != nullptr)
		*DurationComplete = params.DurationComplete;
	if (MindControlSkillLevelOfController != nullptr)
		*MindControlSkillLevelOfController = params.MindControlSkillLevelOfController;

}


// Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.SetMindControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetToIsMindControlled          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MindControllerSkillLevel       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PassedMindControllingChange_   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAI_Base2_DetourCrowdAI_EnemyAi_C::SetMindControlled(bool SetToIsMindControlled, float Duration, float MindControllerSkillLevel, bool* PassedMindControllingChange_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.SetMindControlled");

	AAI_Base2_DetourCrowdAI_EnemyAi_C_SetMindControlled_Params params;
	params.SetToIsMindControlled = SetToIsMindControlled;
	params.Duration = Duration;
	params.MindControllerSkillLevel = MindControllerSkillLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PassedMindControllingChange_ != nullptr)
		*PassedMindControllingChange_ = params.PassedMindControllingChange_;

}


// Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.GetDirectionAngleYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Z___Yaw                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Base2_DetourCrowdAI_EnemyAi_C::GetDirectionAngleYaw(float* Z___Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.GetDirectionAngleYaw");

	AAI_Base2_DetourCrowdAI_EnemyAi_C_GetDirectionAngleYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Z___Yaw != nullptr)
		*Z___Yaw = params.Z___Yaw;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
