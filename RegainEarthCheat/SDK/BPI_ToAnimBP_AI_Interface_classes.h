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

// BlueprintGeneratedClass BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_ToAnimBP_AI_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ToAnimBP_AI_Interface.BPI_ToAnimBP_AI_Interface_C");
		return ptr;
	}



	void PlayVariableAnimationToSlot(class UAnimSequenceBase* Animation, const struct FName& SlotName);
	void Set_IsCrouching(bool IsCrouch);
	void Set_IsJumping(bool IsJump);
	void Set_Direction(float Direction);
	void Set_IsDead(bool IsDead);
	void Get_enemyAttack(bool* IsAttacking_);
	void Set_EnemyAttack(bool IsAttacking_);
	void Set_IKLocation(const struct FVector& IK_Location);
	void Get_Pitch(float* Pitch);
	void Set_AimLeanPitch(float AimLeanPitch);
	void Set_AimLeanYaw(float AimLeanYaw);
	void Get_Leaning(float* AimLeanYaw, float* AimLeanPitch);
	void Set_LeftHandIK(bool LeftHandIK);
	void Set_IsInteraction(bool IsInteraction);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
