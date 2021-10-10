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

// Function BP_PMM_Instance.BP_PMM_Instance_C.FindGradations
struct UBP_PMM_Instance_C_FindGradations_Params
{
	struct FLinearColor                                In_Color;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                _01;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                _02;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                _03;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                _04;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.FindPawnOrCharacter
struct UBP_PMM_Instance_C_FindPawnOrCharacter_Params
{
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                                  AsCharacter;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       AsPawn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.SetShowMouse
struct UBP_PMM_Instance_C_SetShowMouse_Params
{
	bool                                               bShowMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.SetInputType
struct UBP_PMM_Instance_C_SetInputType_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.ReceiveInit
struct UBP_PMM_Instance_C_ReceiveInit_Params
{
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.HandleTravelError
struct UBP_PMM_Instance_C_HandleTravelError_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.HandleNetworkError
struct UBP_PMM_Instance_C_HandleNetworkError_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.HandlePauseMenu
struct UBP_PMM_Instance_C_HandlePauseMenu_Params
{
	class UObject*                                     Player_Character_or_Pawn;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Set_Game_Paused;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateBaseColor
struct UBP_PMM_Instance_C_UpdateBaseColor_Params
{
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateButtonSounds
struct UBP_PMM_Instance_C_UpdateButtonSounds_Params
{
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.ExecuteUbergraph_BP_PMM_Instance
struct UBP_PMM_Instance_C_ExecuteUbergraph_BP_PMM_Instance_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateInputType__DelegateSignature
struct UBP_PMM_Instance_C_UpdateInputType__DelegateSignature_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
