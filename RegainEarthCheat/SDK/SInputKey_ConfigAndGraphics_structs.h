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

// UserDefinedStruct SInputKey_ConfigAndGraphics.SInputKey_ConfigAndGraphics
// 0x0078
struct FSInputKey_ConfigAndGraphics
{
	struct FKey                                        Key_7_0FF416554953C4F703278199E45EED46;                    // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               IsAxis_37_A7495F8A481DED3B27E43FB087934EAA;                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsDissableAxisAutoAssign_40_A67F51694502DE89F5A6069AEE22A51E; // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A2R7[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultAxisScale_44_A2129A364D23B8B864588A802D932AA6;      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUseIcon_16_2191FB2F42EC956B4B977A9D34110AE2;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LAKI[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          Icon_21_79502BCB436044E97704359A3BF8EB82;                  // 0x0028(0x0010) (Edit, BlueprintVisible)
	bool                                               IsUseName_18_F3DE32264380420A439035B326ECB2D2;             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YQGS[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       KeyName_13_D38A297D4D9C6DD86D39D6A66BAD0DC6;               // 0x0040(0x0018) (Edit, BlueprintVisible)
	bool                                               IsHaveAxisAnalog_31_1BCA425A433181F262F4319CBF4425A3;      // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MJUX[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        AxisAnalog_28_434AE98F4F3B6D1A45137C8DFB780AA5;            // 0x0060(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
