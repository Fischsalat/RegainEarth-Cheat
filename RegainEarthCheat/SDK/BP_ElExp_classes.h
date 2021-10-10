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

// BlueprintGeneratedClass BP_ElExp.BP_ElExp_C
// 0x00C0 (FullSize[0x02E0] - InheritedSize[0x0220])
class ABP_ElExp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            ElExpSphereCollision;                                      // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SphereEffect;                                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              EMP_FX_Alpha_Drive_Scale_17DFF52A4B47C96445A7238EED4EB632; // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              EMP_FX_Alpha_Drive_Alpha_17DFF52A4B47C96445A7238EED4EB632; // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             EMP_FX_Alpha_Drive__Direction_17DFF52A4B47C96445A7238EED4EB632; // 0x0248(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5SDS[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          EMP_FX_Alpha_Drive;                                        // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoopParticleFX;                                            // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F753[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AlreadyHitActors[0x50];                                    // 0x0259(0x0050) UNKNOWN PROPERTY: SetProperty
	float                                              ImpulseStrengthMagnitude;                                  // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseUpwardsMagnitude;                                   // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     IgniteEffects;                                             // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Base_Damage;                                               // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Minimum_Damage;                                            // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage_Inner_Radius;                                       // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage_Outer_Radius;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageFalloff;                                             // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElExp.BP_ElExp_C");
		return ptr;
	}



	void GetMesh(class UMeshComponent** Mesh);
	void GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection);
	void GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent);
	void GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef);
	void OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere);
	void EMP_FX_Alpha_Drive__FinishedFunc();
	void EMP_FX_Alpha_Drive__UpdateFunc();
	void FireRadialImpulse();
	void ReceiveBeginPlay();
	void BndEvt__BP_ElExp_ElExpSphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ElExp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
