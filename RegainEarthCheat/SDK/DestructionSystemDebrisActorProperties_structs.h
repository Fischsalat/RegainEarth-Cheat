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

// UserDefinedStruct DestructionSystemDebrisActorProperties.DestructionSystemDebrisActorProperties
// 0x0054
struct FDestructionSystemDebrisActorProperties
{
	class UStaticMesh*                                 DebrisMesh_38_7CD126E04590672047EE4698CCCE00E5;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseCustomValuesForCollisionSpawnImpulse__44_E69667D04589617A3BA325A44C0C274C; // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PCDJ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSDestructionDebrisCollisionSpawnImpulseProps CustomCollisionSpawnImpulse_47_D6C2A54544B0B36DFE8C058B4CEA1771; // 0x000C(0x0048) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
