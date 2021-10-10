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

// Function W_InGameMenu.W_InGameMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_InGameMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.OnMouseButtonDown");

	UW_InGameMenu_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_InGameMenu.W_InGameMenu_C.SetActiveFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ParentWidget_C*       ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::SetActiveFrame(class UW_ParentWidget_C* ActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.SetActiveFrame");

	UW_InGameMenu_C_SetActiveFrame_Params params;
	params.ActiveWidget = ActiveWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_DisplayFrame_K2Node_ComponentBoundEvent_15_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_SoundFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_BrightnessFrame_K2Node_ComponentBoundEvent_29_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_KeysFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_ControlsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_InGameFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.SetVisibilityMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InGameMenu_C::SetVisibilityMenu(bool IsVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.SetVisibilityMenu");

	UW_InGameMenu_C_SetVisibilityMenu_Params params;
	params.IsVisibility = IsVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.Tick");

	UW_InGameMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_SettingsFrame_K2Node_ComponentBoundEvent_8_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_ScreenFrame_K2Node_ComponentBoundEvent_7_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.SentButtonPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::SentButtonPress(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.SentButtonPress");

	UW_InGameMenu_C_SentButtonPress_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_LeaderboardFrame_K2Node_ComponentBoundEvent_0_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_LeaderboardFrameRunningGameStats_K2Node_ComponentBoundEvent_2_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_GameplayFrame_K2Node_ComponentBoundEvent_3_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_InGameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.Construct");

	UW_InGameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature");

	UW_InGameMenu_C_BndEvt__W_Setting_PlayerSettingsFrame_K2Node_ComponentBoundEvent_4_OnPressedButtons__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.ExecuteUbergraph_W_InGameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InGameMenu_C::ExecuteUbergraph_W_InGameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.ExecuteUbergraph_W_InGameMenu");

	UW_InGameMenu_C_ExecuteUbergraph_W_InGameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InGameMenu.W_InGameMenu_C.OnResume__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_InGameMenu_C::OnResume__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InGameMenu.W_InGameMenu_C.OnResume__DelegateSignature");

	UW_InGameMenu_C_OnResume__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
