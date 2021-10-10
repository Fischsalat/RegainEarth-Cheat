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

// UserDefinedStruct ST_Spawn_AI.ST_Spawn_AI
// 0x004C
struct FST_Spawn_AI
{
	bool                                               Zombie_Enemy_41_E6AB2CAE4C7C3BBC6ADB7899C1A5C615;          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P7NI[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AItoSpawn_58_09A020824D307649F6A64CBC6BBDF9B5;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmounttoSpawn_5_78B83A494904991EC7EA9FA80CADDFA3;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SpawnFromLevel_64_02688BC445E127B706DFC9A8B4015BC3;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SpawnUpToLevel_65_0EC401094536910510E66E806F356344;        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_AmountProgression                       AmountProgression_68_941DB4A2406B9572A6D21D911E2DA530;     // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MPZJ[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Spawn_Information                       LocationInformation_46_88F7821948D075E6C5F989987722B82A;   // 0x0028(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Randomization                           Randomization_54_BA4387294823F62FFA5FDB9EBC1C2FF5;         // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
