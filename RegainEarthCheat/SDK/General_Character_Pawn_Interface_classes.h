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

// BlueprintGeneratedClass General_Character_Pawn_Interface.General_Character_Pawn_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGeneral_Character_Pawn_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass General_Character_Pawn_Interface.General_Character_Pawn_Interface_C");
		return ptr;
	}



	void SetMaxHealthInterf(float NewMaxHealth);
	void ToggleForceDancingPawn(bool SetDancing_);
	void CancelPickupAndReplicate();
	void SetRenderCustomDepthStencil(bool SetOn_, int NewValueIfSetOn);
	void GetCanNotAttack(bool* CanNotAttack);
	void GetName(struct FString* Name);
	void SetToCanNotAttack(bool SetToCanNotAttack_);
	void SetToCanNotMove(bool SetToCanNotMove_);
	void ToogleNotHitableForBulletStrikeAndProjectile(bool SetNotHitable_);
	void GetCurrentHealthPercentageAsFactor(float* CurrentHealthPercentage_);
	void IsAtMaxHealth(bool* IsAtMaxHealth_);
	void HealSomeHealth(float AmountHealth);
	void GetIsBleedingOut(bool* IsBleedingOut);
	void GetIsUnconsciousOrDeadOrSimilar(bool* IsUnconscious_);
	void GetIsPhysicsHandleActive(bool* Physics_Handle_Active_of_Character_);
	void GetGrabbedComponent(class UPrimitiveComponent** Grabbed_Component_of_Character);
	void GetIsDead(bool* IsDead_);
	void GetIsInteracting(bool* IsInteracting_);
	void PlayFootStepLocal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
