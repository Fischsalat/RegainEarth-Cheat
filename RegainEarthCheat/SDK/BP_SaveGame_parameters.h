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
// Parameters
//---------------------------------------------------------------------------

// Function BP_SaveGame.BP_SaveGame_C.FSetPlayerLevel
struct UBP_SaveGame_C_FSetPlayerLevel_Params
{
	int                                                PlayerLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SaveGame.BP_SaveGame_C.FSetPlayerScore
struct UBP_SaveGame_C_FSetPlayerScore_Params
{
	int                                                PlayerScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SaveGame.BP_SaveGame_C.FSetPlayerName
struct UBP_SaveGame_C_FSetPlayerName_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
