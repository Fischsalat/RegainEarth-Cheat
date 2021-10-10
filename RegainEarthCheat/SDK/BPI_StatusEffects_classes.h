﻿#pragma once

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

// BlueprintGeneratedClass BPI_StatusEffects.BPI_StatusEffects_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_StatusEffects_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_StatusEffects.BPI_StatusEffects_C");
		return ptr;
	}



	void GetMeshForEffects(class UMeshComponent** Mesh);
	void TriggerPawnMovementSpeedModifyEffect(const struct FSSpeedEffectSettingsStruct& SpeedEffectSettings);
	void SetModifiedSpeed(float CurrentSpeedModifier);
	void GetStatusEffectComponent(bool* HasStatusEffectComponent, class UBP_StatusEffectsBaseComponent_C** StatusEffectComponentRef);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
