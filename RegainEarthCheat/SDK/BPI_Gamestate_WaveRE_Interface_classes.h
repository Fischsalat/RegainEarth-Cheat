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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Gamestate_WaveRE_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Gamestate_WaveRE_Interface.BPI_Gamestate_WaveRE_Interface_C");
		return ptr;
	}



	void UpdateTeamScoreBySumPlayerScores();
	void GetSteamIDPlayerArrayAsSteamIdObject(TArray<struct FSteamID>* SteamIdArray);
	void AddSteamIdToPlayerSteamIdList(const struct FString& NewSteamId);
	void GetTeamScore(int* Score);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
