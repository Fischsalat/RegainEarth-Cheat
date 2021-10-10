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

// Function BPI_Explodable.BPI_Explodable_C.OptionalInterfaceCreateSphereCollisionForDebugginOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*        CreatedSphere                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Explodable_C::OptionalInterfaceCreateSphereCollisionForDebugginOn(class USphereComponent** CreatedSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Explodable.BPI_Explodable_C.OptionalInterfaceCreateSphereCollisionForDebugginOn");

	UBPI_Explodable_C_OptionalInterfaceCreateSphereCollisionForDebugginOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedSphere != nullptr)
		*CreatedSphere = params.CreatedSphere;

}


// Function BPI_Explodable.BPI_Explodable_C.GetExplodableComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ExplodableComponent_C* ExplodableCompRef              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Explodable_C::GetExplodableComponent(class UBP_ExplodableComponent_C** ExplodableCompRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Explodable.BPI_Explodable_C.GetExplodableComponent");

	UBPI_Explodable_C_GetExplodableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExplodableCompRef != nullptr)
		*ExplodableCompRef = params.ExplodableCompRef;

}


// Function BPI_Explodable.BPI_Explodable_C.GetAudioComponentForVentFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Explodable_C::GetAudioComponentForVentFireSound(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Explodable.BPI_Explodable_C.GetAudioComponentForVentFireSound");

	UBPI_Explodable_C_GetAudioComponentForVentFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;

}


// Function BPI_Explodable.BPI_Explodable_C.FireRadialImpulse
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Explodable_C::FireRadialImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Explodable.BPI_Explodable_C.FireRadialImpulse");

	UBPI_Explodable_C_FireRadialImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Explodable.BPI_Explodable_C.GetPiercedFireDirectionOfOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*         ArrowDirection                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Explodable_C::GetPiercedFireDirectionOfOwner(class UArrowComponent** ArrowDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Explodable.BPI_Explodable_C.GetPiercedFireDirectionOfOwner");

	UBPI_Explodable_C_GetPiercedFireDirectionOfOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrowDirection != nullptr)
		*ArrowDirection = params.ArrowDirection;

}


// Function BPI_Explodable.BPI_Explodable_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Explodable_C::GetMesh(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Explodable.BPI_Explodable_C.GetMesh");

	UBPI_Explodable_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
