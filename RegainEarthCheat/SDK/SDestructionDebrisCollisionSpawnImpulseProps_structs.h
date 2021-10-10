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

// UserDefinedStruct SDestructionDebrisCollisionSpawnImpulseProps.SDestructionDebrisCollisionSpawnImpulseProps
// 0x0048
struct FSDestructionDebrisCollisionSpawnImpulseProps
{
	struct FDestructionSystemRandomVector              SpawnOffset_32_6F3F727044A9775C901575BFD5BCA9E8;           // 0x0000(0x001C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDestructionSystemRandomVector              SpawnImpulse_35_A93DABD04C6E7C5AFB9540996F56EC49;          // 0x001C(0x001C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDestructionSystemRandomFloat               DestroyDelay_37_C5D9C4794E87B03829812BA5D8AED62D;          // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPhysicsEnabled_15_2573193041E5E6FBAF486BA0CA712F00;       // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCollisionEnabled_17_3BE60241401BF5F6495ED49F20E60531;     // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCastShadows_19_98D3FC3741A4F99A2AAC2A95EEAD8F5A;          // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SetPawnToCollisionIgnore_41_E69667D04589617A3BA325A44C0C274C; // 0x0047(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
