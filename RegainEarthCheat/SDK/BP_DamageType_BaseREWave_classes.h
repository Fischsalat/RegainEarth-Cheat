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

// BlueprintGeneratedClass BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UBP_DamageType_BaseREWave_C : public UDamageType
{
public:
	TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType> DamageForceAndVisualEffectType;                            // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SQ5A[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PercentageDamageAbsorbtionOfBodyShield;                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageType_BaseREWave.BP_DamageType_BaseREWave_C");
		return ptr;
	}



	void GetDamageForceAndVisualEffectType(TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType>* DamageForceAndVisualEffectType);
	void GetPercentageDamageAbsorptionOfBodyShield(float* PercentageDamageAbsorption);
	void GetDamageForceAndVisualEffectTypePure(TEnumAsByte<EDamageForceAndVisualEffectType_EDamageForceAndVisualEffectType>* DamageForceAndVisualEffectType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
