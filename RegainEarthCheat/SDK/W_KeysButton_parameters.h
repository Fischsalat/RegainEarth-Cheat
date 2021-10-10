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

// Function W_KeysButton.W_KeysButton_C.SetCustomFocus
struct UW_KeysButton_C_SetCustomFocus_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_KeysButton.W_KeysButton_C.OnMouseMove
struct UW_KeysButton_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeysButton.W_KeysButton_C.OnKeyDown
struct UW_KeysButton_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeysButton.W_KeysButton_C.OnKeyUp
struct UW_KeysButton_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeysButton.W_KeysButton_C.FindAxisKeyMapping
struct UW_KeysButton_C_FindAxisKeyMapping_Params
{
	struct FSInputKey_ConfigAndGraphics                SInputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FKey>                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeysButton.W_KeysButton_C.Add New Action Mapping
struct UW_KeysButton_C_Add_New_Action_Mapping_Params
{
	struct FSInputKey_ConfigAndGraphics                KeyConfigAndGraphics;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                KeyIconColumn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.AddNewAxisMapping
struct UW_KeysButton_C_AddNewAxisMapping_Params
{
	struct FSInputKey_ConfigAndGraphics                KeyConfigAndGraphics;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                KeyIconColumn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.SetSelectKeyMode
struct UW_KeysButton_C_SetSelectKeyMode_Params
{
	bool                                               IsSelectKeyMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_KeysButton.W_KeysButton_C.SetNewTexture&Text
struct UW_KeysButton_C_SetNewTexture_Text_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTexture*                                    Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                KeyIconColumn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.OnMouseWheel
struct UW_KeysButton_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeysButton.W_KeysButton_C.OnMouseButtonDown
struct UW_KeysButton_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_KeysButton.W_KeysButton_C.CreateDynamicMaterials
struct UW_KeysButton_C_CreateDynamicMaterials_Params
{
};

// Function W_KeysButton.W_KeysButton_C.IsActionContains
struct UW_KeysButton_C_IsActionContains_Params
{
	struct FName                                       InActionName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_KeysButton.W_KeysButton_C.IsAxisContains
struct UW_KeysButton_C_IsAxisContains_Params
{
	struct FName                                       InAxisName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_KeysButton.W_KeysButton_C.Remove Input Key Action Mapping
struct UW_KeysButton_C_Remove_Input_Key_Action_Mapping_Params
{
	bool                                               IsGamePad;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                KeyIconColumn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.Set New Key In Input Key Parent Widget
struct UW_KeysButton_C_Set_New_Key_In_Input_Key_Parent_Widget_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                KeyIconColumn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.Find Equal Keys
struct UW_KeysButton_C_Find_Equal_Keys_Params
{
	struct FSInputKey_ConfigAndGraphics                SInputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                KeyIconColumn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.Get Input Key Config and Graphics
struct UW_KeysButton_C_Get_Input_Key_Config_and_Graphics_Params
{
	struct FKey                                        NewKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSInputKey_ConfigAndGraphics                KeyConfigAndGraphics;                                      // (Parm, OutParm, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.FindKeyInput
struct UW_KeysButton_C_FindKeyInput_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSInputKey_ConfigAndGraphics                ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.SetHovered
struct UW_KeysButton_C_SetHovered_Params
{
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_KeysButton.W_KeysButton_C.Tick
struct UW_KeysButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.Cancel
struct UW_KeysButton_C_Cancel_Params
{
};

// Function W_KeysButton.W_KeysButton_C.Accept
struct UW_KeysButton_C_Accept_Params
{
};

// Function W_KeysButton.W_KeysButton_C.SetNewInputKey
struct UW_KeysButton_C_SetNewInputKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsFindEquals;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsBindKeys;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                KeyColumn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.Construct
struct UW_KeysButton_C_Construct_Params
{
};

// Function W_KeysButton.W_KeysButton_C.RestoreValues
struct UW_KeysButton_C_RestoreValues_Params
{
	struct FSSettings_InputKeys                        Setting_InputKey;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsBindKeys;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_KeysButton.W_KeysButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UW_KeysButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function W_KeysButton.W_KeysButton_C.ExecuteUbergraph_W_KeysButton
struct UW_KeysButton_C_ExecuteUbergraph_W_KeysButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KeysButton.W_KeysButton_C.OnSelectInputKeyStarted__DelegateSignature
struct UW_KeysButton_C_OnSelectInputKeyStarted__DelegateSignature_Params
{
};

// Function W_KeysButton.W_KeysButton_C.OnChangeValue__DelegateSignature
struct UW_KeysButton_C_OnChangeValue__DelegateSignature_Params
{
	struct FSSettings_InputKeys                        NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
