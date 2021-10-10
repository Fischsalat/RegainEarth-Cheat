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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DestructionSystemActorState.DestructionSystemActorState
// 0x0034
struct FDestructionSystemActorState
{
	struct FText                                       Name_19_2BE61E7B40AD46D2A466EDAF25581C97;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UStaticMesh*                                 StaticMesh_23_A33EC4A442C5B66F56FA4C9E68B24E54;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             TransitionParticle_24_47357C5E4A72758D76655E9BC31F192E;    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  TransitionSound_25_82EE17A04B65AECADFE0F3B04B1B5458;       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HP_15_3864D4F44D72A6B72DB6D2AA241E94E6;                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
