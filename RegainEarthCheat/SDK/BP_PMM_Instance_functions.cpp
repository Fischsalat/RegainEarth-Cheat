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

// Function BP_PMM_Instance.BP_PMM_Instance_C.FindGradations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            In_Color                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            _01                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            _02                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            _03                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            _04                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PMM_Instance_C::FindGradations(const struct FLinearColor& In_Color, struct FLinearColor* _01, struct FLinearColor* _02, struct FLinearColor* _03, struct FLinearColor* _04)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.FindGradations");

	UBP_PMM_Instance_C_FindGradations_Params params;
	params.In_Color = In_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_01 != nullptr)
		*_01 = params._01;
	if (_02 != nullptr)
		*_02 = params._02;
	if (_03 != nullptr)
		*_03 = params._03;
	if (_04 != nullptr)
		*_04 = params._04;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.FindPawnOrCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*              AsCharacter                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   AsPawn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PMM_Instance_C::FindPawnOrCharacter(class UObject* Object, class ACharacter** AsCharacter, class APawn** AsPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.FindPawnOrCharacter");

	UBP_PMM_Instance_C_FindPawnOrCharacter_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCharacter != nullptr)
		*AsCharacter = params.AsCharacter;
	if (AsPawn != nullptr)
		*AsPawn = params.AsPawn;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.SetShowMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowMouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PMM_Instance_C::SetShowMouse(bool bShowMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.SetShowMouse");

	UBP_PMM_Instance_C_SetShowMouse_Params params;
	params.bShowMouse = bShowMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.SetInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PMM_Instance_C::SetInputType(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.SetInputType");

	UBP_PMM_Instance_C_SetInputType_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UBP_PMM_Instance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.ReceiveInit");

	UBP_PMM_Instance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ETravelFailure> FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PMM_Instance_C::HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.HandleTravelError");

	UBP_PMM_Instance_C_HandleTravelError_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_ENetworkFailure> FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsServer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PMM_Instance_C::HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.HandleNetworkError");

	UBP_PMM_Instance_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.HandlePauseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Player_Character_or_Pawn       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Set_Game_Paused                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PMM_Instance_C::HandlePauseMenu(class UObject* Player_Character_or_Pawn, bool Set_Game_Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.HandlePauseMenu");

	UBP_PMM_Instance_C_HandlePauseMenu_Params params;
	params.Player_Character_or_Pawn = Player_Character_or_Pawn;
	params.Set_Game_Paused = Set_Game_Paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateBaseColor
// (BlueprintCallable, BlueprintEvent)
void UBP_PMM_Instance_C::UpdateBaseColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateBaseColor");

	UBP_PMM_Instance_C_UpdateBaseColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateButtonSounds
// (BlueprintCallable, BlueprintEvent)
void UBP_PMM_Instance_C::UpdateButtonSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateButtonSounds");

	UBP_PMM_Instance_C_UpdateButtonSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.ExecuteUbergraph_BP_PMM_Instance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PMM_Instance_C::ExecuteUbergraph_BP_PMM_Instance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.ExecuteUbergraph_BP_PMM_Instance");

	UBP_PMM_Instance_C_ExecuteUbergraph_BP_PMM_Instance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateInputType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PMM_Instance_C::UpdateInputType__DelegateSignature(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateInputType__DelegateSignature");

	UBP_PMM_Instance_C_UpdateInputType__DelegateSignature_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
