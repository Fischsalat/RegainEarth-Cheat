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

// BlueprintGeneratedClass BP_Shield.BP_Shield_C
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UBP_Shield_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               IsShieldActive;                                            // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R7NN[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentShieldAmount;                                       // 0x00BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                              MaxShieldAmount;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DestroyShieldAfterDuration;                                // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                          ShieldMeshReference;                                       // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DestroyShieldMeshTimer;                                    // 0x00D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  BootSound;                                                 // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HitSound;                                                  // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  BreakSound;                                                // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetShieldEffectToSkin;                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QY4H[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ShieldVisualAnimStateChange;                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldAnimState;                                           // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4QMW[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ShieldDefaultColor;                                        // 0x010C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shield.BP_Shield_C");
		return ptr;
	}



	void OnRep_ShieldTypeColor();
	void AdjustShieldVisualsToCurrentShieldAmount();
	void OnRep_CurrentShieldAmount();
	void ApplyDamageToShield_CallOnServer(float TakenDamage, class UDamageType* DamageType, bool SkipShowingHitEffect, float* RestDamageNotShieldAbsorbed);
	void Server_CreateBodyShieldOnSelf(float MaxShieldAmount, float DestroyShieldAfterDuration, const struct FVector& ShieldTypeColor);
	void DoShieldStartAnimation();
	void Multicast_DoHitAnimation();
	void SpawnShieldVisuals();
	void RemoveShieldAnimation();
	void StopDoHitAnimationVisuals();
	void DestoryShieldMesh();
	void StopDoRemoveAnimationVisuals();
	void ReceiveBeginPlay();
	void ShieldVisualAnimState_Event(TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState);
	void StopSpawnShieldAnimationVisuals();
	void ExecuteUbergraph_BP_Shield(int EntryPoint);
	void ShieldVisualAnimStateChange__DelegateSignature(TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
