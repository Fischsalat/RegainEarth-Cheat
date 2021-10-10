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

// BlueprintGeneratedClass EQS_TargetFromBB_EnvQueryContext.EQS_TargetFromBB_EnvQueryContext_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEQS_TargetFromBB_EnvQueryContext_C : public UEnvQueryContext_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQS_TargetFromBB_EnvQueryContext.EQS_TargetFromBB_EnvQueryContext_C");
		return ptr;
	}



	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
