// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPI_Spawn_AI_Interface.BPI_Spawn_AI_Interface_C.StartRespawnEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EnemyLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Spawn_AI_Interface_C::StartRespawnEnemies(int EnemyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Spawn_AI_Interface.BPI_Spawn_AI_Interface_C.StartRespawnEnemies");

	UBPI_Spawn_AI_Interface_C_StartRespawnEnemies_Params params;
	params.EnemyLevel = EnemyLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
