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

// UserDefinedStruct SInputKeys_RelatedInputKeys.SInputKeys_RelatedInputKeys
// 0x0058
struct FSInputKeys_RelatedInputKeys
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           InputName_20_4960B7354F7E1300B8C4BA9FF309AC3B;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SOI8[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        GamePadKey_8_EF5D8B6A494D6113199867A74E6C3E6D;             // 0x0008(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        KeyboardKey1_21_E1458644416E89D54213F2B774157D66;          // 0x0020(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        KeyboardKey2_24_FC2604A84A5CBAF204BED08CA0F459AF;          // 0x0038(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               IsAxis_12_275126D94C00DC7801C9F88CC472F7F9;                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0RX1[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AxisScale_19_5BA9C9C1423040FC9F0271A978D856D2;             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
