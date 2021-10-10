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

// Function W_KeysButton.W_KeysButton_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeysButton_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.SetCustomFocus");

	UW_KeysButton_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_KeysButton.W_KeysButton_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_KeysButton_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnMouseMove");

	UW_KeysButton_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_KeysButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnKeyDown");

	UW_KeysButton_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_KeysButton_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnKeyUp");

	UW_KeysButton_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.FindAxisKeyMapping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSInputKey_ConfigAndGraphics SInputKey                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FKey>            ReturnValue                    (Parm, OutParm, ReturnParm)
TArray<struct FKey> UW_KeysButton_C::FindAxisKeyMapping(const struct FSInputKey_ConfigAndGraphics& SInputKey, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.FindAxisKeyMapping");

	UW_KeysButton_C_FindAxisKeyMapping_Params params;
	params.SInputKey = SInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.Add New Action Mapping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSInputKey_ConfigAndGraphics KeyConfigAndGraphics           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int                            KeyIconColumn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::Add_New_Action_Mapping(struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics, int KeyIconColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Add New Action Mapping");

	UW_KeysButton_C_Add_New_Action_Mapping_Params params;
	params.KeyIconColumn = KeyIconColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeyConfigAndGraphics != nullptr)
		*KeyConfigAndGraphics = params.KeyConfigAndGraphics;

}


// Function W_KeysButton.W_KeysButton_C.AddNewAxisMapping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSInputKey_ConfigAndGraphics KeyConfigAndGraphics           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int                            KeyIconColumn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::AddNewAxisMapping(struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics, int KeyIconColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.AddNewAxisMapping");

	UW_KeysButton_C_AddNewAxisMapping_Params params;
	params.KeyIconColumn = KeyIconColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeyConfigAndGraphics != nullptr)
		*KeyConfigAndGraphics = params.KeyConfigAndGraphics;

}


// Function W_KeysButton.W_KeysButton_C.SetSelectKeyMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelectKeyMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeysButton_C::SetSelectKeyMode(bool IsSelectKeyMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.SetSelectKeyMode");

	UW_KeysButton_C_SetSelectKeyMode_Params params;
	params.IsSelectKeyMode = IsSelectKeyMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.SetNewTexture&Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            KeyIconColumn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::SetNewTexture_Text(const struct FKey& Key, class UTexture* Texture, const struct FText& Text, int KeyIconColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.SetNewTexture&Text");

	UW_KeysButton_C_SetNewTexture_Text_Params params;
	params.Key = Key;
	params.Texture = Texture;
	params.Text = Text;
	params.KeyIconColumn = KeyIconColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_KeysButton_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnMouseWheel");

	UW_KeysButton_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_KeysButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnMouseButtonDown");

	UW_KeysButton_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.CreateDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)
void UW_KeysButton_C::CreateDynamicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.CreateDynamicMaterials");

	UW_KeysButton_C_CreateDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.IsActionContains
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InActionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeysButton_C::IsActionContains(const struct FName& InActionName, const struct FKey& Key, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.IsActionContains");

	UW_KeysButton_C_IsActionContains_Params params;
	params.InActionName = InActionName;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_KeysButton.W_KeysButton_C.IsAxisContains
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InAxisName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeysButton_C::IsAxisContains(const struct FName& InAxisName, const struct FKey& Key, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.IsAxisContains");

	UW_KeysButton_C_IsAxisContains_Params params;
	params.InAxisName = InAxisName;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_KeysButton.W_KeysButton_C.Remove Input Key Action Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGamePad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            KeyIconColumn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::Remove_Input_Key_Action_Mapping(bool IsGamePad, int KeyIconColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Remove Input Key Action Mapping");

	UW_KeysButton_C_Remove_Input_Key_Action_Mapping_Params params;
	params.IsGamePad = IsGamePad;
	params.KeyIconColumn = KeyIconColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.Set New Key In Input Key Parent Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            KeyIconColumn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::Set_New_Key_In_Input_Key_Parent_Widget(const struct FKey& Key, int KeyIconColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Set New Key In Input Key Parent Widget");

	UW_KeysButton_C_Set_New_Key_In_Input_Key_Parent_Widget_Params params;
	params.Key = Key;
	params.KeyIconColumn = KeyIconColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.Find Equal Keys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSInputKey_ConfigAndGraphics SInputKey                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            KeyIconColumn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::Find_Equal_Keys(const struct FSInputKey_ConfigAndGraphics& SInputKey, int KeyIconColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Find Equal Keys");

	UW_KeysButton_C_Find_Equal_Keys_Params params;
	params.SInputKey = SInputKey;
	params.KeyIconColumn = KeyIconColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.Get Input Key Config and Graphics
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSInputKey_ConfigAndGraphics KeyConfigAndGraphics           (Parm, OutParm, HasGetValueTypeHash)
void UW_KeysButton_C::Get_Input_Key_Config_and_Graphics(const struct FKey& NewKey, bool* IsSuccess, struct FSInputKey_ConfigAndGraphics* KeyConfigAndGraphics)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Get Input Key Config and Graphics");

	UW_KeysButton_C_Get_Input_Key_Config_and_Graphics_Params params;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (KeyConfigAndGraphics != nullptr)
		*KeyConfigAndGraphics = params.KeyConfigAndGraphics;

}


// Function W_KeysButton.W_KeysButton_C.FindKeyInput
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSInputKey_ConfigAndGraphics ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
struct FSInputKey_ConfigAndGraphics UW_KeysButton_C::FindKeyInput(const struct FKey& Key, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.FindKeyInput");

	UW_KeysButton_C_FindKeyInput_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;


	return params.ReturnValue;
}


// Function W_KeysButton.W_KeysButton_C.SetHovered
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeysButton_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.SetHovered");

	UW_KeysButton_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_KeysButton.W_KeysButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Tick");

	UW_KeysButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UW_KeysButton_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Cancel");

	UW_KeysButton_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_KeysButton_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Accept");

	UW_KeysButton_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.SetNewInputKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsFindEquals                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsBindKeys                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            KeyColumn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::SetNewInputKey(const struct FKey& Key, bool IsFindEquals, bool IsBindKeys, int KeyColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.SetNewInputKey");

	UW_KeysButton_C_SetNewInputKey_Params params;
	params.Key = Key;
	params.IsFindEquals = IsFindEquals;
	params.IsBindKeys = IsBindKeys;
	params.KeyColumn = KeyColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_KeysButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.Construct");

	UW_KeysButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.RestoreValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_InputKeys    Setting_InputKey               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsBindKeys                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_KeysButton_C::RestoreValues(const struct FSSettings_InputKeys& Setting_InputKey, bool IsBindKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.RestoreValues");

	UW_KeysButton_C_RestoreValues_Params params;
	params.Setting_InputKey = Setting_InputKey;
	params.IsBindKeys = IsBindKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UW_KeysButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UW_KeysButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.ExecuteUbergraph_W_KeysButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KeysButton_C::ExecuteUbergraph_W_KeysButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.ExecuteUbergraph_W_KeysButton");

	UW_KeysButton_C_ExecuteUbergraph_W_KeysButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.OnSelectInputKeyStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_KeysButton_C::OnSelectInputKeyStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnSelectInputKeyStarted__DelegateSignature");

	UW_KeysButton_C_OnSelectInputKeyStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_KeysButton.W_KeysButton_C.OnChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSSettings_InputKeys    NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_KeysButton_C::OnChangeValue__DelegateSignature(const struct FSSettings_InputKeys& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_KeysButton.W_KeysButton_C.OnChangeValue__DelegateSignature");

	UW_KeysButton_C_OnChangeValue__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
