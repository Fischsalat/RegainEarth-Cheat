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

// AnimBlueprintGeneratedClass ABP_MannequinThirdPerson_AnimBP.ABP_MannequinThirdPerson_AnimBP_C
// 0x2931 (FullSize[0x2BE9] - InheritedSize[0x02B8])
class UABP_MannequinThirdPerson_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_Q5R5[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0460(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x0488(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x0500(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x0530(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0618(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x0648(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x06C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x06F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0778(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x07A8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0828(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0858(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0940(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0970(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                            // 0x0A20(0x0158)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0x0B78(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x0C38(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x0C80(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x0CA0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0CC0(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0x0D40(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                            // 0x0E98(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                            // 0x0EC0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                            // 0x0EE8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x0F10(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0FD0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                           // 0x1050(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0x1100(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                            // 0x1258(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                            // 0x1280(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                            // 0x12A8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x12D0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                            // 0x1370(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                    // 0x1398(0x0190)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x1528(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x1570(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x1630(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x16D0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                            // 0x1828(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                            // 0x1850(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                            // 0x1878(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                            // 0x18A0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                            // 0x18C8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x18F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x19B0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x1A30(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                            // 0x1AE0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x1B08(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0x1C60(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0x1C88(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1CB0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0x1D50(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x1D78(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x1E38(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4;                                 // 0x1E60(0x01E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x2040(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x2088(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x2148(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x21C8(0x0020)
	unsigned char                                      UnknownData_C9SV[0x8];                                     // 0x21E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                 // 0x21F0(0x01E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x23D0(0x0020)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x23F0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x24A0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x25F8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x2620(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x2648(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x2668(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x2688(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x26B0(0x0028)
	unsigned char                                      UnknownData_O42P[0x8];                                     // 0x26D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x26E0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x28C0(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x2AA0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x2AC8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x2AE8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x2B10(0x0020)
	bool                                               bInAir;                                                    // 0x2B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_APVG[0x3];                                     // 0x2B31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementSpeed;                                             // 0x2B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPawnAnimations_struct                WeaponPawnAnimationList;                                   // 0x2B38(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ReloadFinished;                                            // 0x2BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AAll_Characters_Base_Class*                  PawnRef;                                                   // 0x2BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementDirection;                                         // 0x2BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimingPitch;                                               // 0x2BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EStateOfAiming                      ActualAimingState;                                         // 0x2BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EStateOfAction                      StateOfAction;                                             // 0x2BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLeftHandIK;                                               // 0x2BCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bShooting;                                                 // 0x2BCB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UG5G[0x4];                                     // 0x2BCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           Current_Animation;                                         // 0x2BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>                   DancingAnimations;                                         // 0x2BD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bDancing;                                                  // 0x2BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MannequinThirdPerson_AnimBP.ABP_MannequinThirdPerson_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_TransitionResult_4984434A40047640EC945784DD59814A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_TwoBoneIK_72F0235E4998E7054925EE967FFDBE20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_TwoBoneIK_6D3E1D65460FAC5B1BD7C7889D747F01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_TwoBoneIK_EB573EF94E73FF4D75F6078A4AC7BEBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_TwoBoneIK_C69A0AD940CBE9A7C49CEEB5427FDD4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_BlendListByBool_99D771EE4607C7AD2300C8A3905FEA1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_BlendListByBool_494C26B349F21CAE622D77BAE92A60AC();
	void HolsterWeapon_2(bool bDoHolsterWeapon);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP_AnimGraphNode_TransitionResult_DF4DC3004F512B645FA737B91F870BC4();
	void SetWeaponPawnAnimations(RegainEarth_FS_EWeaponPawnAnimationGroups WeaponPawnAnimationGroup);
	void SetGrenadeThrowing(bool IsGreandeThrowing);
	void SetWeaponType(RegainEarth_FS_EWeaponTypes WeaponType);
	void AnimNotify_footstep();
	void AnimNotify_WeaponGrabbedFromHolster();
	void AnimNotify_WeaponAttachedToHolster();
	void SetAimingState(RegainEarth_FS_EStateOfAiming AimState);
	void ToggleForceDancingAnimBP(bool SetDancing_);
	void AnimNotify_GrenadeThrow();
	void AnimNotify_CloseCombatSwing();
	void ExecuteUbergraph_ABP_MannequinThirdPerson_AnimBP(int EntryPoint);
	void ReloadFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
