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

// UserDefinedStruct ItemDataStructF.ItemDataStructF
// 0x0084
struct FItemDataStructF
{
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            ItemID_32_4D49031A415E811A9F051F86159AEABC;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_29M7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name_18_F9901A254BBC620760A166B7C28F51CE;                  // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A3J8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon_21_036F118B429515184E0432A4A3D63564;                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ItemDescription_45_E93AE4E74623C855CCE0E3A3248EA9A2;       // 0x0018(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<ItemCategoryEnum_EItemCategoryEnum>    Catergory_9_A22E32BA4DF772979DFCBEA114C5FDE4;              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_91TH[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Counttoaddwhencollectoneitem_94_D127F899448E72EE20175F8E9FE7D136; // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxStackSize_12_517B482743B6E52E1231CDA8E6789435;          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsStackable__71_FB20994447D899D78AE1B487D4FCF9FB;          // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VLD5[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<ItemUsageEnums_EItemUsageEnums>> Usage_77_09EBA60741F3FC077C7D059745115DBE;                 // 0x0040(0x0010) (Edit, BlueprintVisible)
	class UStaticMesh*                                 ItemStaticMesh_29_A5E7DEBF4F51603E845BC1804D6FFB57;        // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Poweroramount_78_2EBA01E94C546D62C6E19F92A4A93BCC;         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              weightmassinkgformeshphysic_68_79568D564DC4326FCF9BE1B7C03138AA; // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Activated__40_B9E4A0EA4485E088E14C38B667493B92;            // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1T47[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale_69_777F0FBA49BF0D0FF3D00AACEFFCE889;                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      RelatedActorComponentClass_91_E2C65C8B4A84906333BFF8BFD9586E99; // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UsedCollisionProfileNamesEnum_EUsedCollisionProfileNamesEnum> CollisionObjectType_67_819FC356498F67BCC7599485FE25A01A;   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JFAK[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CountUsedInDataStructOnly_58_6F56E75A466B0D4270F08EAA53085B4A; // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ExamineRotationUsedInDataStructOnly_74_E236769542CB2D29F75071877DC01E81; // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
