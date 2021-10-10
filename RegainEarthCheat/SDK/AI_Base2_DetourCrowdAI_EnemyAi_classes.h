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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class AAI_Base2_DetourCrowdAI_EnemyAi_C : public ADetourCrowdAIController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_Base2_DetourCrowdAI_EnemyAi.AI_Base2_DetourCrowdAI_EnemyAi_C");
		return ptr;
	}



	void GetMindControlled(bool* IsMindControlled, float* DurationLeft, float* DurationComplete, float* MindControlSkillLevelOfController);
	void SetMindControlled(bool SetToIsMindControlled, float Duration, float MindControllerSkillLevel, bool* PassedMindControllingChange_);
	void GetDirectionAngleYaw(float* Z___Yaw);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
