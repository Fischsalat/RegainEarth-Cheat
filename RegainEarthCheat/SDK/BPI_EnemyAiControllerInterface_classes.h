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

// BlueprintGeneratedClass BPI_EnemyAiControllerInterface.BPI_EnemyAiControllerInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_EnemyAiControllerInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_EnemyAiControllerInterface.BPI_EnemyAiControllerInterface_C");
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
