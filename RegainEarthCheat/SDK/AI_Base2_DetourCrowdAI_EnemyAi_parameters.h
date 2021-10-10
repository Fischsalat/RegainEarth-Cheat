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

// Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.GetMindControlled
struct AAI_Base2_DetourCrowdAI_EnemyAi_C_GetMindControlled_Params
{
	bool                                               IsMindControlled;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DurationLeft;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurationComplete;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControlSkillLevelOfController;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.SetMindControlled
struct AAI_Base2_DetourCrowdAI_EnemyAi_C_SetMindControlled_Params
{
	bool                                               SetToIsMindControlled;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControllerSkillLevel;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PassedMindControllingChange_;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C.GetDirectionAngleYaw
struct AAI_Base2_DetourCrowdAI_EnemyAi_C_GetDirectionAngleYaw_Params
{
	float                                              Z___Yaw;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
