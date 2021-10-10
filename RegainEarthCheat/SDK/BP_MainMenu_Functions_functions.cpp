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

// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetManuallyResolutionEnabled
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEnableSetResolutionManually   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MainMenu_Functions_C::STATIC_GetManuallyResolutionEnabled(class UObject* __WorldContext, bool* bEnableSetResolutionManually)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetManuallyResolutionEnabled");

	UBP_MainMenu_Functions_C_GetManuallyResolutionEnabled_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bEnableSetResolutionManually != nullptr)
		*bEnableSetResolutionManually = params.bEnableSetResolutionManually;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetupParameters
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_SetupParameters(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetupParameters");

	UBP_MainMenu_Functions_C_SetupParameters_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.DestroyCaptureCharacter
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_DestroyCaptureCharacter(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.DestroyCaptureCharacter");

	UBP_MainMenu_Functions_C_DestroyCaptureCharacter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.IsCaptureCharacterExisting
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_MainMenu_Functions_C::STATIC_IsCaptureCharacterExisting(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.IsCaptureCharacterExisting");

	UBP_MainMenu_Functions_C_IsCaptureCharacterExisting_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_PauseMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PauseMenu_C*         WB_PauseMenu                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_Get_WB_PauseMenu(class UObject* __WorldContext, class UWB_PauseMenu_C** WB_PauseMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_PauseMenu");

	UBP_MainMenu_Functions_C_Get_WB_PauseMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WB_PauseMenu != nullptr)
		*WB_PauseMenu = params.WB_PauseMenu;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnCancelRequest
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_UnbindOnCancelRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnCancelRequest");

	UBP_MainMenu_Functions_C_UnbindOnCancelRequest_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnConfirmRequest
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_UnbindOnConfirmRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnConfirmRequest");

	UBP_MainMenu_Functions_C_UnbindOnConfirmRequest_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.RemoveRequest
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_RemoveRequest(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.RemoveRequest");

	UBP_MainMenu_Functions_C_RemoveRequest_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnCancelRequest
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_BindOnCancelRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnCancelRequest");

	UBP_MainMenu_Functions_C_BindOnCancelRequest_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnConfirmRequest
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_BindOnConfirmRequest(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnConfirmRequest");

	UBP_MainMenu_Functions_C_BindOnConfirmRequest_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.CreateRequest
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowOnlyOkButton              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bUseCancelCountdown            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   HeadText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MessageText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_MainMenu_Functions_C::STATIC_CreateRequest(bool bShowOnlyOkButton, bool bUseCancelCountdown, const struct FText& HeadText, const struct FText& MessageText, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.CreateRequest");

	UBP_MainMenu_Functions_C_CreateRequest_Params params;
	params.bShowOnlyOkButton = bShowOnlyOkButton;
	params.bUseCancelCountdown = bUseCancelCountdown;
	params.HeadText = HeadText;
	params.MessageText = MessageText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyKeybindingButtonFocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasFocus                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MainMenu_Functions_C::STATIC_HasAnyKeybindingButtonFocus(class UObject* __WorldContext, bool* HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyKeybindingButtonFocus");

	UBP_MainMenu_Functions_C_HasAnyKeybindingButtonFocus_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyProgressButtonFocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasFocus                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MainMenu_Functions_C::STATIC_HasAnyProgressButtonFocus(class UObject* __WorldContext, bool* HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyProgressButtonFocus");

	UBP_MainMenu_Functions_C_HasAnyProgressButtonFocus_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyButtonFocus
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasFocus                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MainMenu_Functions_C::STATIC_HasAnyButtonFocus(class UObject* __WorldContext, bool* HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyButtonFocus");

	UBP_MainMenu_Functions_C_HasAnyButtonFocus_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_MainMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ProMainMenu_C*       WB_ProMainMenu                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_Get_WB_MainMenu(class UObject* __WorldContext, class UWB_ProMainMenu_C** WB_ProMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_MainMenu");

	UBP_MainMenu_Functions_C_Get_WB_MainMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WB_ProMainMenu != nullptr)
		*WB_ProMainMenu = params.WB_ProMainMenu;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_HUD_MainMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HUD_MainMenu_C*      AsHUD_Main_Menu                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_Get_HUD_MainMenu(class UObject* __WorldContext, class ABP_HUD_MainMenu_C** AsHUD_Main_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_HUD_MainMenu");

	UBP_MainMenu_Functions_C_Get_HUD_MainMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsHUD_Main_Menu != nullptr)
		*AsHUD_Main_Menu = params.AsHUD_Main_Menu;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PC_MainMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_MainMenu_C* AsPC_Main_Menu                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_Get_PC_MainMenu(class UObject* __WorldContext, class ABP_PlayerController_MainMenu_C** AsPC_Main_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PC_MainMenu");

	UBP_MainMenu_Functions_C_Get_PC_MainMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPC_Main_Menu != nullptr)
		*AsPC_Main_Menu = params.AsPC_Main_Menu;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_GM_MainMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GM_MainMenu_C*       AsGM_Main_Menu                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_Get_GM_MainMenu(class UObject* __WorldContext, class ABP_GM_MainMenu_C** AsGM_Main_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_GM_MainMenu");

	UBP_MainMenu_Functions_C_Get_GM_MainMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGM_Main_Menu != nullptr)
		*AsGM_Main_Menu = params.AsGM_Main_Menu;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HandleResponsiveHovering
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResponsiveHovering            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_NativeButton_C*      ButtonToFocus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HandleResponsiveHovering");

	UBP_MainMenu_Functions_C_HandleResponsiveHovering_Params params;
	params.bResponsiveHovering = bResponsiveHovering;
	params.ButtonToFocus = ButtonToFocus;
	params.OwningPlayer = OwningPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnhoverAllNativeButtons
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_NativeButton_C*      Exception                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnhoverAllNativeButtons");

	UBP_MainMenu_Functions_C_UnhoverAllNativeButtons_Params params;
	params.Exception = Exception;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetPC_InputDetect
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PC_InputDetect_C*    AsPC_Input_Detect              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetPC_InputDetect");

	UBP_MainMenu_Functions_C_GetPC_InputDetect_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPC_Input_Detect != nullptr)
		*AsPC_Input_Detect = params.AsPC_Input_Detect;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetRightInputType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    LastPressed_Key                (Parm, OutParm, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetRightInputType");

	UBP_MainMenu_Functions_C_SetRightInputType_Params params;
	params.InputKey = InputKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastPressed_Key != nullptr)
		*LastPressed_Key = params.LastPressed_Key;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.FindInputType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    LastPressed_Key                (Parm, OutParm, HasGetValueTypeHash)
// TEnumAsByte<EInputType_EInputType> InputType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, TEnumAsByte<EInputType_EInputType>* InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.FindInputType");

	UBP_MainMenu_Functions_C_FindInputType_Params params;
	params.InputKey = InputKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastPressed_Key != nullptr)
		*LastPressed_Key = params.LastPressed_Key;
	if (InputType != nullptr)
		*InputType = params.InputType;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetVRControllerKeys
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>            Oculus_VR_Keys                 (Parm, OutParm)
void UBP_MainMenu_Functions_C::STATIC_GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetVRControllerKeys");

	UBP_MainMenu_Functions_C_GetVRControllerKeys_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Oculus_VR_Keys != nullptr)
		*Oculus_VR_Keys = params.Oculus_VR_Keys;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetMouseKeys
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>            MouseKeys                      (Parm, OutParm)
void UBP_MainMenu_Functions_C::STATIC_GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetMouseKeys");

	UBP_MainMenu_Functions_C_GetMouseKeys_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseKeys != nullptr)
		*MouseKeys = params.MouseKeys;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetKeyboardKeys
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>            KeyboardKeys                   (Parm, OutParm)
void UBP_MainMenu_Functions_C::STATIC_GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetKeyboardKeys");

	UBP_MainMenu_Functions_C_GetKeyboardKeys_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeyboardKeys != nullptr)
		*KeyboardKeys = params.KeyboardKeys;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetGamepadKeys
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>            GamepadKeys                    (Parm, OutParm)
void UBP_MainMenu_Functions_C::STATIC_GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetGamepadKeys");

	UBP_MainMenu_Functions_C_GetGamepadKeys_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GamepadKeys != nullptr)
		*GamepadKeys = params.GamepadKeys;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetShowMouse
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bShowMouse                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MainMenu_Functions_C::STATIC_GetShowMouse(class UObject* __WorldContext, bool* bShowMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetShowMouse");

	UBP_MainMenu_Functions_C_GetShowMouse_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShowMouse != nullptr)
		*bShowMouse = params.bShowMouse;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetShowMouse
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowMouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_SetShowMouse(bool bShowMouse, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetShowMouse");

	UBP_MainMenu_Functions_C_SetShowMouse_Params params;
	params.bShowMouse = bShowMouse;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnInputTypeSwitched
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_UnbindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnInputTypeSwitched");

	UBP_MainMenu_Functions_C_UnbindOnInputTypeSwitched_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnInputTypeSwitched
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_BindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnInputTypeSwitched");

	UBP_MainMenu_Functions_C_BindOnInputTypeSwitched_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetInputType
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_SetInputType(TEnumAsByte<EInputType_EInputType> InputType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetInputType");

	UBP_MainMenu_Functions_C_SetInputType_Params params;
	params.InputType = InputType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetInputType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EInputType_EInputType> InputType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_GetInputType(class UObject* __WorldContext, TEnumAsByte<EInputType_EInputType>* InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetInputType");

	UBP_MainMenu_Functions_C_GetInputType_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputType != nullptr)
		*InputType = params.InputType;

}


// Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PMM_Instance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Instance_C*      AsPMM_Instance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_Functions_C::STATIC_Get_PMM_Instance(class UObject* __WorldContext, class UBP_PMM_Instance_C** AsPMM_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PMM_Instance");

	UBP_MainMenu_Functions_C_Get_PMM_Instance_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPMM_Instance != nullptr)
		*AsPMM_Instance = params.AsPMM_Instance;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
