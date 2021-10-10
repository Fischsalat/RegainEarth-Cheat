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

// BlueprintGeneratedClass BF_Math.BF_Math_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBF_Math_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BF_Math.BF_Math_C");
		return ptr;
	}



	void STATIC_Coefficient(float Min, float Max, float Min1, float Max1, float Value, class UObject* __WorldContext, float* Coefficient);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
