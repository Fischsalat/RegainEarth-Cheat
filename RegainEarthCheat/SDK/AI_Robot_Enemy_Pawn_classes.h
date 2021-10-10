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

// BlueprintGeneratedClass AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C
// 0x00A4 (FullSize[0x0A70] - InheritedSize[0x09CC])
class AAI_Robot_Enemy_Pawn_C : public AAI_Character_Base_Enemy_Pawn_C
{
public:
	unsigned char                                      UnknownData_FGFR[0x4];                                     // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_Weapon_C*                                BP_Weapon_Gun1;                                            // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh_Gun1;                                         // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPawnAnimations_struct                WeaponPawnAnimationList;                                   // 0x09E8(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TempNewAimingPitchClamped_1;                               // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 StartWeaponID;                                             // 0x0A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HAS7[0x3];                                     // 0x0A5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinRandomFlotValueDelayTimePerShot;                        // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRandomFlotValueDelayTimePerShot;                        // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayFactorForDelayOnFirstShotWhenNewSpotTarget;           // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenShotsMultiplierWhenWeaponSlowed;               // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C");
		return ptr;
	}



	void GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Start_attack_Event_manual();
	void StartAttack();
	void WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef);
	void ShootCharEffectsSingleShot();
	void ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime();
	void ExecuteUbergraph_AI_Robot_Enemy_Pawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
