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

// BlueprintGeneratedClass BPI_HookAction.BPI_HookAction_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_HookAction_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HookAction.BPI_HookAction_C");
		return ptr;
	}



	void LadleOpen(bool Enable);
	void LadleClose(bool Enable);
	void UnhookAction();
	void HookAction();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
