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

// AnimBlueprintGeneratedClass ABP_MechaLightBiped_AnimBP_Child.ABP_MechaLightBiped_AnimBP_Child_C
// 0x000F (FullSize[0x0AB8] - InheritedSize[0x0AA9])
class UABP_MechaLightBiped_AnimBP_Child_C : public UABP_Mecha_Biped_AnimBP_C
{
public:
	unsigned char                                      UnknownData_A5OY[0x7];                                     // 0x0AA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MechaLightBiped_AnimBP_Child.ABP_MechaLightBiped_AnimBP_Child_C");
		return ptr;
	}



	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_MechaLightBiped_AnimBP_Child(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
