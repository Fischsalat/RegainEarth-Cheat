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

// Function BPI_EnemyAiControllerInterface.BPI_EnemyAiControllerInterface_C.GetMindControlled
struct UBPI_EnemyAiControllerInterface_C_GetMindControlled_Params
{
	bool                                               IsMindControlled;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DurationLeft;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DurationComplete;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControlSkillLevelOfController;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_EnemyAiControllerInterface.BPI_EnemyAiControllerInterface_C.SetMindControlled
struct UBPI_EnemyAiControllerInterface_C_SetMindControlled_Params
{
	bool                                               SetToIsMindControlled;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MindControllerSkillLevel;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PassedMindControllingChange_;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_EnemyAiControllerInterface.BPI_EnemyAiControllerInterface_C.GetDirectionAngleYaw
struct UBPI_EnemyAiControllerInterface_C_GetDirectionAngleYaw_Params
{
	float                                              Z___Yaw;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
