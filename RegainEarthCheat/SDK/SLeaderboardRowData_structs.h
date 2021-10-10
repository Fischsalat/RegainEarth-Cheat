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

// UserDefinedStruct SLeaderboardRowData.SLeaderboardRowData
// 0x0038
struct FSLeaderboardRowData
{
	struct FSteamID                                    SteamID_26_68C578BE4E3B2C005EAC2E8FA477BD3A;               // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int                                                Position_2_755F26434AB95720A6FD14BEBBE81272;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WH0C[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Avatar_5_A72122D2418EAA949812C9BC479BE9C4;                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Playername_9_29FDE66A416D7D752FA324BBC46A1DD6;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score_11_ECE3870E4516A7929048C48FF9B69F75;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsControlledPlayer__17_185DE82D4AF4A8DD8E619FBD451F3806;   // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLocalPlayerWithPlayerStateRef__16_B1D653C547C6D13798F1FC9462D0BCB2; // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7SRY[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerState*                                OptionalPlayerStateRef_27_A5A14B3440E456BDE8EC598A84614E41; // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
