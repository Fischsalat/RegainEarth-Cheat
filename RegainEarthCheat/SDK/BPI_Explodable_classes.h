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

// BlueprintGeneratedClass BPI_Explodable.BPI_Explodable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Explodable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Explodable.BPI_Explodable_C");
		return ptr;
	}



	void OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere);
	void GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef);
	void GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent);
	void FireRadialImpulse();
	void GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection);
	void GetMesh(class UMeshComponent** Mesh);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
