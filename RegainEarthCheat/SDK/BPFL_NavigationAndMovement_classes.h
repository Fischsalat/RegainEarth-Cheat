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

// BlueprintGeneratedClass BPFL_NavigationAndMovement.BPFL_NavigationAndMovement_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFL_NavigationAndMovement_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_NavigationAndMovement.BPFL_NavigationAndMovement_C");
		return ptr;
	}



	void STATIC_CalculateNeededVeloForJump(const struct FVector& DestLocation, const struct FVector& StartLocation, float Duration, class UObject* __WorldContext, struct FVector* Velocity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
