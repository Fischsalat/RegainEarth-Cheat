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

// BlueprintGeneratedClass BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C
// 0x0004 (FullSize[0x0360] - InheritedSize[0x035C])
class UBP_LaserDotMarker_Component_C : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData_4E2V[0x4];                                     // 0x035C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LaserDotMarker_Component.BP_LaserDotMarker_Component_C");
		return ptr;
	}



	void GetLaserDotVisibleActivationState(bool* ActiveOn_);
	void ToggleLaserDotVisiblityOnOff(bool ActiveOn_);
	void SetNewColor(const struct FLinearColor& NewLightColor);
	void SetNewIntensity(float NewIntensity);
	void GetLaserDotLocation(struct FVector* Location);
	void SetLaserDotLocation(const struct FVector& Location);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
