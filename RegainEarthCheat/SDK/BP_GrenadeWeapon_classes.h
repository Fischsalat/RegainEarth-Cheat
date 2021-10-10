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

// BlueprintGeneratedClass BP_GrenadeWeapon.BP_GrenadeWeapon_C
// 0x0029 (FullSize[0x00D9] - InheritedSize[0x00B0])
class UBP_GrenadeWeapon_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UClass*                                      EquipedGrenadeType;                                        // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EquipedGrenadeAmount;                                      // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TrajectoryBeamUpdateFrequency;                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                UpdateTrajectoryBeamTimer;                                 // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GrenadeTrejactorySpline_C*               TrajectorySplineBP;                                        // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInUse;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrenadeWeapon.BP_GrenadeWeapon_C");
		return ptr;
	}



	void CheckWeaponReloadPossible(bool* Possible_);
	void Is_Allowed_to_Throw_Grenade(bool* Success);
	void StartExpandToFullSize();
	void StartShrinkToSmallSize();
	void GrenadeThrow_Pressed();
	void Server_SpawnGrenadeProjectile_Replicated(const struct FTransform& SpawnTransform, int EquipedGrenadeAmount);
	void StartTrajectoryBeam();
	void StopTrajectoryBeam();
	void UpdateTrajectoryBeam();
	void Reload_Finished_SetClipFull();
	void Clip_Drop();
	void GrenadeConstructionScriptManual();
	void Change_ShootingMode();
	void Shoot_Released();
	void Shoot_Presssed();
	void Reload_Interrupt();
	void Reload_Start();
	void ExecuteUbergraph_BP_GrenadeWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
