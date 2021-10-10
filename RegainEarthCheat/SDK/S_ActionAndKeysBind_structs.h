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

// UserDefinedStruct S_ActionAndKeysBind.S_ActionAndKeysBind
// 0x0030
struct FS_ActionAndKeysBind
{
	struct FText                                       ActionText_15_3EACB8FD440D977C6329D59BECB383B1;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                ActiveKeysFound_21_204EB0484056234BF399069897B4214F;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KK98[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_KeyAndTexture>                    KeyTextureStructArray_32_DF5475BF4D916EC7F57A118DD9E7C3F6; // 0x0020(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
