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

// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.CheckIsKeyInUse
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsReserved                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   MappingName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Keybinding_Functions_C::STATIC_CheckIsKeyInUse(const struct FKey& Key, class UObject* __WorldContext, bool* IsReserved, struct FName* MappingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.CheckIsKeyInUse");

	UBP_Keybinding_Functions_C_CheckIsKeyInUse_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReserved != nullptr)
		*IsReserved = params.IsReserved;
	if (MappingName != nullptr)
		*MappingName = params.MappingName;

}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingKeyboardKeyByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FKey                    Key                            (Parm, OutParm, HasGetValueTypeHash)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Keybinding_Functions_C::STATIC_FindAxisMappingKeyboardKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingKeyboardKeyByName");

	UBP_Keybinding_Functions_C_FindAxisMappingKeyboardKeyByName_Params params;
	params.ItemToFind = ItemToFind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Scale != nullptr)
		*Scale = params.Scale;


	return params.ReturnValue;
}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingGamepadKeyByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FKey                    Key                            (Parm, OutParm, HasGetValueTypeHash)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UBP_Keybinding_Functions_C::STATIC_FindAxisMappingGamepadKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingGamepadKeyByName");

	UBP_Keybinding_Functions_C_FindAxisMappingGamepadKeyByName_Params params;
	params.ItemToFind = ItemToFind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Scale != nullptr)
		*Scale = params.Scale;


	return params.ReturnValue;
}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingKeyboardKeyByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FKey                    Key                            (Parm, OutParm, HasGetValueTypeHash)
bool UBP_Keybinding_Functions_C::STATIC_FindActionMappingKeyboardKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingKeyboardKeyByName");

	UBP_Keybinding_Functions_C_FindActionMappingKeyboardKeyByName_Params params;
	params.ItemToFind = ItemToFind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingGamepadKeyByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FKey                    Key                            (Parm, OutParm, HasGetValueTypeHash)
bool UBP_Keybinding_Functions_C::STATIC_FindActionMappingGamepadKeyByName(const struct FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingGamepadKeyByName");

	UBP_Keybinding_Functions_C_FindActionMappingGamepadKeyByName_Params params;
	params.ItemToFind = ItemToFind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsMouseKey
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsMouseKey                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Keybinding_Functions_C::STATIC_IsMouseKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsMouseKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsMouseKey");

	UBP_Keybinding_Functions_C_IsMouseKey_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsMouseKey != nullptr)
		*bIsMouseKey = params.bIsMouseKey;

}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsKeyboardKey
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsKeyboardKey                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Keybinding_Functions_C::STATIC_IsKeyboardKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsKeyboardKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsKeyboardKey");

	UBP_Keybinding_Functions_C_IsKeyboardKey_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsKeyboardKey != nullptr)
		*bIsKeyboardKey = params.bIsKeyboardKey;

}


// Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsGamepadKey
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsGamepadKey                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Keybinding_Functions_C::STATIC_IsGamepadKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsGamepadKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsGamepadKey");

	UBP_Keybinding_Functions_C_IsGamepadKey_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsGamepadKey != nullptr)
		*bIsGamepadKey = params.bIsGamepadKey;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
