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

// UserDefinedStruct SSettings_InputKeys.SSettings_InputKeys
// 0x0090
struct FSSettings_InputKeys
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ID_15_C1ABEE0744614408F44F40ADD4E1BADF;                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3HFF[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name_2_D9BBB6814D0AE2FE85637B9621E1E400;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_4_3614F10F47AFF4F45B099F9EE8974993;            // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FSInputKeys_RelatedInputKeys                InputKeys_struct_16_D57D5EAA400039809AB1DF90BA80F6D2;      // 0x0038(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
