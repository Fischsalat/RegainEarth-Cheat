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

// AnimBlueprintGeneratedClass ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C
// 0x0E69 (FullSize[0x1121] - InheritedSize[0x02B8])
class UABP_AI_EnemyCharacter_Base_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JU0Q[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x02C8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x0368(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0428(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x04C8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x04E8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x0510(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0668(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x0688(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x06B0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x06F8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0720(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0748(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0770(0x0158)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x08C8(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0978(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0A38(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0A60(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0BB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0BE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0C08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0C30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0C58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0C80(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0CA8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0CD8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0D58(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0D88(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0E08(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0E38(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0EB8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0EE8(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0FD0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1000(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x10B0(0x0030)
	float                                              AimLeanPitch;                                              // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimLeanYaw;                                                // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttacking;                                               // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDead;                                                    // 0x10E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K3I0[0x2];                                     // 0x10EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x10EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchNotInUse;                                             // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JZ9P[0x4];                                     // 0x10F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             IdleRunMovementBlendspace;                                 // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ESkeletons_ESkeletons>                 Skeleton;                                                  // 0x1100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInAir;                                                    // 0x1101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R91F[0x6];                                     // 0x1102(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           AnimJumpStart;                                             // 0x1108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           AnimJumpLoop;                                              // 0x1110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           AnimJumpEnd;                                               // 0x1118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDancing;                                                  // 0x1120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AI_EnemyCharacter_Base_AnimBP.ABP_AI_EnemyCharacter_Base_AnimBP_C");
		return ptr;
	}



	void Get_Leaning(float* AimLeanYaw, float* AimLeanPitch);
	void Get_Pitch(float* Pitch);
	void Get_enemyAttack(bool* IsAttacking_);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Set_IsCrouching(bool IsCrouch);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_BlendListByBool_56146C6F48F537879832AF95B09A5B46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_TransitionResult_6ED6E8B345A96542B6F9279B40783A1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP_AnimGraphNode_TransitionResult_FC83F3C84CD584C723FBFF9F1C24B7EE();
	void Set_IsJumping(bool IsJump);
	void Set_Direction(float Direction);
	void AnimNotify_GiveAttackStrikeHitOfComboL();
	void AnimNotify_GiveAttackStrikeHitL();
	void AnimNotify_GiveAttackStrikeHitOfComboR();
	void AnimNotify_GiveAttackStrikeHitR();
	void AnimNotify_GiveAttackStrikeHitHead();
	void AnimNotify_footstep();
	void Set_IKLocation(const struct FVector& IK_Location);
	void Set_LeftHandIK(bool LeftHandIK);
	void Set_AimLeanPitch(float AimLeanPitch);
	void Set_AimLeanYaw(float AimLeanYaw);
	void Set_EnemyAttack(bool IsAttacking_);
	void Set_IsDead(bool IsDead);
	void PlayVariableAnimationToSlot(class UAnimSequenceBase* Animation, const struct FName& SlotName);
	void ToggleForceDancingAnimBP(bool SetDancing_);
	void Play_Interaction_Animation(class UAnimSequenceBase* Anim, const struct FName& SlotNodeName);
	void Set_IsInteraction(bool IsInteraction);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_AI_EnemyCharacter_Base_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
